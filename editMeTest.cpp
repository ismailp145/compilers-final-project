#include "headers.h"

    void
    LogicOperationParseTreeNode::compileTimeCheck(
        CompileContext &context,
        value_ty &valueType,
        Identity &returnObjOrClass,
        instanceOrClass_ty &returnGenerality)
{
    // I. Application validity check:

    // II. Check '*this' node:
    // II.A. Check first node:
    value_ty firstValType;
    Identity firstObjOrClass;
    instanceOrClass_ty firstGenerality;

    getFirstArgPtr()->compileTimeCheck(
        context,
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

    // II.B. Check second node:
    Identity secondObjOrClass;
    value_ty secondValType = null_vt;
    instanceOrClass_ty secondGenerality = NOT_IN_KB_IORC;

    if (getSecondArgPtr() != nullptr)
    {
        getSecondArgPtr()->compileTimeCheck(
            context,
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

    // II.C. Set default values:
    returnObjOrClass = IdentityStaticVars::Boolean;
    returnGenerality = CLASS_IORC;
    valueType = boolean_vt;

    // II.C. Try to optimize:
    LogicOperationParseTreeNode *firstChildLogicOpPtr;
    OrderingCompOperationParseTreeNode *firstChildOrderOpPtr;

    switch (context.getHowOptimize())
    {
    case LEVEL3_OPTIMIZE:
    case LEVEL2_OPTIMIZE:
    case LEVEL1_OPTIMIZE:
        if (getOp() == logicNotOp)
        {
            // Optimization 1: !true or !false
            if (firstGenerality == INSTANCE_IORC)
            {
                if (firstObjOrClass == IdentityStaticVars::true_)
                {
                    returnObjOrClass = IdentityStaticVars::false_;
                }
                else if (firstObjOrClass == IdentityStaticVars::false_)
                {
                    returnObjOrClass = IdentityStaticVars::true_;
                }
                else
                    break;

                setAnswer(returnObjOrClass);
                returnGenerality = INSTANCE_IORC;
                return;
            }
            // Optimization 2: !!x → x
            else if (((firstChildLogicOpPtr = dynamic_cast<LogicOperationParseTreeNode *>(getFirstArgPtr())) != nullptr) &&
                     (firstChildLogicOpPtr->getOp() == logicNotOp))
            {
                ParseTreeNode *grandChildPtr = firstChildLogicOpPtr->getFirstArgPtr();
                replaceAsChild(grandChildPtr);
                firstChildLogicOpPtr->setFirstArgPtr(nullptr);
                delete this;
                return grandChildPtr->compileTimeCheck(context, valueType, returnObjOrClass, returnGenerality);
            }
            // Optimization 3: !(a < b) → a >= b
            else if ((firstChildOrderOpPtr = dynamic_cast<OrderingCompOperationParseTreeNode *>(getFirstArgPtr())) != nullptr)
            {
                firstChildOrderOpPtr->setOp(obtainInverse(firstChildOrderOpPtr->getOp()));
                replaceAsChild(firstChildOrderOpPtr);
                setFirstArgPtr(nullptr);
                delete this;
                return firstChildOrderOpPtr->compileTimeCheck(context, valueType, returnObjOrClass, returnGenerality);
            }
        }
        else if (getOp() == logicAndOp)
        {
            // Optimization 4: constant and constant
            if (firstGenerality == INSTANCE_IORC && secondGenerality == INSTANCE_IORC)
            {
                if (firstObjOrClass == IdentityStaticVars::true_ && secondObjOrClass == IdentityStaticVars::true_)
                    returnObjOrClass = IdentityStaticVars::true_;
                else
                    returnObjOrClass = IdentityStaticVars::false_;

                setAnswer(returnObjOrClass);
                returnGenerality = INSTANCE_IORC;
                return;
            }
            // Optimization 5: true and x → x
            else if (firstGenerality == INSTANCE_IORC && firstObjOrClass == IdentityStaticVars::true_)
            {
                replaceAsChild(getSecondArgPtr());
                setFirstArgPtr(nullptr);
                setSecondArgPtr(nullptr);
                delete this;
                return getSecondArgPtr()->compileTimeCheck(context, valueType, returnObjOrClass, returnGenerality);
            }
            // Optimization 6: false and x → false
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
            // Optimization 7: constant or constant
            if (firstGenerality == INSTANCE_IORC && secondGenerality == INSTANCE_IORC)
            {
                if (firstObjOrClass == IdentityStaticVars::true_ || secondObjOrClass == IdentityStaticVars::true_)
                    returnObjOrClass = IdentityStaticVars::true_;
                else
                    returnObjOrClass = IdentityStaticVars::false_;

                setAnswer(returnObjOrClass);
                returnGenerality = INSTANCE_IORC;
                return;
            }
            // Optimization 8: true or x → true
            else if (firstGenerality == INSTANCE_IORC && firstObjOrClass == IdentityStaticVars::true_)
            {
                returnObjOrClass = IdentityStaticVars::true_;
                setAnswer(returnObjOrClass);
                returnGenerality = INSTANCE_IORC;
                return;
            }
            // Optimization 9: false or x → x
            else if (firstGenerality == INSTANCE_IORC && firstObjOrClass == IdentityStaticVars::false_)
            {
                replaceAsChild(getSecondArgPtr());
                setFirstArgPtr(nullptr);
                setSecondArgPtr(nullptr);
                delete this;
                return getSecondArgPtr()->compileTimeCheck(context, valueType, returnObjOrClass, returnGenerality);
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

    // III. Finished:
}
