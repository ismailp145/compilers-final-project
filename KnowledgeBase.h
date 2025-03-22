
class	KnowledgeBase
{
  //  0.  Private classes:
  class			Instance
  {
    //  I.  Member vars:
    //  PURPOSE:  To hold the name of '*this'.
    char*			nameCPtr_;

    //  PURPOSE:  To hold the properties of '*this'.
    std::map<Identity,Identity>	attrIdToValIdMap_;

    //  II.  Disallowed auto-generated methods:
    //  No default constructor:
    Instance			()
				= delete;

    //  No copy constructor op:
    Instance			(const Instance&)
				= delete;

    //  No copy assignment op:
    Instance&	operator=	(const Instance&)
				= delete;

  protected :
    //  III.  Protect methods:

  public :
    //  IV.  Constructor(s), factory(s) assignment op(s) and destructor:
    //  PURPOSE:  To initialize '*this' to be an instance named 'newNameCPtr'.
    //		No return value.
    Instance			(const char*	newNameCPtr
				) :
				nameCPtr_(strdup(newNameCPtr)),
				attrIdToValIdMap_()
				{ }

    //  PURPOSE:  To release the resources of '*this'.  No parameters.  No
    //		return value.
    virtual
    ~Instance			()
    				{
				  free(nameCPtr_);
				}

    //  V.  Accessors:
    //  PURPOSE:  To return the name of '*this'.  No parameters.
    char*	getNameCPtr	()
				const
				{ return(nameCPtr_); }

    //  PURPOSE:  To set 'value' to the property that '*this' has for attribute
    //		'attr' and return 'true' if '*this' has a value.  Returns
    //		'false' otherwise.
    bool	doesHaveProperty(Identity&		value,
				 const Identity&	attr
				)
				const
				{
				  auto found	= attrIdToValIdMap_.find(attr);

				  if  (found == attrIdToValIdMap_.end())
				  {
				    return(false);
				  }

				  value	= found->second;
				  return(true);
				}

    //  PURPOSE:  To note that '*this' has attribute 'attr' value 'value'.
    //		No return value.
    void	assertProperty	(const Identity&	attr,
				 const Identity&	value
				)
				{
				  attrIdToValIdMap_[attr]	= value;
				}

    //  VI.  Mutators:

    //  VII.  Methods that do main and misc work of class:
    //  
  };

  class	Class : public Instance
  {
    //  I.  Member vars:
    //  PURPOSE:  To hold the instances of '*this' class.
    std::set<Identity>		instancesDs_;

    //  PURPOSE:  To hold the subclasses of '*this' class.
    std::set<Identity>		subclassesDs_;

    //  II.  Disallowed auto generated methods:
    //  No default constructor:
    Class			()
				= delete;

    //  No copy constructor op:
    Class			(const Class&)
				= delete;

    //  No copy assignment op:
    Class&	operator=	(const Class&)
				= delete;

  protected :
    //  III.  Protect methods:

  public :
    //  IV.  Constructor(s), factory(s) assignment op(s) and destructor:
    //  PURPOSE:  To initialize '*this' to be an instance named 'newNameCPtr'.
    //		No return value.
    Class			(const char*	newNameCPtr
				) :
				Instance(newNameCPtr),
				instancesDs_(),
				subclassesDs_()
				{ }

    //  PURPOSE:  To release the resources of '*this'  No parameters.  No
    //		return value.
    virtual
    ~Class			()
				{ }

    //  V.  Accessors:

    //  VI.  Mutators:

    //  VII.  Methods that do main and misc work of class.
    //  PURPOSE:  To return 'true' if '*this' class has immediate instance
    //		'instance', or 'false' otherwise.
    bool	hasImmediateInstance
				(const Identity&	instance
				)
				const
				{
				  auto found	= instancesDs_.find(instance);

				  return(found != instancesDs_.end());
				}

    //  PURPOSE:  To return 'true' if '*this' class has immediate subclass
    //		'subclass', or 'false' otherwise.
    bool	hasImmediateSubclass
				(const Identity&	subclass
				)
				const
				{
				  auto found	= subclassesDs_.find(subclass);

				  return(found != subclassesDs_.end());
				}

    //  PURPOSE:  To return 'true' if '*this' Class has Instance 'instance'
    //		as an immediate instance, or as an instance of one of its
    //		subclasses.
    bool	hasInstance	(const Identity&	instance
    				)
				const;

