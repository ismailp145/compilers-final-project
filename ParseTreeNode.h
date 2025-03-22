/*-------------------------------------------------------------------------*
 *---									---*
 *---		ParseTreeNode.h						---*
 *---									---*
 *---	    This file declares classes that implement the nodes of the	---*
 *---	parse tree that the Struct Proc parse generates.		---*
 *---									---*
 *---		    This file is classified as: DECLASSIFIED		---*
 *---			Applied Philosophy of Science			---*
 *---									---*
 *---	----	----	----	----	----	----	----	-----	---*
 *---									---*
 *---	Version 9a		2016 July 17		Joseph Phillips	---*
 *---									---*
 *---				2017 September 5	Joseph Phillips	---*
 *---									---*
 *---	    Moved to code KnowledgeBase/ subdirectory and kb namespace.	---*
 *---									---*
 *-------------------------------------------------------------------------*/

      //  PURPOSE:  To represent when a corresponding member to a data-structure
      //    should be inserted into its containing data-structure.  Values are:
      //	CONSTRUCT_TIME_INSERT_DS: at data-structure construction time
      //	POST_CONSTRUCT_TIME_WOUT_CHK_INSERT_DS:
      //	  after data-structure construction, but no check is needed
      //	POST_CONSTRUCT_TIME_W_CHK_INSERT_DS:
      //	  after data-structure construction, and a check is needed
      typedef	enum
		{
		  CONSTRUCT_TIME_INSERT_DS,
		  POST_CONSTRUCT_TIME_WOUT_CHK_INSERT_DS,
		  POST_CONSTRUCT_TIME_W_CHK_INSERT_DS		  
		}
		whenInsertIntoDS_spt;


      class	SPVectorListParseTreeNode;
      class	ImplicitConstructionParseTreeNode;


      //  PURPOSE:  To distinguish among the things over which structural
      //	variables may range.
      typedef	enum
      		{
		  EMPIRICAL_ENTITY_SVR,
		  CULTURAL_CONVENTION_SVR,
		  DIMENSION_SVR
		}
		structuralVarRange_ty;

      //  PURPOSE:  To keep track of the subject var, attribute, value var
      //	and dimension of declared value variables.
      class	SubjVarAttrValueVarDim
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the subject variable name.
	std::string		subjVarNameStr_;

	//  PURPOSE:  To hold the attribute.
	Identity		attribute_;

	//  PURPOSE:  To hold the value variable name.
	std::string		valueVarNameStr_;

	//  PURPOSE:  To hold the class (if 'structuralVarRange_' is
	//	 'EMPIRICAL_ENTITY_SVR' or 'CULTURAL_CONVENTION_SVR') or
	//	dimension (if 'structuralVarRange_' is 'DIMENSION_SVR').
	Identity		classOrDimension_;

	//  PURPOSE:  To hold the address of the list of variables of which
	//	'valueVarNameStr_' is a function of, or 'nullptr' if
	//	'valueVarNameStr_' represents a constant.
	//	'*this' does _not_ own the pointed-to memory.
	SPVectorListParseTreeNode*
				argVarNameListPtr_;

	//  PURPOSE:  To distinguish among the things that a structural var
	//	may range.
	structuralVarRange_ty	structuralVarRange_;

	//  II.  Disallowed auto-generated methods:

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to store subject var name
	//	'newSubjVarName', attribute 'newAttr', value var name
	//	'newValueVarName', and class 'newClassOrDim' (if
	//	 'newStructuralVarRange' is 'EMPIRICAL_ENTITY_SVR' or
	//	 'CULTURAL_CONVENTION_SVR') or dimension 'newClassOrDim' (if
	//	 'newStructuralVarRange' is 'DIMENSION_SVR').
	SubjVarAttrValueVarDim	(const std::string&	newSubjVarName,
	  			 const Identity&	newAttr,
				 const std::string&	newValueVarName,
				 const Identity&	newClassOrDim,
				 structuralVarRange_ty	newStructuralVarRange,
				 SPVectorListParseTreeNode*
							newArgVarNameListPtr
				) :
				subjVarNameStr_(newSubjVarName),
				attribute_(newAttr),
				valueVarNameStr_(newValueVarName),
				classOrDimension_(newClassOrDim),
				argVarNameListPtr_(newArgVarNameListPtr),
				structuralVarRange_(newStructuralVarRange)
				{ }

	//  PURPOSE:  To make '*this' a copy of 'source'.  No parameters.
	//	No return value.
	SubjVarAttrValueVarDim	(const SubjVarAttrValueVarDim&	source
	  			) :
				subjVarNameStr_(source.getSubjVarNameStr()),
				attribute_(source.getAttribute()),
				valueVarNameStr_(source.getValueVarNameStr()),
				classOrDimension_(source.getClassOrDimension()),
				argVarNameListPtr_(source.argVarNameListPtr_),
				structuralVarRange_
					(source.getStructuralVarRange())
				{ }

	//  PURPOSE:  To release the resources of '*this', make '*this' a
	//  	copy of 'source', and return a reference to '*this'.
	SubjVarAttrValueVarDim&
		operator=	(const SubjVarAttrValueVarDim&	source
	  			)
				{
				  //  I.  Application validity check:
				  if  (this == &source)
				  {
				    return(*this);
				  }

				  //  II.  Release resources:

				  //  III.  Copy 'source':
				  subjVarNameStr_
						= source.getSubjVarNameStr();
				  attribute_	= source.getAttribute();
				  valueVarNameStr_
						= source.getValueVarNameStr();
				  classOrDimension_
						= source.getClassOrDimension();
				  argVarNameListPtr_
						= source.argVarNameListPtr_;
				  structuralVarRange_
						= source.
						    getStructuralVarRange();

				  //  IV.  Finished:
				  return(*this);
				}

	//  PURPOSE:  To release the resources of '*this'.  No parameters.
	//	No return value.
	~SubjVarAttrValueVarDim	()
				{
				  // '*this' does not own 'argVarNameListPtr_'
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the subject variable name.  No parameters.
	const std::string&
		getSubjVarNameStr
				()
				const
				{ return(subjVarNameStr_); }

	//  PURPOSE:  To return the attribute.  No parameters.
	const Identity&
		getAttribute	()
				const
				{ return(attribute_); }

	//  PURPOSE:  To return the value variable name.  No parameters.
	const std::string&
		getValueVarNameStr
				()
				const
				{ return(valueVarNameStr_); }

	//  PURPOSE:  To hold the dimension (if 'attribute_' is some numeric
	//	quantity of the subject).  No parameters.
	const Identity&
		getClassOrDimension
				()
				const
				{ return(classOrDimension_); }

	//  PURPOSE:  To return the address of the list of variables of which
	//	'valueVarNameStr_' is a function of, or 'nullptr' if
	//	'valueVarNameStr_' represents a constant.  No parameters.
	SPVectorListParseTreeNode*
		getArgVarNameListPtr
				()
				const
				{ return(argVarNameListPtr_); }

	//  PURPOSE:  To return a value denoting the things that a structural
	//	var may range.
	structuralVarRange_ty
		getStructuralVarRange
				()
				const
				{ return(structuralVarRange_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc. work of class:

      };


      //  PURPOSE:  To serve as the base class of all classes representing nodes
      //	generated by the parser.
      class	ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the node that has '*this' as a
	//	child node.
	ParseTreeNode*		parentPtr_;

	//  PURPOSE:  To hold the root of the parse tree.
	static
	ParseTreeNode*		rootPtr_;

	//  II.  Disallowed auto-generated methods:
	//  No copy assignment op:
	ParseTreeNode&
		operator=	(const ParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' instance to record that is was
	//	parsed at the current the current parser location.  No return
	//	value.
	ParseTreeNode		();

	//  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
	ParseTreeNode		(const ParseTreeNode&	source
				) :
				parentPtr_(source.getParentPtr())
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	virtual
	~ParseTreeNode		();

	//  V.  Accessors:
	//  PURPOSE:  To return the address of the node that has '*this' as a
	//	child node.  No parameters.
	ParseTreeNode*
		getParentPtr	()
				const
				{ return(parentPtr_); }

	//  PURPOSE:  To return 'true' if '*this' represents a constant,
	//	or 'false' otherwise.
	virtual
	bool	isConstant	()
				const
				{ return(false); }

	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	virtual
	value_ty
		getValueClass	()
				const
				{ return(null_vt); }

	//  PURPOSE:  To return '*this' if '*this' represents a loop, or to
	//	return the first parent of '*this' that represents a loop, or
	//	to return 'nullptr' if no parents are loops.
	virtual
	ImplicitConstructionParseTreeNode*
		getInnermostLoopPtr
				()
				const
				{
				  return( (getParentPtr() == nullptr)
					  ? nullptr
					  : getParentPtr()->
						getInnermostLoopPtr()
					);
				}

	//  PURPOSE:  To return the root of the parse tree.  No parameters.
	static
	ParseTreeNode*
		getRootPtr	()
				{ return(rootPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the address of the node that has '*this' as a
	//	child node to 'newParentPtr'.  No return value.
	void	setParentPtr	(ParseTreeNode*	newParentPtr
				)
				{ parentPtr_	= newParentPtr; }

	//  PURPOSE:  To note that relation 'relation' should be checked at
	//	the end of assembly translation of '*this' the node.  No
	//	return value.
	virtual
	void	noteRelationToCheckAtEnd
				(const Identity&	relation
				);

	//  PURPOSE:  To set the root of the parse tree to 'newRootPtr'.
	//	No parameters.
	static
	void	setRootPtr	(ParseTreeNode*	newRootPtr
				)
				{ rootPtr_	= newRootPtr; }

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	virtual
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				)
				{
				  valueType	= concept_vt;
				  returnObjOrClass
						= IdentityStaticVars::Idea;
				  returnGenerality
						= CLASS_IORC;
				}

	//  PURPOSE:  To populate the list Identity that '*this' represents
	//	with constants, if everything inside is a constant, given
	//	'context'.  Throws ptr to Exception if non-constant found.
	//	Returns the list if '*this' indeed represents a list, or
	//	'null_' otherwise.
	virtual
	const Identity&
		populateList	(CompileContext&	context
				)
				{ return(IdentityStaticVars::null_); }

	//  PURPOSE:  To return the Identity that represents '*this' node given
	//	compile-time context 'context'.
	virtual
	const Identity&
		getIdentity	(CompileContext&	context
				)
				const
				{
				  return(IdentityStaticVars::null_);
				}

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	virtual
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

	//  PURPOSE:  To replace the occurrence of 'this' child with
	//	'newChildPtr' with the parent of '*this'.  If '*this' has no
	//	parent then sets 'ParseTreeNode::rootPtr_' to 'newChildPtr'.
	//	No return value.
	void	replaceAsChild	(ParseTreeNode*		newChildPtr
				);

	//  PURPOSE:  At '*this' parent, to replace child 'oldChildPtr' with
	//	'newChildPtr'.  No return value.
	virtual
	void	replaceOldChildWithNew
				(ParseTreeNode*		oldChildPtr,
				 ParseTreeNode*		newChildPtr
				);

      };


      //  PURPOSE:  To serve as the base class of all ParseTreeNode instances
      //	that represent unique things without much if any member
      //	variable content, once parsed.
      class	UniqueSingleTopicParseTreeNode : public ParseTreeNode
      {
	//  I.  Application validity check:

	//  II.  Disallowed auto-generated methods:
	//  No copy assignment op.
	UniqueSingleTopicParseTreeNode&
		operator=	(const UniqueSingleTopicParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' instance to note that it was parsed
	//	at 'newLocation'.  No return value.
	UniqueSingleTopicParseTreeNode
				() :
				ParseTreeNode()
				{ }

	//  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
	UniqueSingleTopicParseTreeNode		
				(const UniqueSingleTopicParseTreeNode&	source
				) :
				ParseTreeNode(source)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~UniqueSingleTopicParseTreeNode
				()
				{ }

	//  V.  Accessors:

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				)
				{
				  //  No unique content, so nothing to do
				}

      };


      //  PURPOSE:  To represent the parsing of a ± sign.
      class	PlusMinusSignParseTreeNode :
			   public UniqueSingleTopicParseTreeNode
      {
	//  I.  Application validity check:

	//  II.  Disallowed auto-generated methods:
	//  No default constructor.
	PlusMinusSignParseTreeNode
				();

	//  No copy assignment op.
	PlusMinusSignParseTreeNode&
		operator=	(const PlusMinusSignParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
	PlusMinusSignParseTreeNode		
				(const PlusMinusSignParseTreeNode&	source
				) :
				UniqueSingleTopicParseTreeNode(source)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~PlusMinusSignParseTreeNode
				()
				{ }

	//  V.  Accessors:

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				)
				{
				  valueType	= concept_vt;
				  returnObjOrClass
						= IdentityStaticVars::
							annotatedValuesStdDevA;
				  returnGenerality
						= INSTANCE_IORC;
				}

	//  PURPOSE:  To return the Identity that represents '*this' node given
	//	compile-time context 'context'.
	const Identity&
		getIdentity	(CompileContext&	context
				)
				const
				{
				  return(IdentityStaticVars::
						annotatedValuesStdDevA
					);
				}

      };


      //  PURPOSE:  To serve as the base class of all classes representing nodes
      //	telling constants.
      class	ConstParseTreeNode : public ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the index of the knowledge base that has the
	//	constant that '*this' represents.
	kbRunIndex_ty		kbRunIndex_;

	//  PURPOSE:  To hold the assigned index for '*this' constant in the
	//	compile time context.
	constPoolIndex_ty	constPoolIndex_;

	//  II.  Disallowed auto-generated methods:
	//  No copy assignment op:
	ConstParseTreeNode&
		operator=	(const ConstParseTreeNode&
				);

      protected :
	//  III.  Protected methods:
	//  PURPOSE:  To set the index of the knowledge base that has the
	//	constant that '*this' represents to 'newIndex'.  No return
	//	value.
	void	setKbRunIndex	(kbRunIndex_ty		newIndex
				)
				{ kbRunIndex_	= newIndex; }

	//  PURPOSE:  To set the constant pool index to 'newIndex'.  No return
	//	value.
	void	setConstPoolIndex
				(constPoolIndex_ty	newIndex
				)
				{ constPoolIndex_ = newIndex; }

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' instance to note that it was parsed
	//	at 'newLocation'.  No return value.
	ConstParseTreeNode	() :
				constPoolIndex_(CONST_POOL_INDEX_NULL)
				{ }

	//  PURPOSE:  To initialize '*this' instance to note that 'identity' was
	//	parsed at 'newLocation'.  No return value.
	ConstParseTreeNode	(const Identity&	identity
				);

	//  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
	ConstParseTreeNode	(const ConstParseTreeNode&	source
				) :
				ParseTreeNode(source),
				constPoolIndex_(CONST_POOL_INDEX_NULL)
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return 'true' if '*this' represents a constant,
	//	or 'false' otherwise.  No parameters.
	bool	isConstant	()
				const
				{ return(true); }

	//  PURPOSE:  To return the index of the knowledge base that has the
	//	constant that '*this' represents.
	kbRunIndex_ty
		getKbRunIndex	()
				const
				{ return(kbRunIndex_); }

	//  PURPOSE:  To return the assigned index for '*this' constant in the
	//	compile time context.  No parameters.
	constPoolIndex_ty
		getConstPoolIndex
				()
				const
				{ return(constPoolIndex_); }

	//  VI.  Mutators:
	//  PURPOSE:  To reset the knowledge base run index and the constant
	//	pool index to correspond to constant 'newValue'.  This _must_
	//	be done after a new Identity (given in 'newValue') has been
	//	created for '*this', if one has.  No return value.
	void	resetConstPoolIndices
				(const Identity&	newValue
				);

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				)
				{
				  valueType	= getValueClass();
				  returnObjOrClass
						= getIdentity(context);
				  returnGenerality
						= INSTANCE_IORC;
				}

	//  PURPOSE:  To return the Identity that represents '*this' node given
	//	compile-time context 'context'.
	const Identity&
		getIdentity	(CompileContext&	context
				)
				const;

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      class	IdentityConstParseTreeNode : public ConstParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the identifier name.
	char*			nameCPtr_;

	//  PURPOSE:  To hold the parsed identity.
	Identity		identity_;

	//  PURPOSE:  To hold the 'value_ty' value associated with '*this' node.
	value_ty		valueType_;

	//  PURPOSE:  To tell whether the identity associated with '*this' is
	//	known as an instance, a class, or if it is not in the kb.
	instanceOrClass_ty	generality_;

	//  PURPOSE:  To hold the address of a data-structure that holds kb
	//	run name offsets (if there are any).
	std::vector<numerator_ty>*
				kbRunNameOffsetDsPtr_;

	//  PURPOSE:  To hold true if 'identity_' has been to an existing
	//	Identity with name 'nameCPtr_' after 'compileTimeCheck()' has
	//	been called, or 'false' otherwise.
	bool			hasNameBeenFound_;

	//  PURPOSE:  To hold 'true' if '*this' node should make an Identity
	//	instance for items not in kb, or 'false' otherwise.
	bool			shouldMakeInstanceIfNotInKb_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	IdentityConstParseTreeNode
				();

	//  No copy constructor:
	IdentityConstParseTreeNode
				(const IdentityConstParseTreeNode&
				);

	//  No copy assignment op:
	IdentityConstParseTreeNode&
		operator=	(const IdentityConstParseTreeNode&
				);

      protected :
	//  III.  Protected :
	//  PURPOSE:  To set 'hasNameBeenFound_' to 'true'.  No parameters.
	//	No return value.
	void	setHasNameBeenFound()
				{ hasNameBeenFound_	= true; }

	//  PURPOSE:  To set 'identity_' to 'newIdentity', 'valueType_' to
	//	'newValueType', and set 'generality_' to 'newGenerality'.
	//	No return value.
	void	setIdentity	(const Identity&	newIdentity,
				 value_ty		newValueType,
				 instanceOrClass_ty	newGenerality
				)
				{
				  identity_	= newIdentity;
				  valueType_	= newValueType;
				  generality_	= newGenerality;
				  resetConstPoolIndices(identity_);
				}

      public :
	//  IV.  Constructor(s), assignment op(s), factory, destructor:
	//  PURPOSE:  To note that Identity whose name is at offset
	//	'newNameOffset' of the identity name store of the compile-time
	//	context was parsed at location 'newLocation'.  No return value.
	IdentityConstParseTreeNode
				(const char*	newNameCPtr
				) :
				ConstParseTreeNode(),
				nameCPtr_(strdup(newNameCPtr)),
				identity_(),
				valueType_(null_vt),
				generality_(NOT_IN_KB_IORC),
				kbRunNameOffsetDsPtr_(nullptr),
				hasNameBeenFound_(false),
				shouldMakeInstanceIfNotInKb_(true)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~IdentityConstParseTreeNode
				()
				{
				  if  (nameCPtr_ != nullptr)
				    free(nameCPtr_);
				  
				  delete(kbRunNameOffsetDsPtr_);
				}

	//  V. Accessors:
	//  PURPOSE:  To return a pointer to the name of '*this' Identity as
	//	found in 'context'.
	const char*
		getNameCPtr	()
				const
				{
				  return(nameCPtr_);
				}

	//  PURPOSE:  To return a pointer to the name of '*this' Identity as
	//	found in 'context'.
	const char*
		getNameCPtr	(const CompileContext&	context
				)
				const
				{
				  return(nameCPtr_);
				}

	//  PURPOSE:  To return a pointer to the name at index 'index' in
	//	'context'.
	const char*
		getNameCPtr	(const CompileContext&	context,
				 sharedStrInd_ty	index
				)
				const
				{
				  return(nameCPtr_);
				}

	//  PURPOSE:  To return the parsed identity.  No parameters.
	const Identity&
		getIdentity	()
				const
				{ return(identity_); }

	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(valueType_); }

	//  PURPOSE:  To tell whether the identity associated with '*this' is
	//	known as an instance, a class, or if it is not in the kb.
	//	No parameters.
	instanceOrClass_ty
		getGenerality	()
				const
				{ return(generality_); }

	//  PURPOSE:  To return 'true' if an Identity has been found with the
	//	name stored in '*this' node, or 'false' otherwise.
	bool	hasNameBeenFound()
				const
				{ return(hasNameBeenFound_); }

	//  PURPOSE:  To return 'true' if '*this' node should make an Identity
	//	instance for items not in kb, or 'false' otherwise.  No
	//	parameters.
	bool	shouldMakeInstanceIfNotInKb
				()
				const
				{ return(shouldMakeInstanceIfNotInKb_); }

	//  VI.  Mutators:
	//  PURPOSE:  To note that 'newSubject' is the subject of '*this' node.
	//	Setting it from the outside is appropriate when
	//	'compileTimeCheck()' did not find a matching name, but an
	//	Identity is now known.  No return value.
	void	setIdentity	(const Identity&	newSubject
				);

	//  PURPOSE:  To note that '*this' node should make an Identity
	//	instance for items not in kb if 'b' is 'true', otherwise
	//	'*this' should not make an Identity.  No return value.
	void	setShouldMakeInstanceIfNotInKb
				(bool	b
				)
				{ shouldMakeInstanceIfNotInKb_ = b; }

	//  PURPOSE:  To add 'offset' to the data-structure of kb run name
	//	offsets.
	void	appendKbRunNameOffset
				(numerator_ty	offset
				)
				{
				  if  (kbRunNameOffsetDsPtr_ == nullptr)
				  {
				    kbRunNameOffsetDsPtr_
					= new std::vector<numerator_ty>;
				  }

				  kbRunNameOffsetDsPtr_->push_back(offset);
				}

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To return the Identity that represents '*this' node given
	//	compile-time context 'context'.
	const Identity&
		getIdentity	(CompileContext&	context
				)
				const
				{
				  return(identity_);
				}

      };


      //  PURPOSE:  To represent a declaration of an Identity when its class
      //	is also given.
      class	ClassedIdentityConstParseTreeNode :
			public IdentityConstParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the class name.
	char*			classNameCPtr_;

	//  PURPOSE:  To hold the parsed identity.
	Identity		classIdentity_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	ClassedIdentityConstParseTreeNode
				();

	//  No copy constructor:
	ClassedIdentityConstParseTreeNode
				(const ClassedIdentityConstParseTreeNode&
				);

	//  No copy assignment op:
	ClassedIdentityConstParseTreeNode&
		operator=	(const ClassedIdentityConstParseTreeNode&
				);

      protected :
	//  III.  Protected :

      public :
	//  IV.  Constructor(s), assignment op(s), factory, destructor:
	//  PURPOSE:  To initialize '*this' to represent that an
	//	IdentityConstParseTreeNode instance whose name was given as
	//	specified in '*instanceNodePtr' had its class given in
	//	'*classNodePtr'.  Becomes the owner of both the memory
	//	pointed to by both 'instanceNodePtr' and 'classNodePtr', and
	//	'delete()s' them both.
	ClassedIdentityConstParseTreeNode
				(IdentityConstParseTreeNode* instanceNodePtr,
				 IdentityConstParseTreeNode* classNodePtr
				) :
				IdentityConstParseTreeNode
					(instanceNodePtr->getNameCPtr()),
				classNameCPtr_
					(strdup(classNodePtr->getNameCPtr())),
				classIdentity_()
				{
				  delete(classNodePtr);
				  delete(instanceNodePtr);
				}

	//  PURPOSE:  To release the resources of '*this'.  No parameters.
	//	No return value.
	~ClassedIdentityConstParseTreeNode
				()
				{
				  if  (classNameCPtr_ != nullptr)
				  {
				    free(classNameCPtr_);
				  }
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the class name.
	char*	getClassNameCPtr()
				const
				{ return(classNameCPtr_); }

	//  PURPOSE:  To return class of the class-specified, parsed identity.
	//	No parameters.
	const Identity&
		getClassIdentity()
				const
				{ return(classIdentity_); }

	//  PURPOSE:  To return a pointer to the class name of '*this'
	//	class-specified Identity.  No parameters.
	const char*
		getClassNameCPtr(const CompileContext&	context
				)
				const
				{
				  return(getClassNameCPtr());
				}

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

      };


      class	IntegerConstParseTreeNode : public ConstParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the parsed integer.
	numerator_ty		number_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	IntegerConstParseTreeNode
				();

	//  No copy constructor:
	IntegerConstParseTreeNode
				(const IntegerConstParseTreeNode&
				);

	//  No copy assignment operator:
	IntegerConstParseTreeNode&
		operator=	(const IntegerConstParseTreeNode&
				);

      protected :
	//  III.  Protected :

      public :
	//  IV.  Constructor(s), assignment op(s), factory, destructor:
	//  PURPOSE:  To note that integer 'number' has been parsed at location
	//	'newLocation'.  No return value.
	IntegerConstParseTreeNode
				(numerator_ty		number
				) :
				ConstParseTreeNode(Identity(number)),
				number_(number)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~IntegerConstParseTreeNode()
				{ }

	//  V. Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(integer_vt); }

	//  PURPOSE:  To return the parsed integer.
	numerator_ty
		getNumber	()
				const
				{ return(number_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
      };


      class	RationalConstParseTreeNode : public ConstParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the parsed numerator.
	numerator_ty		numerator_;

	//  PURPOSE:  To hold the parsed denominator.
	denominator_ty		denominator_;

	//  II.  Disallowed auto-generated methods:
	//  No copy constructor:
	RationalConstParseTreeNode();

	//  No default constructor:
	RationalConstParseTreeNode
				(const RationalConstParseTreeNode&
				);

	//  No copy assignment op:
	RationalConstParseTreeNode&
		operator=	(const RationalConstParseTreeNode&
				);

      protected :
	//  III.  Protected :

      public :
	//  IV.  Constructor(s), assignment op(s), factory, destructor:
	//  PURPOSE:  To note that rational 'number' has been parsed at
	//	location 'newLocation'.  No return value.
	RationalConstParseTreeNode
				(Identity&	number
				) :
				ConstParseTreeNode(number),
				numerator_(number.getNumerator()),
				denominator_(number.getDenominator())
				{ }

	RationalConstParseTreeNode
				(numerator_ty		newNumerator,
				 denominator_ty		newDenominator
				) :
				ConstParseTreeNode
					(Identity
						(false,
						 newNumerator,
						 newDenominator
						)
					),
				numerator_(newNumerator),
				denominator_(newDenominator)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~RationalConstParseTreeNode
				()
				{ }

	//  V. Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(rational_vt); }

	//  PURPOSE:  To return the numerator of the parse number.
	numerator_ty
		getNumerator	()
				const
				{ return(numerator_); }

	//  PURPOSE:  To return the denominator of the parse number.
	denominator_ty
		getDenominator	()
				const
				{ return(denominator_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
      };


      class	RealConstParseTreeNode : public ConstParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the parsed float.
	spFloat_ty			number_;

	//  PURPOSE:  To hold the number of significant digits.
	sigFig_ty			numSigFigs_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	RealConstParseTreeNode	();

	//  No copy constructor:
	RealConstParseTreeNode	(const RealConstParseTreeNode&
				);

	//  No copy assignment op:
	RealConstParseTreeNode&
		operator=	(const RealConstParseTreeNode&
				);

      protected :
	//  III.  Protected :

      public :
	//  IV.  Constructor(s), assignment op(s), factory, destructor:
	//  PURPOSE:  To note that float 'number' has been parsed at location
	//	'newLocation'.  No return value.
	RealConstParseTreeNode	(spFloat_ty		number,
				 sigFig_ty		newNumSigFigs
				) :
				ConstParseTreeNode ( Identity(number)),
				number_(number),
				numSigFigs_(newNumSigFigs)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~RealConstParseTreeNode()
				{ }

	//  V. Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(real_vt); }

	//  PURPOSE:  To return the parsed float.
	spFloat_ty
		getNumber	()
				const
				{ return(number_); }

	//  PURPOSE:  To return the number of significant digits.  No
	//	parameters.
	sigFig_ty
		getNumSigFigs	()
				const
				{ return(numSigFigs_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
      };


      class	ComplexConstParseTreeNode : public ConstParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the real component of the parsed number.
	spFloat_ty		real_;

	//  PURPOSE:  To hold the number of significant digits in the real
	//	component.
	sigFig_ty		numRealSigFigs_;

	//  PURPOSE:  To hold the imaginary component of the parsed number.
	spFloat_ty		imaginary_;

	//  PURPOSE:  To hold the number of significant digits in the imaginary
	//	component.
	sigFig_ty		numImagSigFigs_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	ComplexConstParseTreeNode	();

	//  No copy constructor:
	ComplexConstParseTreeNode	(const ComplexConstParseTreeNode&
				);

	//  No copy assignment op:
	ComplexConstParseTreeNode&
		operator=	(const ComplexConstParseTreeNode&
				);

      protected :
	//  III.  Protected :
	//  PURPOSE:  To note that complex 'number' has been parsed at location
	//	'newLocation'.  No return value.
	ComplexConstParseTreeNode
				(const Identity&	number
				) :
				ConstParseTreeNode(number),
				real_(number.getReal()),
				imaginary_(number.getImaginary())
				{ }
				//	!!!!	!!!!	!!!!	!!!!	!!!!
				//
				//	How set 'numRealSigFigs_' and
				//	'numImagSigFigs_'?
				//
				//	!!!!	!!!!	!!!!	!!!!	!!!!

      public :
	//  IV.  Constructor(s), assignment op(s), factory, destructor:
	ComplexConstParseTreeNode
				(spFloat_ty		real,
				 sigFig_ty		realSigFigs,
				 spFloat_ty		imaginary,
				 sigFig_ty		imagSigFigs
				) :
				ConstParseTreeNode(Identity(real,imaginary)),
				real_(real),
				numRealSigFigs_(realSigFigs),
				imaginary_(imaginary),
				numImagSigFigs_(imagSigFigs)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~ComplexConstParseTreeNode()
				{ }

	//  V. Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(complex_vt); }

	//  PURPOSE:  To return the real component of the parsed complex number.
	//	No return value.
	spFloat_ty
		getReal		()
				const
				{ return(real_); }

	//  PURPOSE:  To hold the number of significant digits in the real
	//	component.
	sigFig_ty
		getNumRealSigFigs
				()
				const
				{ return(numRealSigFigs_); }

	//  PURPOSE:  To return the imaginary component of the parsed complex
	//	number.  No return value.
	spFloat_ty
		getImaginary	()
				const
				{ return(imaginary_); }

	//  PURPOSE:  To hold the number of significant digits in the imaginary
	//	component.
	sigFig_ty
		getNumImagSigFigs
				()
				const
				{ return(numImagSigFigs_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
      };


      //  PURPOSE:  To hold the addresses of up to two ConstParseTreeNode
      class	TwoConstPtrNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the first ConstParseTreeNode.
	//	NOTE:  '*this' does not own the pointed-to instance.  Instead,
	//	       whatever owns '*this' owns it, and is responsible for
	//	       'delete()'-ing it.
	ConstParseTreeNode*	firstPtr_;

	//  PURPOSE:  To hold the address of the second ConstParseTreeNode.
	//	NOTE:  '*this' does not own the pointed-to instance.  Instead,
	//	       whatever owns '*this' owns it, and is responsible for
	//	       'delete()'-ing it.
	ConstParseTreeNode*	secondPtr_;

	//  II.  Disallowed auto-generated methods:

      protected :
	//  III.  Protected:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to have 'firstPtr' as the first
	//	address and 'nullptr' as the second.  No return value.
	TwoConstPtrNode		(ConstParseTreeNode*	firstPtr
				) :
				firstPtr_(firstPtr),
				secondPtr_(nullptr)
				{ }

	//  PURPOSE:  To initialize '*this' to have 'firstPtr' as the first
	//	address and 'secondPtr' as the second.  No return value.
	TwoConstPtrNode		(ConstParseTreeNode*	firstPtr,
				 ConstParseTreeNode*	secondPtr
				) :
				firstPtr_(firstPtr),
				secondPtr_(secondPtr)
				{ }

	//  PURPOSE:  To set both the first and second addresses to 'nullptr'.
	//	No return value.
	TwoConstPtrNode		() :
				firstPtr_(nullptr),
				secondPtr_(nullptr)
				{ }

	//  PURPOSE:  To make '*this' a copy of 'source'.  No return value
	TwoConstPtrNode		(const TwoConstPtrNode&	source
				) :
				firstPtr_(source.getFirstPtr()),
				secondPtr_(source.getSecondPtr())
				{ }

	//  PURPOSE:  To make '*this' a copy of 'source', and return a
	//	reference to '*this'.
	TwoConstPtrNode&
		operator=	(const TwoConstPtrNode&	source
				)
				{
				  //  I.  Application validity check:
				  if  (this == &source)
				  {
				    return(*this);
				  }

				  //  II.  Release resources:
				  //  NOTE: '*this' does not own the pointed-to
				  //  	    memory, so do not 'delete()' it.
				  //  delete(secondPtr_);
				  //  delete(firstPtr_);

				  //  III.  Copy 'source':
				  firstPtr_	= source.getFirstPtr();
				  secondPtr_	= source.getSecondPtr();

				  //  IV.  Finished:
				  return(*this);
				}

	//  PURPOSE:  To release the resources of '*this'.  No parameters.
	//	No return value.
	~TwoConstPtrNode	()
				{
				  //  NOTE: '*this' does not own the pointed-to
				  //  	    memory, so do not 'delete()' it.
				  // delete(secondPtr_);
				  // delete(firstPtr_);
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the address of the first ConstParseTreeNode.
	//	No parameters.
	ConstParseTreeNode*
		getFirstPtr	()
				const
				{ return(firstPtr_); }

	//  PURPOSE:  To return the address of the second ConstParseTreeNode.
	//	No parameters.
	ConstParseTreeNode*
		getSecondPtr	()
				const
				{ return(secondPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To note that '*this' stores address 'firstPtr' and
	//	'secondPtr'.  No return value.
	void	setPtrs		(ConstParseTreeNode*	firstPtr  = nullptr,
				 ConstParseTreeNode*	secondPtr = nullptr
				)
				{
				  firstPtr_	= firstPtr;
				  secondPtr_	= secondPtr;
				}

	//  VII.  Methods that do main and misc work of class:

      };


      //  PURPOSE:  To represent the occurrence of a named variable or constant.
      class	VarOrConstUsageParseTreeNode : public ParseTreeNode
	{
	//  I.  Member vars:
	//  PURPOSE:  To hold the 'value_ty' of this user-defined variable or
	//	constant.
	value_ty		value_;

	//  PURPOSE:  To point to heap-allocated name of the variable or
	//	constant.
	char*			nameCPtr_;

	//  PURPOSE:  To hold the address of the entry for the variable to which
	//	'*this' variable usage is bound.
	ProgrammerDefinedPotentialVariable*
				varPtr_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	VarOrConstUsageParseTreeNode
				();

	//  No copy constructor:
	VarOrConstUsageParseTreeNode
				(const VarOrConstUsageParseTreeNode&
				);

	//  No copy assignment op:
	VarOrConstUsageParseTreeNode
		operator=	(const VarOrConstUsageParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' ParseTreeNode to note that the
	//	occurrence of a variable or constant named 'newNameCPtr' was
	//	parsed at 'newLocation'.  No return value.
	VarOrConstUsageParseTreeNode
				(const char*		newNameCPtr
				);

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarOrConstUsageParseTreeNode
				()
				{
				  free(nameCPtr_);
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(value_); }

	//  PURPOSE:  To return the address of the name of a variable or
	//	constant.  No parameters.
	const char*
		getNameCPtr	()
				const
				{ return(nameCPtr_); }

	//  PURPOSE:  To return the address of the entry for the variable to
	//	which '*this' variable usage is bound.
	ProgrammerDefinedPotentialVariable*
		getVarPtr	()
				const
				{ return(varPtr_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To serve as the base class of the usage of structure and
      //	context variables.
      class	VarUsageParseTreeNode : public ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the name of the variable.
	std::string		nameStr_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	VarUsageParseTreeNode	();

	//  No copy constructor:
	VarUsageParseTreeNode	(const VarUsageParseTreeNode&);

	//  No copy assignment op:
	VarUsageParseTreeNode&
		operator=	(const VarUsageParseTreeNode&);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note the usage of the variable
	//	named 'newNameCPtr' at location 'newLocation'.  No return value.
	VarUsageParseTreeNode	(const char*		newNameCPtr
				) :
				ParseTreeNode(),
				nameStr_(newNameCPtr)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.
	//	No return value.
	~VarUsageParseTreeNode	()
				{ }

	//  V.  Accessor(s):
	//  PURPOSE:  To return the address of the name of a variable or
	//	constant.  No parameters.
	const std::string&
		getNameStr	()
				const
				{ return(nameStr_); }

	//  VI.  Mutator(s):

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				)
				{
				  //  I.  Application validity check:

				  //  II.  Check '*this':
				  //  	   We do not know anything about
				  //	   this variable.  Describe in the
				  //	   most general non-committal of terms:
				  valueType		= null_vt;
				  returnObjOrClass	= IdentityStaticVars::
								null_;
				  returnGenerality	= NOT_IN_KB_IORC;
				}

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To serve as the base class of all classes representing
      //	nodes telling operations.
      class	OperationParseTreeNode : public ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the identity of the operation to do.
	SpvmOp			op_;

	//  PURPOSE:  To hold the address of the first argument.
	ParseTreeNode*		firstArgPtr_;

	//  PURPOSE:  To hold the address of the second argument.
	ParseTreeNode*		secondArgPtr_;

	//  PURPOSE:  To hold the identity to which '*this' operation compiles.
	Identity		machineCodeOp_;

	//  PURPOSE:  To hold the result of the operation if it was computed
	//	at compile-time.
	Identity		answer_;

	//  PURPOSE:  To hold 'true' if 'answer_' holds the compile-time
	//	computed answer, or 'false' otherwise.
	bool			wasAnswerComputedAtCompileTime_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	OperationParseTreeNode	();

	//  No copy constructor:
	OperationParseTreeNode	(const OperationParseTreeNode&
				);

	//  No copy assignment op:
	OperationParseTreeNode
		operator=	(const OperationParseTreeNode&
				);

      protected :
	//  III.  Protected methods:
	//  PURPOSE:  To set the identity to which '*this' operation compiles
	//	to new 'newMachineOp'.  No return value.
	void	setMachineCodeOp(const Identity&	newMachineOp
				)
				{ machineCodeOp_	= newMachineOp; }

	//  PURPOSE:  To store the compile-time computed answer 'newAnswer' for
	//  	the operation.  No return value.
	void	setAnswer	(const Identity&	newAnswer
				)
				{
				  answer_			= newAnswer;
				  wasAnswerComputedAtCompileTime_
								= true;
				}

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To note the parsing of operator 'newOp' with (optional)
	//	arguments '*newFirstArgPtr' and '*newSecondArgPtr' in that
	//	order.  No return value.
	OperationParseTreeNode	(const SpvmOp&		newOp,
				 ParseTreeNode*		newFirstArgPtr =nullptr,
				 ParseTreeNode*		newSecondArgPtr=nullptr
				) :
				ParseTreeNode(),
				op_(newOp),
				firstArgPtr_(newFirstArgPtr),
				secondArgPtr_(newSecondArgPtr),
				machineCodeOp_(),
				answer_(),
				wasAnswerComputedAtCompileTime_(false)
				{ }

	//  PURPOSE:  To note the parsing of operator 'newOp' with (optional)
	//	arguments '*newFirstArgPtr' and '*newSecondArgPtr' in that
	//	order.  No return value.
	OperationParseTreeNode	(argsField_ty		newArgsField,
				 spvmOp_ty	newPotInstruct,
				 ParseTreeNode*		newFirstArgPtr =nullptr,
				 ParseTreeNode*		newSecondArgPtr=nullptr
				) :
				ParseTreeNode(),
				op_(newArgsField,newPotInstruct),
				firstArgPtr_(newFirstArgPtr),
				secondArgPtr_(newSecondArgPtr),
				machineCodeOp_(),
				answer_(),
				wasAnswerComputedAtCompileTime_(false)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~OperationParseTreeNode	()
				{
				  delete(secondArgPtr_);
				  delete(firstArgPtr_);
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the operator to do.  No parameters.
	SpvmOp	getOp		()
				const
				{ return(op_); }

	//  PURPOSE:  To return the address of the first argument.  No
	//	parameters.
	ParseTreeNode*
		getFirstArgPtr	()
				const
				{ return(firstArgPtr_); }

	//  PURPOSE:  To return the address of the second argument.  No
	//	parameters.
	ParseTreeNode*
		getSecondArgPtr	()
				const
				{ return(secondArgPtr_); }

	//  PURPOSE:  To hold the result of the operation if it was computed
	//	at compile-time.
	const Identity&
		getAnswer	()
				const
				{ return(answer_); }

	//  PURPOSE:  To set 'toReturn' to the compile-time computed answer
	//	and to return 'true', if such an answer exists.  Returns
	//	'false' otherwise.
	bool	getIsAnswerKnown(Identity&	toReturn
				)
				const
				{
				  if  (wasAnswerComputedAtCompileTime_)
				  {
				    toReturn	= answer_;
				    return(true);
				  }

				  return(false);
				}

	//  VI.  Mutators:
	//  PURPOSE:  To set the operation to 'newOp'.  No return value.
	void	setOp		(SpvmOp		newOp
				)
				{ op_	= newOp; }

	//  PURPOSE:  To make '*this' have first argument '*nodePtr'.  No return
	//	value.
	void	setFirstArgPtr	(ParseTreeNode*	nodePtr
				)
				{ firstArgPtr_	= nodePtr; }

	//  PURPOSE:  To make '*this' have second argument '*nodePtr'.  No
	//	return value.
	void	setSecondArgPtr	(ParseTreeNode*	nodePtr
				)
				{ secondArgPtr_	= nodePtr; }

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To return the Identity that represents '*this' node given
	//	compile-time context 'context'.
	const Identity&
		getIdentity	(CompileContext&	context
				)
				const
				{
				  return(machineCodeOp_);
				}

	//  PURPOSE:  At '*this' parent, to replace child 'oldChildPtr' with
	//	'newChildPtr'.  No return value.
	void	replaceOldChildWithNew
				(ParseTreeNode*		oldChildPtr,
				 ParseTreeNode*		newChildPtr
				);

      };


      //  PURPOSE:  To represent the conversion of a non-annotated numeric
      //  	value to an annotated one.
      class	ToAnnotatedValueParseTreeNode : public OperationParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To tell the returned type.
	value_ty		returnType_;

	//  PURPOSE:  To tell the number of significant digits that the
	//	resulting annotated value should have.
	sigFig_ty		sigFigs_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	ToAnnotatedValueParseTreeNode
				();

	//  No copy constructor:
	ToAnnotatedValueParseTreeNode
				(const ToAnnotatedValueParseTreeNode&);

	//  No copy assignment op:
	ToAnnotatedValueParseTreeNode&
		operator=	(const ToAnnotatedValueParseTreeNode&);

      protected :
	//  III.  Protected methods:

      public :
      	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' node to represent an operation that
	//	converts the value computed by 'nodePtr' from a non-annotated
	//	number to an annotated one with 'newSigFigs' significant decimal
	//	digits.  If initialized with this constructor then
	//	'compileTimeCheck()' will have to be run to set 'returnType_'.
	ToAnnotatedValueParseTreeNode
				(ParseTreeNode*		nodePtr,
				 sigFig_ty		newSigFigs
				 			= DEFAULT_SIG_FIGS
				) :
				OperationParseTreeNode
					(VAR_VAR_VAR_ARGS_FIELD,
					 TO_ANNOT_OP,
					 nodePtr
					),
				returnType_(null_vt),
				sigFigs_(newSigFigs)
				{ }

	//  PURPOSE:  To initialize '*this' node to represent an operation that
	//	converts the value computed by 'nodePtr' from a non-annotated
	//	number to an annotated one with 'newSigFigs' significant decimal
	//	digits.  Sets 'returnType_' to the justified value
	//	corresponding to 'newReturnType', so 'compileTimeCheck()' will
	//	_not_ have to be run.
	ToAnnotatedValueParseTreeNode
				(ParseTreeNode*		nodePtr,
				 value_ty		newReturnType,
				 sigFig_ty		newSigFigs
				 			= DEFAULT_SIG_FIGS
				);

	//  PURPOSE:  To release the resources of '*this'.  No parameters.
	//	No return value.
	~ToAnnotatedValueParseTreeNode
				()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the returned type.  No parameters.
	value_ty
		getReturnType	()
				const
				{ return(returnType_); }

	//  PURPOSE:  To return the number of significant digits that the
	//  	resulting annotated value should have.
	sigFig_ty
		getSigFigs	()
				const
				{ return(sigFigs_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent assignment operators.
      class	AssignmentOperationParseTreeNode : public OperationParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold 'true' if type checking should be done on the
	//	expression or 'false' otherwise.
	bool			shouldDoRuntimeTypeChecking_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	AssignmentOperationParseTreeNode
				();

	//  No copy constructor:
	AssignmentOperationParseTreeNode
				(const AssignmentOperationParseTreeNode&);

	//  No copy assignment op:
	AssignmentOperationParseTreeNode&
		operator=	(const AssignmentOperationParseTreeNode&);

      protected :
	//  III.  Protected methods:

      public :
      	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' node to represent 
	AssignmentOperationParseTreeNode
				(VarOrConstUsageParseTreeNode*
							newFirstArgPtr,
      				 ParseTreeNode*		newSecondArgPtr
				) :
				OperationParseTreeNode
					(VAR_VAR_ARGS_FIELD,
					 COPY_OP,
					 newFirstArgPtr,
					 newSecondArgPtr
					)
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the address of the first argument.
	//	No parameters.
	VarOrConstUsageParseTreeNode*
		getLValueArgPtr	()
				{
				  return(dynamic_cast
					    <VarOrConstUsageParseTreeNode*>
					    (getFirstArgPtr())
					);
				}

	//  PURPOSE:  To hold 'true' if type checking should be done on the
	//	expression or 'false' otherwise.
	bool	shouldDoRuntimeTypeChecking
				()
				const
				{ return(shouldDoRuntimeTypeChecking_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent logic operations: logical and, logical or, and
      //	logical not.
      class	LogicOperationParseTreeNode : public OperationParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold 'true' if need to do runtime checking:
	bool			shouldDoRuntimeTypeChecking_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	LogicOperationParseTreeNode
				();

	//  No copy constructor:
	LogicOperationParseTreeNode
				(const LogicOperationParseTreeNode&
				);

	//  No copy assignment op:
	LogicOperationParseTreeNode
		operator=	(const LogicOperationParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To note the parsing of operator 'newOp' with (optional)
	//	arguments '*newFirstArgPtr' and '*newSecondArgPtr' in that
	//	order.  No return value.
	LogicOperationParseTreeNode
				(SpvmOp			newOp,
				 ParseTreeNode*		newFirstArgPtr =nullptr,
				 ParseTreeNode*		newSecondArgPtr=nullptr
				) :
				OperationParseTreeNode
					(newOp,
					 newFirstArgPtr,
					 newSecondArgPtr
					),
				shouldDoRuntimeTypeChecking_(false)
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(boolean_vt); }

	//  PURPOSE:  To return 'true' if need to do runtime checking, or
	//	'false' otherwise.
	bool	shouldDoRuntimeTypeChecking
				()
				const
				{ return(shouldDoRuntimeTypeChecking_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the
	//	class is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent ordering comparison operations: <, <=, >,
      //	and >=.
      class	OrderingCompOperationParseTreeNode :
				public OperationParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold 'true' if need to do runtime checking:
	bool			shouldDoRuntimeTypeChecking_;

	//  PURPOSE:  To hold the type computed for the first argument.
	value_ty		firstValType_;

	//  PURPOSE:  To hold the domain of the first argument, if its type is
	//	'concept_vt'.
	Identity		firstObjOrClass_;

	//  PURPOSE:  To tell whether the item in 'firstObjOrClass_' is an
	//	instance or class.
	instanceOrClass_ty	firstGenerality_;

	//  PURPOSE:  To hold the type computed for the second argument.
	value_ty		secondValType_;

	//  PURPOSE:  To tell whether the item in 'secondObjOrClass_' is an
	//	instance or class.
	Identity		secondObjOrClass_;

	//  PURPOSE:  To tell whether the item in 'firstObjOrClass_' is an
	//	instance or class.
	instanceOrClass_ty	secondGenerality_;

	//  PURPOSE:  To tell the type of comparison that '*this' will do.
	//	If 'comparisonType_' == 'concept_vt' then that means do the
	//	most general comparison.  'annotated_real_vt' is a catch-all
	//	for all annotated and justified values.
	value_ty		comparisonType_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	OrderingCompOperationParseTreeNode
				();

	//  No copy constructor:
	OrderingCompOperationParseTreeNode
				(const OrderingCompOperationParseTreeNode&
				);

	//  No copy assignment op:
	OrderingCompOperationParseTreeNode
		operator=	(const OrderingCompOperationParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To note the parsing of operator 'newOp' with (optional)
	//	arguments '*newFirstArgPtr' and '*newSecondArgPtr' in that
	//	order.  No return value.
	OrderingCompOperationParseTreeNode
				(SpvmOp			newOp,
				 ParseTreeNode*		newFirstArgPtr =nullptr,
				 ParseTreeNode*		newSecondArgPtr=nullptr
				) :
				OperationParseTreeNode
					(newOp,
					 newFirstArgPtr,
					 newSecondArgPtr
					),
				shouldDoRuntimeTypeChecking_(false),
				firstValType_(null_vt),
				firstObjOrClass_(),
				secondValType_(null_vt),
				secondObjOrClass_(),
				comparisonType_(null_vt)
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	 which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(boolean_vt); }

	//  PURPOSE:  To return the type of comparison that '*this' will do.
	//	If returns 'concept_vt' then that means do the
	//	most general comparison.  'annotated_real_vt' is a catch-all
	//	for all annotated and justified values.
	value_ty
		getComparisonType
				()
				const
				{ return(comparisonType_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the
	//	class is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent ordering comparison operations: ==ref, !=ref,
      //	==num, !=num, ==obj, !=obj.
      class	EquivalenceCompOperationParseTreeNode :
			public OperationParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold 'true' if need to do runtime checking:
	bool			shouldDoRuntimeTypeChecking_;

	//  PURPOSE:  To hold the type computed for the first argument.
	value_ty		firstValType_;

	//  PURPOSE:  To hold the domain of the first argument, if its type is
	//	'concept_vt'.
	Identity		firstObjOrClass_;

	//  PURPOSE:  To tell whether the item in 'firstObjOrClass_' is an
	//	instance or class.
	instanceOrClass_ty	firstGenerality_;

	//  PURPOSE:  To hold the type computed for the second argument.
	value_ty		secondValType_;

	//  PURPOSE:  To hold the domain of the second argument, if its type is
	//	'concept_vt'.
	Identity		secondObjOrClass_;

	//  PURPOSE:  To tell whether the item in 'secondObjOrClass_' is an
	//	instance or class.
	instanceOrClass_ty	secondGenerality_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	EquivalenceCompOperationParseTreeNode
				();

	//  No copy constructor:
	EquivalenceCompOperationParseTreeNode
				(const EquivalenceCompOperationParseTreeNode&
				);

	//  No copy assignment op:
	EquivalenceCompOperationParseTreeNode
		operator=	(const EquivalenceCompOperationParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To note the parsing of operator 'newOp' with (optional)
	//	arguments '*newFirstArgPtr' and '*newSecondArgPtr' in that
	//	order.  No return value.
	EquivalenceCompOperationParseTreeNode
				(SpvmOp			newOp,
				 ParseTreeNode*		newFirstArgPtr =nullptr,
				 ParseTreeNode*		newSecondArgPtr=nullptr
				) :
				OperationParseTreeNode
					(newOp,
					 newFirstArgPtr,
					 newSecondArgPtr
					),
				shouldDoRuntimeTypeChecking_(false),
				firstValType_(null_vt),
				firstObjOrClass_(),
				secondValType_(null_vt),
				secondObjOrClass_()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(boolean_vt); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the
	//	class is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent an equation, the assertion of equivalence.
      class	EquivalenceAssertionParseTreeNode : public ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the first argument.
	ParseTreeNode*		lhsPtr_;

	//  PURPOSE:  To hold the address of the second argument.
	ParseTreeNode*		rhsPtr_;

	//  PURPOSE:  To hold the _relation_ (_not_ '*this' node) in compile-
	//	time circumstances.
	Identity		relation_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	EquivalenceAssertionParseTreeNode
				();

	//  No copy constructor:
	EquivalenceAssertionParseTreeNode
				(const EquivalenceAssertionParseTreeNode&
				);

	//  No copy assignment op:
	EquivalenceAssertionParseTreeNode
		operator=	(const EquivalenceAssertionParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To note the parsing of an equation at location
	//	'newLocation' with lhs 'newLhsPtr' and rhs 'newRhsPtr.
	//	No return value.
	EquivalenceAssertionParseTreeNode
				(ParseTreeNode*		newLhsPtr = nullptr,
				 ParseTreeNode*		newRhsPtr = nullptr
				) :
				ParseTreeNode(),
				lhsPtr_(newLhsPtr),
				rhsPtr_(newRhsPtr),
				relation_()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(relation_vt); }

	//  PURPOSE:  To return the address of the first argument.
	//	No parameters.
	ParseTreeNode*
		getLhsPtr	()
				const
				{ return(lhsPtr_); }

	//  PURPOSE:  To return the address of the second argument.
	//	No parameters.
	ParseTreeNode*
		getRhsPtr	()
				const
				{ return(rhsPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the address of the first argument to 'newLhsPtr'.
	//	No return value.
	void	setLhsPtr	(ParseTreeNode*	newLhsPtr
				)
				{ lhsPtr_ = newLhsPtr; }

	//  PURPOSE:  To set the address of the second argument to 'newRhsPtr'.
	//	No return value.
	void	setRhsPtr	(ParseTreeNode*	newRhsPtr
				)
				{ rhsPtr_ = newRhsPtr; }

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the
	//	class is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent ordering symmetric arithmetic operations:
      //	+ and *
      class	SymmetricMathOperationParseTreeNode :
			public OperationParseTreeNode
      {
        //  I.  Member vars:
        //  PURPOSE:  To hold 'true' if need to do runtime checking:
        bool			shouldDoRuntimeTypeChecking_;

        //  PURPOSE:  To hold the type computed for the first argument.
        value_ty		firstValType_;

        //  PURPOSE:  To hold the domain of the first argument, if its type is
        //	'concept_vt'.
        Identity		firstObjOrClass_;

        //  PURPOSE:  To tell whether the item in 'firstObjOrClass_' is an
        //	instance or class.
        instanceOrClass_ty	firstGenerality_;

        //  PURPOSE:  To hold the type computed for the second argument.
        value_ty		secondValType_;

        //  PURPOSE:  To hold the domain of the second argument, if its type is
        //	'concept_vt'.
        Identity		secondObjOrClass_;

        //  PURPOSE:  To tell whether the item in 'secondObjOrClass_' is an
        //	instance or class.
        instanceOrClass_ty	secondGenerality_;

        //  PURPOSE:  To hold the type that returned by the code for '*this'
	//	node.
        value_ty		returnValType_;

	//  PURPOSE:  To hold 'false' if the operands have not been flipped
	//	or 'true' otherwise.
	bool			haveArgsBeenFlipped_;

        //  PURPOSE:  To hold the result if it is computable at compile time.
        Identity		returnResult_;
//
//	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!
//
//	Including this member var causes: "double free or corruption (!prev)"

        //  II.  Disallowed auto-generated methods:
        //  No default constructor:
        SymmetricMathOperationParseTreeNode
				();

        //  No copy constructor:
        SymmetricMathOperationParseTreeNode
				(const SymmetricMathOperationParseTreeNode&
				);

        //  No copy assignment op:
        SymmetricMathOperationParseTreeNode
		operator=	(const SymmetricMathOperationParseTreeNode&
				);

      protected :
        //  III.  Protected methods:

      public :
        //  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
        //  PURPOSE:  To note the parsing of operator 'newOp' with (optional)
        //	arguments '*newFirstArgPtr' and '*newSecondArgPtr' in that
        //	order.  No return value.
        SymmetricMathOperationParseTreeNode
				(SpvmOp			newOp,
				 ParseTreeNode*		newFirstArgPtr =nullptr,
				 ParseTreeNode*		newSecondArgPtr=nullptr
				);

        //  V.  Accessors:
        //  PURPOSE:  To return the domain of the first argument, if its type is
        //	'concept_vt'.  No parameters.
        value_ty
		getFirstValType	()
				const
				{ return(firstValType_); }

        //  PURPOSE:  To return the domain of the first argument, if its type is
        //	'concept_vt'.  No parameters.
        const Identity&
		getFirstObjOrClass
				()
				const
				{ return(firstObjOrClass_); }

        //  PURPOSE:  To return the domain of the second argument, if its type
        //	is 'concept_vt'.  No parameters.
        value_ty
		getSecondValType()
				const
				{ return(secondValType_); }


        //  PURPOSE:  To return the domain of the second argument, if its type
        //	is 'concept_vt'.  No parameters.
        const Identity&
		getSecondClass	()
				const
				{ return(secondObjOrClass_); }

        //  PURPOSE:  To return the 'value_ty' corresponding to the class in
        //	which '*this' constant resides.
        value_ty
		getValueClass	()
				const
				{ return(returnValType_); }

        //  VI.  Mutators:

        //  VII.  Methods that do main and misc work of class:
        //  PURPOSE:  To do those checks that can be done at compile time given
        //	compile context 'context'.  If 'valueType' is set to the
        //	'value_ty' value corresponding return type that '*this' node
        //	has when computed.  If the specific instance is known then
        //	'returnObjOrClass' is set to that instance and
        //	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
        //	is known then 'returnObjOrClass' is set to that class and
        //	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
        void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

        //  PURPOSE:  To create and append to the end of 'instrPtrList' a
        //	preliminary assembly language translation of '*this' node (and
        //	 nodes underneath if any) given compile-time context 'context.
        //	'updatedVarPtr' is set to the address of the variable that
        //	the instruction(s) update.  No return value.
        void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent subtraction operations.
      class	SubtractionOperationParseTreeNode :
			public OperationParseTreeNode
      {
        //  I.  Member vars:
        //  PURPOSE:  To hold 'true' if need to do runtime checking:
        bool			shouldDoRuntimeTypeChecking_;

        //  PURPOSE:  To hold the type computed for the first argument.
        value_ty		firstValType_;

        //  PURPOSE:  To hold the domain of the first argument, if its type is
        //	'concept_vt'.
        Identity		firstObjOrClass_;

        //  PURPOSE:  To tell whether the item in 'firstObjOrClass_' is an
        //	instance or class.
        instanceOrClass_ty	firstGenerality_;

        //  PURPOSE:  To hold the type computed for the second argument.
        value_ty		secondValType_;

        //  PURPOSE:  To hold the domain of the second argument, if its type is
        //	'concept_vt'.
        Identity		secondObjOrClass_;

        //  PURPOSE:  To tell whether the item in 'secondObjOrClass_' is an
        //	instance or class.
        instanceOrClass_ty	secondGenerality_;

        //  PURPOSE:  To hold the type that returned by the code for '*this'
	//	node.
        value_ty		returnValType_;

        //  II.  Disallowed auto-generated methods:
        //  No copy constructor:
        SubtractionOperationParseTreeNode
				(const SubtractionOperationParseTreeNode&
				);

        //  No copy assignment op:
        SubtractionOperationParseTreeNode
		operator=	(const SubtractionOperationParseTreeNode&
				);

      protected :
        //  III.  Protected methods:

      public :
        //  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
        //  PURPOSE:  To note the parsing of operator 'newOp' with (optional)
        //	arguments '*newFirstArgPtr' and '*newSecondArgPtr' in that
        //	order.  No return value.
        SubtractionOperationParseTreeNode
				() :
				OperationParseTreeNode
					(VAR_VAR_ARGS_FIELD,
					 SUB_VAR_VAR_OP,
					 nullptr,
					 nullptr
					),
				shouldDoRuntimeTypeChecking_(false),
				firstValType_(null_vt),
				firstObjOrClass_(),
				secondValType_(null_vt),
				secondObjOrClass_(),
				returnValType_(null_vt)
				{ }

        //  V.  Accessors:
        //  PURPOSE:  To return the domain of the first argument, if its type is
        //	'concept_vt'.  No parameters.
        value_ty
		getFirstValType	()
				const
				{ return(firstValType_); }

        //  PURPOSE:  To return the domain of the first argument, if its type is
        //	'concept_vt'.  No parameters.
        const Identity&
		getFirstObjOrClass
				()
				const
				{ return(firstObjOrClass_); }

        //  PURPOSE:  To return the domain of the second argument, if its type
        //	'concept_vt'.  No parameters.
        value_ty
		getSecondValType()
				const
				{ return(secondValType_); }


        //  PURPOSE:  To return the domain of the second argument, if its type
        //	is 'concept_vt'.  No parameters.
        const Identity&
		getSecondClass	()
				const
				{ return(secondObjOrClass_); }

        //  PURPOSE:  To return the type that returned by the code for '*this'
        //	node.  No parameters.
        value_ty
		getValueClass	()
				const
				{ return(returnValType_); }

        //  VI.  Mutators:

        //  VII.  Methods that do main and misc work of class:
        //  PURPOSE:  To do those checks that can be done at compile time given
        //	compile context 'context'.  If 'valueType' is set to the
        //	'value_ty' value corresponding return type that '*this' node
        //	has when computed.  If the specific instance is known then
        //	'returnObjOrClass' is set to that instance and
        //	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
        //	is known then 'returnObjOrClass' is set to that class and
        //	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
        void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

        //  PURPOSE:  To create and append to the end of 'instrPtrList' a
        //	preliminary assembly language translation of '*this' node (and
        //	 nodes underneath if any) given compile-time context 'context.
        //	'updatedVarPtr' is set to the address of the variable that
        //	the instruction(s) update.  No return value.
        void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent division operations.
      class	DivisionOperationParseTreeNode : public OperationParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold 'true' if need to do runtime checking:
	bool			shouldDoRuntimeTypeChecking_;

	//  PURPOSE:  To hold the type computed for the first argument.
	value_ty		firstValType_;

	//  PURPOSE:  To hold the domain of the first argument, if its type is
	//	'concept_vt'.
	Identity		firstObjOrClass_;

	//  PURPOSE:  To tell whether the item in 'firstObjOrClass_' is an
	//	instance or class.
	instanceOrClass_ty	firstGenerality_;

	//  PURPOSE:  To hold the type computed for the second argument.
	value_ty		secondValType_;

	//  PURPOSE:  To hold the domain of the second argument, if its type is
	//	'concept_vt'.
	Identity		secondObjOrClass_;

	//  PURPOSE:  To tell whether the item in 'secondObjOrClass_' is an
	//	instance or class.
	instanceOrClass_ty	secondGenerality_;

	//  PURPOSE:  To hold the type that returned by the code for '*this'
	//	node.
	value_ty		returnValType_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	DivisionOperationParseTreeNode
				();

	//  No copy constructor:
	DivisionOperationParseTreeNode
				(const DivisionOperationParseTreeNode&
				);

	//  No copy assignment op:
	DivisionOperationParseTreeNode
		operator=	(const DivisionOperationParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To note the parsing of operator 'newOp' with (optional)
	//	arguments '*newFirstArgPtr' and '*newSecondArgPtr' in that
	//	order.  No return value.
	DivisionOperationParseTreeNode
				(spvmOp_ty		newDivOp,
				 ParseTreeNode*		newFirstArgPtr =nullptr,
				 ParseTreeNode*		newSecondArgPtr=nullptr
				) :
				OperationParseTreeNode
					(VAR_VAR_VAR_ARGS_FIELD,
					 newDivOp,
					 newFirstArgPtr,
					 newSecondArgPtr
					)
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the domain of the first argument, if its type is
	//	'concept_vt'.  No parameters.
	value_ty	getFirstValType	()
				const
				{ return(firstValType_); }

	//  PURPOSE:  To return the domain of the first argument, if its type is
	//	'concept_vt'.  No parameters.
	const Identity&
		getFirstObjOrClass
				()
				const
				{ return(firstObjOrClass_); }

	//  PURPOSE:  To return the domain of the second argument, if its type
	//	is 'concept_vt'.  No parameters.
	value_ty
		getSecondValType()
				const
				{ return(secondValType_); }


	//  PURPOSE:  To return the domain of the second argument, if its type
	//	is 'concept_vt'.  No parameters.
	const Identity&
		getSecondClass	()
				const
				{ return(secondObjOrClass_); }

	//  PURPOSE:  To return the type that returned by the code for '*this'
	//	node.  No parameters.
	value_ty
		getValueClass	()
				const
				{ return(returnValType_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent raising to power operations.
      class	PowerOperationParseTreeNode : public OperationParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold 'true' if need to do runtime checking:
	bool			shouldDoRuntimeTypeChecking_;

	//  PURPOSE:  To hold the type computed for the first argument.
	value_ty		firstValType_;

	//  PURPOSE:  To hold the domain of the first argument, if its type is
	//	'concept_vt'.
	Identity		firstObjOrClass_;

	//  PURPOSE:  To tell whether the item in 'firstObjOrClass_' is an
	//	instance or class.
	instanceOrClass_ty	firstGenerality_;

	//  PURPOSE:  To hold the type computed for the second argument.
	value_ty		secondValType_;

	//  PURPOSE:  To hold the domain of the second argument, if its type is
	//	'concept_vt'.
	Identity		secondObjOrClass_;

	//  PURPOSE:  To tell whether the item in 'secondObjOrClass_' is an
	//	instance or class.
	instanceOrClass_ty	secondGenerality_;

	//  PURPOSE:  To hold the type that returned by the code for '*this'
	//	node.
	value_ty		returnValType_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	PowerOperationParseTreeNode
				();

	//  No copy constructor:
	PowerOperationParseTreeNode
				(const DivisionOperationParseTreeNode&
				);

	//  No copy assignment op:
	PowerOperationParseTreeNode
		operator=	(const DivisionOperationParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To note the parsing of operator 'newOp' with (optional)
	//	arguments '*newFirstArgPtr' and '*newSecondArgPtr' in that
	//	order.  No return value.
	PowerOperationParseTreeNode
				(ParseTreeNode*		newFirstArgPtr =nullptr,
				 ParseTreeNode*		newSecondArgPtr=nullptr
				) :
				OperationParseTreeNode
					(VAR_VAR_VAR_ARGS_FIELD,
					 ANNOT_POW_OP,
					 newFirstArgPtr,
					 newSecondArgPtr
					)
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the domain of the first argument, if its type is
	//	'concept_vt'.  No parameters.
	value_ty	getFirstValType	()
				const
				{ return(firstValType_); }

	//  PURPOSE:  To return the domain of the first argument, if its type is
	//	'concept_vt'.  No parameters.
	const Identity&
		getFirstObjOrClass
				()
				const
				{ return(firstObjOrClass_); }

	//  PURPOSE:  To return the domain of the second argument, if its type
	//	is 'concept_vt'.  No parameters.
	value_ty
		getSecondValType()
				const
				{ return(secondValType_); }


	//  PURPOSE:  To return the domain of the second argument, if its type
	//	is 'concept_vt'.  No parameters.
	const Identity&
		getSecondClass	()
				const
				{ return(secondObjOrClass_); }

	//  PURPOSE:  To return the type that returned by the code for '*this'
	//	node.  No parameters.
	value_ty
		getValueClass	()
				const
				{ return(returnValType_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent annotated value addition.
      class	AnnotatedValueAddOpParseTreeNode :
				public OperationParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold 'true' if the arguments have been flipped
	//	(i.e. lhs => rhs and rhs => lhs), or 'false' otherwise.
	bool			haveArgsBeenFlipped_;

	//  II.  Disallowed auto-generated methods:
        //  No default constructor:
        AnnotatedValueAddOpParseTreeNode
				();

        //  No copy constructor:
        AnnotatedValueAddOpParseTreeNode
				(const AnnotatedValueAddOpParseTreeNode&
				);

        //  No copy assignment op:
        AnnotatedValueAddOpParseTreeNode
		operator=	(const AnnotatedValueAddOpParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To represent the operation of adding using operator
	//	'newOp' the annotated values computed by '*newFirstArgPtr'
	//	and '*newSecondArgPtr'
	AnnotatedValueAddOpParseTreeNode
				(SpvmOp			newOp,
				 ParseTreeNode*		newFirstArgPtr =nullptr,
				 ParseTreeNode*		newSecondArgPtr=nullptr
				) :
				OperationParseTreeNode
					(newOp,
					 newFirstArgPtr,
					 newSecondArgPtr
					),
				haveArgsBeenFlipped_(false)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~AnnotatedValueAddOpParseTreeNode
				()
				{ }

	//  V.  Accessors:

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };



      //  PURPOSE:  To represent a list created at parse-time
      class	ParseTimeListParseTreeNode : public ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To keep track of the item in '*this' list.
	std::vector<ParseTreeNode*>
				itemVect_;

	//  II.  Disallowed auto-generated methods:
	//  No copy constructor:
	ParseTimeListParseTreeNode
				(const ParseTimeListParseTreeNode&
				);

	//  No copy assignment op:
	ParseTimeListParseTreeNode&
		operator=	(const ParseTimeListParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to have an empty list.
	//	'newLocation' tells the location at which '*this' was parsed.
	ParseTimeListParseTreeNode
				() :
				ParseTreeNode(),
				itemVect_()
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~ParseTimeListParseTreeNode
				()
				{
				  for (size_t i = 0; i < getLength();  i++)
				    delete(itemVect_[i]);
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the number of item in '*this' list.  No
	//	parameters.
	size_t	getLength	()
				const
				{ return(itemVect_.size()); }

	//  PURPOSE:  To return the address of the 'i'-th node in '*this' list,
	//	or 'nullptr' if 'i' is greater than or equal to the length of
	//	'*this' list.
	ParseTreeNode*
		getNodePtr	(size_t		i
				)
				{ return( (i >= getLength())
				  	  ? nullptr
					  : itemVect_[i]
					);
				}

	//  PURPOSE:  To return the address of the 'i'-th node in '*this' list
	//	as a const address or 'nullptr' if 'i' is greater than or equal
	//	to the length of '*this' list.
	const ParseTreeNode*
		getConstNodePtr	(size_t		i
				)
				const
				{ return( (i >= getLength())
				  	  ? nullptr
					  : itemVect_[i]
					);
				}

	//  VI.  Mutators:
	//  PURPOSE:  To note that relation 'relation' should be checked at
	//	the end of assembly translation of '*this' the node.  No
	//	return value.
	void	noteRelationToCheckAtEnd
				(const Identity&	relation
				)
				{
				  getParentPtr()->
					noteRelationToCheckAtEnd(relation);
				}

	//  PURPOSE:  To return the address of the 'i'-th node in '*this' list,
	//	or 'nullptr' if 'i' is greater than or equal to the length of
	//	'*this' list.  If what is returned is non-'nullptr' then whoever
	//	calls this method becomes the owner of that node.
	ParseTreeNode*
		giveAwayNodePtr	(size_t		i
				)
				{
				  ParseTreeNode*	returnMe = nullptr;

				  if  (i >= getLength())
				  {
				    return(returnMe);
				  }

				  returnMe	= itemVect_[i];
				  itemVect_[i]	= nullptr;
				  return(returnMe);
				}

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  At '*this' parent, to replace child 'oldChildPtr' with
	//	'newChildPtr'.  No return value.
	void	replaceOldChildWithNew
				(ParseTreeNode*		oldChildPtr,
				 ParseTreeNode*		newChildPtr
				);

	//  PURPOSE:  To insert 'newNodePtr' at the end of '*this' list.  No
	//	return value.
	void	insert		(ParseTreeNode*	newNodePtr
				)
				{ itemVect_.push_back(newNodePtr); }

      };


      //  PURPOSE:  To represent a ParseTreeNode instance that will be compiled
      //		into an sp VectorList.
      class	SPVectorListParseTreeNode : public ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the compile time list used to make the
	//	corresponding sp VectorList.
	ParseTimeListParseTreeNode*
				compileTimeListPtr_;

	//  PURPOSE:  To point the compile time domain class identity.
	IdentityConstParseTreeNode*
				domainClassNodePtr_;

	//  PURPOSE:  To hold the class to which members of the sp VectorList
	//	created by '*this' must belong.
	Identity		domainClass_;

	//  PURPOSE:  To hold 'true' if 'domainClass_' == 'Idea', or 'false'
	//	otherwise.
	bool			isIdeaClass_;

	//  PURPOSE:  To hold the VectorList created by '*this'.
	Identity		vList_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	SPVectorListParseTreeNode
				();

	//  No copy constructor:
	SPVectorListParseTreeNode
				(const SPVectorListParseTreeNode&	source
				);

	//  No copy assignment op:
	SPVectorListParseTreeNode&
		operator=	(const SPVectorListParseTreeNode&	source
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To create a SPVectorListParseTreeNode instance that is
	//	initially empty, that can hold anything, and that was parsed at
	//	'newLocation'.
	SPVectorListParseTreeNode
				(IdentityConstParseTreeNode*
							newDomainClassNodePtr_
							= nullptr
				);

	//  PURPOSE:  To create a SPVectorListParseTreeNode instance that will
	//	hold members as given by '*newCompileTimeListPtr', and that can
	//	hold anything.
	SPVectorListParseTreeNode
				(ParseTimeListParseTreeNode*
							newCompileTimeListPtr,
				 IdentityConstParseTreeNode*
							newDomainClassNodePtr_
							= nullptr
				);

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~SPVectorListParseTreeNode
				()
				{
				  delete(domainClassNodePtr_);
				  delete(compileTimeListPtr_);
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the number of item in '*this' list.  No
	//	parameters.
	size_t	getLength	()
				const
				{
				  return( (compileTimeListPtr_ == nullptr)
					  ? 0
					  : compileTimeListPtr_->getLength()
					);
				}

	//  PURPOSE:  To return the address of the 'i'-th node in '*this' list,
	//	or 'nullptr' if 'i' is greater than or equal to the length of
	//	'*this' list.
	ParseTreeNode*
		getNodePtr	(size_t		i
				)
				{
				  return( (compileTimeListPtr_ == nullptr)
				  	  ? nullptr
					  : compileTimeListPtr_->getNodePtr(i)
					);
				}

	//  PURPOSE:  To return the address of the 'i'-th node in '*this' list,
	//	or 'nullptr' if 'i' is greater than or equal to the length of
	//	'*this' list.
	const ParseTreeNode*
		getConstNodePtr	(size_t		i
				)
				const
				{
				  return( (compileTimeListPtr_ == nullptr)
				  	  ? nullptr
					  : compileTimeListPtr_->getNodePtr(i)
					);
				}

	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(vList_vt); }

	//  PURPOSE:  To return the class to which members of the sp VectorList
	//	created by '*this' must belong.
	const Identity&
		getDomainClass	()
				const
				{ return(domainClass_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To return the Identity that represents '*this' node given
	//	compile-time context 'context'.
	const Identity&
		getIdentity	(CompileContext&	context
				)
				const
				{
				  return(vList_);
				}

	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the class
	//	is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
    				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent a function call.
      class	FunctionCallParseTreeNode : public ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the function.
	SpvmOp			fnc_;

	//  PURPOSE:  To point to the list of function arguments.
	ParseTimeListParseTreeNode*
				argListPtr_;

	//  PURPOSE:  To hold the type of the first argument.
	value_ty		firstArgValType_;

	//  PURPOSE:  To tell whether the item in the first argument is an
	//	instance or class.
	instanceOrClass_ty	firstGenerality_;

	//  PURPOSE:  To hold the type of the second argument.
	value_ty		secondArgValType_;

	//  PURPOSE:  To tell whether the item in the second argument is an
	//	instance or class.
	instanceOrClass_ty	secondGenerality_;

	//  PURPOSE:  To hold the type of the third argument.
	value_ty		thirdArgValType_;

	//  PURPOSE:  To tell whether the item in the third argument is an
	//	instance or class.
	instanceOrClass_ty	thirdGenerality_;

	//  PURPOSE:  To hold the type of the fourth argument.
	value_ty		fourthArgValType_;

	//  PURPOSE:  To tell whether the item in the fourth argument is an
	//	instance or class.
	instanceOrClass_ty	fourthGenerality_;

	//  PURPOSE:  To hold the type that returned by the code for '*this'
	//	node.
	value_ty		returnValType_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	FunctionCallParseTreeNode
				();

	//  No copy constructor:
	FunctionCallParseTreeNode
				(const FunctionCallParseTreeNode&
				);

	//  No copy assignment op:
	FunctionCallParseTreeNode&
		operator=	(const FunctionCallParseTreeNode&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' function call node to note that a
	//	call to 'newFnc' with optional arguments in '*newArgListPtr'
	//	was made at location 'newLocation'.  No return value.
	FunctionCallParseTreeNode
				(SpvmOp			newFnc,
				 ParseTimeListParseTreeNode*
							newArgListPtr = nullptr
				);

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~FunctionCallParseTreeNode
				()
				{
				  delete(argListPtr_);
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the 'value_ty' corresponding to the class in
	//	which '*this' constant resides.
	value_ty
		getValueClass	()
				const
				{ return(returnValType_); }

	//  PURPOSE:  To return the function to execute.  No parameters.
	SpvmOp	getFnc		()
				const
				{ return(fnc_); }


	//  VI.  Mutators:
	//  PURPOSE:  To note that 'newArgListPtr' points to the list of
	//	function arguments.  No return value.
	void	setArgListPtr	(ParseTimeListParseTreeNode*	newArgListPtr
				)
				{ argListPtr_ = newArgListPtr; }

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the
	//	class is known then 'returnObjOrClass' is set to that class
	//	and 'returnGenerality' is set to 'CLASS_IORC'.  No return
	//	value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };



      //  PURPOSE:  To represent the implicit construction of an SP instance.
      class	ImplicitConstructionParseTreeNode : public ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the ParseNode with the name of the
	//	new instance if one has been defined, or to 'nullptr' otherwise.
	IdentityConstParseTreeNode*
				subjectPtr_;

	//  PURPOSE:  To hold the class of which an instance should be made.
	Identity		class_;

	//  PURPOSE:  To point to the list of arguments to pass for implicit
	//	construction.
	ParseTimeListParseTreeNode*
				implicitArgListPtr_;

	//  PURPOSE:  To hold corresponding 'value_ty' value of the class
	//	returned by the SPVM code generated by '*this' node.
	value_ty		returnValueType_;

	//  PURPOSE:  To hold the class returned by the SPVM code generated by
	//	'*this' node.
	Identity		returnClass_;

	//  PURPOSE:  To hold the constructed instance.  (For VarDecl and
	//	ConstDecl) to hold the initial value to when it is a single
	//	constant.
	Identity		instance_;

	//  PURPOSE:  (For VarDecl and ConstDecl) to hold 'true' if 'instance_'
	//	has been assigned a single the initializing value, or 'false'
	//	otherwise.
	bool			isInstanceInitValue_;

	//  PURPOSE:  (For instances of If, For, Repeat and While) to hold
	//	'true' if a check should be done to ensure the condition
	//	expression returns a boolean value, or 'false' otherwise.
	//	(For VarDecl and ConstDecl) to hold 'true' if a check should be
	//	done to ensure the initialization expression
	bool			shouldCheckIfExprReturnsValInDomain_;

	//  PURPOSE:  (For VarDecl and ConstDecl) to hold the address of the
	//	compile-time data on the variable/constant that was defined.
	ProgrammerDefinedPotentialVariable*
				varOrConstPtr_;

	//  PURPOSE:  To store the data-structure of relations to check at
	//	the end of the assembly language translation of '*this'.
	std::vector<Identity>	relationsToCheckDs_;

	//  PURPOSE:  (If '*this' represents a loop) To hold the addresses of
	//	any 'Break' instructions in '*this'.
	std::vector<AddrPotentialInstruction*>
				dsOfBreakInstructs_;

	//  PURPOSE:  (If '*this' represents a Break statement) To hold the
	//	address of loop out of which '*this' breaks.
	ImplicitConstructionParseTreeNode*
				 breakingLoopPtr_;

	//  PURPOSE:  (For loops) holds the 'value_ty' of the initialization
	//	expression.
        value_ty		initType_;

	//  PURPOSE:  (For loops and conditionals) holds the 'value_ty' of the
	//	conditional expression.
        value_ty		condType_;

	//  PURPOSE:  (For loops and conditionals) holds the 'value_ty' of the
	//	main body expression.
        value_ty		bodyType_;

	//  PURPOSE:  (For loops) holds the 'value_ty' of the increment
	//	expression.
        value_ty		incType_;

	//  PURPOSE:  (For loops) holds the 'Identity' of the initialization
	//	expression.
        Identity		initObjOrClass_;

	//  PURPOSE:  (For loops and conditionals) holds the 'Identity' of the
	//	conditional expression.
        Identity		condInstOrClass_;

	//  PURPOSE:  (For loops and conditionals) holds the 'Identity' of the
	//	main body expression.
        Identity		body_;

	//  PURPOSE:  (For loops) holds the 'Identity' of the increment
	//	expression.
        Identity		incInstOrClass_;

	//  PURPOSE:  (For loops) holds the generality of the initialization
	//	expression.
        instanceOrClass_ty	initGenerality_;

	//  PURPOSE:  (For loops and conditionals) holds the generality of the
	//	conditional expression.
        instanceOrClass_ty	condGenerality_;

	//  PURPOSE:  (For loops and conditionals) holds the generality of the
	//	main body expression.
        instanceOrClass_ty	bodyGenerality_;

	//  PURPOSE:  (For loops) holds the generality of the increment
	//	expression.
        instanceOrClass_ty	incGenerality_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	ImplicitConstructionParseTreeNode
				()
	  			= delete;

	//  No copy constructor:
	ImplicitConstructionParseTreeNode
				(const ImplicitConstructionParseTreeNode&
				)
	  			= delete;

	//  No copy assignment op:
	ImplicitConstructionParseTreeNode&
		operator=	(const ImplicitConstructionParseTreeNode&
				)
	  			= delete;

      protected :
	//  III.  Protected methods:
	//  PURPOSE:  To return the address of the 'i'-th implicit node
	//	argument.
	ParseTreeNode*
		getImplicitNodePtr
				(size_t		i
				)
				{ return(implicitArgListPtr_->getNodePtr(i)); }

	//  PURPOSE:  To do those checks that can be done at compile time on
	//	the condition argument with index 'argNum' given
	//	compile context 'context'.  'valueType' is set to the 'value_ty'
	//	value corresponding return type that '*this' node has when
	//	computed.  If 'returnClass' is set to 'concept_vt' then 
	//	'returnObjOrClass' is set to the 'Identity' class that '*this'
	//	node would return at runtime.  No return value.
	void	condArg_compileTimeCheck
				(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality,
				 size_t			argNum
				);

	//  PURPOSE:  To do those checks that can be done at compile time on
	//	the body (value-returning) argument with index 'argNum' given
	//	compile context 'context'.  'valueType' is set to the 'value_ty'
	//	value corresponding return type that '*this' node has when
	//	computed.  If 'returnClass' is set to 'concept_vt' then 
	//	'returnObjOrClass' is set to the 'Identity' class that '*this'
	//	node would return at runtime.  No return value.
	void	bodyArg_compileTimeCheck
				(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality,
				 size_t			argNum
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of the condition
	//	argument with index 'argNum' (and nodes underneath if any)
	//	given compile-time context 'context, *if* that node is not
	//	compile-time resolvable to either 'true' or 'false'.  If it is
	//	not resolvable then 'updatedVarPtr' is set to the address of
	//	the variable that the instruction(s) update, and 'isConstant'
	//	is set to 'false'.  However, if the argument with index
	//	'argNum' is compile-time resolvable to either 'true' or
	//	'false', then 'isConstant' is set to 'true', and 'isTrue' is
	//	set to 'true' if the value is resolved to 'true' or is set to
	//	'false' otherwise.   No return value.
	void	condArg_toAssembly
				(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr,
				 size_t			argNum,
				 bool&			isConstant,
				 bool&			isConstantTrue
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of body (value-
	//	 returning) argument with index 'argNum' (and nodes underneath
	//	 if any) given compile-time context 'context.  'updatedVarPtr'
	//	is set to the address of the variable that the instruction(s)
	//	update.  No return value.
	void	bodyArg_toAssembly
				(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr,
				 size_t			argNum
				);

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of helper code (non
	//	 value-returning) argument with index 'argNum' (and nodes
	//	 underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that the
	//	instruction(s) update.  No return value.
	void	helperArg_toAssembly
				(CompileContext&	context,
				 size_t			argNum
				);

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note the creation of 
	ImplicitConstructionParseTreeNode
				(const Identity&    newClass,
				 ParseTimeListParseTreeNode*
						    newImplicitArgListPtr
				) :
				ParseTreeNode(),
				subjectPtr_(nullptr),
				class_(newClass),
				implicitArgListPtr_
						(newImplicitArgListPtr),
				returnValueType_(idea_vt),
				returnClass_(IdentityStaticVars::Idea),
				instance_(),
				isInstanceInitValue_(false),
				shouldCheckIfExprReturnsValInDomain_(true),
				varOrConstPtr_(nullptr),
				relationsToCheckDs_(),
				dsOfBreakInstructs_(),
				breakingLoopPtr_(nullptr),
				initType_(null_vt),
				condType_(null_vt),
				bodyType_(null_vt),
				incType_(null_vt),
				initObjOrClass_(),
				condInstOrClass_(),
				body_(),
				incInstOrClass_(),
				initGenerality_(NOT_IN_KB_IORC),
				condGenerality_(NOT_IN_KB_IORC),
				bodyGenerality_(NOT_IN_KB_IORC),
				incGenerality_(NOT_IN_KB_IORC)
				{ }

	//  PURPOSE:  To initialize '*this' to note the creation of 
	ImplicitConstructionParseTreeNode
				(IdentityConstParseTreeNode*
						    newSubjectPtr,
				 const Identity&    newClass,
				 ParseTimeListParseTreeNode*
						    newImplicitArgListPtr
				) :
				ParseTreeNode(),
				subjectPtr_(newSubjectPtr),
				class_(newClass),
				implicitArgListPtr_
						(newImplicitArgListPtr),
				returnValueType_(idea_vt),
				returnClass_(IdentityStaticVars::Idea),
				instance_(),
				isInstanceInitValue_(false),
				shouldCheckIfExprReturnsValInDomain_(true),
				varOrConstPtr_(nullptr),
				relationsToCheckDs_(),
				dsOfBreakInstructs_(),
				breakingLoopPtr_(nullptr),
				initType_(null_vt),
				condType_(null_vt),
				bodyType_(null_vt),
				incType_(null_vt),
				initObjOrClass_(),
				condInstOrClass_(),
				body_(),
				incInstOrClass_(),
				initGenerality_(NOT_IN_KB_IORC),
				condGenerality_(NOT_IN_KB_IORC),
				bodyGenerality_(NOT_IN_KB_IORC),
				incGenerality_(NOT_IN_KB_IORC)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~ImplicitConstructionParseTreeNode
				()
				{
				  //  Do *not* delete() 'varOrConstPtr_', 
				  //   'breakingLoopPtr_' or anything in
				  //   'dsOfBreakStatements_' .  '*this' does
				  //   not own it.
				  delete(implicitArgListPtr_);
				  delete(subjectPtr_);
				}

	//  V.  Accessors:
	//  PURPOSE:  To return '*this' if '*this' represents a loop, or to
	//	return the first parent of '*this' that represents a loop, or
	//	to return 'nullptr' if no parents are loops.
	ImplicitConstructionParseTreeNode*
		getInnermostLoopPtr
				()
				const;

	//  PURPOSE:  To return the number of implicit nodes.  No parameters.
	size_t	getNumImplicitArgs
				()
				const
				{
				  if  (implicitArgListPtr_ != nullptr)
				  {
				    return(implicitArgListPtr_->getLength());
				  }
				  else
				  {
				    return 0;
				  }
				}

	//  PURPOSE:  To return the address of the ParseNode with the name of
	//	the new instance if one has been defined, or to 'nullptr'
	//	otherwise.  No arguments.
	IdentityConstParseTreeNode*
		getSubjectPtr	()
				const
				{ return(subjectPtr_); }

	//  PURPOSE:  To return the class of which an instance should be made.
	//	No parameters.
	const Identity&
		getClass	()
				const
				{ return(class_); }

	//  PURPOSE:  To return the address of the 'i'-th implicit node
	//	argument.
	const ParseTreeNode*
		getConstImplicitNodePtr
				(size_t		i
				)
				const
				{ return(implicitArgListPtr_->getNodePtr(i)); }

	//  PURPOSE:  To return the corresponding 'value_ty' value of the class
	//	returned by the SPVM code generated by '*this' node.
	value_ty
		getReturnValueType
				()
				const
				{ return(returnValueType_); }

	//  PURPOSE:  To return the class returned by the SPVM code generated
	//  	by '*this' node.
	const Identity&
		getReturnClass	()
				const
				{ return(returnClass_); }

	//  PURPOSE:  (For instances of If, For, Repeat and While) to return
	//	'true' if a check should be done to ensure the condition
	//	expression returns a boolean value, or 'false' otherwise.
	//	No parameters.
	bool	shouldCheckIfExprReturnsValInDomain
				()
				const
				{return(shouldCheckIfExprReturnsValInDomain_);}

	//  PURPOSE:  (For VarDecl and ConstDecl) to return the initial value
	//	to when it is a single constant.  No parameters.
	const Identity&
		getInitValue	()
				const
				{ return(instance_); }

	//  PURPOSE:  (For VarDecl and ConstDecl) to return 'true' if
	//	'instance_' has been assigned a single the initializing value,
	//	or 'false' otherwise.  No parameters.
	bool	isInstanceInitValue
				()
				const
				{ return(isInstanceInitValue_); }

	//  PURPOSE:  (For VarDecl and ConstDecl) to return the address of the
	//	compile-time data on the variable/constant that was defined.
	//	No parameters.
	ProgrammerDefinedPotentialVariable*
		getVarOrConstPtr()
				const
				{ return(varOrConstPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To note that relation 'relation' should be checked at
	//	the end of assembly translation of '*this' the node.  No
	//	return value.
	void	noteRelationToCheckAtEnd
				(const Identity&	relation
				)
				{
				  relationsToCheckDs_.push_back(relation);
				}

	//  PURPOSE:  To register that 'breakPtr' as a Break instruction that
	//  	breaks out of '*this', if '*this' represents a loop.
	void	registerBreak 	(AddrPotentialInstruction* breakPtr
				)
				{
				  dsOfBreakInstructs_.push_back(breakPtr);
				}

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To do those checks that can be done at compile time given
	//	compile context 'context'.  If 'valueType' is set to the
	//	'value_ty' value corresponding return type that '*this' node
	//	has when computed.  If the specific instance is known then
	//	'returnObjOrClass' is set to that instance and
	//	'returnGenerality' is set to 'INSTANCE_IORC'.  If only the
	//	class is known then 'returnObjOrClass' is set to that class and
	//	'returnGenerality' is set to 'CLASS_IORC'.  No return value.
	void	compileTimeCheck(CompileContext&	context,
				 value_ty&		valueType,
				 Identity&		returnObjOrClass,
				 instanceOrClass_ty&	returnGenerality
				);

	//  PURPOSE:  To return the Identity that represents '*this' node given
	//	compile-time context 'context'.
	const Identity&
		getIdentity	(CompileContext&	context
				)
				const
				{
				  return(instance_);
				}

	//  PURPOSE:  To create and append to the end of 'instrPtrList' a
	//	preliminary assembly language translation of '*this' node (and
	//	 nodes underneath if any) given compile-time context 'context.
	//	'updatedVarPtr' is set to the address of the variable that
	//	the instruction(s) update.  No return value.
	void	toAssembly	(CompileContext&	context,
				 PotentialVariable*&	updatedVarPtr
				);

      };


      //  PURPOSE:  To represent parse tree nodes for
      class	StructParseTreeNode : public ParseTreeNode
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the
	Identity		id_;

	//  PURPOSE:  To hold the
	std::string		name_;

	//  PURPOSE:  To hold 'true' if '*this' is explicitly noted as an
	//	instance, or 'false' if it could be a class.
	bool			isInstance_;

	//  PURPOSE:  To hold the 
	Identity		classId_;

	//  PURPOSE:  To hold the
	std::string		className_;

	//  PURPOSE:  To point to
	std::list<ParseTreeNode>*	implicitListPtr_;

//	//  PURPOSE:  To point to 
//	std::list<>*	explicitListPtr_;

	//  PURPOSE:  To hold 'true' if '*this' structure has been noted as
	//	"final", or 'false' otherwise.
	bool			isFinalized_;

	//  PURPOSE:  To hold 'true' if '*this' structure has been noted as
	//	"noMore", or 'false' otherwise.
	bool			isNoMored_;

	//  II.  Disallowed auto-generated methods:

      };

