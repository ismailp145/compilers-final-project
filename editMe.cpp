#include "headers.h"

//  PURPOSE:  To do those checks that can be done at compile time given
//	compile context 'context'.  If 'valueType' is set to the
//	'value_ty' value corresponding return type that '*this' node has
//	when computed.  If the specific instance is known then
//	'returnObjOrClass' is set to that instance and
//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the
//	class is known then 'returnObjOrClass' is set to that class and
//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
void LogicOperationParseTreeNode::compileTimeCheck(CompileContext &context,
												   value_ty &valueType,
												   Identity &returnObjOrClass,
												   instanceOrClass_ty &returnGenerality)
{
	//  I.  Application validity check:

	//  II.  Check '*this' node:
	//  II.A.  Check first node:
	value_ty firstValType;
	Identity firstObjOrClass;
	instanceOrClass_ty firstGenerality;

	getFirstArgPtr()->compileTimeCheck(context,
									   firstValType,
									   firstObjOrClass,
									   firstGenerality);

	if (firstValType != boolean_vt)
	{
		shouldDoRuntimeTypeChecking_ = true;

		if ((firstValType != concept_vt) &&
			(firstValType != idea_vt))
		{
			fprintf(stderr, "FncArgDomainMismatchException");
			exit(EXIT_FAILURE);
		}
	}

	//  II.B.  Check second node:
	Identity secondObjOrClass;
	value_ty secondValType = null_vt;
	instanceOrClass_ty secondGenerality = NOT_IN_KB_IORC;

	if (getSecondArgPtr() != nullptr)
	{
		getSecondArgPtr()->compileTimeCheck(context,
											secondValType,
											secondObjOrClass,
											secondGenerality);

		if (secondValType != boolean_vt)
		{
			shouldDoRuntimeTypeChecking_ = true;

			if ((secondValType != concept_vt) &&
				(secondValType != idea_vt))
			{
				fprintf(stderr, "FncArgDomainMismatchException");
				exit(EXIT_FAILURE);
			}
		}
	}

	//  II.C.  Optimize, and set 'valueType' and 'returnObjOrClass':
	//  II.C.1.  Set default values:
	returnObjOrClass = IdentityStaticVars::Boolean;
	returnGenerality = CLASS_IORC;
	valueType = boolean_vt;

	//  II.C.2.  Now, try to optimize to see if can do better:
	LogicOperationParseTreeNode *firstChildLogicOpPtr;
	OrderingCompOperationParseTreeNode *firstChildOrderOpPtr;

	switch (context.getHowOptimize())
	{
	case LEVEL3_OPTIMIZE:
	case LEVEL2_OPTIMIZE:
	case LEVEL1_OPTIMIZE:
		if (getOp() == logicNotOp)
		{
			//  II.C.2.a.  Handle logical not:
			if (firstGenerality == INSTANCE_IORC)
			{
				//  II.C.2.a.I.  Handle logical not of constant:
				if (firstObjOrClass == IdentityStaticVars::true_)
				// check to see if the first argument is true
				{
					returnObjOrClass = IdentityStaticVars::false_;
					setAnswer(returnObjOrClass);
					returnGenerality = INSTANCE_IORC;
				}
				else if (firstObjOrClass == IdentityStaticVars::false_)
				// check to see if the first argument is false
				{
					returnObjOrClass = IdentityStaticVars::true_;
					setAnswer(returnObjOrClass);
					returnGenerality = INSTANCE_IORC;
				}
				else
				{
					break;
				}
			}
			else if (((firstChildLogicOpPtr =
						   dynamic_cast<LogicOperationParseTreeNode *>(getFirstArgPtr())) != nullptr) &&
					 (firstChildLogicOpPtr->getOp() == logicNotOp))
			{

				//  II.C.2.a.II.  Handle double negation:
				ParseTreeNode *grandChildPtr = firstChildLogicOpPtr->getFirstArgPtr();
				replaceAsChild(grandChildPtr);
				firstChildLogicOpPtr->setFirstArgPtr(nullptr);
				delete (this);
				return (grandChildPtr->compileTimeCheck(context, valueType, returnObjOrClass, returnGenerality));
			}
			else if ((firstChildOrderOpPtr =
						  dynamic_cast<OrderingCompOperationParseTreeNode *>(getFirstArgPtr())) != nullptr)
			{
				//  II.C.2.a.III.  Transform !(a<b) to (a>=b), !(a>b) to (a<=b),
				//		 etc.:
				SpvmOp someOp = firstChildOrderOpPtr->getOp();
				obtainInverse(someOp);
				firstChildOrderOpPtr->setOp(someOp);
				replaceAsChild(firstChildOrderOpPtr);
				setFirstArgPtr(nullptr);
				delete (this);
				return (firstChildOrderOpPtr->compileTimeCheck(context, valueType, returnObjOrClass, returnGenerality));
			}
		}
		else if (getOp() == logicAndOp)
		{
			//  II.C.2.b.  Handle logical and:
			if (firstGenerality == INSTANCE_IORC && secondGenerality == INSTANCE_IORC)
			{
				if (firstObjOrClass == IdentityStaticVars::true_ && secondObjOrClass == IdentityStaticVars::true_)
				{
					returnObjOrClass = IdentityStaticVars::true_;
					setAnswer(returnObjOrClass);
				}
				else
				{
					returnObjOrClass = IdentityStaticVars::false_;
					setAnswer(returnObjOrClass);
				}
				returnGenerality = INSTANCE_IORC;
				return;
			}
			// Changing true and someBoolExpr to someBoolExpr, etc.
			else if (firstGenerality == INSTANCE_IORC && firstObjOrClass == IdentityStaticVars::true_)
			{
				replaceAsChild(getSecondArgPtr());
				setFirstArgPtr(nullptr);
				setSecondArgPtr(nullptr);
				delete (this);
				return (getSecondArgPtr()->compileTimeCheck(context, valueType, returnObjOrClass, returnGenerality));
			}
			// Changing false or someBoolExpr to someBoolExpr etc.
			else if (firstGenerality == INSTANCE_IORC && firstObjOrClass == IdentityStaticVars::false_)
			{
				returnObjOrClass = IdentityStaticVars::false_;
				setAnswer(returnObjOrClass);
				returnGenerality = INSTANCE_IORC;
				return;
			}
		}
		else if (getOp() == logicOrOp)
		{
			// Changing true or true to true, false or false to false, etc.
			if (firstGenerality == INSTANCE_IORC && secondGenerality == INSTANCE_IORC)
			{
				if (firstObjOrClass == IdentityStaticVars::true_ || secondObjOrClass == IdentityStaticVars::true_)
				{
					returnObjOrClass = IdentityStaticVars::true_;
					setAnswer(returnObjOrClass);
					returnGenerality = INSTANCE_IORC;
					return;
				}
				else
				{
					returnObjOrClass = IdentityStaticVars::false_;
					setAnswer(returnObjOrClass);
					returnGenerality = INSTANCE_IORC;
					return;
				}
			}
			// Changing true or someBoolExpr to true etc.
			else if (firstGenerality == INSTANCE_IORC && firstObjOrClass == IdentityStaticVars::true_)
			{
				returnObjOrClass = IdentityStaticVars::true_;
				setAnswer(returnObjOrClass);
				returnGenerality = INSTANCE_IORC;
				return;
			}
			// Changing false or someBoolExpr to someBoolExpr etc.
			else if (firstGenerality == INSTANCE_IORC && firstObjOrClass == IdentityStaticVars::false_)
			{
				replaceAsChild(getSecondArgPtr());
				setFirstArgPtr(nullptr);
				setSecondArgPtr(nullptr);
				delete (this);
				return (getSecondArgPtr()->compileTimeCheck(context, valueType, returnObjOrClass, returnGenerality));
			}
		}

		break;

	case NO_OPTIMIZE:
		break;

	default:
		fprintf(stderr,
				"Non-supported howOptimize_ty value ordinal %d in"
				" LogicOperationParseTreeNode::compileTimeCheck()",
				context.getHowOptimize());
		exit(EXIT_FAILURE);
	}

	//  III.  Finished:
}