    //  PURPOSE:  To return 'true' if '*this' Class has Class 'subclass'
    //		as an immediate subclass, or as a subclass of one of its
    //		subclasses.
    bool	hasSubclass	(const Identity&	subclass
    				)
				const;

    void	addInstance	(const Identity&	instance
    				)
				{
				  instancesDs_.insert(instance);
				}

    void	addSubclass	(const Identity&	subclass
    				)
				{
				  subclassesDs_.insert(subclass);
				}
  };


  //  I.  Member vars:
  //  PURPOSE:  To hold the address of the 'Class' representing 'Class'.
  Class*			classPtr_;

  //  PURPOSE:  To hold the mapping of names to Identity instances.
  std::map<const char*,Identity,ConstCPtrCompStruct>
				nameCPtrToIdentityMap_;

  //  PURPOSE:  To hold the mapping of Identity instances to data on them.
  std::map<Identity,Instance*>	identityToInstancePtrMap_;

  //  PURPOSE:  To hold constants indexed by 'entryPartialAddress_ty'.
  std::vector<Identity>		constIndexToConstMap_;

  //  PURPOSE:  To hold the mapping of constants to the index at which they
  //	appear.
  std::map<Identity,entryPartialAddress_ty>
				constToIndexMap_;

  //  PURPOSE:  To hold the next index for 'constIndexToConstMap_'.
  entryPartialAddress_ty	nextConstIndex_;

protected :
  //  III.  Protect methods:

public :
  //  IV.  Constructor(s), factory(s) assignment op(s) and destructor:
  KnowledgeBase			();

  ~KnowledgeBase		();

  kbRunIndex_ty	getCurrentKbRunIndex
				();

  //  PURPOSE:  To return the address of the Instance (or Class) for Identity
  //  		'id' as a non-const ptr, or 'nullptr' if not found.
  Instance*	find		(const Identity&	id
				)
				const
				{
				  auto find	= identityToInstancePtrMap_.
							find(id);

				  return( (find ==
				  	   identityToInstancePtrMap_.end()
					  )
					  ? nullptr
					  : find->second
					);
				}

  //  PURPOSE:  To return the address of the Instance (or Class) for Identity
  //  		'id' as a const ptr, or 'nullptr' if not found.
  const Instance*
		constFind	(const Identity&	id
				)
				const
				{
				  auto find	= identityToInstancePtrMap_.
							find(id);

				  return( (find ==
				  	   identityToInstancePtrMap_.end()
					  )
					  ? nullptr
					  : find->second
					);
				}

  //  PURPOSE:  To make and return a PreContext based on Context 'base'.
  Identity	makeAssumption	(const Identity&	base
			);

  //  PURPOSE:  To return 'true' if 'instance' is an instance of class
  //	'classId', or 'false' otherwise.  'context' tells the context.
  bool		isInstanceOf	(const Identity*	contextPtr,
			 const Identity&	instance,
			 const Identity&	classId
			);

  //  PURPOSE:  To return 'true' if 'subClass' is a subclass of
  //	'superClass', or 'false' otherwise.
  bool		isSubclassOf	(const Identity&	subClass,
			 const Identity&	superClass
			);

  //  PURPOSE:  To return 'true' if 'subClass' is a subclass of
  //	'superClass', or 'false' otherwise.
  bool		isSubclassOf	(const Identity*	contextPtr,
			 const Identity&	subClass,
			 const Identity&	superClass
			);

  //  PURPOSE:  To return the first stated class of 'item', or 'null_'
  //	if it not found.
  Identity	getClass	(const Identity&	item,
			 const Identity*	contextPtr = nullptr
			);

  //  PURPOSE:  To set 'kbRunIndex' and 'idIndex' to the indices of the
  //	knowledge base run and constant pool index within a knowledge
  //	base run respectively of Identity 'id'.  No return value.
  void		obtainConstPoolIndices
			(kbRunIndex_ty&			kbRunIndex,
			 entryPartialAddress_ty&	idIndex,
			 const Identity&		id
			);

  //  PURPOSE:  To write into 'id' the Identity that occurs at knowledge
  //	base run 'kbRunIndex' and constant pool index 'idIndex'.  No
  //	return value.
  void		obtainConst	(Identity&		id,
			 kbRunIndex_ty	   	kbRunIndex,
			 entryPartialAddress_ty	idIndex
			);

