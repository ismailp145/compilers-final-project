/*-------------------------------------------------------------------------*
 *---									---*
 *---		Identity.h						---*
 *---									---*
 *---	    This file declares a class to differentiate the individual	---*
 *---	ideas in the Scienceomatic program.				---*
 *---									---*
 *---		    This file is classified as: DECLASSIFIED		---*
 *---			Applied Philosophy of Science			---*
 *---									---*
 *---	----	----	----	----	----	----	----	-----	---*
 *---									---*
 *---	Version 8a		2011 May 11		Joseph Phillips	---*
 *---									---*
 *---	Version 8b		2013 February 1		Joseph Phillips	---*
 *---									---*
 *---	    Modified for SP8b.						---*
 *---									---*
 *---	Version 9a		2016 April 22		Joseph Phillips	---*
 *---									---*
 *-------------------------------------------------------------------------*/

class	IdentityArray;

    //  PURPOSE:  To represent how to stringify an object.
    typedef	enum
		{
		  SP_STRINGIFY,
		  SP_CAPITALIZE_STRINGIFY,
		  QUOTE_STRINGS_STRINGIFY,
		  JSON_STRINGIFY,
		  VERBOSE_JSON_STRINGIFY,
		  SOURCE_CODE_STRINGIFY,
		  RAW_STRINGIFY
		}
		howStringify_ty;
		

    class	Identity_
    {
      //  0.  Local constants, types and classes:
      friend class		IdentityTextizer;

    public :
      //  0.A.  Local constants:
      enum
      {
	SUPERDOMAIN_OFFSET	= 0,
	DOMAIN_OFFSET		= SUPERDOMAIN_OFFSET + sizeof(superDomain_ty),
	FIELD0_OFFSET		= DOMAIN_OFFSET + sizeof(domain_ty),
	FIELD1_OFFSET		= FIELD0_OFFSET + sizeof(spFloat_ty),
	COMPRESSED_SIZE		= FIELD1_OFFSET + sizeof(spFloat_ty),
	SIZEOF_DATAFIELDS	= sizeof(spFloat_ty) + sizeof(spFloat_ty),

	SUPER_DOMAIN		= 0x0000,

	//  Constants to combine combinatorially to define domains:
	SPECIAL_PATTERN	 	= 0x0000,

	INTEGER_PATTERN		= 0x0000,
	RATIONAL_PATTERN	= 0x0001,
	REAL_PATTERN		= 0x0002,
	COMPLEX_PATTERN		= 0x0003,
	BOOL_PATTERN		= 0x0006,

	DISTRIB_FLAG		= 0x0008,	// Bit dedicated to "is distrib"

	STRUCTURE_PATTERN	= 0x0001,
	IDENTITY_NAME_PATTERN	= 0x0005,
	JUST_A_STRING_PATTERN	= 0x0000,
	VAR_NAME_PATTERN	= 0x0008,

	UNARY_EXPR_PATTERN	= 0x0001,
	BINARY_EXPR_PATTERN	= 0x0002,

	NUMBER_PATTERN		= 0x0010,
	STRING_PATTERN		= 0x0020,
	ANNOTATED_PATTERN	= 0x0030,
	INSTRUCTION_PATTERN	= 0x0040,
	FUNCTION_SEGMENT_PATTERN= 0x0050,
	STACK_SEGMENT_PATTERN	= 0x0060,
	NODE_PATTERN		= 0x0070,
	MAP_ROOT_INDEX_PATTERN	= 0x0080,
	MAP_TREE_ADDR_PATTERN	= 0x0090,
	BAG_ROOT_ADDR_PATTERN	= 0x00A0,
	BAG_TREE_ADDR_PATTERN	= 0x00B0,
	SUBEXPR_ADDR_PATTERN	= 0x00C0,
	CONTEXT_ADDR_PATTERN	= 0x00D0,
	CONCEPT_PATTERN		= 0x00E0,
	PATTERN_MASK		= 0x00F0,

	PREDEFINED_PATTERN	= 0x0100,
	NEW_PATTERN		= 0x0200,
	HYPOTHETICAL_REFERENCING_FLAG
				= 0x4000,
	HYPOTHETICAL_FLAG	= 0x8000,
	HYPOTHETICAL_CONCERNING_MASK
				= HYPOTHETICAL_REFERENCING_FLAG |
				  HYPOTHETICAL_FLAG,

	//  Domains combinatorially defined from patterns and flags above:
	SPECIAL_DOMAIN		= SPECIAL_PATTERN,

	INTEGER_DOMAIN		= NUMBER_PATTERN | INTEGER_PATTERN,
	RATIONAL_DOMAIN		= NUMBER_PATTERN | RATIONAL_PATTERN,
	REAL_DOMAIN		= NUMBER_PATTERN | REAL_PATTERN,
	COMPLEX_DOMAIN		= NUMBER_PATTERN | COMPLEX_PATTERN,

	TINY_STRING_DOMAIN	= STRING_PATTERN | JUST_A_STRING_PATTERN |
				  0x0001,
	SHORT_STRING_DOMAIN	= STRING_PATTERN | JUST_A_STRING_PATTERN |
				  0x0002,
	MEDIUM_STRING_DOMAIN	= STRING_PATTERN | JUST_A_STRING_PATTERN |
				  0x0003,
	LONG_STRING_DOMAIN	= STRING_PATTERN | JUST_A_STRING_PATTERN |
				  0x0004,
	IDENTITY_NAME_DOMAIN	= STRING_PATTERN | IDENTITY_NAME_PATTERN,
	STRUCTURE_VAR_ADDR_DOMAIN
				= STRING_PATTERN | VAR_NAME_PATTERN |
				  STRUCTURE_PATTERN,

	ANNOTATED_INTEGER_DOMAIN= ANNOTATED_PATTERN | INTEGER_PATTERN,
	ANNOTATED_RATIONAL_DOMAIN=ANNOTATED_PATTERN | RATIONAL_PATTERN,
	ANNOTATED_REAL_DOMAIN	= ANNOTATED_PATTERN | REAL_PATTERN,
	ANNOTATED_COMPLEX_DOMAIN= ANNOTATED_PATTERN | COMPLEX_PATTERN,
	ANNOTATED_BOOL_DOMAIN	= ANNOTATED_PATTERN | BOOL_PATTERN,
	ANNOTATED_CONCEPT_DOMAIN= ANNOTATED_PATTERN | CONCEPT_PATTERN,

	ANNOTATED_INTEGER_DISTRIB_DOMAIN
				= DISTRIB_FLAG | ANNOTATED_INTEGER_DOMAIN,
	ANNOTATED_RATIONAL_DISTRIB_DOMAIN
				= DISTRIB_FLAG | ANNOTATED_RATIONAL_DOMAIN,
	ANNOTATED_REAL_DISTRIB_DOMAIN
				= DISTRIB_FLAG | ANNOTATED_REAL_DOMAIN,
	ANNOTATED_COMPLEX_DISTRIB_DOMAIN
				= DISTRIB_FLAG | ANNOTATED_COMPLEX_DOMAIN,
	ANNOTATED_BOOL_DISTRIB_DOMAIN
				= DISTRIB_FLAG | ANNOTATED_BOOL_DOMAIN,
	ANNOTATED_CONCEPT_DISTRIB_DOMAIN
				= DISTRIB_FLAG | ANNOTATED_CONCEPT_DOMAIN,

	UNARY_SUBEXPR_ADDR_DOMAIN
				= SUBEXPR_ADDR_PATTERN | UNARY_EXPR_PATTERN,
	BINARY_SUBEXPR_ADDR_DOMAIN
				= SUBEXPR_ADDR_PATTERN | BINARY_EXPR_PATTERN,

	INSTRUCTION_DOMAIN	= INSTRUCTION_PATTERN,

	FUNCTION_SEGMENT_DOMAIN	= FUNCTION_SEGMENT_PATTERN,

	STACK_SEGMENT_DOMAIN	= STACK_SEGMENT_PATTERN,

	MAP_ROOT_INDEX_DOMAIN	= MAP_ROOT_INDEX_PATTERN,
	MAP_TREE_ADDR_DOMAIN	= MAP_TREE_ADDR_PATTERN,
	BAG_ROOT_ADDR_DOMAIN	= BAG_ROOT_ADDR_PATTERN,
	BAG_TREE_ADDR_DOMAIN	= BAG_TREE_ADDR_PATTERN,

	CONTEXT_ADDR_DOMAIN	= CONTEXT_ADDR_PATTERN,

	PREDEFINED_CONCEPT_DOMAIN=PREDEFINED_PATTERN | CONCEPT_PATTERN,
	PREDEFINED_NODE_DOMAIN	= PREDEFINED_PATTERN | NODE_PATTERN,
	NEW_CONCEPT_DOMAIN	= NEW_PATTERN	     | CONCEPT_PATTERN,
	NEW_NODE_DOMAIN		= NEW_PATTERN	     | NODE_PATTERN,

	HYPOTHETICAL_CONCEPT_REFERENCING_DOMAIN
				= HYPOTHETICAL_REFERENCING_FLAG	|
				  CONCEPT_PATTERN,

	HYPOTHETICAL_CONCEPT_DOMAIN
				= HYPOTHETICAL_FLAG  | CONCEPT_PATTERN,
	HYPOTHETICAL_ANNOTATED_INTEGER_DOMAIN
				= HYPOTHETICAL_FLAG | ANNOTATED_INTEGER_DOMAIN,
	HYPOTHETICAL_ANNOTATED_RATIONAL_DOMAIN
				= HYPOTHETICAL_FLAG |ANNOTATED_RATIONAL_DOMAIN,
	HYPOTHETICAL_ANNOTATED_REAL_DOMAIN
				= HYPOTHETICAL_FLAG | ANNOTATED_REAL_DOMAIN,
	HYPOTHETICAL_ANNOTATED_COMPLEX_DOMAIN
				= HYPOTHETICAL_FLAG | ANNOTATED_COMPLEX_DOMAIN,
	HYPOTHETICAL_ANNOTATED_BOOL_DOMAIN
				= HYPOTHETICAL_FLAG | ANNOTATED_BOOL_DOMAIN,
	HYPOTHETICAL_ANNOTATED_CONCEPT_DOMAIN
				= HYPOTHETICAL_FLAG | ANNOTATED_CONCEPT_DOMAIN,

	TINY_STRING_STRING_OFFSET
				= 2
      };

    private :
      //  0.B.  Internal classes that hold the 
      //  PURPOSE:  To represent the values as raw unsigned integers
      struct	RawUintIdentity
      {
	uint64_t		raw0_;
	uint64_t		raw1_;
      };

      //  PURPOSE:  To represent non-numeric, non-string concepts.
      struct	ConceptIdentity
      {
	spRunIndex_ty		runIndex_;
	spConceptNum_ty		conceptNum_;
      };

      //  PURPOSE:  To represent rational numbers.
      struct	RationalIdentity
      {
	numerator_ty		numerator_;
	denominator_ty		denominator_;
      };

      //  PURPOSE:  To represent (double-precision) complex numbers.
      struct	ComplexIdentity
      {
	spFloat_ty		real_;
	spFloat_ty		imaginary_;
      };

      //  PURPOSE:  To represent strings whose UTF8 representation is tiny
      //	enough to fit into 'IdentityDataUnion' (including the C-string
      //	 ending '\0' char).
      struct	TinyStringIdentity
      {
	char			text_[SIZEOF_DATAFIELDS];
      };

      //  PURPOSE:  To represent a string whose value is obtained by an index.
      struct	IndexedStringIdentity
      {
	spRunIndex_ty		runIndex_;
	stringIndex_ty		strIndex_;
      };

      //  PURPOSE:  To represent an address in the virtual address space
      struct	AddressIdentity
      {
	spRunIndex_ty		runIndex_;
	entryPartialAddress_ty	partialAddr_;
      };

      //  PURPOSE:  To represent 
      union	IdentityDataUnion
      {
	RawUintIdentity		raw_;
	ConceptIdentity		concept_;
	RationalIdentity	rational_;
	ComplexIdentity		complex_;
	TinyStringIdentity	tinyStr_;
	IndexedStringIdentity	indexedStr_;
	AddressIdentity		addr_;
      };


      //  I.  Member vars:
      //  PURPOSE:  To tell the super-domain of '*this' Identity.
      superDomain_ty		superDomain_;

      //  PURPOSE:  To tell the domain of '*this' Identity.
      domain_ty			domain_;

      //  PURPOSE:  To hold the data associated with '*this' Identity.
      IdentityDataUnion		dataUnion_;


      //  II.  Disallowed auto-generated methods:

    protected :
      //  III.  Protected methods:
      //  PURPOSE:  To make '*this' represent the integer value 'newNumerator'.
      //	No return value.
      void	integer_set	(numerator_ty		newNumerator
				)
				{
				  dataUnion_.rational_.numerator_
							= newNumerator;
				  dataUnion_.rational_.denominator_
							= 1;
				  domain_		= INTEGER_DOMAIN;
				}

      //  PURPOSE:  To make '*this' represent the rational value
      //            'newNumerator' \ 'newDenominator'.
      //            No return value.
      void	rational_set	(numerator_ty		newNumerator,
				 denominator_ty		newDenominator
				);

      //  PURPOSE:  To make '*this' represent the real value 'newReal'.
      //	No return value.
      void	real_set	(spFloat_ty		newReal
				)
				{
				  dataUnion_.complex_.real_
							= newReal;
				  dataUnion_.complex_.imaginary_
							= 0.0;
				  domain_		= REAL_DOMAIN;
				}

      //  PURPOSE:  To make '*this' represent the complex value
      //	    denoted by 'newReal' and 'newImaginary'.
      //	    No return value.
      void	complex_set	(spFloat_ty		newReal,
				 spFloat_ty		newImaginary
				);

      //  PURPOSE:  To make '*this' a copy of 'rhs'.  No return value.
      void	copy		(const Identity_&	rhs
				)
				{
				  superDomain_	= rhs.getSuperDomain();
				  domain_	= rhs.getDomain();
				  memcpy(&dataUnion_,
					 &rhs.dataUnion_,
					 sizeof(IdentityDataUnion)
					);
				}

      //  PURPOSE:  To release the resources of '*this'.  No parameters.  No
      //	return value.
      void	releaseResources()
				{
				   switch  ( getDomain() )
				   {
				   case LONG_STRING_DOMAIN :
//	!!!!	!!!!	!!!!	     Consider removing string from string store
				     break;

				   default :
				     break;
				   }
				   
				}

      //  PURPOSE:  To return a pointer to the raw data of 'dataUnion_'.
      //    No parameters.
      const char*
		getRawDataPtr	()
				const
				{
				  return(dataUnion_.tinyStr_.text_);
				}

    public :
      //  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
      //  IV.A.  Constructors:
      //  PURPOSE:  To initialize '*this' to represent 'null'.  No return value.
      Identity_			() :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_((domain_ty)SPECIAL_DOMAIN)
				{
				  dataUnion_.concept_.runIndex_	= 0x0;
				  dataUnion_.concept_.conceptNum_
								= 0x0;
				}

      //  PURPOSE:  To make '*this' a copy of 'rhs'.  No return value.
      Identity_			(const Identity_&	 rhs
				) :
				superDomain_(rhs.getSuperDomain()),
				domain_(rhs.getDomain())
				{
				  memcpy(&dataUnion_,
					 &rhs.dataUnion_,
					 sizeof(IdentityDataUnion)
					);
				}

      //  PURPOSE:  To initialize '*this' to represent the concept with run
      //    index 'newRunIndex' and concept number 'newConceptNum'.  No return
      //    value.
      Identity_			(spRunIndex_ty		newRunIndex,
				 spConceptNum_ty	newConceptNum
				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_( (newRunIndex == 0x0)
					 ? (domain_ty)PREDEFINED_CONCEPT_DOMAIN
					 : (domain_ty)NEW_CONCEPT_DOMAIN
				       )
				{
				  dataUnion_.concept_.runIndex_	= newRunIndex;
				  dataUnion_.concept_.conceptNum_
								= newConceptNum;
				}

      //  PURPOSE:  To initialize '*this' to represent integer 'newInt'.  No
      //    return value.
      Identity_			(numerator_ty		newInt
				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_((domain_ty)INTEGER_DOMAIN)
				{
				  dataUnion_.rational_.numerator_    = newInt;
				  dataUnion_.rational_.denominator_  = 1;
				}

      //  PURPOSE:  To initialize '*this' to represent the rational number with
      //    numerator 'newNumerator' and denominator 'newDenominator'.  If
      //    'haveCommonPrimesBeenRemoved' is 'false' then tries to remove
      //    common primes from both 'newNumerator' and 'newDenominator' before
      //    initializing '*this'.  No return value.
      Identity_			(numerator_ty	newNumerator,
				 denominator_ty	newDenominator,
				 bool		haveCommonPrimesBeenRemoved
								= false
				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_((domain_ty)RATIONAL_DOMAIN)
				{
				  //  I.  Application validity check:

				  //  II.  Set member vars:
				  //  II.A.  Ensure denominator is positive:
				  if  (newDenominator < 0)
				  {
				    newNumerator	= -newNumerator;
				    newDenominator	= -newDenominator;
				  }

				  //  II.B.  Remove primes if should:
				  if  ( !haveCommonPrimesBeenRemoved )
				    removeCommonPrimes
						(newNumerator,
						 newDenominator
						);

				  //  II.C.  Assign member vars:
				  dataUnion_.rational_.numerator_	=
							newNumerator;
				  dataUnion_.rational_.denominator_	=
							newDenominator;

				  if  (newDenominator == 1)
				    domain_	= INTEGER_DOMAIN;

				  //  III.  Finished:
				}

      //  PURPOSE:  To initialize '*this' to represent the real number
      //    'newReal'.  No return value.
      Identity_			(spFloat_ty	newReal
				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_((domain_ty)REAL_DOMAIN)
				{
				  dataUnion_.complex_.real_	  = newReal;
				  dataUnion_.complex_.imaginary_  = 0.0;
				}

      //  PURPOSE:  To initialize '*this' to represent the complex number
      //    with real component 'newReal' and imaginary component 'newImagine'.
      //    No return value.
      explicit
      Identity_			(spFloat_ty	newReal,
				 spFloat_ty	newImagine
				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_
				    ( (newImagine == 0.0)
				      ? (domain_ty)REAL_DOMAIN
				      : (domain_ty)COMPLEX_DOMAIN
				    )
				{
				  dataUnion_.complex_.real_	  = newReal;
				  dataUnion_.complex_.imaginary_  = newImagine;
				}

      //  PURPOSE:  To initialize '*this' to represent the tiny string pointed
      //    to by 'cPtr' of length 'numBytes' bytes and having 'numUnicodeChars'
      //    Unicode chars (not including the ending '\0').  'numEscapedChars'
      //    tells the number of chars that *must* be represented as form '\c'
      //    according to the rules of C escape codes.  No return value.
      //    'numBytes' must be less than or equal to 'SP_MAX_TINY_STRING_CHARS'.
      explicit
      Identity_			(const char*		cPtr,
				 uint8_t		numBytes,
				 uint8_t		numUnicodeChars,
				 uint8_t		numEscapedChars
				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_((domain_ty)TINY_STRING_DOMAIN)
				{
				  memcpy(dataUnion_.tinyStr_.text_	+
					  TINY_STRING_STRING_OFFSET,
					 cPtr,
					 numBytes-1
					);
				  memset(dataUnion_.tinyStr_.text_	+
					  TINY_STRING_STRING_OFFSET	+
					 numBytes			-
					 1,
					 '\0',
					 2*sizeof(spFloat_ty) -
					 (TINY_STRING_STRING_OFFSET+numBytes-1)
					);
				  
				  *(((uint8_t*)dataUnion_.tinyStr_.text_)+0)
					= (numBytes	   << 4)  |
					  (numUnicodeChars << 0);
				  *(((uint8_t*)dataUnion_.tinyStr_.text_)+1)
					= (numEscapedChars << 4)  |
					  (0		   << 0);
				}

      //  PURPOSE:  To initialize '*this' to represent a string long enough
      //    to that it needs to be indexed.  'newStringDomain' tells the domain,
      //    'newRunIndex' tells the StructProc run index, 'newStrIndex' tells
      //    the string index.  No return value.
      explicit
      Identity_			(domain_ty	newStringDomain,
				 spRunIndex_ty	newRunIndex,
				 uint64_t	newStrIndex,
				 bool		ignored
				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_(newStringDomain)
				{
				  dataUnion_.indexedStr_.runIndex_= newRunIndex;
				  dataUnion_.indexedStr_.strIndex_= newStrIndex;
				}

      //  PURPOSE:  To initialize '*this' to represent an annotated value with
      //	domain 'newDomain' (combined with 'DISTRIB_FLAG' if 'isDistrib'
      //	 == 'true'), concept number 'newConceptNum', and with run index
      //	given by the current run index of the knowledge base.  No
      //	return value.
      explicit
      Identity_			(domain_ty		newDomain,
      				 bool			isDistrib,
				 spRunIndex_ty		newRunIndex,
				 spConceptNum_ty	newConceptNum
      				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_(newDomain)
				{
				  if  (isDistrib)
				  {
				    domain_	|= DISTRIB_FLAG;
				  }

				  dataUnion_.concept_.runIndex_	= newRunIndex;
				  dataUnion_.concept_.conceptNum_
								= newConceptNum;
				}

      //  PURPOSE:  To initialize '*this' to represent the address in the
      //	virtual address space denoted by domain 'newDomain',
      //	SP run index 'newRunIndex', and partial address
      //	'newPartialAddr'.  No return value.
      explicit
      Identity_			(domain_ty		newDomain,
      				 spRunIndex_ty		newRunIndex,
				 entryPartialAddress_ty	newPartialAddr
      				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_(newDomain)
				{
				  dataUnion_.addr_.runIndex_	=newRunIndex;
				  dataUnion_.raw_.raw1_		=0x0; // zero
				  				      // whole
								      // field
				  dataUnion_.addr_.partialAddr_	=newPartialAddr;
				}

      //  PURPOSE:  To initialize '*this' to represent the address in the
      //	virtual address space denoted by domain 'newDomain',
      //	SP run index 'newRunIndex', and partial address
      //	'newConceptNum'.  No return value.
      explicit
      Identity_			(domain_ty		newDomain,
      				 spRunIndex_ty		newRunIndex,
				 spConceptNum_ty	newConceptNum
      				) :
				superDomain_((superDomain_ty)SUPER_DOMAIN),
				domain_(newDomain)
				{
				  dataUnion_.concept_.runIndex_	=newRunIndex;
				  dataUnion_.concept_.conceptNum_
								= newConceptNum;
				}

      //  IV.B.  Destructor:
      //  PURPOSE:  To release the resources of '*this'.  No parameters.  No
      //    return value.
      virtual
      ~Identity_		();

      //  V.  Accessors:
      //  PURPOSE:  To return the super-domain of '*this' Identity.
      superDomain_ty
		getSuperDomain	()
				const
				{ return(superDomain_); }

      //  PURPOSE:  To return the domain of '*this' Identity.
      domain_ty	getDomain	()
				const
				{ return(domain_); }

      //  PURPOSE:  To return 'true' if '*this' is a concept (as opposed to
      //     a node), or 'false' otherwise.
      bool	isNode		()
				const
				{
				  return( (getDomain() & PATTERN_MASK)
					  == NODE_PATTERN
					);
				}

      //  PURPOSE:  To return 'true' if '*this' represents a concept,
      //	or 'false' otherwise.
      bool	isNominal	()
				const
				{
				  return( (getDomain() ==
					   PREDEFINED_CONCEPT_DOMAIN
					  )
					  ||
					  (getDomain() == NEW_CONCEPT_DOMAIN)
					);
				}

      //  PURPOSE:  To return 'true' if '*this' represents a string, or 'false'
      //	otherwise.
      bool	isString	()
				const
				{
				  return( (getDomain() >= TINY_STRING_DOMAIN) &&
					  (getDomain() <= LONG_STRING_DOMAIN)
					);
				}

      //  PURPOSE:  To return 'true' if '*this' represents an integer, or
      //	'false' otherwise.
      bool	isInteger	()
				const
				{
				  return(getDomain() == INTEGER_DOMAIN);
				}

      //  PURPOSE:  To return 'true' if '*this' represents a rational
      //	(including an integer), or 'false' otherwise.
      bool	isRational	()
				const
				{
				  return( (getDomain() == INTEGER_DOMAIN)  ||
					  (getDomain() == RATIONAL_DOMAIN)
					);
				}

      //  PURPOSE:  To return 'true' if '*this' represents a real, or
      //	'false' otherwise.
      bool	isReal		()
				const
				{
				  return(getDomain() == REAL_DOMAIN);
				}

      //  PURPOSE:  To return 'true' if '*this' represents a complex number
      //	(including a real number), or 'false' otherwise.
      bool	isComplex	()
				const
				{
				  return( (getDomain() == REAL_DOMAIN)  ||
					  (getDomain() == COMPLEX_DOMAIN)
					);
				}

      //  PURPOSE:  To return 'true' if '*this' is a non-annotated number.
      //	Returns 'false' otherwise.
      bool	isNonAnnotatedNumber
				()
				const
				{
				  return( (getSuperDomain() == SUPER_DOMAIN)
				  	  &&
					  ( (getDomain() == INTEGER_DOMAIN)  ||
					    (getDomain() == RATIONAL_DOMAIN) ||
					    (getDomain() == REAL_DOMAIN)     ||
					    (getDomain() == COMPLEX_DOMAIN)
					  )
					);
				}

      //  PURPOSE:  To return 'true' if '*this' represents an annotated value,
      //	or 'false' otherwise.
      bool	isAnnotatedValue()
				const
				{
				  return( (getDomain() & PATTERN_MASK)
				  	  == ANNOTATED_PATTERN
					);
				}

      //  PURPOSE:  To return 'true' if '*this' represents an annotated value
      //	and is defined as being centered around a central value (as
      //	 opposed to being defined as a given multi-valued distribution),
      //	or 'false' otherwise.
      bool	isCentralValueAnnotatedValue
				()
				const
				{
				  return( isAnnotatedValue()		&&
					  !(getDomain() & DISTRIB_FLAG)
					);
				}

      //  PURPOSE:  To return 'true' if '*this' represents an annotated value
      //	and is defined with a given distribution (as being centered
      //	 around a central value, or 'false' otherwise.
      bool	isEnnumeratedDistribAnnotatedValue
				()
				const
				{
				  return( isAnnotatedValue()		&&
					  (getDomain() & DISTRIB_FLAG)
					);
				}

      //  PURPOSE:  To return 'true' if '*this' is an address in the SP address
      //	space or 'false' otherwise.
      bool	isAddress	()
				const
				{
				  return(getDomain() == MAP_ROOT_INDEX_DOMAIN);
				}

      //  PURPOSE:  To return 'true' if '*this' is a hypothetical-referencing
      //  	Identity, or 'false' otherwise.
      bool	isHypotheticalReferencing
				()
				const
				{
				  return( (getDomain() & 
					   HYPOTHETICAL_CONCERNING_MASK
					  )
					  == HYPOTHETICAL_REFERENCING_FLAG
					);
				}

      //  PURPOSE:  To return 'true' if '*this' is a hypothetical Identity,
      //  	or 'false' otherwise.
      bool	isHypothetical	()
				const
				{
				  return( (getDomain() & 
					   HYPOTHETICAL_CONCERNING_MASK
					  )
					  == HYPOTHETICAL_FLAG
					);
				}

      //  PURPOSE:  To return 'true' if '*this' is either a hypothetical
      //  	Identity or hypothetical-referencing Identity, or 'false'
      //  	otherwise.
      bool	isHypotheticalConcerning
				()
				const
				{
				  return( (getDomain() & 
					   HYPOTHETICAL_CONCERNING_MASK
					  )
					  != 0
					);
				}

      //  PURPOSE:  To return the first 8 bytes of the Identity as a raw
      //    64-bit unsigned integer.
      uint64_t	getRaw0		()
				const
				{ return(dataUnion_.raw_.raw0_); }

      //  PURPOSE:  To return the last 8 bytes of the Identity as a raw
      //    64-bit unsigned integer.
      uint64_t	getRaw1		()
				const
				{ return(dataUnion_.raw_.raw1_); }

      //  PURPOSE:  To return the integer of '*this' when '*this'
      //	is interpreted as an integer rational number.
      numerator_ty
		getInteger	()
				const
				{ return(dataUnion_.rational_.numerator_); }

      //  PURPOSE:  To set 'integer' to the integer value in '*this' and
      //	return 'false' if '*this' indeed is an integer.  Returns
      //	'true' otherwise.
      bool	couldNotObtainInteger
				(numerator_ty&	integer
				)
				const
				{
				  if  (isInteger())
				  {
				    integer	= getInteger();
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To set 'integer' to the non-negative integer value in
      //	'*this' and return 'false' if '*this' indeed is an integer.
      //	Returns 'true' otherwise.
      bool	couldNotObtainNonNegativeInteger
				(numerator_ty&	integer
				)
				const
				{

				  if  (isInteger())
				  {
				    numerator_ty	temp	= getInteger();

				    if  (temp >= 0)
				    {
				      integer	= temp;
				      return(false);
				    }

				  }

				  return(true);
				}

      //  PURPOSE:  To return the numerator component of '*this' when '*this'
      //	is interpreted as a rational number.
      numerator_ty
		getNumerator	()
				const
				{ return(dataUnion_.rational_.numerator_); }

      //  PURPOSE:  To return the address of the numerator component of '*this'
      //	when '*this' is interpreted as a rational number.
      numerator_ty*
		getNumeratorAddr()
				{ return(&dataUnion_.rational_.numerator_); }

      //  PURPOSE:  To return the const address of the numerator component of
      //	'*this' when '*this' is interpreted as a rational number.
      const numerator_ty*
		getNumeratorConstAddr
				()
				const
				{ return(&dataUnion_.rational_.numerator_); }

      //  PURPOSE:  To return the denominator component of '*this' when '*this'
      //	is interpreted as an rational number.
      denominator_ty
		getDenominator	()
				const
				{ return(dataUnion_.rational_.denominator_); }

      //  PURPOSE:  To return the address of the denominator component of
      //	'*this' when '*this' is interpreted as an rational number.
      denominator_ty*
		getDenominatorAddr
				()
				{ return(&dataUnion_.rational_.denominator_); }

      //  PURPOSE:  To return the const address of the denominator component of
      //	'*this' when '*this' is interpreted as an rational number.
      const denominator_ty*
		getDenominatorConstAddr
				()
				const
				{ return(&dataUnion_.rational_.denominator_); }

      //  PURPOSE:  To set 'numerator' and 'denominator' to the numerator and
      //  	denominator of the rational value in '*this'.  Assumes that
      //  	'*this' is a rational value.  No return value.
      void	rational_obtain	(numerator_ty&		numerator,
		      		 denominator_ty&	denominator
		      		)
	      			const
				{
				  numerator	= getNumerator();
				  denominator	= getDenominator();
				}

      //  PURPOSE:  To set 'numerator' and 'denominator' to the numerator and
      //	denominator of the rational value in '*this' and return 'false'
      //	if '*this' indeed is a rational.  Returns 'true' otherwise.
      bool	couldNotObtainRational
				(numerator_ty&		numerator,
				 denominator_ty&	denominator
				)
				const
				{
				  if  (isRational())
				  {
				    numerator	= getNumerator();
				    denominator	= getDenominator();
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To return the real component of '*this' when '*this'
      //	is interpreted as a complex number.
      spFloat_ty
		getReal		()
				const
				{ return(dataUnion_.complex_.real_); }

      //  PURPOSE:  To return the address of the real component of '*this' when
      //	'*this' is interpreted as a complex number.
      spFloat_ty*
		getRealAddr	()
				{ return(&dataUnion_.complex_.real_); }

      //  PURPOSE:  To return the const address of the real component of
      //	'*this' when '*this' is interpreted as a complex number.
      const spFloat_ty*
		getRealConstAddr()
				const
				{ return(&dataUnion_.complex_.real_); }

      //  PURPOSE:  To set 'real' to the real value in '*this' and return
      //	'false' if '*this' indeed is a real.  Returns 'true' otherwise.
      bool	couldNotObtainReal
				(spFloat_ty&	real
				)
				const
				{
				  if  (isReal())
				  {
				    real	= getReal();
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To set 'real' to the real value that results when '*this'
      //	is interpretable by casting to a real number and return 'false'
      //	if '*this' indeed is a number.  Returns 'true' otherwise.
      bool	couldNotObtainCastToReal
				(spFloat_ty&	real
				)
				const
				{
				  if  (isInteger())
				  {
				    real	= (spFloat_ty)getInteger();
				    return(false);
				  }

				  if  (isRational())
				  {
				    real	 = (spFloat_ty)getNumerator();
				    real	/= (spFloat_ty)getDenominator();
				    return(false);
				  }

				  if  (isReal() || isComplex())
				  {
				    real	= getReal();
				    return(false);
				  }

				  return(true);				  
				}

      //  PURPOSE:  To return the imaginary component of '*this' when '*this'
      //	is interpreted as a complex number.
      spFloat_ty
		getImaginary	()
				const
				{ return(dataUnion_.complex_.imaginary_); }

      //  PURPOSE:  To return the address of the imaginary component of '*this'
      //	when '*this' is interpreted as a complex number.
      spFloat_ty*
		getImaginaryAddr()
				{ return(&dataUnion_.complex_.imaginary_); }

      //  PURPOSE:  To return the const address of the imaginary component of
      //	'*this' when '*this' is interpreted as a complex number.
      const spFloat_ty*
		getImaginaryConstAddr
				()
				const
				{ return(&dataUnion_.complex_.imaginary_); }

      //  PURPOSE:  To set 'real' and 'imaginary' to the real and imaginary
      //  	components of the complex value in '*this'.  Assumes that
      //  	'*this' is a complex value.  No return value.
      void	complex_obtain	(spFloat_ty&	real,
		      		 spFloat_ty&	imaginary
		      		)
	      			const
				{
				  real		= getReal();
				  imaginary	= getImaginary();
				}

      //  PURPOSE:  To set 'real' and 'imaginary' to the real and imaginary
      //	components of the complex value in '*this' and return 'false'
      //	if '*this' indeed is complex.  Returns 'true' otherwise.
      bool	couldNotObtainComplex
				(spFloat_ty&	real,
				 spFloat_ty&	imaginary
				)
				const
				{
				  if  (isComplex())
				  {
				    real	= getReal();
				    imaginary	= getImaginary();
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To return the run-index component of '*this' when '*this'
      //	is interpreted as a nominal.
      spRunIndex_ty
		getRunIndex	()
				const
				{ return(dataUnion_.concept_.runIndex_); }

      //  PURPOSE:  To return the concept component of '*this' when '*this'
      //	is interpreted as a nominal.
      spConceptNum_ty
		getConcept	()
				const
				{ return(dataUnion_.concept_.conceptNum_); }

      //  PURPOSE:  To return the index of a string.
      stringIndex_ty
		getStrIndex	()
				const
				{ return(dataUnion_.indexedStr_.strIndex_); }

      //  PURPOSE:  To return the address of the C-string in '*this'.
      const char*
		getTinyStrCPtr	()
				const
				{
				  return(dataUnion_.tinyStr_.text_	+
					 TINY_STRING_STRING_OFFSET
					);
				}

      //  PURPOSE:  To return 'true' if '*this' does not represent an index of
      //	a mapping tree, or to set 'runIndex' and 'partialAddr' to the
      //	'spRunIndex_ty' and mapping tree index of '*this' address and
      //	to return 'false'.
      bool	couldNotObtainMapRootIndex
				(spRunIndex_ty&			runIndex,
				 entryPartialAddress_ty&	partialAddr
				)
				const
				{
				  if  (getDomain() == MAP_ROOT_INDEX_DOMAIN)
				  {
				    runIndex	=dataUnion_.addr_.runIndex_;
				    partialAddr	=dataUnion_.addr_.partialAddr_;
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To return 'true' if '*this' does not represent an index
      //	into a bag tree, or to set 'runIndex' and 'partialAddr' to
      //	the 'spRunIndex_ty' and index of '*this' address and to return
      //	'false'.
      bool	couldNotObtainBagTreeAddress
				(spRunIndex_ty&			runIndex,
				 entryPartialAddress_ty&	partialAddr
				)
				const
				{
				  if  (getDomain() == BAG_TREE_ADDR_DOMAIN)
				  {
				    runIndex	=dataUnion_.addr_.runIndex_;
				    partialAddr	=dataUnion_.addr_.partialAddr_;
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To return 'true' if '*this' does not represent an index
      //	into a mapping tree, or to set 'runIndex' and 'partialAddr' to
      //	the 'spRunIndex_ty' and index of '*this' address and to return
      //	'false'.
      bool	couldNotObtainMapTreeAddress
				(spRunIndex_ty&			runIndex,
				 entryPartialAddress_ty&	partialAddr
				)
				const
				{
				  if  (getDomain() == MAP_TREE_ADDR_DOMAIN)
				  {
				    runIndex	=dataUnion_.addr_.runIndex_;
				    partialAddr	=dataUnion_.addr_.partialAddr_;
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To return 'true' if '*this' does not represent an index
      //	into a bag root, or to set 'runIndex' and 'partialAddr' to
      //	the 'spRunIndex_ty' and index of '*this' address and to return
      //	'false'.
      bool	couldNotObtainBagRootAddress
				(spRunIndex_ty&			runIndex,
				 entryPartialAddress_ty&	partialAddr
				)
				const
				{
				  if  (getDomain() == BAG_ROOT_ADDR_DOMAIN)
				  {
				    runIndex	=dataUnion_.addr_.runIndex_;
				    partialAddr	=dataUnion_.addr_.partialAddr_;
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To return the 'entryPartialAddress_ty' of '*this' when
      //	'*this' is interpreted as a (kbRun,partialAddr) pair.  No
      //	parameters.
      entryPartialAddress_ty
		getEntryPartialAddress
				()
				const
				{ return(dataUnion_.addr_.partialAddr_); }

      //  PURPOSE:  To return 'true' if '*this' does not represent an index
      //	of the name of a structure variable, or to set 'runIndex' and
      //	'partialAddr' to the 'spRunIndex_ty' and index of '*this'
      //	address and to return 'false'.
      bool	couldNotObtainStructVarNameAddress
				(spRunIndex_ty&			runIndex,
				 entryPartialAddress_ty&	partialAddr
				)
				const
				{
				  if  (getDomain() == STRUCTURE_VAR_ADDR_DOMAIN)
				  {
				    runIndex	=dataUnion_.addr_.runIndex_;
				    partialAddr	=dataUnion_.addr_.partialAddr_;
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To return 'true' if '*this' does not represent an index
      //	of a sub-expression, or to set 'runIndex' and
      //	'partialAddr' to the 'spRunIndex_ty' and index of '*this'
      //	address and to return 'false'.
      bool	couldNotObtainSubexprAddress
				(spRunIndex_ty&			runIndex,
				 entryPartialAddress_ty&	partialAddr
				)
				const
				{
				  if  ((getDomain()==UNARY_SUBEXPR_ADDR_DOMAIN)
				       ||
				       (getDomain()==BINARY_SUBEXPR_ADDR_DOMAIN)
				      )
				  {
				    runIndex	=dataUnion_.addr_.runIndex_;
				    partialAddr	=dataUnion_.addr_.partialAddr_;
				    return(false);
				  }

				  return(true);
				}

      //  PURPOSE:  To return a guess at where '*this' was parsed.
      parseLocIndex_ty
		getParseLocation()
				const
				{
				  return
				    (DEFINED_BEFORE_KB_LOAD_PARSE_LOC_INDEX
				    );
				}

      //  PURPOSE:  To put the fields of '*this' in compressed form to address
      //	'addr'.  No return value.
      void	compressTo	(void*		addr
				)
				const
				{
				  char*		ptr  = (char*)addr;

				  *(superDomain_ty*)ptr
						     = superDomain_;
				  ptr		    += sizeof(superDomain_ty);
				  *(domain_ty*)ptr   = domain_;
				  ptr		    += sizeof(domain_ty);
				  *(uint64_t*)ptr    = dataUnion_.raw_.raw0_;
				  ptr		    += sizeof(uint64_t);
				  *(uint64_t*)ptr    = dataUnion_.raw_.raw1_;
				}

      //  PURPOSE:  To return 'true' if '*this' is an ordinary concept (as
      //	 opposed to a nonspecific class member, etc.).  Returns
      //	'false' otherwise.
      virtual
      bool	isOrdinaryConcept
				()
				const
				= 0;

      //  VI.  Mutators:
      //  PURPOSE:  To set '*this' to 'null_'.  No parameters.
      //	No return value.
      void	setToNull	()
      				{
				  superDomain_		= 0x0;
				  domain_		= 0x0;
				  dataUnion_.raw_.raw0_	= 0x0;
				  dataUnion_.raw_.raw1_	= 0x0;
				}

      //  PURPOSE:  To set '*this' value from a compressed Identity occurring
      //	at address 'ptr'.  No return value.
      void	uncompressFrom	(const void*	ptr
				)
				{
				  const uint8_t*	addr;

				  addr		 = (const uint8_t*)ptr;
				  superDomain_	 = *(superDomain_ty*)addr;
				  addr		+= sizeof(superDomain_ty);
				  domain_	 = *(domain_ty*)addr;
				  addr		+= sizeof(domain_ty);
				  dataUnion_.raw_.raw0_
						 = *(uint64_t*)addr;
				  addr		+= sizeof(uint64_t);
				  dataUnion_.raw_.raw1_
						 = *(uint64_t*)addr;
				}

      //  PURPOSE:  To note that '*this' represents a non-specific member
      //	of its previous value (which must have been a known class).
      void	toNonspecific	();

      //  PURPOSE:  To note that '*this' represents an ordinary concept
      //	corresponding to its previous value (e.g. non-specific class
      //	 member).
      void	toOrdinary	();

      //  PURPOSE:  To make '*this' represent either 'true_' if 'val'=='true'
      //  	or 'false_' otherwise.  No return value.
      void	boolean_set	(bool			value
				);

      //  VII.  Methods that do main and misc. work of class:
      //  PURPOSE:  To add 'addendum' to '*this' by integer (_not_ rational)
      //	addition.
      void	integer_add	(numerator_ty		addendum
				);

      //  PURPOSE:  To subtract 'amount' from '*this' by integer (_not_
      //	 rational) subtraction.
      void	integer_subtract(numerator_ty		amount
				);

      //  PURPOSE:  To multiply '*this' by 'amount' by integer (_not_ rational)
      //	multiplication.
      void	integer_multiply(numerator_ty		amount
				);

      //  PURPOSE:  To divide '*this' by 'amount' by integer (_not_ rational)
      //	division.
      void	integer_divide	(numerator_ty		amount
				)
				{
				  dataUnion_.rational_.numerator_ /= amount;
				}

      //  PURPOSE:  To add 'addendum' to '*this' by rational
      //            addition.
      void	rational_add	(numerator_ty		addendumNumerator,
				 denominator_ty		addendumDenominator
				);

      //  PURPOSE:  To subtract 'amount' from '*this' by rational
      //            subtraction.
      void	rational_subtract(numerator_ty		amountNumerator,
		 		  denominator_ty	amountDenominator
				);

      //  PURPOSE:  To multiply '*this' by 'amount' by rational
      //            multiplication.
      void	rational_multiply(numerator_ty		amountNumerator,
				  denominator_ty	amountDenominator
				);

      //  PURPOSE:  To divide '*this' by 'amount' rational
      //            division.
      void	rational_divide	(numerator_ty		amountNumerator,
				 denominator_ty		amountDenominator
				);

      //  PURPOSE:  To return 'true' if '*this' rational number is less than
      //	the rational number in 'rhs', or 'false' otherwise.  Returns
      //	'true' if '*this' == 'rhs' and 'canBeEqual' == 'true'.
      bool	rational_isLessThan
				(const Identity&	rhs,
				 bool			canBeEqual
				)
				const;

      //  PURPOSE:  To add 'addendum' to '*this' by real (_not_ complex)
      //	addition.
      void	real_add	(spFloat_ty		addendum
				)
				{
				  dataUnion_.complex_.real_ += addendum;
				}

      //  PURPOSE:  To subtract 'amount' from '*this' by real (_not_ complex)
      //	subtraction.
      void	real_subtract	(spFloat_ty		amount
				)
				{
				  dataUnion_.complex_.real_ -= amount;
				}

      //  PURPOSE:  To multiply '*this' by 'amount' by real (_not_ complex)
      //	multiplication.
      void	real_multiply	(spFloat_ty		amount
				)
				{
				  dataUnion_.complex_.real_ *= amount;
				}

      //  PURPOSE:  To divide '*this' by 'amount' by real (_not_ complex)
      //	division.
      void	real_divide	(spFloat_ty		amount
				)
				{
				  dataUnion_.complex_.real_ /= amount;
				}

      //  PURPOSE:  To add 'addendum' to '*this' by complex addition.
      void	complex_add	(spFloat_ty		addendumReal,
				 spFloat_ty		addendumImaginary
				);

      //  PURPOSE:  To subtract 'amount' from '*this' by complex
      //            subtraction.
      void	complex_subtract(spFloat_ty		amountReal,
				 spFloat_ty		amountImaginary
				);

      //  PURPOSE:  To multiply '*this' by 'amount' by complex
      //            multiplication.
      void	complex_multiply(spFloat_ty		amountReal,
				 spFloat_ty		amountImaginary
				);

      //  PURPOSE:  To divide '*this' by 'amount' by complex
      //	    division.
      void	complex_divide	(spFloat_ty		amountReal,
				 spFloat_ty		amountImaginary
				);

      //  PURPOSE:  To re-assign 'numerator' and 'denominator' to values after
      //    primes they share have been removed.  No return values.
      static
      void	removeCommonPrimes
				(numerator_ty&		numerator,
				 denominator_ty&	denominator
				);

      //  PURPOSE:  To write '*this' to file descriptor 'fd'.  Returns
      //	'COMPRESSED_SIZE' on success or a negative value on error.
      int	write		(int		fd
				)
				const;

      //  PURPOSE:  To convert the members of '*this' into the endian used by
      //	the architecture on which this program runs.
      void	toLocalArchEndian
				();

      //  PURPOSE:  To write '*this' to memory pointed to by 'cPtr'.  No
      //	return value.
      void	memWrite	(char*	     cPtr
				)
				const;

      //  PURPOSE:  To write '*this' to memory pointed to by 'cPtr'.  Advances
      //	'cPtr' by 'COMPRESSED_SIZE'.  No return value.
      size_t	memWriteAndAdv	(char*&	     cPtr
				)
				const
				{
				  memWrite(cPtr);
				  cPtr += COMPRESSED_SIZE;
				  return(COMPRESSED_SIZE);
				}

    };


    //  PURPOSE:  To tell the compressed size of Identity instances.
    const int	NUM_COMPRESSED_BYTES_PER_IDENTITY
				= Identity_::COMPRESSED_SIZE;

    class	Identity : public Identity_
    {
      //  0.  Local constants, types and classes:

    public :
      //  0.  Local constants, types and classes:
      enum
      {
	SIZEOF_DATAFIELDS	= Identity_::SIZEOF_DATAFIELDS,
	COMPRESSED_SIZE		= Identity_::COMPRESSED_SIZE
      };

    private :
      //  I.  Member vars:
      //  PURPOSE:  To tell the next idea number to use for dynamically created
      //	idea structures during this SP run.
      static
      spConceptNum_ty		nextIdeaNumber__;

      //  PURPOSE:  To tell the next idea number to use for dynamically created
      //	node structures during this SP run.
      static
      spConceptNum_ty		nextNodeNumber__;

      //  PURPOSE:  To tell the next idea number to use for dynamically created
      //	hypothetical referencing Identity during this SP run.
      static
      spConceptNum_ty		nextHypotheticalReferencingNumber__;

      //  PURPOSE:  To tell the next idea number to use for dynamically created
      //	hypothetical Identity during this SP run.
      static
      spConceptNum_ty		nextHypotheticalNumber__;

      //  II.  Disallowed auto-generated methods:

    protected :
      //  III.  Protected methods:

    public :
      //  IV.  Constructor(s), factory(s), assignment op(s) and destructor:
      //  IV.A.  Constructors:
      //  PURPOSE:  To initialize '*this' to represent 'null'.  No return value.
      Identity			() :
				Identity_()
				{ }

      //  PURPOSE:  To make '*this' a copy of 'rhs'.  No return value.
      Identity			(const Identity&	 rhs
				) :
				Identity_(rhs)
				{ }

      //  PURPOSE:  To initialize '*this' to represent the concept with run
      //    index 'newRunIndex' and concept number 'newConceptNum'.  No return
      //    value.
      explicit
      Identity			(spRunIndex_ty		newRunIndex,
				 spConceptNum_ty	newConceptNum
				) :
				Identity_(newRunIndex,newConceptNum)
				{ }

      //  PURPOSE:  To initialize '*this' to represent integer 'newInt'.  No
      //    return value.
      explicit
      Identity			(numerator_ty		newInt
				) :
				Identity_(newInt)
				{ }

      //  PURPOSE:  To initialize '*this' to represent the rational number with
      //    numerator 'newNumerator' and denominator 'newDenominator'.  If
      //    'haveCommonPrimesBeenRemoved' is 'false' then tries to remove
      //    common primes from both 'newNumerator' and 'newDenominator' before
      //    initializing '*this'.  No return value.
      explicit
      Identity			(bool		haveCommonPrimesBeenRemoved,
				 numerator_ty	newNumerator,
				 denominator_ty	newDenominator
				) :
				Identity_
					(newNumerator,
					 newDenominator,
					 haveCommonPrimesBeenRemoved
					)
				{ }

      //  PURPOSE:  To initialize '*this' to represent the rational or integer
      //  	'rat'.
      explicit
      Identity			(const Rational&	rat
      				) :
				Identity_
					(rat.getNumerator(),
					 rat.getDenominator(),
					 false
					)
				{ }

      //  PURPOSE:  To initialize '*this' to represent the real number
      //    'newReal'.  No return value.
      explicit
      Identity			(spFloat_ty	newReal
				) :
				Identity_(newReal)
				{ }

      //  PURPOSE:  To initialize '*this' Identity instance to correspond to
      //    the floating point number with real component 'real' and
      //    imaginary component 'imaginary'.  No return value.
      explicit
      Identity			(spFloat_ty		real,
				 spFloat_ty		imaginary
				) :
				Identity_(real,imaginary)
				{ }

      //  PURPOSE:  To initialize '*this' to represent a tiny string with
      //    chars 'numBytes' bytes (and 'numUnicodeChars' chars) (not including
      //     ending '\0') pointed to by 'cPtr'.  'numEscapedChars'
      //    tells the number of chars that *must* be represented as form '\c'
      //    according to the rules of C escape codes.  
      explicit
      Identity			(const char*		cPtr,
				 uint8_t		numBytes,
				 uint8_t		numUnicodeChars,
				 uint8_t		numEscapedChars
				) :
				Identity_
				  (cPtr,
				   numBytes,
				   numUnicodeChars,
				   numEscapedChars
				  )
				{ }

/*    //  PURPOSE:  To initialize '*this' to represent the string in domain
      //    'newStringDomain' with index 'newIndex'.  No return value.
      explicit
      Identity			(domain_ty		newStringDomain,
				 spRunIndex_ty		newRunIndex,
				 uint64_t		newStrIndex,
				 bool			ignored
				) :
				Identity_
					(newStringDomain,
					 newRunIndex,
					 newStrIndex,
					 ignored
					)
				{ }
 */
      //  PURPOSE:  To initialize '*this' to represent an annotated value with
      //	domain 'newDomain' (combined with 'DISTRIB_FLAG' if 'isDistrib'
      //	 == 'true'), concept number 'newConceptNum', and with run index
      //	given by the current run index of the knowledge base.  No
      //	return value.
      explicit
      Identity			(domain_ty		newDomain,
      				 bool			isDistrib,
				 spRunIndex_ty		newRunIndex,
				 spConceptNum_ty	newConceptNum
      				) :
				Identity_
					(newDomain,
					 isDistrib,
					 newRunIndex,
					 newConceptNum
					)
				{ }

      //  PURPOSE:  To initialize '*this' to represent the address in the
      //	virtual address space denoted by domain 'newDomain',
      //	SP run index 'newRunIndex', and partial address
      //	'newPartialAddr'.  No return value.
      explicit
      Identity			(domain_ty		newDomain,
      				 spRunIndex_ty		newRunIndex,
				 entryPartialAddress_ty	newPartialAddr
      				) :
				Identity_(newDomain,newRunIndex,newPartialAddr)
				{ }

      //  PURPOSE:  To initialize '*this' to represent the address in the
      //	virtual address space denoted by domain 'newDomain',
      //	SP run index 'newRunIndex', and partial address
      //	'newConceptNum'.  No return value.
      explicit
      Identity			(domain_ty		newDomain,
      				 spRunIndex_ty		newRunIndex,
				 spConceptNum_ty	newConceptNum
      				) :
				Identity_(newDomain,newRunIndex,newConceptNum)
				{ }

      //  IV.B.  Assignment op(s):
      //  PURPOSE:  To release the resources of '*this' and to make '*this' a
      //    copy of 'rhs'.  Returns reference to '*this'.
      Identity&	operator=	(const Identity&	rhs
				)
				{
				  if  (this == &rhs)
				  {
				    return(*this);
				  }

				  this->releaseResources();
				  this->copy(rhs);
				  return(*this);
				}

      //  PURPOSE:  To release resources of '*this'.  No parameters.  No return
      //	value.
      ~Identity			()
				{ }

      //  IV.C.  Factory(s):
      //  PURPOSE:  To return the Identity for the next nominal Idea.
      static
      Identity	getNextIdeaIdentity
				();

      //  PURPOSE:  To return the Identity of the next annotated value with
      //	domain 'newDomain' (combined with 'DISTRIB_FLAG' if 'isDistrib'
      //	 == 'true').
      static
      Identity	getNextAnnotatedValueIdentity
				(domain_ty		newDomain,
				 bool			isDistrib
				);

      //  PURPOSE:  To return the Identity for the next hypothetical
      //	referencing nominal Idea.
      static
      Identity	getNextHypotheticalReferencingIdentity
				();

      //  PURPOSE:  To return the Identity for the next hypothetical nominal
      //	Idea.
      static
      Identity	getNextHypotheticalIdentity
				();

      //  IV.D.  Destructor:

      //  V.  Accessors:
      //  PURPOSE:  To reset the concept and node enumerating vars.  No
      //	parameters.  No return value.
      static
      void	resetConceptAndNodeEnumerators
				()
				{
				  nextIdeaNumber__
			  = INITIAL_DYNAMIC_IDEA_NUM_FOR_SUBSEQUENT_KB_RUN;
				  nextNodeNumber__
						= INITIAL_DYNAMIC_NODE_NUM;
				  nextHypotheticalReferencingNumber__	= 0x0;
				  nextHypotheticalNumber__		= 0;
				}
      
      //  PURPOSE:  To return 'true' if '*this' is a non-annotated value whose
      //	real component is negative, or 'false' if it is a non-annotated
      //	value whose real component is non-negative.
      bool	isNonAnnotatedNegativeNumber
				()
				const;

      //  PURPOSE:  To set 'value' to the boolean value in '*this' and
      //  	return 'false' if '*this' is indeed a boolean.  Returns
      //  	'true' otherwise.
      bool	couldNotObtainBoolean
				(bool&		value
				)
				const;

      //  PURPOSE:  To return 'true' if '*this' represent the Idea 'null',
      //	or 'false' otherwise.
      bool	isNull		()
				const;

      //  PURPOSE:  To return 'true' if '*this' represent the Idea 'null' or
      //	'unknown', or is a justification defined to have either of
      //	those or values as their value for attribute
      //	'justificationsValueA'. Returns 'false' otherwise.
      bool	isNullOrUnknown	()
				const;

      //  PURPOSE:  To return 'true' if '*this' represents either Ideas 'true'
      //	or 'false', or 'false' otherwise.
      bool	isBoolean	()
				const;

      //  PURPOSE:  To return 'true' if '*this' represents either Ideas 'true'
      //	or 'false', or 'false' otherwise.  If '*this' is a boolean then
      //	'result' is set to the boolean value in '*this'.
      bool	isBoolean	(bool&	result
				)
				const;

      //  PURPOSE:  To return 'true' if '*this' represents a hypothetical
      //  	concept, or 'false' otherwise.
      bool	isHypothetical	()
				const
				{
				  return( (getDomain() & HYPOTHETICAL_FLAG)
				  	  == HYPOTHETICAL_FLAG
					);
				}

      //  PURPOSE:  To return the integer represented by '*this'.  Throws
      //	NonIntegerException if '*this' does not represent an integer.
      numerator_ty
		getIntegerWithCheck
				()
				const;

      //  PURPOSE:  To return a pointer to the string represented by '*this'.
      //	Throws NonStringException if '*this' does not represent a
      //	string.
      const char*
		getStringCharPtrWithCheck
				()
				const;

      //  PURPOSE:  To return the number of bytes used to represent '*this'
      //	string (not including the ending '\0').  Throws
      //	NonStringException if '*this' does not represent a string.
      size_t	getStringNumBytesWithCheck
				()
				const;

      //  PURPOSE:  To return the number of Unicode chars in '*this' string
      //	(not including the ending '\0').  Throws NonStringException if
      //	'*this' does not represent a string.
      size_t	getStringNumUnicodeCharsWithCheck
				()
				const;

      //  PURPOSE:  To return the number of chars in '*this' string that *must*
      //	be represented in from '\c' according to rules of C.  Throws
      //	NonStringException if '*this' does not represent a string.
      size_t	getStringNumEscapedCharsWithCheck
				()
				const;

      //  PURPOSE:  To return 'true' if '*this' is a subclass of 'Value'
      //	(inclusive of 'Value' itself), or 'false' otherwise.  No
      //	parameters.
      bool	isValueSubclass	()
				const;

      //  PURPOSE:  To return the rational approximation of '*this' as
      //	'Rational', for non-annotated Integer, Rational and Real
      //	numbers.
      Rational	toRational	()
				const;

      //  PURPOSE:  To return the real component of '*this' as 'spFloat_ty',
      //	no matter what type of non-annotated number '*this' is.
      spFloat_ty
		toReal		()
				const;

      //  PURPOSE:  To return the imaginary component of '*this' as
      //	'spFloat_ty', no matter what type of non-annotated number
      //	'*this' is.
      spFloat_ty
		toImaginary	()
				const;

      //  PURPOSE:  To return 'true' if '*this' is the class of a
      //	data-structure class or iterator class, or 'false' otherwise.
      bool	isDataStructOrIterClass
				()
				const;

      //  PURPOSE:  To return a relative value telling the order of precedence
      //	of '*this', *only* if '*this' was interpreted as a binary
      //	operator.  Higher values imply higher precedence.  Returns
      //	'-1' otherwise.
      int	getOrderOfPrecedence
				()
				const;

      //  PURPOSE:  To return 'true' if '*this' is a concept that potentially
      //	 can be modified by 'assertX()', or 'false' otherwise.  No
      //	parameters.
      bool	isPotentiallyAssertableConcept
				()
				const
				{
				  domain_ty	pattern;

				  pattern	= getDomain() & PATTERN_MASK;
				  return( ( (pattern == CONCEPT_PATTERN)  ||
					    (pattern == ANNOTATED_PATTERN)
					  )
					  &&
					  ( (getConcept() & IDEA_ASPECT_MASK)
					    == ORDINARY_IDENTITY_OFFSET
					  )
					);
				}

      //  PURPOSE:  To return 'true' if '*this' is an ordinary concept (as
      //	 opposed to a nonspecific class member, etc.).  Returns
      //	'false' otherwise.
      bool	isOrdinaryConcept
				()
				const
				{
				  return( isNominal()			&&
					  ( (getConcept() & IDEA_ASPECT_MASK)
					    == ORDINARY_IDENTITY_OFFSET
					  )
					);
				}

      //  PURPOSE:  To return 'true' if '*this' is a nonspecific class member.
      //	Returns 'false' otherwise.
      bool	isNonspecificMember
				()
				const
				{
				  return( isNominal()			&&
					  ( (getConcept() & IDEA_ASPECT_MASK)
					    ==NONSPECIFIC_MEMBER_IDENTITY_OFFSET
					  )
					);
				}

      //  VI.  Mutators:
      //  PURPOSE:  To reset the hypothetical idea count back to 0.  No
      //	parameters.  No return value.
      static
      void	resetHypotheticalNumber
				()
				{ nextHypotheticalNumber__	= 0; }

      //  VII.  Methods that do main and misc. work of class:
      //  PURPOSE:  To return 'true' if '*this' is the same Identity as 'rhs',
      //	or 'false' otherwise.
      bool	operator==	(const Identity&	rhs
				)
				const
				{
				  return( (getSuperDomain() ==
					   rhs.getSuperDomain()
					  )
					  &&
					  (getDomain() == rhs.getDomain())
					  &&
					  ( memcmp
					    (getRawDataPtr(),
					     rhs.getRawDataPtr(),
					     SIZEOF_DATAFIELDS
					    )
					    == 0
					  )
					);
				}

      //  PURPOSE:  To return 'false' if '*this' is the same Identity as 'rhs',
      //	or 'true' otherwise.
      bool	operator!=	(const Identity&	rhs
				)
				const
				{
				  return( !(*this == rhs) );
				}

      //  PURPOSE:  To release the resources of '*this' and to make '*this'
      //	the value of its former self times 'rhs'.  Returns reference
      //	to '*this'.
      Identity&	operator*=	(const Identity&	rhs
				);

      //  PURPOSE:  To return '*this' raised to the power 'power'.
      Identity	raiseTo		(const Identity&	power
				)
				const;

      //  PURPOSE:  To return 'true' if 'class' is an Identity representing a
      //    class that immediately implements a basic fundamental
      //    data-structure.
      static
      bool	isImmediateDataStructureClass
				(const Identity&	class_
				);

      //  PURPOSE:  To return 'true' if 'attr' is an Identity for which
      //    immutability does not have to be checked:
      static
      bool	isAttrForWhichDoNotHaveToCheckImmutability
				(const Identity&	attr
				);

      //  PURPOSE:  To return 'true' of 'attr' is an Identity of an attribute
      //    whose value is encoded in the ''
      static
      bool	isAttrValueEncodedInBitVector
				(const Identity&	attr
				);

      //  PURPOSE:  To set 'cPtr' to the address of the beginning of the string
      //    held in '*this', and to set 'numBytes' equal to the number of
      //    bytes of the string and 'numUnicodeChars' equal to the number of
      //    Unicode chars.  'numEscapedChars' is set to the number of chars
      //    that must be represented in form '\c' according to rules of C.
      //    No return value.
      //
      //    NOTE: 'cPtr' is _not_ and '\0' char terminated string.  
      void	string_obtainInfo
				(const char*&	cPtr,
				 size_t&	numBytes,
				 size_t&	numUnicodeChars,
				 size_t&	numEscapedChars
				)
				const;

      //  PURPOSE:  To return the hash value of sequence of Identity instances
      //	'seq'.
      identityHash_ty
		getHash		()
				const
				{
				  identityHash_ty	first	= getRaw0();
				  identityHash_ty	second	= getRaw1();

				  first		= ~first;
				  second	= (second<<33) | (second>>31);
				  return(first ^ second);
				}

      //  PURPOSE:  To return 

    };


    //  PURPOSE:  To return 'true' if 'lhs' is to be ordered before 'rhs', or
    //	  'false' otherwise.
    inline
    bool	operator<	(const Identity&	lhs,
				 const Identity&	rhs
				)
    {
      //  I.  Application validity check:

      //  II.  Do comparison:
      //  II.A.  Compare superdomains:
      if  (lhs.getSuperDomain() < rhs.getSuperDomain())
	return(true);

      if  (lhs.getSuperDomain() > rhs.getSuperDomain())
	return(false);

      //  II.B.  Compare domains:
      if  (lhs.getDomain() < rhs.getDomain())
	return(true);

      if  (lhs.getDomain() > rhs.getDomain())
	return(false);

      //  II.C.  Compare 'row0':
      if  (lhs.getRaw0() < rhs.getRaw0())
	return(true);

      if  (lhs.getRaw0() > rhs.getRaw0())
	return(false);

      //  II.D.  Compare 'row1':
      if  (lhs.getRaw1() < rhs.getRaw1())
	return(true);

      if  (lhs.getRaw1() > rhs.getRaw1())
	return(false);

      //  III.  Finished, if get here then 'lhs' == 'rhs':
      return(false);
    }


    //  PURPOSE:  To return 'true' if 'lhs' should be ordered after 'rhs', or
    //  	to return 'false' otherwise.
    inline
    bool	operator>	(const Identity&	lhs,
				 const Identity&	rhs
				)
				{ return( rhs < lhs ); }


    //  PURPOSE:  To return 'true' if non-annotated number 'lhs' is numerically
    //		less than non-annotated number 'rhs', or 'false' otherwise.
    extern
    bool	isNonannotNumberLessThan
				(const Identity&	lhs,
				 const Identity&	rhs
				);


    //  PURPOSE:  To return 'true' if non-annotated number 'lhs' is numerically
    //		greater than non-annotated number 'rhs', or 'false' otherwise.
    inline
    bool	isNonannotNumberGreaterThan
				(const Identity&	lhs,
				 const Identity&	rhs
				)
				{ return(isNonannotNumberLessThan(rhs,lhs)); }

    //  PURPOSE:  To return 'true' if non-annotated number 'lhs' is numerically
    //		less than or equal to non-annotated number 'rhs', or 'false'
    //		otherwise.
    extern
    bool	isNonannotNumberLessThanEqualTo
				(const Identity&	lhs,
				 const Identity&	rhs
				);

    //  PURPOSE:  To return 'true' if non-annotated number 'lhs' is numerically
    //		greater than or equal to non-annotated number 'rhs', or 'false'
    //		otherwise.
    inline
    bool	isNonannotNumberGreaterThanEqualTo
				(const Identity&	lhs,
				 const Identity&	rhs
				)
				{
				  return(isNonannotNumberLessThanEqualTo
						(rhs,
						 lhs
						)
					);
				}

    //  PURPOSE:  To return the smaller of either 'lhs' or 'rhs' as determined
    //		by non-annotated numerical comparison.
    inline
    const Identity&
		minNonannotNumber
				(const Identity&	lhs,
				 const Identity&	rhs
				)
				{
				  return( isNonannotNumberLessThan(lhs,rhs)
					  ? lhs
					  : rhs
					);
				}

    //  PURPOSE:  To return the larger of either 'lhs' or 'rhs' as determined
    //		by non-annotated numerical comparison.
    inline
    const Identity&
		maxNonannotNumber
				(const Identity&	lhs,
				 const Identity&	rhs
				)
				{
				  return( isNonannotNumberLessThan(lhs,rhs)
					  ? rhs
					  : lhs
					);
				}


    //  PURPOSE:  To hold two 'Identity' instances.
    struct	IdentityPair
    {
      //  I.  Member vars:
      //  PURPOSE:  To hold the first Identity.
      Identity			first_;

      //  PURPOSE:  To hold the second Identity.
      Identity			second_;

      //  II.  Constructor(s), assignment op(s), factory(s) and destructor:
      //  PURPOSE:  To initialize '*this' to have member variable values that
      //	are default values.  No return value.
      IdentityPair		();

      //  PURPOSE:  To initialize '*this' to have first value 'newFirst' and
      //	second value 'newSecond'.  No return value.
      IdentityPair		(const Identity&	newFirst,
				 const Identity&	newSecond
				) :
				first_(newFirst),
				second_(newSecond)
				{ }

      //  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
      IdentityPair		(const IdentityPair&	source
				) :
				first_(source.getFirst()),
				second_(source.getSecond())
				{ }

      //  PURPOSE:  To release the resources of '*this' and to make '*this' a
      //    copy of 'rhs'.  Returns reference to '*this'.
      IdentityPair&
		operator=	(const IdentityPair&	rhs
				)
				{
				  if  (this == &rhs)
				    return(*this);

				  first_	= rhs.getFirst();
				  second_	= rhs.getSecond();
				  return(*this);
				}


      //  PURPOSE:  To return the first value of '*this'.  No parameters.
      const Identity&
		getFirst	()
				const
				{ return(first_); }

      //  PURPOSE:  To return the second value of '*this'.  No parameters.
      const Identity&
		getSecond	()
				const
				{ return(second_); }

      //  PURPOSE:  To set the first value of '*this' to 'newValue'.
      //	No return value.
      void	setFirst	(const Identity&	newValue
				)
				{ first_	= newValue; }

      //  PURPOSE:  To set the second value of '*this' to 'newValue'.
      //	No return value.
      void	setSecond	(const Identity&	newValue
				)
				{ second_	= newValue; }

    };


    //  PURPOSE:  To return 'true' if 'lhs' should be ordered after 'rhs', or
    //  	to return 'false' otherwise.
    inline
    bool	operator<	(const IdentityPair&	lhs,
				 const IdentityPair&	rhs
				)
				{
				  if  (lhs.getFirst() < rhs.getFirst())
				  {
				    return(true);
				  }

				  if  (lhs.getFirst() > rhs.getFirst())
				  {
				    return(false);
				  }

				  return( lhs.getSecond() < rhs.getSecond() );
				}

/*
    //  PURPOSE:  To hold two 'Identity' instances as a <value,justification>
    //	  pair.
    struct	ValueAndJustification : public IdentityPair
    {
      //  I.  Member vars:

      //  II.  Constructor(s), assignment op(s), factory(s) and destructor:
      //  PURPOSE:  To initialize '*this' to have member variable values that
      //	are recognizably illegal for a value and its justification.
      //	No return value.
      ValueAndJustification	();

      //  PURPOSE:  To initialize '*this' to have value 'newValue' and
      //	justification 'newJustification'.  No return value.
      ValueAndJustification	(const Identity&	newValue,
				 const Identity&	newJustification
				) :
				IdentityPair(newValue,newJustification)
				{ }

      //  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
      ValueAndJustification	(const ValueAndJustification&	source
				) :
				IdentityPair(source)
				{ }

      //  PURPOSE:  To release the resources of '*this' and to make '*this' a
      //    copy of 'rhs'.  Returns reference to '*this'.
      ValueAndJustification&
		operator=	(const ValueAndJustification&	rhs
				)
				{
				  if  (this == &rhs)
				    return(*this);

				  *(IdentityPair*)this	= rhs;
				  return(*this);
				}


      //  PURPOSE:  To return the value portion of '*this'
      //	ValueAndJustification.  No parameters.
      const Identity&
		getValue	()
				const
				{ return(getFirst()); }

      //  PURPOSE:  To return the justification portion of '*this'
      //	ValueAndJustification.  No parameters.
      const Identity&
		getJustification()
				const
				{ return(getSecond()); }

      //  PURPOSE:  To set the value portion of '*this' ValueAndJustification
      //	to 'newValue'.  No return value.
      void	setValue	(const Identity&	newValue
				)
				{ setFirst(newValue); }

      //  PURPOSE:  To set the justificatio portion of '*this'
      //	ValueAndJustification to 'newJustification'.  No return value.
      void	setJustification(const Identity&	newJustification
				)
				{ setSecond(newJustification); }

    };
 */

    //  PURPOSE:  To hold two 'Identity' instances.
    struct	IdentityTriplet
    {
      //  I.  Member vars:
      //  PURPOSE:  To hold the first Identity.
      Identity			first_;

      //  PURPOSE:  To hold the second Identity.
      Identity			second_;

      //  PURPOSE:  To hold the third Identity.
      Identity			third_;

      //  II.  Constructor(s), assignment op(s), factory(s) and destructor:
      //  PURPOSE:  To initialize '*this' to have member variable values that
      //	are default values.  No return value.
      IdentityTriplet		();

      //  PURPOSE:  To initialize '*this' to have first value 'newFirst',
      //	second value 'newSecond', and third value 'newThird'.
      //	No return value.
      IdentityTriplet		(const Identity&	newFirst,
				 const Identity&	newSecond,
				 const Identity&	newThird
				) :
				first_(newFirst),
				second_(newSecond),
				third_(newThird)
				{ }

      //  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
      IdentityTriplet		(const IdentityTriplet&	source
				) :
				first_(source.getFirst()),
				second_(source.getSecond()),
				third_(source.getThird())
				{ }

      //  PURPOSE:  To release the resources of '*this' and to make '*this' a
      //    copy of 'rhs'.  Returns reference to '*this'.
      IdentityTriplet&
		operator=	(const IdentityTriplet&	rhs
				)
				{
				  if  (this == &rhs)
				    return(*this);

				  first_	= rhs.getFirst();
				  second_	= rhs.getSecond();
				  third_	= rhs.getThird();
				  return(*this);
				}


      //  PURPOSE:  To return the first value of '*this'.  No parameters.
      const Identity&
		getFirst	()
				const
				{ return(first_); }

      //  PURPOSE:  To return the second value of '*this'.  No parameters.
      const Identity&
		getSecond	()
				const
				{ return(second_); }

      //  PURPOSE:  To return the third value of '*this'.  No parameters.
      const Identity&
		getThird	()
				const
				{ return(third_); }

      //  PURPOSE:  To set the first value of '*this' to 'newValue'.
      //	No return value.
      void	setFirst	(const Identity&	newValue
				)
				{ first_	= newValue; }

      //  PURPOSE:  To set the second value of '*this' to 'newValue'.
      //	No return value.
      void	setSecond	(const Identity&	newValue
				)
				{ second_	= newValue; }

      //  PURPOSE:  To set the third value of '*this' to 'newValue'.
      //	No return value.
      void	setThird	(const Identity&	newValue
				)
				{ third_	= newValue; }

    };


    //  PURPOSE:  To return 'true' if 'lhs' should be ordered after 'rhs', or
    //  	to return 'false' otherwise.
    inline
    bool	operator<	(const IdentityTriplet&	lhs,
				 const IdentityTriplet&	rhs
				)
				{
				  if  (lhs.getFirst() < rhs.getFirst())
				  {
				    return(true);
				  }

				  if  (lhs.getFirst() > rhs.getFirst())
				  {
				    return(false);
				  }

				  if  (lhs.getSecond() < rhs.getSecond())
				  {
				    return(true);
				  }

				  if  (lhs.getSecond() > rhs.getSecond())
				  {
				    return(false);
				  }

				  return( lhs.getThird() < rhs.getThird() );
				}


    //  PURPOSE:  To hold three 'Identity' instances as a <subj,value,domain>
    //	  triplet.
    struct	SubjectValueDomain : public IdentityTriplet
    {
      //  I.  Member vars:

      //  II.  Constructor(s), assignment op(s), factory(s) and destructor:
      //  PURPOSE:  To initialize '*this' to have member variable values that
      //	are recognizably illegal for a subject, non-annotated value,
      //	and domain.  No return value.
      SubjectValueDomain	();

      //  PURPOSE:  To initialize '*this' to have subject 'newSubject', value
      //	'null_', and domain 'null_'.  No return value.
      SubjectValueDomain	(const Identity&	newSubject
				);

      //  PURPOSE:  To initialize '*this' to have subject 'newSubject', value
      //	'newValue', and domain 'newDomain'.  No return value.
      SubjectValueDomain	(const Identity&	newSubject,
				 const Identity&	newValue,
				 const Identity&	newDomain
				) :
				IdentityTriplet(newSubject,newValue,newDomain)
				{ }

      //  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
      SubjectValueDomain	(const SubjectValueDomain&	source
				) :
				IdentityTriplet(source)
				{ }

      //  PURPOSE:  To release the resources of '*this' and to make '*this' a
      //    copy of 'rhs'.  Returns reference to '*this'.
      SubjectValueDomain&
		operator=	(const SubjectValueDomain&	rhs
				)
				{
				  if  (this == &rhs)
				    return(*this);

				  *(IdentityTriplet*)this	= rhs;
				  return(*this);
				}


      //  PURPOSE:  To return the subject portion of '*this' SubjectValueDomain.
      //	No parameters.
      const Identity&
		getSubject	()
				const
				{ return(getFirst()); }

      //  PURPOSE:  To return the value portion of '*this' SubjectValueDomain.
      //	No parameters.
      const Identity&
		getValue	()
				const
				{ return(getSecond()); }

      //  PURPOSE:  To return the domain portion of '*this' SubjectValueDomain.
      //	No parameters.
      const Identity&
		getDomain	()
				const
				{ return(getThird()); }

      //  PURPOSE:  To set the subject portion of '*this' SubjectValueDomain
      //	to 'newSubject'.  No return value.
      void	setSubject	(const Identity&	newSubject
				)
				{ setFirst(newSubject); }

      //  PURPOSE:  To set the value portion of '*this' SubjectValueDomain to
      //	'newValue'.  No return value.
      void	setValue	(const Identity&	newValue
				)
				{ setSecond(newValue); }

      //  PURPOSE:  To set the domain portion of '*this' SubjectValueDomain to
      //	'newDomain'.  No return value.
      void	setDomain	(const Identity&	newDomain
				)
				{ setThird(newDomain); }

    };


    //  PURPOSE:  To represent rational zero.
    extern
    const Identity		rationalZero;

    //  PURPOSE:  To represent rational one.
    extern
    const Identity		rationalOne;

    //  PURPOSE:  To represent complex zero.
    extern
    const Identity		complexZero;

    //  PURPOSE:  To represent complex one.
    extern
    const Identity		complexOne;


    //  PURPOSE:  To compute and return a multi-Identity hash for the
    //		'identityArrayLen' compressed Identity instances pointed to by
    //		'compressedIdentityArray'.
    extern
    identityHash_ty
		computeHash	(const uint8_t*		compressedIdentityArray,
				 size_t			identityArrayLen
				);

    //  PURPOSE:  To compute and return the two-Identity hash for <'first',
    //		 'second'>.
    extern
    identityHash_ty
		computeHash	(const Identity&	first,
				 const Identity&	second
				);

    //  PURPOSE:  To compute and return the three-Identity hash for <'first',
    //		 'second','third'>.
    extern
    identityHash_ty
		computeHash	(const Identity&	first,
				 const Identity&	second,
				 const Identity&	third
				);

    //  PURPOSE:  To compute and return the tripet 'answer'.
    inline
    identityHash_ty
		computeHash	(const SubjectValueDomain&	answer
				)
				{
				  return(computeHash
						(answer.getSubject(),
						 answer.getValue(),
						 answer.getDomain()
						)
					);
				}

    //  PURPOSE:  To compute and return the two tripets 'answer0' and
    //		'answer1'.
    extern
    identityHash_ty
		computeHash	(const SubjectValueDomain&	answer0,
				 const SubjectValueDomain&	answer1
				);

    //  PURPOSE:  To return the hash value of sequence of Identity instances
    //		'seq'.
    extern
    identityHash_ty
		getHashValue	(const std::vector<Identity>&	seq
				);

    //  PURPOSE:  To return the hash value of sequence of Identity instances
    //		'seq'.
    extern
    identityHash_ty
		getHashValue	(const IdentityArray&	seq
				);

    //  PURPOSE:  To return 'true' if 'lhs' and 'rhs' have equivalent values
    //		or 'false' otherwise.
    extern
    bool	isSameSequence	(const std::vector<Identity>&	lhs,
				 const std::vector<Identity>&	rhs
				);

    //  PURPOSE:  To return 'true_' if 'boolVal' is 'true_', or 'false_'
    //		otherwise.
    extern
    const Identity&
		boolId		(bool	boolVal
				);
