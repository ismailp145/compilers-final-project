/*-------------------------------------------------------------------------*
 *---									---*
 *---		PotentialVariable.h					---*
 *---									---*
 *---	    This file declares classes that represent potential		---*
 *---	variables in the virtual machine code.				---*
 *---									---*
 *---		    This file is classified as: DECLASSIFIED		---*
 *---			Applied Philosophy of Science			---*
 *---									---*
 *---	----	----	----	----	----	----	----	-----	---*
 *---									---*
 *---	Version 9a		2016 December 23	Joseph Phillips	---*
 *---									---*
 *---				2017 September 5	Joseph Phillips	---*
 *---									---*
 *---	    Moved to code KnowledgeBase/ subdirectory and kb namespace.	---*
 *---									---*
 *-------------------------------------------------------------------------*/

      class	PotentialVariable
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the value type of which values of '*this' variable
	//  	must reside.
	value_ty		valueType_;

	//  PURPOSE:  To hold the class of which values of '*this' variable must
	//	reside.
	Identity		class_;

	//  PURPOSE:  To hold the index of '*this' variable in the activation
	//	record.
	variableIndex_ty	variableIndex_;

	//  PURPOSE:  To hold 'true' if this variable might change after being
	//	initialized, or 'false' if it is known not to change after
	//	being initialized.
	bool			mightChange_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	PotentialVariable	();

	//  No copy constructor:
	PotentialVariable	(const PotentialVariable&
				);

	//  No copy assignment op:
	PotentialVariable&
		operator=	(const PotentialVariable&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note the usage of a potential
	//	variable with value type 'newType' and activation record index
	//	'newVarIndex'.
	PotentialVariable	(value_ty		newType,
				 variableIndex_ty	newVarIndex
				 			= NULL_VARIABLE_INDEX
				) :
				valueType_(newType),
				class_(valueTyToIdentityClassMap(newType)),
				variableIndex_(newVarIndex),
				mightChange_(false)
				{ }

	//  PURPOSE:  To initialize '*this' to note the usage of a potential
	//	variable with value type 'newType' and activation record index
	//	'newVarIndex'.
	PotentialVariable	(value_ty		newType,
				 const Identity&	newClass,
				 variableIndex_ty	newVarIndex
							= NULL_VARIABLE_INDEX
				) :
				valueType_(newType),
				class_(newClass),
				variableIndex_(newVarIndex),
				mightChange_(false)
				{ }

	//  PURPOSE:  To initialize '*this' to note the usage of a potential
	//	variable with class 'newClass' and activation record index
	//	'newVarIndex'.
	PotentialVariable	(const Identity&	newClass,
				 variableIndex_ty	newVarIndex
							= NULL_VARIABLE_INDEX
				) :
				valueType_(null_vt),
				class_(newClass),
				variableIndex_(newVarIndex),
				mightChange_(false)
				{
				  //  I.  Application validity check:

				  //  II.  Initialize members:
				  valueType_	= identityClassToValueTyMap
							(getClass());

				  //  III. Finished:
				}

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	virtual
	~PotentialVariable	()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To hold 'true' if '*this' variable is still used after
	//	optimizations have been applied, or 'false' otherwise.
	virtual
	bool	isUsed		()
				const
				= 0;

	//  PURPOSE:  To return 'true' if '*this' represents a programmer-
	//  	defined variable, or 'false' otherwise.  No parameters.
	virtual
	bool	isProgrammerDefined
				()
				const
				{ return(false); }

	//  PURPOSE:  To return 'true' if '*this' represents a programmer-
	//  	defined variable, or 'false' otherwise.  No parameters.
	virtual
	bool	isReturn	()
				const
				{ return(false); }

	//  PURPOSE:  To return the value type of which values of '*this'
	//	variable must reside.  No parameters.
	value_ty
		getValueType  	()
				const
				{ return(valueType_); }

	//  PURPOSE:  To return the class of which values of '*this' variable
	//	must reside.  No parameters.
	const Identity&
		getClass	()
				const
				{ return(class_); }

	//  PURPOSE:  To return the index of '*this' variable in the activation
	//	record.  No parameters.
	variableIndex_ty
		getVarIndex	()
				const
				{ return(variableIndex_); }

	//  PURPOSE:  To return 'true' if this variable might change after being
	//	initialized, or 'false' if it is known not to change after
	//	being initialized.  No parameters.
	bool	mightChange	()
				const
				{ return(mightChange_); }

	//  PURPOSE:  To return 'true' if this value is constant, or 'false' if
	//	it may vary.
	virtual
	bool	isConstant	()
				const
				{ return(false); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the index of '*this' variable in the activation
	//	record to 'newVarIndex'.  No return value.
	void	setVarIndex	(variableIndex_ty	newVarIndex
				)
				{ variableIndex_	= newVarIndex; }

	//  PURPOSE:  To note that '*this' variable is still used after
	//	optimizations have been applied.  No parameters.  No return
	//	value.
	virtual
	void	noteIsUsed	()
				{
				}

	//  PURPOSE:  To note that '*this' variable might change its value.
	//  	No parameters.  No return value.
	void	setMightChange	()
				{
				  mightChange_	= true;
				}

	//  VII.  Methods that do main and misc. work of class:
      };


      //  PURPOSE:  To represent the raw, assembly language specified offset
      //	numbering of a variable.
      class	RawAssemblyPotentialVariable : public PotentialVariable
      {
	//  I.  Member vars:

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	RawAssemblyPotentialVariable
				();

	//  No copy constructor:
	RawAssemblyPotentialVariable
				(const RawAssemblyPotentialVariable&
				);

	//  No copy assignment op:
	RawAssemblyPotentialVariable&
		operator=	(const RawAssemblyPotentialVariable&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' variable to have index 'newIndex'.
	//	No return value.
	RawAssemblyPotentialVariable
				(variableIndex_ty	newIndex,
				 const Identity&	domain
				) :
				PotentialVariable(domain,newIndex)
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To hold 'true' if '*this' variable is still used after
	//	optimizations have been applied, or 'false' otherwise.
	bool	isUsed		()
				const
				{
				  return(true);
				}

	//  PURPOSE:  To return 'true' if '*this' represents a programmer-
	//  	defined variable, or 'false' otherwise.  No parameters.
	bool	isProgrammerDefined
				()
				const
				{ return( !isReturn() ); }

	//  PURPOSE:  To return 'true' if '*this' represents a programmer-
	//  	defined variable, or 'false' otherwise.  No parameters.
	bool	isReturn	()
				const
				{ return
				    (getVarIndex() ==
				     RETURN_VALUE_VARIABLE_INDEX
				    );
				}

      };


      //  PURPOSE:  To represent compiler-defined variables.
      class	CompilerDefinedPotentialVariable : public PotentialVariable
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold 'true' if '*this' variable is still used after
	//	optimizations have been applied, or 'false' otherwise.
	bool			isUsed_;

	//  PURPOSE:  To hold 'true' if '*this' variable holds a loaded
	//	constant or 'false' otherwise.
	bool			doesHoldLoadedConst_;

	//  PURPOSE:  To hold the knowledge base run of the constant to load
	//	into '*this' variable, if there is one.
	kbRunIndex_ty		kbRunIndex_;

	//  PURPOSE:  To hold the constant pool index of the constant to load
	//	into '*this' variable, if there is one.
	constPoolIndex_ty	constPoolIndex_;

	//  II.  Disallowed auto-generated methods:

      protected :
	//  III.  Protected methods:
	//  No default constructor:
	CompilerDefinedPotentialVariable
				();

	//  No copy constructor:
	CompilerDefinedPotentialVariable
				(const CompilerDefinedPotentialVariable&
				);

	//  No copy assignment op:
	CompilerDefinedPotentialVariable&
		operator=	(const CompilerDefinedPotentialVariable&
				);

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note the usage of a potential
	//	variable with value type 'valueType' and constant pool index
	//	('newKbRunIndex','newConstIndex').
	CompilerDefinedPotentialVariable
				(value_ty		valueType,
				 variableIndex_ty	newVarIndex
							= NULL_VARIABLE_INDEX
				) :
				PotentialVariable(valueType,newVarIndex),
				isUsed_(false),
				doesHoldLoadedConst_(false),
				kbRunIndex_(0x0),
				constPoolIndex_(0x0)
				{
				}

	//  PURPOSE:  To initialize '*this' to note the usage of a potential
	//	variable with value type 'valueType', class 'newClass', and
	//	variable index 'newVarIndex'.
	CompilerDefinedPotentialVariable
				(value_ty		valueType,
				 const Identity&	newClass,
				 variableIndex_ty	newVarIndex
							= NULL_VARIABLE_INDEX
				) :
				PotentialVariable
					(valueType,newClass,newVarIndex),
				isUsed_(false),
				doesHoldLoadedConst_(false),
				kbRunIndex_(0x0),
				constPoolIndex_(0x0)
				{
				}

	//  V.  Accessors:
	//  PURPOSE:  To return 'true' if '*this' variable is still used after
	//	optimizations have been applied, or 'false' otherwise.  No
	//	parameters.
	bool	isUsed		()
				const
				{
				  return(isUsed_);
				}

	//  PURPOSE:  To return 'true' if '*this' variable holds a loaded
	//	constant or 'false' otherwise.  No parameters.
	bool	doesHoldLoadedConst
				()
				const
				{ return(doesHoldLoadedConst_); }

	//  PURPOSE:  To return the knowledge base run of the constant to load
	//	into '*this' variable, if there is one.  No parameters.
	kbRunIndex_ty
		getKbRunIndex	()
				const
				{ return(kbRunIndex_); }

	//  PURPOSE:  To return the constant pool index of the constant to load
	//	into '*this' variable, if there is one.  No parameters.
	constPoolIndex_ty
		getConstPoolIndex
				()
				const
				{ return(constPoolIndex_); }

	//  VI.  Mutators:
	//  PURPOSE:  To note that '*this' variable is still used after
	//	optimizations have been applied.  No parameters.  No return
	//	value.
	void	noteIsUsed	()
				{ isUsed_	= true;
				}

	//  PURPOSE:  To note that '*this' variable holds a loaded constant.
	//	No return value.
	void	noteHoldsLoadedConst
				(kbRunIndex_ty		newKbRunIndex,
				 constPoolIndex_ty	newConstPoolIndex
				)
				{
				  doesHoldLoadedConst_	= true;
				  kbRunIndex_		= newKbRunIndex;
				  constPoolIndex_	= newConstPoolIndex;
				}

	//  VII.  Methods that do main and misc. work of class:
      };


      //  PURPOSE:  To represent the variable in which the value is returned.
      class	ReturnValuePotentialVariable : public PotentialVariable
      {
	//  I.  Member vars:

	//  II.  Disallowed auto-generated methods:

      protected :
	//  III.  Protected methods:
	//  No copy constructor:
	ReturnValuePotentialVariable
				(const ReturnValuePotentialVariable&
				);

	//  No copy assignment op:
	ReturnValuePotentialVariable&
		operator=	(const ReturnValuePotentialVariable&
				);

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to represent the variable that
	//  	receives the return value of a function or snippet of code.
	//	The value of '*this' variable will be a member of class
	//	'newClass'.  No return value.
	ReturnValuePotentialVariable
				(value_ty		newType,
				 const Identity&	newClass
				) :
				PotentialVariable
					(newType,
					 newClass,
					 RETURN_VALUE_VARIABLE_INDEX
					)
				{
				}

	//  V.  Accessors:
	//  PURPOSE:  To hold 'true' if '*this' variable is still used after
	//	optimizations have been applied, or 'false' otherwise.
	bool	isUsed		()
				const
				{
				  return(true);
				}

	//  PURPOSE:  To return 'true' if '*this' represents a programmer-
	//  	defined variable, or 'false' otherwise.
	bool	isReturn	()
				const
				{ return(true); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc. work of class:
      };


      //  PURPOSE:  To represent programmer-defined variables.
      class	ProgrammerDefinedPotentialVariable : public PotentialVariable
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the name of '*this' VarEntry.
	std::string		name_;

	//  PURPOSE:  To hold the scope depth of '*this' VarEntry.
	int			depth_;

	//  PURPOSE:  To hold the initial value, if it is given as a constant.
	Identity		initVal_;

	//  PURPOSE:  To hold 'true' if 'initVal_' has been defined.
	bool			isInitValDefined_;

	//  PURPOSE:  To hold 'true' if this value is constant, or 'false' if it
	//	may vary.
	bool			isConstant_;

	//  PURPOSE:  To hold the address of next
	//	ProgrammerDefinedPotentialVariable from a previous depth that
	//  	shares the same name as '*this'.
	ProgrammerDefinedPotentialVariable*
				prevOfSameNamePtr_;

	//  PURPOSE:  To hold the address of next
	//	ProgrammerDefinedPotentialVariable at the same depth as	'*this'.
	ProgrammerDefinedPotentialVariable*
				nextOnSameLevelPtr_;

	//  PURPOSE:  To hold the address of next
	//  	ProgrammerDefinedPotentialVariable, of any level.
	ProgrammerDefinedPotentialVariable*
				nextPtr_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	ProgrammerDefinedPotentialVariable
				();

	//  No copy constructor:
	ProgrammerDefinedPotentialVariable
				(ProgrammerDefinedPotentialVariable&
				);

	//  No copy assignment op:
	ProgrammerDefinedPotentialVariable&
		operator=	(ProgrammerDefinedPotentialVariable&
				);


      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To create a new 'ProgrammerDefinedPotentialVariable'
	//	instance with name 'newName' and at depth 'newDepth'.  Also
	//	inserts '*this' in the linked list of existing
	//	ProgrammerDefinedPotentialVariable instances with the same name
	//	at lower depths pointed to by 'newPrevOfSameNamePtr', in the
	//	linked list of ProgrammerDefinedPotentialVariable instances at
	//	the same depth pointed to by 'newNextOnSameLevelPtr', and in
	//	the linked list of all ProgrammerDefinedPotentialVariable
	//	instances pointed to by 'newNextPtr'.
	ProgrammerDefinedPotentialVariable
				(const std::string&	newName,
				 const Identity&	newClass,
				 bool  			newIsConstant,
				 int   			newDepth,
				 ProgrammerDefinedPotentialVariable*
							newPrevOfSameNamePtr,
				 ProgrammerDefinedPotentialVariable*
							newNextOnSameLevelPtr,
				 ProgrammerDefinedPotentialVariable*
							newNextPtr,
				 variableIndex_ty	newVarIndex
							= NULL_VARIABLE_INDEX
				) :
				PotentialVariable(newClass,newVarIndex),
				name_(newName),
				depth_(newDepth),
				initVal_(),
				isInitValDefined_(false),
				isConstant_(newIsConstant),
				prevOfSameNamePtr_(newPrevOfSameNamePtr),
				nextOnSameLevelPtr_(newNextOnSameLevelPtr),
				nextPtr_(newNextPtr)
				{
				}

	//  PURPOSE:  To release resources.  No parameters.  No return value.
	~ProgrammerDefinedPotentialVariable		()
  				{
				  delete(nextPtr_);
				}

	//  V.  Accessors:
	//  PURPOSE:  To hold 'true' if '*this' variable is still used after
	//	optimizations have been applied, or 'false' otherwise.
	bool	isUsed		()
				const
				{
				  return(true);
				}

	//  PURPOSE:  To return 'true' if '*this' represents a programmer-
	//  	defined variable, or 'false' otherwise.
	bool	isProgrammerDefined
				()
				const
				{ return(true); }

	//  PURPOSE:  To return 'true' if this value is constant, or 'false' if
	//	it may vary.
	bool	isConstant	()
				const
				{ return(isConstant_); }

	//  PURPOSE:  To return the name of '*this'
	//	ProgrammerDefinedPotentialVariable.  No parameters.
	const std::string&
		getName		()
				const
				{ return(name_); }

	//  PURPOSE:  To return the scope depth of '*this'
	//	ProgrammerDefinedPotentialVariable.  No parameters.
	unsigned int
		getDepth	()
  				const
				{ return(depth_); }

	//  PURPOSE:  To return the initial value, if it is given as a constant.
	//	No parameters.
	const Identity&
		getInitVal	()
				const
				{ return(initVal_); }

	//  PURPOSE:  To hold 'true' if 'initVal_' has been defined.  No
	//	parameters.
	bool	isInitValDefined()
				const
				{ return(isInitValDefined_); }

	//  PURPOSE:  To return the address of the previous
	//	ProgrammerDefinedPotentialVariable of a lower scope depth with
	//	the same name as '*this' ProgrammerDefinedPotentialVariable, or
	//	nullptr if one does not exist.  No parameters.
	ProgrammerDefinedPotentialVariable*
		getPrevOfSameNamePtr
				()
				const
				{ return(prevOfSameNamePtr_); }

	//  PURPOSE:  To return the address of the next
	//	ProgrammerDefinedPotentialVariable at the same scope depth as
	//	'*this' ProgrammerDefinedPotentialVariable.  No parameters.
	ProgrammerDefinedPotentialVariable*
		getNextOnSameLevelPtr
				()
				const
				{ return(nextOnSameLevelPtr_); }

	//  PURPOSE:  To return the address of next
	//  	ProgrammerDefinedPotentialVariable, of any level.
	ProgrammerDefinedPotentialVariable*
		getNextPtr	()
				const
				{ return(nextPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the initial value to 'newVal'.  No return value.
	void	setInitVal	(const Identity&	newVal
				)
				{
				  initVal_		= newVal;
				  isInitValDefined_	= true;
				}

	//  VII.  Methods that do main and misc. work of class:
      };