  //  PURPOSE:  To return the C-string of the name for Identity 'id'
  //	recorded in '*this' kb, or 'nullptr' if no such Identity is
  //	found.
  const char*	getIdNameCPtr
			(const Identity&	id,
			 kbRunIndex_ty		kbRunIndex
						= ACTIVE_KB_RUN_INDEX
			)
			const;

  //  PURPOSE:  To return the C-string of the name for Identity 'id'
  //	recorded in '*this' kb, or 'nullptr' if no such Identity is
  //	found.  Sets 'nameLenInBytes' to the length of the name in
  //	bytes, and sets 'mustWrap' to 'true' if the name must be
  //	wrapped in 'SP_FREESTYLE_IDENTIFIER_WRAPPING_CHAR', or to
  //	'false' otherwise.
  const char*	getIdNameCPtr
			(entryPartialAddress_ty& nameLenInBytes,
			 bool&			 mustWrap,
			 const Identity&	 id,
			 kbRunIndex_ty		 kbRunIndex
						 =ACTIVE_KB_RUN_INDEX
			)
			const;

  //  PURPOSE:  To return 'true' if 'identity' was set to the Identity
  //	with name 'nameCPtr' in a kb run 'kbRunIndex' or earlier,
  //	or 'false' otherwise.
  bool		didGetIdentityOfTermCPtr
			(Identity&		identity,
			 const char*		termCPtr,
			 kbRunIndex_ty		kbRunIndex
						= ACTIVE_KB_RUN_INDEX
			);

  //  PURPOSE:  To return 'true' if 'subject' is a class or 'false'
  //	otherwise.
  bool		isAClass	(const Identity&	subject
				);

  //  PURPOSE:  To return the Identity of a newly-created instance of
  //	class 'classId', parsed at location 'location', given the
  //	assumptions of 'assumptionContext'.  'argList' is the list of
  //	arguments to the constructor call, or is 'null' if there are
  //	none.  Returns 'Identity' value of new instance.
//  Identity	makeInstanceOf	(const Identity&	classId,
//				 const Identity&	argList,
//				 const Identity*	contextPtr = nullptr
//				);

  //  PURPOSE:  To make a new instance of 'newClass' named 'nameCPtr' and
  //	parsed at location 'location' given context 'assumptionContext'.
  //	Returns 'Identity' value of new instance.
//  Identity	makeInstanceOf	(const Identity&	classId,
//				 const char*		nameCPtr,
//				 const Identity*	contextPtr = nullptr
//				);

  //  PURPOSE:  To return the 'instanceOrClass_ty' value corresponding to
  //	'subject'.
  instanceOrClass_ty
	getKBClassificationOf	(const Identity&	subject
				);

  //  PURPOSE:  To return the 'kbRunIndex_ty' of the kbRun with index
  //	name 'kbRunNameCPtr' in the kb run with index
  //	'indexOfKbRunToQuery', if one exists.  Returns
  //	'NULL_KB_RUN_INDEX' otherwise.
  kbRunIndex_ty	getKbRunIndex	(kbRunIndex_ty	indexOfKbRunToQuery,
				 const char*	kbRunNameCPtr
				)
				const;

  //  PURPOSE:  To return 'true' if '*this' store has the declaration
  //	information for an Identity with name pointed to by 'nameCPtr'.
  //	If so, then 'instance' is set to its declared Identity value,
  //	'klass' is set to its declared class, and 'true' is returned.
  //	Returns 'false' if '*this' store does not contain name 'name'.
  bool		wasInstanceDeclared
				(const char*		nameCPtr,
				 Identity&		instance,
				 Identity&		klass
				)
				const;

  //  PURPOSE:  To note that instance 'instance' of class 'klass' was
  //	parsed at 'parseLoc'.  'nameCPtr' points to the name of
  //	'instance'.  Throws address of heap-allocated
  //	GeneralSyntaxException instance if this declaration disagrees
  //	with an existing declaration or definition.
  void		declareInstance	(const char*		nameCPtr,
				 const Identity&	instance,
				 const Identity&	klass
				);

  //  PURPOSE:  To note that subclass 'subclass' of class 'superclass' was
  //	parsed at 'parseLoc'.  'nameCPtr' points to the name of
  //	'subclass'.  Throws address of heap-allocated
  //	GeneralSyntaxException instance if this declaration disagrees
  //	with an existing declaration or definition.
  void		declareSubclass	(const char*		nameCPtr,
				 const Identity&	subclass,
				 const Identity&	superclass
				);

};

extern KnowledgeBase	kb;
