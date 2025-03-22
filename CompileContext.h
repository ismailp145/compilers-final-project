/*-------------------------------------------------------------------------*
 *---									---*
 *---		CompileContext.h					---*
 *---									---*
 *---	    This file declares class(es) that keep track of information	---*
 *---	used during compilation.  Keeps track of which registers are	---*
 *---	currently in use.  Also keeps track of variables via symbol	---*
 *---	table data-structures and algorithms according to that		---*
 *---	described by Charles Fisher, Ron Cytron, Richard LeBlanc Jr.	---*
 *---	"Crafting a Compiler", Addison Wesley, 2010.			---*
 *---									---*
 *---		    This file is classified as: DECLASSIFIED		---*
 *---			Applied Philosophy of Science			---*
 *---									---*
 *---	----	----	----	----	----	----	----	-----	---*
 *---									---*
 *---	Version 9a		2016 August 3		Joseph Phillips	---*
 *---									---*
 *---				2017 September 5	Joseph Phillips	---*
 *---									---*
 *---	    Moved to code KnowledgeBase/ subdirectory and kb namespace.	---*
 *---									---*
 *-------------------------------------------------------------------------*/

      typedef	std::list<CompilerDefinedPotentialVariable*>
		CompilerDefnVarPtrDS;

      typedef	CompilerDefnVarPtrDS::iterator
		CompilerDefnVarPtrDSIter;

      typedef	CompilerDefnVarPtrDS::const_iterator
		CompilerDefnVarPtrCDSIter;

      class	CompileContext
      {
	//  I.  Member vars:
	//  PURPOSE:  To tell the degree to which optimization should be done.
	howOptimize_ty		howOptimize_;

	//  PURPOSE:  To hold the assumption context to use while compiling.
	Identity		assumeContext_;

	//  PURPOSE:  To hold the address of the CompileContext upon which
	//	'*this' is based, or 'nullptr' if there is no such instance.
	const CompileContext*	baseContextPtr_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'null_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedNulPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'boolean_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedBoolPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'integer_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedIntPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'rational_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedRatPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'real_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedRealPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'complex_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedCmplxPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'concept_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedCncptPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'annotated_boolean_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedAnnotatedBoolPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'annotated_integer_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedAnnotatedIntPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'annotated_rational_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedAnnotatedRatPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'annotated_real_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedAnnotatedRealPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'annotated_complex_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedAnnotatedCmplxPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'annotated_concept_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedAnnotatedCncptPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'justified_boolean_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedJustifiedBoolPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'justified_integer_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedJustifiedIntPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'justified_rational_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedJustifiedRatPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'justified_real_vt' are currently
	//	not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedJustifiedRealPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'justified_complex_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedJustifiedCmplxPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'justified_concept_vt' are
	//	currently not in use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedJustifiedCncptPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'string_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedStrPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'vList_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedVListPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'nList_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedNListPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'bag_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedBagPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'map_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedMapPotVarDS_;

	//  PURPOSE:  To keep track of which compiler-defined potential
	//	variables of 'value_ty' type 'idea_vt' are currently not in
	//	use by the current instructions.
	std::set<CompilerDefinedPotentialVariable*>
				notInUseCompilerDefinedIdeaPotVarDS_;

	//  PURPOSE:  To map from variable names to the address of the
	//	ProgrammerDefinedPotentialVariable
	//	instance at the highest depth that has that name. 
	std::map<std::string,ProgrammerDefinedPotentialVariable*>
				nameToEntryMap_;

	//  PURPOSE:  To hold a starting pointer to a linked list (maintained
	//	 by member var 'nextOnSameLevelPtr_') of
	//	ProgrammerDefinedPotentialVariable instances at the depth
	//	indexed by the corresponding std::vector index.
	std::vector<ProgrammerDefinedPotentialVariable*>
				scopeStack_;

	//  PURPOSE:  To keep track of the current scope depth.
	unsigned int		depth_;

	//  PURPOSE:  To hold a linked list of
	//	ProgrammerDefinedPotentialVariable instances that have been
	//	declared.
	ProgrammerDefinedPotentialVariable*
				varEntryLinkedList_;

	//  PURPOSE:  To hold the number of items in 'varEntryLinkedList_'.
	int			varEntryLinkedListLen_;

	//  PURPOSE:  To keep track of the potential compiler-defined variables.
	CompilerDefnVarPtrDS	compilerDefinedVarList_;

	//  PURPOSE:  To hold the address of the "@this" variable (if one
	//	 should exist)
	ProgrammerDefinedPotentialVariable*
				thisSubjVarPtr_;

	//  PURPOSE:  To point to the entry for the return value variable.
	ReturnValuePotentialVariable*
				returnValueVarPtr_;

	//  PURPOSE:  To keep track of the next variable index to use, not for
	//  	the runtime environment, but just to distinguish variables
	//  	as they are created.
	variableIndex_ty	nextVarIndex_;

	//  PURPOSE:  To map from Identity constants to the variables that
	//	have been loaded with their values.
	std::map<Identity,PotentialVariable*>
				identityToVarMap_;

	//  PURPOSE:  To hold the address of the list of addresses of potential
	//	instructions to execute before the main computing of the
	//	function being compiled, linked and assembled.
	std::list<PotentialInstruction*>*
				preInstrPtrListPtr_;

	//  PURPOSE:  To hold the address of the list of addresses of potential
	//	instructions to execute for the main computing of the function
	//	being compiled, linked and assembled.
	std::list<PotentialInstruction*>*
				instrPtrListPtr_;

	//  PURPOSE:  To hold the subject currently being compiled.
	Identity		subject_;

	//  PURPOSE:  To store the addresses of the parse tree nodes of the
	//	user-defined methods as they are parsed for the purpose of
	//	populating 'methDefnNodeToProgressionMap_' after parsing but
	//	before checking and linking.
	//	NOTE: This data-structure differs from
	//	      'methDefnPtrToLinkAssembleLoadDS_' in that:
	//	(1) addresses are placed in at compile-time, not checking-time.
	//	(2) the only CompileContext that has anything in this data-
	//	    structure is the top-level one belonging to the parser
	//	(3) it will be used before check-time to create the
	//	    MethodDefnTemporalProgression nodes under which the
	//	    successfully created UserDefinedSpecificMethodDefn
	//	    instances will go at assemble-link-load time.
	std::list<MethodDefnParseTreeNode*>
				parseTimeMethDefnPtrDS_;

	//  PURPOSE:  To hold the list of method definitions present at the
	//	same level as '*this' CompileContext.
	//	NOTE:  '*this' does _not_ own the method definitions contained
	//	       inside.
	//	NOTE: This data-structure differs from
	//	      'parseTimeMethDefnPtrDS_' in that:
	//	(1) addresses are placed in at checking-time, not compile-time.
	//	(2) CompileContext instances other than the root may have
	//	    entries in this data-structure.
	//	(3) it will be used at link-assembly-load time to load more
	//	    deeply-embedded definitions earlier in the instruction
	//	    segment of the active knowledge base run, and shallower
	//	    definitions later in the instruction segment.
	std::vector<MethodDefnParseTreeNode*>
				methDefnPtrToLinkAssembleLoadDS_;

	//  PURPOSE:  To implement the stack of Context instances.
	std::vector<Identity>	contextStack_;

	//  PURPOSE:  To map from created hypothetical Identity instances to
	//	the context in which they were created.
	std::map<Identity,Identity>
				hypotheticalToContextMap_;

	//  PURPOSE:  To implement the stack of the addresses of the compiler
	//	variables telling the context to which to assert.
	std::vector<CompilerDefinedPotentialVariable*>
				contextVarPtrStack_;

	//  PURPOSE:  To hold 'true' when inside an Hypothesize at compile-time,
	//	or 'false' otherwise.
	bool			isInsideCompileTimeHypothesize_;

	//  PURPOSE:  To hold the names of the identities that were recently
	//	parsed.
	static
	StringTempStore		identityNameStore_;

	//  II.  Disallowed auto-generated methods:
	//  No copy constructor:
	CompileContext		(const CompileContext&
				);

	//  No copy assignment assignment:
	CompileContext&
		operator=	(const CompileContext&
				);

      protected :
	//  III.  Protected methods:
	//  PURPOSE:  To release the resources of '*this' CompileContext.
	//	No parameters.  No return value.
	void	releaseResources();
				
	//  PURPOSE:  To return the appropriate initial value for a variable
	//	given that its type is 'type' and domain is class 'domain'.
	const Identity&
		getInitVarValGivenType
				(value_ty		type,
				 const Identity&	domain
				);

	//  PURPOSE:  To declare the "this" variable.  'varClass' tells the
	//	domain of the variable.  Return C++ address of new variable.
	ProgrammerDefinedPotentialVariable*
		declareThisVar	(const Identity&	varClass
				);

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to context to compile at
	//	optimization level 'newHowOptimize' and to link according to
	//	'newHowLink' with referenece kb run indexed by 'newKbIndex'.
	//	No return value.
	CompileContext		(howOptimize_ty		newHowOptimize,
				 kbRunIndex_ty		newKbIndex
				);

	//  PURPOSE:  To initialize '*this' to context to compile at
	//	optimization level 'newHowOptimize' and link specification
	//	'newLinkSpecification'.  If '*this' context is for compiling
	//	method other than 'mainMethod' then 'newSubject' tells
	//	the return class of the method and 'newBaseContextPtr' is the
	//	address of the compile context one level deeper than '*this.
	//	No return value.
	CompileContext		(howOptimize_ty		newHowOptimize,
				 const Identity&	newSubject,
				 const CompileContext*	newBaseContextPtr
				       			= nullptr
				);

	//  PURPOSE:  To release the resources of '*this'.  No parameters.
	//	No return value.
	~CompileContext		();

	//  V.  Accessors:
	//  PURPOSE:  To return the degree to which optimization should be done.
	//	No parameters.
	howOptimize_ty
		getHowOptimize	()
				const
				{ return(howOptimize_); }

        //  PURPOSE:  To tell the index of the knowledge base run that
        //	'howLink_' uses as a reference (if it refers to one).
        kbRunIndex_ty
		getKbRunIndex	()
				const
				{
				  return(KB_RUN_BASE_ONTOL_INDEX);
				}

	//  PURPOSE:  To return the assumption context to use while compiling.
	//	No parameters.
	const Identity&
		getAssumeContext()
				const
				{ return(assumeContext_); }

	//  PURPOSE:  To return the address of the assumption context to use
	//	while compiling.  No parameters.
	const Identity*
		getAssumeContextPtr()
				const
				{ return(&assumeContext_); }

	//  PURPOSE:  To return the address of the CompileContext upon which
	//	'*this' is based, or 'nullptr' if there is no such instance.
	//	No parameters.
	const CompileContext*
		getBaseContextPtr
				()
				const
				{ return(baseContextPtr_); }

	//  PURPOSE:  To return the number of items in 'varEntryLinkedList_'.
	//	No parameters.
	int	getVarEntryLinkedListLen
				()
				const
				{ return(varEntryLinkedListLen_); }

	//  PURPOSE:  To return the iterator value to the beginning of the
	//	data-structure that holds the pointers to compiler-defined vars.
	CompilerDefnVarPtrDSIter
		getCompDefnVarPtrDSBegin
				()
				{ return(compilerDefinedVarList_.begin()); }

	//  PURPOSE:  To return the iterator value to just beyond the end of the
	//	data-structure that holds the pointers to compiler-defined vars.
	CompilerDefnVarPtrDSIter
		getCompDefnVarPtrDSEnd
				()
				{ return(compilerDefinedVarList_.end()); }

	//  PURPOSE:  To return the address of the entry for the return value
	//	variable.
	ReturnValuePotentialVariable*
		getReturnValueVarPtr
				()
				const
				{ return(returnValueVarPtr_); }

	//  PURPOSE:  To hold the address of the list of addresses of potential
	//	instructions to execute for the main computing of the function
	//	being compiled, linked and assembled.
	std::list<PotentialInstruction*>&
		getInstrPtrList	()
				{ return(*instrPtrListPtr_); }

	//  PURPOSE:  To return a const address of the member var that stores
	//	Identity names.  No parameters.
	const StringTempStore*
		getIdentityNameStorePtr
				()
				const
				{ return(&identityNameStore_); }

	//  PURPOSE:  To return the address of the name of the identity at
	//	offset 'offset'.
	const char*
		getIdentityNameCPtr
				(sharedStrInd_ty	offset
				)
				const
				{ return(identityNameStore_.get(offset)); }

	//  PURPOSE:  To return the subject of the method currently being
	//	compiled.  No parameters.
	const Identity&
		getSubject	()
				const
				{ return(subject_); }

	//  PURPOSE:  To return an iterator to the beginning of the
	//	data-structure that holds the addresses of
	//	MethodDefnParseTreeNode instances that were registered at
	//	parse-time.
	std::list<MethodDefnParseTreeNode*>::iterator
		getParseTimeMethDefnPtrDSBegin
				()
				{
				  return(parseTimeMethDefnPtrDS_.begin());
				}

	//  PURPOSE:  To return an iterator to the end of the data-structure
	//	that holds the addresses of MethodDefnParseTreeNode instances
	//	that were registered at parse-time.
	std::list<MethodDefnParseTreeNode*>::iterator
		getParseTimeMethDefnPtrDSEnd
				()
				{
				  return(parseTimeMethDefnPtrDS_.end());
				}

	//  PURPOSE:  To return an iterator to the beginning of the
	//	data-structure that holds the addresses of
	//	MethodDefnParseTreeNode instances to link, assemble and load
	//	stored under '*this' context.  No parameters.
	std::vector<MethodDefnParseTreeNode*>::iterator
		getMethDefnPtrToLinkAssembleLoadDSBegin
				()
				{
				  return(methDefnPtrToLinkAssembleLoadDS_.
						begin()
					);
				}

	//  PURPOSE:  To return an iterator to the end of the data-structure
	//	that holds the addresses of MethodDefnParseTreeNode instances
	//	to link, assemble and load stored under '*this' context.
	//	No parameters.
	std::vector<MethodDefnParseTreeNode*>::iterator
		getMethDefnPtrToLinkAssembleLoadDSEnd
				()
				{
				  return(methDefnPtrToLinkAssembleLoadDS_.
						end()
					);
				}

	//  PURPOSE:  To return 'true' assertions should be written to the
	//	preContext, or 'false' otherwise.
	bool	shouldAssertToContext
				()
				const
				{
				  return( !contextStack_.empty() );
				}

	//  PURPOSE:  (For Hypothesize) to return the Context if there is
	//	one, or 'null_' otherwise.
	const Identity*
		getContextAddr	()
				const
				{
				  return( contextStack_.empty()
					  ? nullptr
					  : &(contextStack_.back())
					);
				}

	//  PURPOSE:  (For Hypothesize) to return the current context.
	//	No parameters.
	const Identity&
		getContext	()
				const
				{ return(contextStack_.back()); }

	//  PURPOSE:  To return the context in which 'subject' was created,
	//  	if 'subject' is hypothetical.  Returns 'nullptr' otherwise.
	//
	//	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!
	//
	//	WARNING: Not thread-safe because uses static local var
	//
	//	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!	!!!!
	const Identity*
		getCreatingContextAddr
				(const Identity&	subject
				)
				const
				{
				  static Identity	context;
				  std::map<Identity,Identity>::const_iterator
					found	= hypotheticalToContextMap_.
								find(subject);

				  if  (found==hypotheticalToContextMap_.end())
				  {
				    return(nullptr);
				  }

				  context	= found->second;
				  return(&context);
				}

	//  PURPOSE:  (For Hypothesize) to return the address of the compiler
	//	variable telling the context to which to assert, or 'nullptr'
	//	if no such pre-context exists.  No parameters.
	CompilerDefinedPotentialVariable*
		getContextVarPtr()
				const
				{ return(contextVarPtrStack_.back()); }

	//  PURPOSE:  To return 'true' when inside an Hypothesize at compile-
	//	time, or 'false' otherwise.  No return value.
	bool	getIsInsideCompileTimeHypothesize
				()
				const
				{ return(isInsideCompileTimeHypothesize_); }

	//  PURPOSE:  (For Hypothesize) to hold 'true' when the context should
	//	be queried in addition to the kb, or 'false' otherwise.  No
	//	parameters.
	bool	getShouldQueryContext
				()
				const
				{ return(!contextStack_.empty()); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the degree to which optimization should be done
	//	to 'newOptimize'.  No return value.
	void	setHowOptimize	(howOptimize_ty	newOptimize
				)
				{ howOptimize_	= newOptimize; }

	//  PURPOSE:  To set the address of the entry for the return value
	//	variable to 'varPtr'.  No return value.
	void	setReturnValueVarPtr
				(ReturnValuePotentialVariable*	varPtr
				)
				{ returnValueVarPtr_	= varPtr; }


	//  PURPOSE:  To set the address of the list of addresses of potential
	//	instructions to execute before the main computing of the
	//	function being compiled, linked and assembled to 'newListPtr'.
	//	No return value.
	void	setPreInstrPtrListPtr
				(std::list<PotentialInstruction*>* newListPtr
				)
				{
				  preInstrPtrListPtr_	= newListPtr;
				  identityToVarMap_.clear();
				}

	//  PURPOSE:  To set the address of the list of addresses of potential
	//	instructions to execute for the main computing of the function
	//	being compiled, linked and assembled to 'newListPtr'.
	//	No return value.
	void	setInstrPtrListPtr
				(std::list<PotentialInstruction*>* newListPtr
				)
				{
				  instrPtrListPtr_	= newListPtr;
				  identityToVarMap_.clear();
				}

	//  PURPOSE:  To remember that 'subject' was created in context
	//	'context'.  No return value.
	void	noteCreatingContext
				(const Identity&	subject,
				 const Identity&	context
				)
				{
				  hypotheticalToContextMap_[subject] = context;
				}

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To store the identifier name 'idName' and to return the
	//  	index of the name in the store.
	sharedStrInd_ty
		storeIdentifierName 
				(const char*	idNameCPtr
				)
				{
				  return(identityNameStore_.
						storeIndex(idNameCPtr)
					);
				}

	//  PURPOSE:  To return the address of identifier name at index 'index'.
	const char*
		getIdentifierName
				(sharedStrInd_ty	index
				)
				const
				{ return(identityNameStore_.get(index)); }

	//  PURPOSE:  To reset the store of identifier names and method stores.
	void	resetIdentifierNamesAndMethodStores
				()
				{
				  hypotheticalToContextMap_.clear();
				  methDefnPtrToLinkAssembleLoadDS_.clear();
				  parseTimeMethDefnPtrDS_.clear();
				  identityNameStore_.reset();
				}

	//  PURPOSE:  To open a compile-time Context scope.
	//	No parameters.  No return value.
	void	openContextCompileScope
				();

	//  PURPOSE:  To close the compile-time Context scope.  No
	//	parameters.  No return value.
	void	closeContextCompileScope
				();

	//  PURPOSE:  To open an assemble-time Context scope.  No
	//	parameters.  No return value.
	void	openContextAssembleScope
				();

	//  PURPOSE:  To close the assemble-time Context scope.  No
	//	parameters.  No return value.
	void	closeContextAssembleScope
				();

	//  PURPOSE:  To record that a new scope depth has been entered.  No
	//	parameters.  No return value.
	void	openScope	();

	//  PURPOSE:  To record that the compiler has left a scope depth.  No
	//	parameters.  No return value.  Throws ptr to 'std::string'
	//	instance that describes an error if an error is detected.
	void	closeScope	();

	//  PURPOSE:  To note that a compiler-defined variable with value type
	//	'valueType'.  Returns pointer to it.
	CompilerDefinedPotentialVariable*
		declare		(value_ty		valueType
  				);

	//  PURPOSE:  To note that a compiler-defined constant with value type
	//	'valueType'.  Returns pointer to it.
	CompilerDefinedPotentialVariable*
		declareConst	(value_ty		valueType
  				);

	//  PURPOSE:  To note that a programmer-defined variable or constant
	//	with name 'name' has newly been declared at the current scope
	//	depth.  Taken to be a constant if 'isConstant' is 'true', or
	//	taken as a variable otherwise.  The new
	//	ProgrammerDefinedPotentialVariable instance will be put at the
	//	head of 'varList' and it will be noted that it has class
	//	'class_'.  Returns pointer to it.
	//	Throws ptr to AttemptToDeclareReservedVarException heap instance
	//		if 'name' is a reserved var name.
	//	Throws ptr to AttemptToDeclareVarOutsideOfContextException heap
	//		instance if tries to declare outside a 'Do' instance
	//		scope.
	//	Throws ptr to AttemptToRedeclareVarException heap instance
	//		if 'name' is already declared in current scope.
	ProgrammerDefinedPotentialVariable*
		declare		(const std::string&	name,
				 const Identity&	class_,
				 bool  			isConstant
  				);

	//  PURPOSE:  To mark '*varPtr' as no-longer-in-use if is a
	//	compiler-defined variable.
	void	releaseIfCompilerDefined
				(PotentialVariable*	varPtr
				);

	//  PURPOSE:  To retrieve the C++ address of the
	//	ProgrammerDefinedPotentialVariable instance with the highest
	//	depth scope (innermost scope) with name 'name'.
	//	Throws ptr to AttemptToUseNondeclaredVarException heap
	//	instance if 'name' not declared.
	ProgrammerDefinedPotentialVariable*
		retrieveAddress	(const std::string&	name
  				);

	//  PURPOSE:  To retrieve the index of the
	//	ProgrammerDefinedPotentialVariable instance with the highest
	//	depth scope (innermost scope) with name 'name'.
	//	Throws ptr to AttemptToUseNondeclaredVarException heap instance
	//		if 'name' not declared.
	variableIndex_ty
		retrieveIndex	(const std::string&	name
				);

	//  PURPOSE:  To clear '*this' of all defined local variables.  No
	//	parameters.  No return value.
	void	clearLocalVars	();

	//  PURPOSE:  To delete the compiler-defined variable at iterator
	//	position 'iter'.  No return value.
	void	removeCompilerDefinedVar
				(CompilerDefnVarPtrDSIter	iter
				)
				{
				  delete(*iter);
				  compilerDefinedVarList_.erase(iter);
				}

	//  PURPOSE:  To add potential instruction '*instrPtr' to the list of
	//	potential instructions to do before the main code is executed.
	//	No return value.
	void	addNextPreInstr	(PotentialInstruction*	instrPtr
				)
				{
				  preInstrPtrListPtr_->push_back(instrPtr);
				}

	//  PURPOSE:  To return the address of the potential variable that
	//  	has been loaded with constant 'id' of type 'valueType'.
	PotentialVariable*
		getVarLoadedWithConst
				(const Identity&	id,
				 value_ty		valueType
				);

	//  PURPOSE:  To add '*instrPtr' to the end of the main list of
	//	instructions to do.  No return value.
	void	addNextInstr	(PotentialInstruction*	instrPtr
				)
				{
				  instrPtrListPtr_->push_back(instrPtr);
				}

	//  PURPOSE:  To note that the user-defined method with parse node
	//	'*methDefnPtr' has been parsed.  No return value.
	void	compileTimeRegisterUserMethodParseNode
				(MethodDefnParseTreeNode*	methDefnPtr
				)
				{
				  parseTimeMethDefnPtrDS_.
					push_back(methDefnPtr);
				}

	//  PURPOSE:  To note an additional user-defined method
	//	'*methDefnPtr'.  No return value.
	void	registerUserMethodParseNodeToLinkAssembleLoad
				(MethodDefnParseTreeNode*	methDefnPtr
				)
				{
				  methDefnPtrToLinkAssembleLoadDS_.
						push_back(methDefnPtr);
				}

	//  PURPOSE:  To return an assembly-language representation of '*this'.
	std::string
		toString	()
				const;
/*
	//  PURPOSE:  To return the address of a MethodDefnParseTreeNode
	//	instance currently being compiled that matches a method call
	//	with name 'primaryNameCPtr'.'extensionCPtr', that accepts
	//	a "this" value 'incomingThisObjOrClass' (which is either a
	//	class if 'instanceOrClass' == 'INSTANCE_IORC' or is a class if
	//	'instanceOrClass' == 'CLASS_IORC'), and that has arguments
	//	as described in 'argObjOrClassVect' (which are either instances
	//	 if the corresponding values in 'argGeneralityVect' are
	//	 'INSTANCE_IORC' or are classes if the corresponding value is
	//	 'CLASS_IORC').  'returnClass' is set to the return class of
	//	the method definition.  Returns 'nullptr' if no match found.
	const MethodDefnParseTreeNode*
		getMatchingMethodDefnPtr
				(const char*		primaryNameCPtr,
				 const char*		extensionCPtr,
				 const Identity&	incomingThisObjOrClass,
				 instanceOrClass_ty	instanceOrClass,
				 const std::vector<value_ty>&
							argValueVect,
				 const std::vector<Identity>&
							argObjOrClassVect,
				 const std::vector<instanceOrClass_ty>&
							argGeneralityVect,
				 Identity&		returnClass
				)
				const;
 */
      };

