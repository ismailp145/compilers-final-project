/*-------------------------------------------------------------------------*
 *---									---*
 *---		spTypes.h						---*
 *---									---*
 *---	    This files defines basic global types used throughout the	---*
 *---	application.							---*
 *---									---*
 *---		    This file is classified as: DECLASSIFIED		---*
 *---			Applied Philosophy of Science			---*
 *---									---*
 *---	----	----	----	----	----	----	----	----	---*
 *---									---*
 *---	Version 8b		2013 June 30		Joseph Phillips	---*
 *---									---*
 *---	    Converted to new directory and naming format.  Renamed from	---*
 *---	GlobalTypes.h to spTypes.h.					---*
 *---									---*
 *---	Version 9a		2016 April 22		Joseph Phillips	---*
 *---									---*
 *-------------------------------------------------------------------------*/

#include	<stdlib.h>
#include	<stdio.h>
#include	<string.h>
#include	<math.h>
#include	<limits.h>
#include	<inttypes.h>
#include	<unistd.h>
#include	<string>
#include	<iostream>
#include	<sstream>
#include	<vector>
#include	<map>
#include	<list>
#include	<set>

//  PURPOSE:  To represent the double-quote character.
const char	QUOTE_CHAR			= 0x22;
#define		QUOTE_CHAR_STR			"\""

//  PURPOSE:  To tell the character that prefixes SP run identifiers and
//    idea numbers in dictionary files.
const char	DICTIONARY_NUMBER_STARTING_CHAR	= '#';

const int	NUM_BITS_PER_BYTE		= 8;

const int	MAX_TINY_ARRAY_LEN		= 1024;

const int	COMMON_ARRAY_LEN		= 4096;

typedef			int64_t			numerator_ty;
const numerator_ty	NUMERATOR_MAX		= LLONG_MAX;
const numerator_ty	NUMERATOR_MIN		= LLONG_MIN;
#define			NUMER_FORM		"%" PRId64

typedef			uint64_t		denominator_ty;
const denominator_ty	DENOMINATOR_MAX		= ULLONG_MAX;
const denominator_ty	DENOMINATOR_MIN		= 0;
#define			DENOM_FORM		"%" PRIu64

//  PURPOSE:  To tell the wide-character used to denote rational division.
const char	SP_RATIONAL_DIVISOR_CHAR	= '\\';
#define		SP_RATIONAL_DIVISOR_STR		"\\"

const char	SP_IMPLICIT_NEW_CHAR		= '^';

typedef		uint16_t			superDomain_ty;

typedef		uint16_t			domain_ty;

#define		RATIONAL_FORM		NUMER_FORM		\
					SP_RATIONAL_DIVISOR_STR	\
					DENOM_FORM

//  PURPOSE:  To serve as the universal floating point type.
typedef		double				spFloat_ty;

//  PURPOSE:  To serve as an index into a data-structure telling all
//  	SP runs (including the current one) upon which the current
//  	run is based.
typedef		uint64_t			spRunIndex_ty;


  //  PURPOSE:  To serve as an index into a data-structure telling all
  //  	SP runs (including the current one) upon which the current
  //  	run is based.
  typedef		uint64_t			spRunIndex_ty;


  //  PURPOSE:  To tell the value of 'spRunIndex_ty' signifying the virtual
  //  	SP run that occurred before the system was even run.
  const spRunIndex_ty	PREDEFINED_SP_RUN_INDEX	= 0;


  //  PURPOSE:  To tell the value of 'spRunIndex_ty' signifying the current
  //  	SP run.
  const spRunIndex_ty	CURRENT_SP_RUN_INDEX	= 0;


  //  PURPOSE:  To represent individual concepts pre-existing or created
  //	during a Struct Proc run.
  typedef	uint64_t			spConceptNum_ty;

  //  PURPOSE:  To tell the first 'spConceptNum_ty' value in the very first
  //	KbRun at which the creation of dynamic Identity for Ideas begins.
  const spConceptNum_ty
		INITIAL_DYNAMIC_IDEA_NUM_FOR_FIRST_KB_RUN
						= 0x80000000;

  //  PURPOSE:  To tell the first 'spConceptNum_ty' value in all kbRuns
  //	_except_ the first one at which the creation of dynamic Identity for
  //	Ideas begins.
  const spConceptNum_ty
		INITIAL_DYNAMIC_IDEA_NUM_FOR_SUBSEQUENT_KB_RUN
						= 0x100;

  //  PURPOSE:  To tell the first 'spConceptNum_ty' value at which the
  //	creation of dynamic Identity for Nodes begins.
  const spConceptNum_ty
		INITIAL_DYNAMIC_NODE_NUM	= 0x100;

  //  PURPOSE:  To tell the mask for the field that distinguishes among
  //	different aspects of an Identity value.
  const spConceptNum_ty
		IDEA_ASPECT_MASK		= 0x03;

  //  PURPOSE:  To tell the difference between numerically adjacent
  //	identities of "ordinary" (e.g. not non-specific member) ideas.
  const spConceptNum_ty
		IDEA_RANGE_IDENTITY_LENGTH	= IDEA_ASPECT_MASK + 1;

  //  PURPOSE:  To tell the offset from the beginning of an Identity range to
  //  	an new integer to mean "just the concept, in its ordinary sense"
  const spConceptNum_ty
		ORDINARY_IDENTITY_OFFSET	= 0x00;

  //  PURPOSE:  To tell the offset from the beginning of an Identity range to
  //  	an new integer to mean "a non-specific member of this class"
  const spConceptNum_ty
		NONSPECIFIC_MEMBER_IDENTITY_OFFSET
						= 0x01;

  //  PURPOSE:  To serve as a postfix label for Identity names that represent
  //		non-specific members of a class
  #define	NON_SPECIFIC_MEMBER_LABEL	"nonspec"

  //  PURPOSE:  To tell the difference between numerically adjacent nodes.
  const spConceptNum_ty
		NODE_RANGE_IDENTITY_LENGTH	= 0x02;

  //  PURPOSE:  To tell the 'spConceptNum_ty' value corresponding to the
  //	    default explanation during a struct proc run.
  const spConceptNum_ty
		DEFAULT_EXPLANATION_CONCEPT_NUM	= 0x0;

//  PURPOSE:  To serve as the type for counting references.
typedef		uint32_t			refCount_ty;

//  PURPOSE:  To serve as the index type for indexed strings.
typedef		int64_t				stringIndex_ty;

//  PURPOSE:  To hold the index of a KnowledgeBaseRun index within the
//		KnowledgeBase instance.
typedef		uint16_t			kbRunIndex_ty;

//  PURPOSE:  To tell the 'kbRunIndex_ty' value for the current active
//		knowledge base run.
const kbRunIndex_ty	ACTIVE_KB_RUN_INDEX	= 0x0FFE;

//  PURPOSE:  To tell the 'kbRunIndex_ty' value that represents the index
//		of the knowledge base run instance of the base environment.
const kbRunIndex_ty
		KB_RUN_BASE_ONTOL_INDEX		= 0x0000;

//  PURPOSE:  To tell the 'kbRunIndex_ty' value that is illegal for all
//		knowledge base run instances.
const kbRunIndex_ty
		NULL_KB_RUN_INDEX		= 0x0FFF;

//  PURPOSE:  To represent the number of significant digits in a floating
//	point number.
typedef	uint16_t		sigFig_ty;

//  PURPOSE:  To tell the maximum number of significant digits representable.
const sigFig_ty	MAX_SIG_FIGS		= USHRT_MAX;

//  PURPOSE:  To tell the default number of significant digits.
//	(e.g. when integers are converted to floating points, their precision
//	 after the decimal point is an infinite number of zeros)
const sigFig_ty	DEFAULT_SIG_FIGS	= MAX_SIG_FIGS;

//  PURPOSE:  To represent a rational number.
struct	Rational
{
  numerator_ty			numerator_;
  denominator_ty		denominator_;

  Rational			() :
				numerator_(0),
				denominator_(1)
				{ }

  Rational			(const Rational&	source
				) :
				numerator_  (source.getNumerator()),
				denominator_(source.getDenominator())
				{ }

  Rational			(numerator_ty	newNumerator,
      				 denominator_ty	newDenominator
				) :
				numerator_(newNumerator),
				denominator_(newDenominator)
				{ }

  Rational&	operator=	(const Rational&	source
				)
				{
				  if  (this == &source)
				  {
				    return(*this);
				  }

				  numerator_	= source.getNumerator();
				  denominator_	= source.getDenominator();
				  return(*this);
				}

  ~Rational			()
      				{ }

  numerator_ty	getNumerator	()
				const
				{ return(numerator_); }

  denominator_ty
		getDenominator	()
				const
				{ return(denominator_); }

  Rational	reciprocal	()
      				const
				{
				  return(Rational
					    (getDenominator(),
					     getNumerator()
					    )
					);
				}
};


  //  PURPOSE:  To serve as a "pointer" to a section of an object file run.
  typedef	uint32_t	sectionAddr_ty;

  //  PURPOSE:  To represent an illegal index to a section.
  const sectionAddr_ty		SECTION_ADDRESS_NULL
					= (sectionAddr_ty)0xFFFFFFFF;

  //  PURPOSE:  To represent the value at which KnowledgeBaseRun instances
  //		start numbers for general-purpose.
  const sectionAddr_ty		STARTING_SECTION_ADDRESS
					= 1024;

  //  PURPOSE:  To serve as a "pointer" to an entry within an implied section
  //		of an object file run.
  typedef	uint32_t	entryPartialAddress_ty;

  //  PURPOSE:  To represent an illegal index of an element in a specific
  //		implied section.
  const entryPartialAddress_ty
		ENTRY_PARTIAL_ADDRESS_NULL
				= (entryPartialAddress_ty)0xFFFFFFFF;

  //  PURPOSE:  To tell the length of 'entryPartialAddress_ty'.
  const size_t	ENTRY_PARTIAL_ADDRESS_SIZE
				= sizeof(entryPartialAddress_ty);

  //  PURPOSE:  To serve as a "pointer" to an entry within any section of
  //		any object file run.
  typedef	uint64_t	entryCompleteAddress_ty;

  //  PURPOSE:  To represent an illegal index of an element in any section.
  const entryCompleteAddress_ty
		ENTRY_COMPLETE_ADDRESS_NULL
				=(entryCompleteAddress_ty)0xFFFFFFFFFFFFFFFFull;

  //  PURPOSE:  To tell the length of 'entryCompleteAddress_ty'.
  const size_t	ENTRY_COMPLETE_ADDRESS_SIZE
				= sizeof(entryCompleteAddress_ty);


  //  PURPOSE:  To return the 'entryCompleteAddress_ty' value corresponding
  //		to combining 'sectionAddr_ty' value 'section' with
  //		'entryPartialAddress_ty' value 'index'.
  inline
  entryCompleteAddress_ty
		obtainCompleteAddr
				(sectionAddr_ty		section,
				 entryPartialAddress_ty	index
				)
				{
				  return( ( ((entryCompleteAddress_ty)section)
					    << ( sizeof(sectionAddr_ty)
					         * NUM_BITS_PER_BYTE
					       )
					  )
					  | (entryCompleteAddress_ty)index
					);
				}

    typedef	uint32_t	u32bitInt;

    typedef	uint64_t	u64bitInt;

    //  PURPOSE:  To serve as the type for noting metadata about red-black tree
    //		nodes, e.g. the color (either red or black)
    typedef	uint16_t	rbNodeMetadata_ty;

    //  PURPOSE:  To tell the mask for having color black for an element in a
    //		red-black tree.
    const rbNodeMetadata_ty
		RB_COLOR_MASK	= 0x1;

    //  PURPOSE:  To tell the bit for having color black for an element in a
    //		red-black tree.
    const rbNodeMetadata_ty
		RB_COLOR_IS_BLACK
				= 0x1;

    //  PURPOSE:  To represent the different types of object and related files
    //		that exist.
    typedef			enum
				{
				  ERROR_SOF			= -1,
				  INCOMPLETE_SINGLE_RUN_SPOAF,
				  COMPLETE_SINGLE_RUN_SPOAF,
				  INCOMPLETE_MULTI_RUN_SPOAF,
				  COMPLETE_MULTI_RUN_SPOAF
				}
				spoafFormat_ty;

    //  PURPOSE:  To identify SP machines.
    typedef	uint16_t	machineId_ty;

    //  PURPOSE:  To tell the default (and so far only) SP machine.
    const machineId_ty
		DEFAULT_MACHINE_ID
				= 0x0901;	// a.k.a "9A"

    //  PURPOSE:  To hold the version number of the creating machine.
    typedef	uint32_t	machVersion_ty;

    //  PURPOSE:  To tell the default (and so far only) recognized machine
    //		version.
    const machVersion_ty
		DEFAULT_MACH_VERSION
				= 0x1;	// Implicit in this are:
				  	// fileOffset_t size = 64 bits
					// sectionAddr_ty size = 64 bits
					// entryPartialAddress_ty size = 32 bits

    //  PURPOSE:  To serve as the type of hashes of sequences of Identity
    //		instances.
    typedef	uint64_t	identityHash_ty;

    //  PURPOSE:  To serve as the type of hashes of strings.
    typedef	uint32_t	stringHash_ty;

    //  PURPOSE:  To tell the index of a kb file within a larger file.
    typedef	entryCompleteAddress_ty
				superfileIndex_ty;

    //  PURPOSE:  To represent the number of answers in a tuple.
    typedef	uint16_t	numAnswersInTuple_ty;

    //  PURPOSE:  To represent the different statuses that recursive queries
    //		could tentatively end with.
    typedef	enum
    		{
		  NO_ANSWER,
		  KEEP_SEARCHING_FOR_ANSWER,
		  VALUE_ANSWER,
		  SUBJ_VAL_DOMAIN_ANSWER
		}
		answer_ty;

    //  PURPOSE:  To tell the default value for 'superfileIndex_ty'.
    const superfileIndex_ty
		DEFAULT_SUPERFILE_INDEX
				= 0x0ull;

    //  PURPOSE:  To tell the number of seconds in the Unix epoch as a 64 bit
    //		value.
    typedef	uint64_t	time64_ty;

    //  PURPOSE:  To serve as a vector of bits for yes-no (or short int) values.
    typedef	uint64_t	bitVect_ty;

    //  PURPOSE:  To tell the default value for 'bitVect_ty'.
    const bitVect_ty
		DEFAULT_BIT_VECTOR
				= 0x0000000000000000ull;

    //  PURPOSE:  To tell the index of an attribute in a ConstructorDefnSection
    //		instance.
    typedef	int8_t		constructorsAttrIndex_ty;

    //  PURPOSE:  To represent an "index" (in a general sense, not necessarily
    //	as an in-an-array sense) to a data-structure that holds parse
    //		locations.
    typedef	entryPartialAddress_ty
				parseLocIndex_ty;

    //  PURPOSE:  To tell the 'parseLocIndex_ty' value signifying "Predefined
    //		before the kb run started"
    const parseLocIndex_ty
		DEFINED_BEFORE_KB_LOAD_PARSE_LOC_INDEX
				= 0x00;

    //  PURPOSE:  To tell the English term for the "filepath" of
    //		'DEFINED_BEFORE_KB_LOAD_PARSE_LOC_INDEX'
    #define	DEFINED_BEFORE_KB_LOAD_PARSE_LOC_INDEX_ENG_STR		\
		"a non-existent location because defined before kb loaded"

    //  PURPOSE:  To tell the 'parseLocIndex_ty' value signifying "created
    //		internally"
    const parseLocIndex_ty
		INTERNALLY_CREATED_PARSE_LOC_INDEX
				= 0x01;

    //  PURPOSE:  To tell the English term for the "filepath" of
    //		'INTERNALLY_CREATED_PARSE_LOC_INDEX'
    #define	INTERNALLY_CREATED_PARSE_LOC_INDEX_ENG_STR		\
		"a non-existent location because internally created"

    //  PURPOSE:  To tell the 'parseLocIndex_ty' value signifying "unknown
    //		location"
    const parseLocIndex_ty
		UNKNOWN_PARSE_LOC_INDEX
				= 0x02;

    //  PURPOSE:  To tell the English term for the "filepath" of
    //		'UNKNOWN_PARSE_LOC_INDEX'
    #define	UNKNOWN_PARSE_LOC_INDEX_ENG_STR		\
		"an unknown location"

    //  PURPOSE:  To tell the first non-predefined 'parseLocIndex_ty' value.
    const parseLocIndex_ty
		FIRST_PARSE_LOC_INDEX
				= 0x100;

    typedef	enum
		{
		  FILE_SCHEME,
		  HTTP_SCHEME,

		  MIN_SCHEME	= FILE_SCHEME,
		  MAX_SCHEME	= HTTP_SCHEME
		}
		scheme_ty;

    #define	ANONYMOUS_CLASS_INSTANCE_NAME_PREFIX_FORMAT_HEAD \
		"__"

    #define	ANONYMOUS_CLASS_INSTANCE_NAME_PREFIX_FORMAT	 \
		ANONYMOUS_CLASS_INSTANCE_NAME_PREFIX_FORMAT_HEAD \
		IDENTITY_T_LFORMAT "_" IDENTITY_T_LFORMAT


    //  PURPOSE:  To distinguish between types of dimensions.
    typedef	enum
		{
		  NO_DIM		= -1,
		  DIMENSIONLESS_DIM,
		  FUNDAMENTAL_DIM,
		  COMPOSITE_DIM
		}
		dimension_ty;


    //  PURPOSE:  To represent codes for rapidly identifying what type of
    //		value is being annotated in an annotated value.
    typedef	enum
    		{
		  BOOLEAN_ANNOTATED		= 0x01,
		  INTEGER_ANNOTATED		= 0x02,
		  RATIONAL_ANNOTATED		= 0x03,
		  REAL_ANNOTATED		= 0x04,
		  COMPLEX_ANNOTATED		= 0x05,
		  CONCEPT_ANNOTATED		= 0x07,

		  DISTRIB_ANNOTATED		= 0x10,

		  BOOLEAN_DISTRIB_ANNOTATED	= DISTRIB_ANNOTATED |
						  BOOLEAN_ANNOTATED,
		  INTEGER_DISTRIB_ANNOTATED	= DISTRIB_ANNOTATED |
						  INTEGER_ANNOTATED,
		  RATIONAL_DISTRIB_ANNOTATED	= DISTRIB_ANNOTATED |
						  RATIONAL_ANNOTATED,
		  REAL_DISTRIB_ANNOTATED	= DISTRIB_ANNOTATED |
						  REAL_ANNOTATED,
		  COMPLEX_DISTRIB_ANNOTATED	= DISTRIB_ANNOTATED |
						  COMPLEX_ANNOTATED,
		  CONCEPT_DISTRIB_ANNOTATED	= DISTRIB_ANNOTATED |
						  CONCEPT_ANNOTATED

		}
		annotateValueCode_ty;

    //  PURPOSE:  To distinguish among the different methods used to assert
    //	    knowledge.
    typedef	enum
		{
		  NO_AM,
		  ASSERT_AM,
		  ASSERTA_AM,
		  ASSERTZ_AM,
		  SUBASSERT_AM,
		  SUBASSERTA_AM,
		  SUBASSERTZ_AM,
		  CONSTENTITY_AM,
		  SUBCONSTENTITY_AM,
		  CONSTVALUE_AM,
		  SUBCONSTVALUE_AM,
		  VARENTITY_AM,
		  SUBVARENTITY_AM,
		  VARVALUE_AM,
		  SUBVARVALUE_AM,
		  WACATI_AM,
		  WACATIA_AM,
		  SUBWACATI_AM,
		  SUBWACATIA_AM
		}
		assertMethod_ty;


    //  PURPOSE:  To distinguish between how knowledge can be asserted.
    typedef	enum
		{
		  LOCALLY_HOWASSERT,
		  INHERIT_HOWASSERT
		}
		howAsserted_ty;


    //  PURPOSE:  To distinguish among different ways of how the subject of a
    //		binary operation is derived from the subjects of the operands.
    typedef	enum
		{
		  NO_BIN_OP_SUBJ	= -1,
		  EXTEND_BIN_OP_SUBJ,
		  GROUP_BIN_OP_SUBJ,
		  SCALE_BIN_OP_SUBJ
		}
		binOpSubj_ty;


    //  PURPOSE:  To distinguish among the different ontology attributes.
    typedef	enum
		{
		  NO_OA,
		  INSTANCEOF_OA,
		  ISA_OA
		}
		ontologyAttr_ty;


    //  PURPOSE:  To distinguish among the different values that are allowed
    //		for a variable or argument, in addition to those covered by
    //		the class specified for the variable or argument.
    typedef	enum
		{
		  NULL_NOT_ARG_ALLOWED,
		  NULL_ARG_ALLOWED,

		  DEFAULT_ARG_ALLOWED	= NULL_NOT_ARG_ALLOWED
		}
		argAllowed_ty;


    //  |--------  Instruction  --------|
    //  | whole op code	|  arguments	|
    //  |-   2 bytes   -| 0 to 10 bytes	|

    //  |         whole op code		|
    //	|-- hi 8 bits --|-- lo 8 bits --|
    //  |15   11   9	|7	       0|
    //	|   args   opLen|    op code	|
    //	|  field   & chk|		|

    //  PURPOSE:  To represent the full op-code of an SPVM instruction.
    typedef	uint16_t	spvmWholeOpCode_ty;


    //  PURPOSE:  To tell how many bits the op-code value of an instruction are
    //		shifted.
    const int OP_CODE_FIELD_OFFSET		= 0;

    //  PURPOSE:  To tell how many bits the 'spvmOpLenAndChkField_ty' value of
    //		an instruction are shifted.
    const int OP_LEN_AND_CHK_FIELD_OFFSET	= OP_CODE_FIELD_OFFSET
						  + 8;

    //  PURPOSE:  To tell how many bits the 'argsField_ty' value of an
    //		instruction are shifted.
    const int ARGS_FIELD_OFFSET			= OP_LEN_AND_CHK_FIELD_OFFSET
						  + 4;

    //  PURPOSE:  To represent the abstract type of instruction to do.
    //    NOTE: When add (or remove) constant from following enum, also
    //	change:
    //	(1) potentialInstructName[] in PotentialInstruction.cpp
    //	(2) potentialInstructToArgsPoin() in PotentialInstruction.cpp
    typedef 	enum
		{
		 NOT_AN_OP				= -1,

		 //    0.    No-op
		 //    I.    Sys control
		 //    II.   Flow control
		 //    III.  Clearing values
		 //    IV.   Copying values
		 //    V.    Loading values
		 //    VI.   Arithmetic
		 //    VII.  Logic
		 //    VIII. Trig
		 //    IX.   Casting
		 //    X.    Numeric parts
		 //    XI.   Casting
		 //    XII.  Algebraic
		 //    XIII. Comparison
		 //    XIV.  Flag setting
		 //    XV.   String
		 //    XVI.  Knowledge querying
		 //    XVII. Knowledge asserting
		 //    XVIII.Instance creation
		 //    XIX.  Instance destruction
		 //    XX.   Data-structure related
		 //    XXI.  Iterator related
		 //    XXII. Context related
		 //    XXIII.I/O
		 //    XXIV. Parse related
		 //    XXV.  General checking

		 //  ARGS
		 NO_OP_OP		= 0,	// 0.    No-op

		 STOP_W_SUCCESS_OP,		// I.    Sys control
		 STOP_W_FAILURE_OP,
		 QUIT_W_SUCCESS_OP,
		 QUIT_W_FAILURE_OP,

		 RETURN_OP,			// II.   Flow control

		 CONTEXT_POP_OP,		// XXII. Context related

       		 //  VAR_ARGS
		 GEN_CLEAR_OP		= 1,	// III.  Clearing values
		 BOOL_CLEAR_OP,
		 INT_CLEAR_OP,
		 RAT_CLEAR_OP,
		 REAL_CLEAR_OP,
		 CPLX_CLEAR_OP,

		 LOAD_RET_SUBJ_OP,		// V.    Loading values

		 DS_CLEAR_OP,			// XX.   Data-structure related
		 NLIST_CLEAR_OP,
		 MAKE_VECTOR_LIST_FOR_IDEA_OP,
		 MAKE_NODE_LIST_FOR_IDEA_OP,
		 MAKE_BAG_FOR_IDEA_OP,
		 MAKE_MAP_FOR_IDEA_IDEA_OP,

		 ITER_ADVANCE_OP,		// XXI.  Iterator related
		 ITER_RESET_OP,

		 CONTEXT_PUSH_OP,		// XXII. Context related

		 STDOUT_PRINT_OP,		// XXIII.I/O
		 STDOUT_PRINTLN_OP,
		 STDERR_PRINT_OP,
		 STDERR_PRINTLN_OP,
		 STDOUT_DESCRIBE_TO_JSON_OP,
		 STDOUT_DESCRIBELN_TO_JSON_OP,
		 STDERR_DESCRIBE_TO_JSON_OP,
		 STDERR_DESCRIBELN_TO_JSON_OP,

		 // VAR_CONST_ARGS
		 CALL_LOCAL_OP		= 1,	// II.   Flow control

		 LOAD_OP,
		 INT_LOAD_OP,			// V.    Loading values
		 RAT_LOAD_OP,
		 REAL_LOAD_OP,
		 CPLX_LOAD_OP,
		 IDEA_LOAD_OP,

		 ADD_VAR_CONST_OP,		// VI.   Arithmetic
		 INT_ADD_VAR_CONST_OP,
		 RAT_ADD_VAR_CONST_OP,
		 REAL_ADD_VAR_CONST_OP,
		 CPLX_ADD_VAR_CONST_OP,
		 GRP_ADD_VAR_CONST_OP,
		 EXT_ADD_VAR_CONST_OP,

		 SUB_VAR_CONST_OP,
		 INT_SUB_VAR_CONST_OP,
		 RAT_SUB_VAR_CONST_OP,
		 REAL_SUB_VAR_CONST_OP,
		 CPLX_SUB_VAR_CONST_OP,
		 GRP_SUB_VAR_CONST_OP,
		 EXT_SUB_VAR_CONST_OP,

		 MUL_VAR_CONST_OP,
		 INT_MUL_VAR_CONST_OP,
		 RAT_MUL_VAR_CONST_OP,
		 REAL_MUL_VAR_CONST_OP,
		 CPLX_MUL_VAR_CONST_OP,
		 SCL_MUL_VAR_CONST_OP,
		 GRP_MUL_VAR_CONST_OP,

		 MAKE_VECTOR_LIST_FOR_CONST_OP,	// XX.   Data-structure related
		 MAKE_NODE_LIST_FOR_CONST_OP,
		 MAKE_BAG_FOR_CONST_OP,

		 //  VAR_VAR_ARGS
		 COPY_OP		= 1,	// IV.   Copying values
		 INT_COPY_OP,
		 RAT_COPY_OP,
		 REAL_COPY_OP,
		 CPLX_COPY_OP,
		 IDEA_COPY_OP,

		 ADD_VAR_VAR_OP,		// VI.   Arithmetic
		 INT_ADD_VAR_VAR_OP,
		 RAT_ADD_VAR_VAR_OP,
		 REAL_ADD_VAR_VAR_OP,
		 CPLX_ADD_VAR_VAR_OP,
		 GRP_ADD_VAR_VAR_OP,
		 EXT_ADD_VAR_VAR_OP,

		 SUB_VAR_VAR_OP,
		 INT_SUB_VAR_VAR_OP,
		 RAT_SUB_VAR_VAR_OP,
		 REAL_SUB_VAR_VAR_OP,
		 CPLX_SUB_VAR_VAR_OP,
		 GRP_SUB_VAR_VAR_OP,
		 EXT_SUB_VAR_VAR_OP,

		 MUL_VAR_VAR_OP,
		 INT_MUL_VAR_VAR_OP,
		 RAT_MUL_VAR_VAR_OP,
		 REAL_MUL_VAR_VAR_OP,
		 CPLX_MUL_VAR_VAR_OP,
		 SCL_MUL_VAR_VAR_OP,
		 GRP_MUL_VAR_VAR_OP,

		 UNARY_NEGATE_OP,
		 NON_ANNOT_UNARY_NEG_OP,
		 ANNOT_UNARY_NEG_OP,
		 JUST_UNARY_NEG_OP,

		 RAT_RECIP_OP,
		 REAL_RECIP_OP,
		 CPLX_RECIP_OP,
		 CPLX_CONJ_OP,

		 EXP_OP,
		 REAL_EXP_OP,
		 CPLX_EXP_OP,
		 JUST_EXP_OP, 
		 EXP2_OP,
		 REAL_EXP2_OP,
		 CPLX_EXP2_OP,
		 JUST_EXP2_OP,
		 EXP10_OP,
		 REAL_EXP10_OP,
		 CPLX_EXP10_OP,
		 JUST_EXP10_OP,

		 LOG_OP,
		 REAL_LOG_OP,
		 CPLX_LOG_OP,
		 JUST_LOG_OP,
		 LOG2_OP,
		 REAL_LOG2_OP,
		 CPLX_LOG2_OP,
		 JUST_LOG2_OP,
		 LOG10_OP,
		 REAL_LOG10_OP,
		 CPLX_LOG10_OP,
		 JUST_LOG10_OP,

		 LOGIC_NOT_OP,			// VII.  Logic

		 SIN_OP,			// VIII. Trig
		 REAL_SIN_OP,
		 CPLX_SIN_OP,
		 JUST_SIN_OP,
		 COS_OP,
		 REAL_COS_OP,
		 CPLX_COS_OP,
		 JUST_COS_OP,
		 TAN_OP,
		 REAL_TAN_OP,
		 CPLX_TAN_OP,
		 JUST_TAN_OP,
		 ASIN_OP,
		 REAL_ASIN_OP,
		 CPLX_ASIN_OP,
		 JUST_ASIN_OP,
		 ACOS_OP,
		 REAL_ACOS_OP,
		 CPLX_ACOS_OP,
		 JUST_ACOS_OP,
		 ATAN_OP,
		 REAL_ATAN_OP,
		 CPLX_ATAN_OP,
		 JUST_ATAN_OP,

		 RAT_NUMER_OP,			// X.    Numeric parts
		 RAT_DENOM_OP,
		 CPLX_REAL_OP,
		 CPLX_IMAG_OP,

		 INT_TO_REAL_OP,		// XI.   Casting
		 RAT_TO_REAL_OP,
		 REAL_TO_INT_OP,
		 REAL_TO_RAT_OP,

		 SIMPLIFY_OP,			// XII.  Algebraic

		 IS_NULL_OP,			// XIV.  Flag setting

		 STR_LEN_OP,			// XV.   String
		 STR_CAPITAL_OP,

		 TO_STRING_OP,
		 TO_JSON_OP,

		 OBTAIN_STD_PROP_AND_ARB_ATTR_OP,
						// XVI.  Knowledge querying

		 ASSERT_INSTANCE_OF_OP,		// XVII. Knowledge asserting
		 ASSERTA_INSTANCE_OF_OP,
		 ASSERTZ_INSTANCE_OF_OP,
		 ASSERT_IS_A_OP,
		 ASSERTA_IS_A_OP,
		 ASSERTZ_IS_A_OP,
		 ASSERT_LISTED_NICKNAMES_OP,
		 CONTEXT_ASSERT_INSTANCE_OF_OP,
		 CONTEXT_ASSERT_SUBCLASS_OF_OP,

		 DS_IS_EMPTY_OP,		// XX.   Data-structure related
		 DS_SIZE_OP,
		 DS_DISTINCT_COUNT_OP,
		 DS_INSERTA_OP,
		 DS_INSERTZ_OP,
		 DS_INSERT_OP,
		 DS_COPY_OP,

		 LIST_FIRST_ITEM_OP,
		 LIST_SECOND_ITEM_OP,
		 LIST_SORT_OP,

		 VLIST_IS_EMPTY_OP,
		 VLIST_SIZE_OP,
		 VLIST_SORT_OP,

		 NLIST_IS_EMPTY_OP,
		 NLIST_SIZE_OP,
		 NLIST_DISTINCT_COUNT_OP,
		 NLIST_INSERTA_OP,
		 NLIST_INSERTZ_OP,
		 NLIST_COPY_OP,
		 NLIST_FIRST_ITEM_OP,
		 NLIST_SECOND_ITEM_OP,
		 NLIST_SORT_OP,

		 MAP_IS_EMPTY_OP,
		 MAP_SIZE_OP,

		 BAG_IS_EMPTY_OP,
		 BAG_SIZE_OP,

		 MAKE_VECTOR_LIST_FOR_VAR_OP,
		 MAKE_NODE_LIST_FOR_VAR_OP,
		 MAKE_BAG_FOR_VAR_OP,

		 ITER_IS_AT_END_OP,		// XXI.  Iterator related
		 ITER_KEY_OP,
		 ITER_VALUE_OP,
		 ITER_ENTRY_OP,

		 INSTANCE_CLASS_ITER_OP,
		 CLASS_SUPERCLASS_ITER_OP,
		 CLASS_SUBCLASS_ITER_OP,
		 CLASS_INSTANCE_ITER_OP,
		 DS_ITER_OP,
                 NLIST_ITER_OP,

		 PRINT_OP,			// XXIII.I/O
		 PRINTLN_OP,

		 PARSE_FILE_OP,			// XXIV. Parse related
		 SAVE_MEMORY_IMAGE_OP,
		 IMPORT_FORMATTED_FILE_OP,

		 EXCEPT_IF_NOT_IN_CLASS_OP,	// XXV.  General checking
		 CHECK_ENTITY_VAR_OP,
		 SUBCHECK_ENTITY_VAR_OP,
		 CHECK_RELATION_OP,
		 SUBCHECK_RELATION_OP,

		 NUM_OP,		// This is not a real instruction
		 			// but a value telling the number of
					// instructions

      		 // VAR_VAR_VAR_ARGS:
		 DIV_OP			= 1,	// VI.   Arithmetic
		 INT_DIV_OP,
		 RAT_DIV_OP,
		 REAL_DIV_OP,
		 CPLX_DIV_OP,
		 SCL_DIV_OP,
		 MOD_OP,

		 NONANNOT_POW_OP,
		 ANNOT_POW_OP,

		 LOGIC_AND_OP,			// VII.  Logic
		 LOGIC_OR_OP,

		 ATAN2_OP,			// VIII. Trig, Exp and Log
		 REAL_ATAN2_OP,
		 CPLX_ATAN2_OP,
		 JUST_ATAN2_OP,

		 TO_ANNOT_OP,			// XI.   Casting

		 EVAL_EXPR_OP,			// XII.  Algebraic
		 SOLVE_FOR_OP,
		 DIFFERENTIATE_OP,
		 INTEGRATE_OP,
		 INDEFINITE_INTEGRATE_OP,

		 REF_EQUAL_OP,			// XIII. Comparison
		 REF_NOT_EQUAL_OP,
		 NUM_EQUAL_OP,
		 NUM_NOT_EQUAL_OP,
		 INT_EQUAL_OP,
		 INT_NOT_EQUAL_OP,
		 RAT_EQUAL_OP,
		 RAT_NOT_EQUAL_OP,
		 REAL_EQUAL_OP,
		 REAL_NOT_EQUAL_OP,
		 CPLX_EQUAL_OP,
		 CPLX_NOT_EQUAL_OP,
		 OBJ_EQUAL_OP,
		 OBJ_NOT_EQUAL_OP,

		 LESSER_OP,
		 INT_LESSER_OP,
		 RAT_LESSER_OP,
		 REAL_LESSER_OP,
		 STR_LESSER_OP,
		 ANNOT_LESSER_OP,

		 LESSER_EQUAL_OP,
		 INT_LESSER_EQUAL_OP,
		 RAT_LESSER_EQUAL_OP,
		 REAL_LESSER_EQUAL_OP,
		 STR_LESSER_EQUAL_OP,
		 ANNOT_LESSER_EQUAL_OP,

		 GREATER_OP,
		 INT_GREATER_OP,
		 RAT_GREATER_OP,
		 REAL_GREATER_OP,
		 STR_GREATER_OP,
		 ANNOT_GREATER_OP,

		 GREATER_EQUAL_OP,
		 INT_GREATER_EQUAL_OP,
		 RAT_GREATER_EQUAL_OP,
		 REAL_GREATER_EQUAL_OP,
		 STR_GREATER_EQUAL_OP,
		 ANNOT_GREATER_EQUAL_OP,

		 STR_CONCAT_OP,			// XV.   String
		 STR_PRE_UNCAT_OP,
		 STR_POST_UNCAT_OP,
		 STR_PREFIX_OP,
		 STR_SUFFIX_OP,
		 STR_HAS_PREFIX_OP,
		 STR_HAS_SUFFIX_OP,

		 IS_INSTANCE_OF_OP,		// XVI.  Knowledge querying
		 IS_SUBCLASS_OF_OP,

		 LOCAL_GET_OP,
		 CONTEXT_LOCAL_GET_OP,
		 SUB_GET_OP,
		 GET_OP,

		 CONTEXT_IS_INSTANCE_OF_OP,
		 CONTEXT_IS_SUBCLASS_OF_OP,
		 CONTEXT_GET_OP,

		 ASSERT_OP,		 	// XVII. Knowledge asserting
		 ASSERTA_OP,
		 ASSERTZ_OP,
		 SUBASSERT_OP,
		 SUBASSERTA_OP,
		 SUBASSERTZ_OP,

		 WACOM_OP,	// "When Absent Create Map"
		 SUBWACOM_OP,
		 WACATI_OP,	// "when Absent Create and then Insert"
		 WACATIA_OP,
		 SUBWACATI_OP,
		 SUBWACATIA_OP,

		 CONTEXT_ASSIGN_OP,
		 CONTEXT_ASSERT_VAL_OP,

		 NEW_INSTANCE_OP,		// XVIII.Instance creation

		 DS_DID_INSERT_OP,		// XX.   Data-structure related
		 DS_DOES_HAVE_OP,
		 DS_DID_REMOVE_OP,
		 LIST_ATTR_SORT_OP,
		 VLIST_GET_OP,
		 NLIST_DID_INSERT_OP,
		 NLIST_DOES_HAVE_OP,
		 NLIST_DID_REMOVE_OP,
		 NLIST_GET_OP,
		 MAP_PUT_OP,
		 MAP_GET_OP,
		 BAG_COUNT_OP,

		 MAKE_MAP_FOR_VAR_VAR_OP,

		 INSTANCE_LOCAL_PROP_ITER_OP,	// XXI.  Iterator related
		 INSTANCE_PROP_ITER_OP,
		 SCIREASONVAL_ITER_OP,
		 FIND_EXAMPLE_ITER_OP,


		 // VAR_VAR_VAR_VAR_ARGS
		 STR_SUBSTR_OP	= 1,		// XV.   String

		 VLIST_DID_PUT_OP,		// XX.   Data-structure related
		 NLIST_DID_PUT_OP,

		  
		 // VAR_VAR_VAR_VAR_VAR_ARGS
		 EXTERNAL_CALL_OP	= 1,	// II.   Flow control

		 DEFINITE_INTEGRATE_OP,		// XII.  Algebraic

		 ASSERT_SVD_OP,			// XVII. Knowledge asserting
		 ASSERTA_SVD_OP,
		 ASSERTZ_SVD_OP,
		 SUBASSERT_SVD_OP,
		 SUBASSERTA_SVD_OP,
		 SUBASSERTZ_SVD_OP,
		 CONTEXT_ASSERT_SVD_OP,

		 // ADDR_ARGS
		 GOTO_OP		= 1,	// II.   Flow control

		 // VAR_ADDR_ARGS
		 IF_TRUE_GOTO_OP	= 1,	// II.   Flow control
		 IF_FALSE_GOTO_OP,

		 // UINT_VAR_ARGS
		 CALL_LINK_FORWARD_OP	= 1,	// II.   Flow control
		 CALL_LINK_BACKWARD_OP,

		 STORE_ARG_OP,			// V.    Loading values

		 // VAR_VAR_IND_IND_ARGS
		 MAKE_INSTANCE_OF_OP	= 1,	// XVIII.Instance creation
		 MAKE_SUBCLASS_OF_OP,

		 // Previously defined in last enum
		 LO_OP			= NO_OP_OP,
		 HI_OP			= NUM_OP,
		 MASK_OP		= 0xFF
		}
      		spvmOp_ty;

    //  PURPOSE:  To return the 'spvmOp_ty' value of the SPVM
    //		instruction whose first 2 bytes are 'opCode'.
    inline
    spvmOp_ty	getOpCodeOfWholeOp
				(uint16_t	opCode
				)
    {
      return( (spvmOp_ty)((opCode & MASK_OP) >> 0) );
    }


    //  PURPOSE:  To distingish among different lengthed arguments, and
    //		whether run-time checks ought to be done.
    typedef	enum
	    	{
		  ONE_LEN_NO_CHK,
		  TWO_LEN_NO_CHK,
		  ONE_LEN_CHK,
		  TWO_LEN_CHK
		}
    		spvmOpLenChk_ty;

    //  PURPOSE:  To serve as the values of spvmOpLenAndChk_ty but shifted
    //  	to the length-and-check field.
    typedef	enum
		{
		  ONE_LEN_NO_CHK_FIELD	= ONE_LEN_NO_CHK
		  			  << OP_LEN_AND_CHK_FIELD_OFFSET,
		  TWO_LEN_NO_CHK_FIELD	= TWO_LEN_NO_CHK
		  			  << OP_LEN_AND_CHK_FIELD_OFFSET,
		  ONE_LEN_CHK_FIELD	= ONE_LEN_CHK
		  			  << OP_LEN_AND_CHK_FIELD_OFFSET,
		  TWO_LEN_CHK_FIELD	= TWO_LEN_CHK
		  			  << OP_LEN_AND_CHK_FIELD_OFFSET,
		  OP_LEN_CHK_FIELD_MASK	= 0x3 << OP_LEN_AND_CHK_FIELD_OFFSET
		}
    		spvmOpLenAndChkField_ty;


    //  PURPOSE:  To return the 'spvmOpLenChk_ty' value of the SPVM
    //	instruction whose first 2 bytes are 'opCode'.
    inline
    spvmOpLenChk_ty
		getOpLenChkOfWholeOp
				(uint16_t	opCode
				)
    {
      return( (spvmOpLenChk_ty)
	      ((opCode & OP_LEN_CHK_FIELD_MASK) >> OP_LEN_AND_CHK_FIELD_OFFSET)
	    );
    }


    //  PURPOSE:  To represent the types of potential instructions that
    //  	exist by which arguments they take.
    typedef	enum
		{
		  NO_ARGS	= -1,
		  ARGS,
		  VAR_ARGS,
		  VAR_CONST_ARGS,
		  VAR_VAR_ARGS,
		  VAR_VAR_VAR_ARGS,
		  VAR_VAR_VAR_VAR_ARGS,
		  VAR_VAR_VAR_VAR_VAR_ARGS,
		  ADDR_ARGS,
		  VAR_ADDR_ARGS,
		  UINT_VAR_ARGS,
		  VAR_VAR_IND_IND_ARGS,

		  NUM_ARGS
		}
		args_ty;

    //  PURPOSE:  To represent the values of 'args_ty' but shifted to
    //  	the args field.
    typedef	enum
	    	{
		  ARGS_FIELD		= ARGS		<< ARGS_FIELD_OFFSET,
		  VAR_ARGS_FIELD	= VAR_ARGS	<< ARGS_FIELD_OFFSET,
		  VAR_CONST_ARGS_FIELD	= VAR_CONST_ARGS<< ARGS_FIELD_OFFSET,
		  VAR_VAR_ARGS_FIELD	= VAR_VAR_ARGS	<< ARGS_FIELD_OFFSET,
		  VAR_VAR_VAR_ARGS_FIELD= VAR_VAR_VAR_ARGS<< ARGS_FIELD_OFFSET,
		  VAR_VAR_VAR_VAR_ARGS_FIELD
			  		= VAR_VAR_VAR_VAR_ARGS
							<< ARGS_FIELD_OFFSET,
		  VAR_VAR_VAR_VAR_VAR_ARGS_FIELD
			  		= VAR_VAR_VAR_VAR_VAR_ARGS
							<< ARGS_FIELD_OFFSET,
		  ADDR_ARGS_FIELD	= ADDR_ARGS	<< ARGS_FIELD_OFFSET,
		  VAR_ADDR_ARGS_FIELD	= VAR_ADDR_ARGS << ARGS_FIELD_OFFSET,
		  UINT_VAR_ARGS_FIELD	= UINT_VAR_ARGS << ARGS_FIELD_OFFSET,
		  VAR_VAR_IND_IND_ARGS_FIELD
					= VAR_VAR_IND_IND_ARGS
							<< ARGS_FIELD_OFFSET,
		  ARGS_FIELD_MASK	= 0xF		<< ARGS_FIELD_OFFSET
		}
		argsField_ty;

    //  PURPOSE:  To return the 'args_ty' value of the SPVM instruction
    //		whose first 2 bytes are 'opCode'.
    inline
    args_ty	getArgsOfWholeOp(uint16_t	opCode
				)
    {
      return( (args_ty)((opCode & ARGS_FIELD_MASK) >> ARGS_FIELD_OFFSET) );
    }


    //  PURPOSE:  To represent a potential instruction and its argument field.
    class	SpvmOp
    {
      //  I.  Member vars:
      //  PURPOSE:  To tell the argument field of the potential instruction.
      argsField_ty		argsField_;

      //  PURPOSE:  To tell the potential instruction.
      spvmOp_ty			op_;

      //  II.  Disallowed auto-generated methods:

    protected :
      //  III.  Protected methods:

    public :
      //  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
      //  PURPOSE:  To initialize '*this' to a default illegal instruction.
      //  	No parameters.  No return value.
      SpvmOp			() :
	      			argsField_(ARGS_FIELD),
				op_(NOT_AN_OP)
				{ }

      //  PURPOSE:  To make '*this' have argsField_ty value 'newArgField' and
      //	'spvmOp_ty' value 'newOp'.  No return value.
      SpvmOp			(argsField_ty	newArgsField,
      				 spvmOp_ty	newOp
      				) :
				argsField_(newArgsField),
				op_(newOp)
				{ }

      //  PURPOSE:  To make '*this' have argsField_ty value derived from
      //  	'' and 'spvmOp_ty' value 'newPoin'.
      //  	No return value.
      SpvmOp			(args_ty	newArgsPoin,
      				 spvmOp_ty	newOp
		      		) :
				argsField_
					((argsField_ty)
					 (newArgsPoin<<ARGS_FIELD_OFFSET)
					),
				op_(newOp)
				{ }

      //  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
      SpvmOp			(const SpvmOp&	source
      				) :
				argsField_(source.getArgsField()),
				op_(source.getOp())
				{ }

      //  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
      SpvmOp&	operator=	(const SpvmOp&	source
      				)
				{
				  //  I.  Application validity check:
				  if  (this == &source)
				  {
				    return(*this);
				  }

				  //  II.  Delete old value
				  //  (nothing to do):

				  //  III.  Copy 'source':
				  argsField_	= source.getArgsField();
				  op_		= source.getOp();

				  //  IV.  Finished:
				  return(*this);
				}

      //  PURPOSE:  To release the resources of '*this'.  No parameters.
      //  	No return value.
      ~SpvmOp			()
      				{
				}

      //  V.  Accessors:
      //  PURPOSE:  To return the argument field of the potential instruction.
      //	No parameters.
      argsField_ty
		getArgsField	()
				const
				{ return(argsField_); }

      //  PURPOSE:  To return the argument of the potential instruction.
      //	No parameters.
      args_ty	getArgs		()
				const
				{
				  return( (args_ty)
				  	  (argsField_ >> ARGS_FIELD_OFFSET)
					);
				}

      //  PURPOSE:  To return the op code.  No parameters.
      spvmOp_ty	getOp		()
				const
				{ return(op_); }

      //  PURPOSE:  To return '*this' as a combined op-code.  No parameters.
      uint16_t	getOpCode	()
	      			const
				{
				  return( (uint16_t)getArgsField() |
					  (uint16_t)getOp()
					);
				}

      //  PURPOSE:  To return 'true' if '*this' instruction tells the VM to
      //  	stop, or 'false' otherwise.
      bool	doesTellVmToStop()
				const
				{
				  return( (getArgs() == ARGS)		     &&
				  	  (getOp() >= STOP_W_SUCCESS_OP) &&
					  (getOp() <= QUIT_W_FAILURE_OP)
					);
				}

      //  VI.  Mutators:
      //  PURPOSE:  To the potential instruction to 'newPoin'.  No return value.
      void	setOp		(spvmOp_ty	newOp
				)
				{
				  op_	= newOp;
				}


      //  VII.  Methods that do main and misc. work of class:
      //  PURPOSE:  To return 'true' if '*this' is equal to 'rhs', or 'false'
      //	otherwise.
      bool	operator==	(const SpvmOp&	rhs
		      		)
	      			const
     				{
				  return( (getArgsField() == rhs.getArgsField())
					  &&     (getOp() == rhs.getOp())
					);
				}

      //  PURPOSE:  To return 'false' if '*this' is equal to 'rhs', or 'true'
      //	otherwise.
      bool	operator!=	(const SpvmOp&	rhs
		      		)
	      			const
				{
				  return( !(*this == rhs) );
				}

      //  PURPOSE:  To print into  'text' of length 'textLen' a description
      //	of '*this'.  Returns 'text'.
      char*	describe	(char*		text,
				 size_t		textLen
				)
				const;

    };


    //  PURPOSE:  To represent possible levels of optimization.
    typedef	enum
		{
		  NO_OPTIMIZE,
		  LEVEL1_OPTIMIZE,
		  LEVEL2_OPTIMIZE,
		  LEVEL3_OPTIMIZE
		}
		howOptimize_ty;

    //  PURPOSE:  To represent the different ways to link methods.
    typedef	enum
    		{
		  LINK_ONLY_WITH,
		  LINK_FORWARD,
		  LINK_BACKWARD,
		  LINK_FORWARD_UNTIL,
		  LINK_BACKWARD_UNTIL,
		  LINK_FORWARD_SINCE,
		  LINK_BACKWARD_SINCE
		}
		howLink_ty;


    //  PURPOSE:  To represent indices of ConstructorDefnSection addresses in
    //		KnowledgeBaseRun instances
    typedef	uint16_t	constructDefnIndex_ty;

    //  PURPOSE:  To represent the 'constructDefnIndex_ty' value meaning
    //		"no constructor used".
    const constructDefnIndex_ty
				NO_CONSTRUCT_DEFN_INDEX
						= 0;

    //  PURPOSE:  To be the type of the index of address stack of the virtual
    //		machine.
    typedef	uint32_t	spvmAddrStackIndex_ty;

    //  PURPOSE:  To represent the index of a constant in the constant pool.
    typedef	entryPartialAddress_ty
				constPoolIndex_ty;

    //  PURPOSE:  To represent a "null" value for type 'constPoolIndex_ty'
    const constPoolIndex_ty
		CONST_POOL_INDEX_NULL
				= ENTRY_PARTIAL_ADDRESS_NULL;

//  PURPOSE:  To represent the index of a variable in an activation record.
typedef	uint32_t	variableIndex_ty;

//  PURPOSE:  To tell the maximum 'variableIndex_ty' value that can be
//	    specified in 1 byte.
const variableIndex_ty
		MAX_1_BYTE_VARIABLE_INDEX	= 0xFF;

//  PURPOSE:  To tell the maximum 'variableIndex_ty' value that can be
//	    specified in 2 bytes.
const variableIndex_ty
		MAX_2_BYTE_VARIABLE_INDEX	= 0xFFFF;

//  PURPOSE:  To tell the index of the variable in which the this subject
//		is given to the method.
const variableIndex_ty
		THIS_SUBJECT_VARIABLE_INDEX
				= 0x00000000;

//  PURPOSE:  To tell the index of the variable in which the return value
//		is written.
const variableIndex_ty
		RETURN_VALUE_VARIABLE_INDEX
				= THIS_SUBJECT_VARIABLE_INDEX + 1;

    //  PURPOSE:  To tell the index of the first available general-purpose
    //	    variable.
    const variableIndex_ty
		FIRST_GENERAL_PURPOSE_VARIABLE_INDEX
				= RETURN_VALUE_VARIABLE_INDEX + 1;

    //  PURPOSE:  To tell the number of immutable input variables into any
    //		method call.
    const variableIndex_ty
		NUM_IMMUTABLE_INPUT_VARS
				= 1;	// For THIS_SUBJECT_VARIABLE_INDEX

    //  PURPOSE:  To tell the number of return variables from a method call.
    const variableIndex_ty
		NUM_RETURN_VARS	= 1;	// For RETURN_VALUE_VARIABLE_INDEX

    //  PURPOSE:  To tell the index of the first potentially mutable variable
    //		(above THIS_SUBJECT_VARIABLE_INDEX, which should not be changed)
    const variableIndex_ty
		FIRST_MUTABLE_VAR_VARIABLE_INDEX
				= THIS_SUBJECT_VARIABLE_INDEX	+
				  NUM_IMMUTABLE_INPUT_VARS;

    //  PURPOSE:  To represent a "null" value for type 'variableIndex_ty'
    const variableIndex_ty
		NULL_VARIABLE_INDEX
				= 0xFFFFFFFF;

    //  PURPOSE:  To distinguish among the possible definers of methods.
    typedef	enum
    		{
		  PRE_DEFINER,
		  USER_DEFINER
		}
		methDefiner_ty;

    //  PURPOSE:  To serve as unique values to distinguish among different
    //		'MethodDefnTemporalProgression' instances within the same
    //		KnowledgeBaseRun.
    typedef	entryPartialAddress_ty
				methDefnTemporalProgId_ty;

    //  PURPOSE:  To tell the lowest (and first) 'methDefnTemporalProgId_ty'
    //		value with which to identify 'MethodDefnTemporalProgression'
    //		instances
    const methDefnTemporalProgId_ty
		LOWEST_USER_METH_DEFN_TEMPORAL_PROG_ID	=
				4096;

    //  PURPOSE:  To tell 'methDefnTemporalProgId_ty' value illegal in all
    //		circumstances.
    const methDefnTemporalProgId_ty
		NULL_METH_DEFN_TEMPORAL_PROG_ID	=
				0xFFFFFFFF;
 
    //  PURPOSE:  To serve as unique values to distinguish among specific
    //		method definitions.
    typedef	entryPartialAddress_ty
				specificMethDefnId_ty;

    //  PURPOSE:  To tell the lowest (and first) 'specificMethDefnId_ty'
    //		value with which to identity 'SpecificMethodDefn' instances.
    const specificMethDefnId_ty
		LOWEST_USER_DEFINED_SPEC_METH_DEFN_ID	=
				4096;

    //  PURPOSE:  To tell the 'specificMethDefnId_ty' value that all
    //  	MaskedSpecificMethodDefn instances share.
    const specificMethDefnId_ty
		MASKED_SPEC_METH_DEFN_ID	=
				ENTRY_PARTIAL_ADDRESS_NULL-1;

    //  PURPOSE:  To tell the 'specificMethDefnId_ty' value that is illegal in
    //  	all circumstances.
    const specificMethDefnId_ty
		NULL_SPEC_METH_DEFN_ID	=
				ENTRY_PARTIAL_ADDRESS_NULL;

    //  PURPOSE:  To represent the index of predefined constants in the
    //		constant pool.
    typedef	enum
		{
		  NULL_CP_IND,			// index of 'null'
		  NO_ANSWER_CP_IND,		// index of 'NoAnswer'
		  BY_IGNORANCE_CP_IND,		// index of 'byIgnorance'
		  JUSTIFICATION_CP_IND,		// index of 'Justification'
		  FALSE_CP_IND,			// index of 'false'
		  TRUE_CP_IND,			// index of 'true'
		  BOOLEAN_CP_IND,		// index of 'Boolean'
		  INTEGER_CP_IND,		// index of 'Integer'
		  RATIONAL_CP_IND,		// index of 'Rational'
		  REAL_CP_IND,			// index of 'Real'
		  COMPLEX_CP_IND,		// index of 'Complex'
		  NUMBER_CP_IND,		// index of 'Number'
		  STRING_CP_IND,		// index of 'String'
		  IDEA_CP_IND,			// index of 'Idea'
		  CONCEPT_CP_IND,		// index of 'Concept'
		  CONTEXT_CP_IND,		// index of 'Context'

		  NONANNOTATED_VALUE_CP_IND,	// index of 'UnannotatedValue'
		  ANNOTATED_VALUE_CP_IND,	// index of 'AnnotatedValue'
		  VALUE_CP_IND,			// index of 'Value'
		  ATTRIBUTE_CP_IND,		// index of 'Attribute'
		  ITERATOR_CP_IND,		// index of 'Iterator'
		  DATA_STRUCTURE_CP_IND,	// index of 'DataStructure'
		  LIST_CP_IND,			// index of 'List'
		  VECTOR_LIST_CP_IND,		// index of 'VectorList'
		  NODE_LIST_CP_IND,		// index of 'NodeList'
		  BAG_CP_IND,			// index of 'Bag'
		  MAP_CP_IND,			// index of 'Map'
		  SP_ENV_CP_IND,		// index of 'SpEnv'
		  THIS_SE_CP_IND,		// index of 'thisSE'
		  STD_IN_CP_IND,		// index of 'stdIn'
		  STD_OUT_CP_IND,		// index of 'stdOut'
		  EXCEPTION_CP_IND,		// index of 'Exception'

		  RAT_NEG_TWO_CP_IND,		// index of rational -2
		  RAT_NEG_ONE_CP_IND,		// index of rational -1
		  RAT_ZERO_CP_IND,		// index of rational 0
		  RAT_QUARTER_CP_IND,		// index of rational 1/4
		  RAT_THIRD_CP_IND,		// index of rational 1/3
		  RAT_HALF_CP_IND,		// index of rational 1/2
		  RAT_ONE_CP_IND,		// index of rational 1
		  RAT_TWO_CP_IND,		// index of rational 2
		  RAT_THREE_CP_IND,		// index of rational 3
		  RAT_FOUR_CP_IND,		// index of rational 4
		  RAT_FIVE_CP_IND,		// index of rational 5
		  RAT_SIX_CP_IND,		// index of rational 6
		  RAT_SEVEN_CP_IND,		// index of rational 7
		  RAT_EIGHT_CP_IND,		// index of rational 8
		  RAT_NINE_CP_IND,		// index of rational 9
		  RAT_TEN_CP_IND,		// index of rational 10

		  CPLX_I_CP_IND,		// index of i
		  REAL_NEG_ONE_CP_IND,		// index of -1.0
		  REAL_NEG_HALF_CP_IND,		// index of -0.5
		  REAL_ZERO_CP_IND,		// index of 0.0
		  REAL_HALF_CP_IND,		// index of 0.5
		  REAL_ONE_CP_IND,		// index of 1.0
		  REAL_TWO_CP_IND,		// index of 2.0

		  NUM_CP_ID
		}
		predefinedConstPoolIndex_ty;


    //  PURPOSE:  To distinguish among MethodVTable instances.
    typedef	uint32_t
			methodVTableIndex_ty;


    //  PURPOSE:  To distinguish between an Identity as an instance vs. as a
    //		class.
    typedef	enum	{
			  INSTANCE_IORC,
			  CLASS_IORC,
			  NOT_IN_KB_IORC
			}
			instanceOrClass_ty;

    //  PURPOSE:  To distinguish between knowledge used by the asserting
    //		subject, or by its instances.
    typedef	enum	{
			  SELF_KNOW_USER,
			  SUB_KNOW_USER
    			}
			knowledgeUser_ty;


    //  PURPOSE:  To distinguish between which side(s) of a binary relation
    //		that a variable is on.
    typedef	enum	{
			  NEITHER_BRS,
			  LEFT_BRS,
			  RIGHT_BRS,
			  BOTH_BRS
			}
			binaryRelationSides_ty;

    //  PURPOSE:  To distinguish an instruction to which to go.
    typedef	int	assemblyLabelIndex_ty;

    //  PURPOSE:  To serve as the value meaning that no other instruction jumps
    //		to you.
    const assemblyLabelIndex_ty
		ASSEMBLY_LABEL_INDEX_NULL	= -1;

    //  PURPOSE:  To distinguish between different types of domain limits.
    //		Definitions of constraints on domain limits:
    //		System constraint:	range defn ⊇ system ⊇ saturate
    //		Instrument constraint:	range defn ⊇ detect ⊇ reliable
    //		Data0 constraint:	system ⊇ observed
    //		Data1 constraint:	detect ⊇ observed
    typedef	enum	{
			  RANGE_DEFINE_DL,	// Hard limit
			  SYSTEM_DL,		// Hard limit
			  DETECT_DL,		// Hard limit
			  SATURATE_DL,		// Soft limit
			  RELIABLE_DL,		// Soft limit
			  OBSERVED_DL,		// Soft limit

			  NUM_DL
			}
			domainLimit_ty;


    //----		Knowledge-categorization related:	----//

    //  PURPOSE:  To distinguish among how knowledge may be categorized.
    typedef	enum
		{
		  ERROR_KNOW_CAT	= -1,
		  ANALYTICAL_KNOW_CAT,	// e.g. area of circle = pi * r^2
		  DESCRIPTIVE_KNOW_CAT,	// Generalizations of data,
					// e.g. Kepler's Laws
		  EXPLANATORY_KNOW_CAT	// Posit some underlying mechanism,
					// e.g. Newton's Laws
		}
		knowCategory_ty;


    //----		Science	query related:			----//

    //  PURPOSE:  To distinguish among the types of scientific queries.
    typedef	enum
		{
		  ERROR_SCI_QUERY	= -1,
		  AB_INITIO_SCI_QUERY,
		  EMPIRICAL_SCI_QUERY,
		  ALL_EMPIRICAL_SCI_QUERY,
		  THEORETICAL_SCI_QUERY,
		  ALL_THEORETICAL_SCI_QUERY
		}
		sciQuery_ty;

  inline
  bool		wouldNumerAddOverflow
				(numerator_ty*	sumPtr,
				 numerator_ty	augend,
				 numerator_ty	addend
				)
				{
				  return
				    (__builtin_saddl_overflow
					(augend,
					 addend,
					 sumPtr
					)
				    );
				}

  inline
  bool		wouldNumerSubOverflow
				(numerator_ty*	differencePtr,
				 numerator_ty	minuend,
				 numerator_ty	subtrahend
				)
				{
				  return
				    (__builtin_ssubl_overflow
					(minuend,
					 subtrahend,
					 differencePtr
					)
				    );
				}

  inline
  bool		wouldNumerMulOverflow
				(numerator_ty*	productPtr,
				 numerator_ty	multiplier,
				 numerator_ty	multiplicand
				)
				{
				  return
				    (__builtin_smull_overflow
					(multiplier,
					 multiplicand,
					 productPtr
					)
				    );
				}
  inline
  bool		wouldDenomMulOverflow
				(denominator_ty*	productPtr,
				 denominator_ty		multiplier,
				 denominator_ty		multiplicand
				)
				{
				  return
				    (__builtin_umull_overflow
					(multiplier,
					 multiplicand,
					 productPtr
					)
				    );
				}

//  PURPOSE:  To serve as the index into the shared string section.
typedef	entryPartialAddress_ty	sharedStrInd_ty;

  //  PURPOSE:  To represent types of values.
  typedef	enum
		{
		  null_vt	= -1,
		  boolean_vt,
		  integer_vt,
		  rational_vt,
		  real_vt,
		  complex_vt,
		  concept_vt,
		  annotated_boolean_vt,
		  annotated_integer_vt,
		  annotated_rational_vt,
		  annotated_real_vt,
		  annotated_complex_vt,
		  annotated_concept_vt,
		  justified_boolean_vt,
		  justified_integer_vt,
		  justified_rational_vt,
		  justified_real_vt,
		  justified_complex_vt,
		  justified_concept_vt,
		  struct_var_vt,
		  runtime_expr_vt,
		  relation_vt,
		  string_vt,
		  vList_vt,
		  nList_vt,
		  bag_vt,
		  map_vt,
		  idea_vt
		}
		value_ty;


  //  PURPOSE:  To return 'true' if 'valueType' is a non-annotated and
  //	non-justified numeric value, or 'false' otherwise.
  inline
  bool		isNonAnnotatedNumeric
				(value_ty	valueType
				)
  {
    return( (valueType == integer_vt)	|| (valueType == rational_vt)	||
    	    (valueType == real_vt)	|| (valueType == complex_vt)
	  );
  }


  //  PURPOSE:  To return 'true' if 'valueType' represents an annotated
  //	value or 'false' otherwise.
  inline
  bool		isAnnotated	(value_ty	valueType
  				)
  {
    return( (valueType == annotated_boolean_vt)		||
    	    (valueType == annotated_integer_vt)		||
    	    (valueType == annotated_rational_vt)	||
    	    (valueType == annotated_real_vt)		||
    	    (valueType == annotated_complex_vt)		||
    	    (valueType == annotated_concept_vt)
	  );
  }


  //  PURPOSE:  To return 'true' if 'valueType' represents a justified
  //	value or 'false' otherwise.
  inline
  bool		isJustified	(value_ty	valueType
  				)
  {
    return( (valueType == justified_boolean_vt)		||
    	    (valueType == justified_integer_vt)		||
    	    (valueType == justified_rational_vt)	||
    	    (valueType == justified_real_vt)		||
    	    (valueType == justified_complex_vt)		||
    	    (valueType == justified_concept_vt)
	  );
  }


  //  PURPOSE:  To return 'true' if 'valueType' represents a numeric
  //	value or 'false' otherwise.
  inline
  bool		isNumeric	(value_ty	valueType
  				)
  {
    return( (valueType == integer_vt)			||
    	    (valueType == rational_vt)			||
    	    (valueType == real_vt)			||
    	    (valueType == complex_vt)			||
	    (valueType == annotated_integer_vt)		||
    	    (valueType == annotated_rational_vt)	||
    	    (valueType == annotated_real_vt)		||
    	    (valueType == annotated_complex_vt)		||
	    (valueType == justified_integer_vt)		||
    	    (valueType == justified_rational_vt)	||
    	    (valueType == justified_real_vt)		||
    	    (valueType == justified_complex_vt)
	  );
  }


  //  PURPOSE:  To return 'true' if 'valueType' represents a complex numeric
  //	value or 'false' otherwise.
  inline
  bool		isComplex	(value_ty	valueType
  				)
  {
    return( (valueType == complex_vt)			||
	    (valueType == annotated_complex_vt)		||
	    (valueType == justified_complex_vt)
	  );
  }


  //  PURPOSE:  To return 'true' if 'valueType' represents a datastructure
  //  	value of 'false' otherwise.
  inline
  bool		isDataStructure	(value_ty	valueType
				)
  {
    return( (valueType == vList_vt)			||
    	    (valueType == nList_vt)			||
    	    (valueType == bag_vt)			||
    	    (valueType == map_vt)
	  );
  }


  //  PURPOSE:  To return the corresponding justified type for 'value'.
  //	Returns 'null_vt' if no corresponding 'value_ty' value found.
  extern
  value_ty	toJustifiedValue(value_ty	value
				);


  //  PURPOSE:  To return the most general 'value_ty' value that unifies 'lhs'
  //      and 'rhs'.
  inline
  value_ty	unify		(value_ty	lhs,
				 value_ty	rhs
				)
  {
    if  ( (lhs == null_vt) || (rhs == null_vt) )
    {
      return(null_vt);
    }

    if  (lhs == rhs)
    {
      return(lhs);
    }

    if  ( ( (lhs == rational_vt) && (rhs == integer_vt) )      ||
	  ( (rhs == rational_vt) && (lhs == integer_vt) )
	)
    {
      return(rational_vt);
    }

    if  ( ((lhs == integer_vt) || (lhs == rational_vt) || (lhs == real_vt)) &&
	  ((rhs == integer_vt) || (rhs == rational_vt) || (rhs == real_vt))
	)
    {
      return(real_vt);
    }

    if  ( ( (lhs == integer_vt) || (lhs == rational_vt) ||
	    (lhs == real_vt)	|| (lhs == complex_vt)
	  )
	  &&
	  ( (rhs == integer_vt) || (rhs == rational_vt) ||
	    (rhs == real_vt)	|| (rhs == complex_vt)
	  )
	)
    {
      return(complex_vt);
    }

    if  ( ( (lhs == integer_vt) && (rhs == justified_integer_vt) )  ||
	  ( (rhs == integer_vt) && (lhs == justified_integer_vt) )
	)
    {
      return(justified_integer_vt);
    }

    if  ( ( (lhs == integer_vt)			||
	    (lhs == rational_vt)		||
	    (lhs == justified_integer_vt)	||
	    (lhs == justified_rational_vt)
	  )					    &&
	  ( (rhs == integer_vt)			||
	    (rhs == rational_vt)		||
	    (rhs == justified_integer_vt)	||
	    (rhs == justified_rational_vt)
	  )
	)
    {
      return(justified_rational_vt);
    }

    if  ( ( (lhs == integer_vt)			||
	    (lhs == rational_vt)		||
	    (lhs == real_vt)			||
	    (lhs == justified_integer_vt)	||
	    (lhs == justified_rational_vt)	||
	    (lhs == justified_real_vt)
	  )					    &&
	  ( (rhs == integer_vt)			||
	    (rhs == rational_vt)		||
	    (rhs == real_vt)			||
	    (rhs == justified_integer_vt)	||
	    (rhs == justified_rational_vt)	||
	    (rhs == justified_real_vt)
	  )
	)
    {
      return(justified_real_vt);
    }

    if  ( isNumeric(lhs) && isNumeric(rhs) )
    {
      return(justified_complex_vt);
    }

    if  ( ( isNumeric(lhs)			&&
	    ( (rhs == struct_var_vt) || (rhs == runtime_expr_vt) )
	  )								||
	  ( isNumeric(rhs)			&&
	    ( (lhs == struct_var_vt) || (lhs == runtime_expr_vt) )
	  )
	)
    {
      return(runtime_expr_vt);
    }

    return(concept_vt);
  }


//  PURPOSE:  To tell the character that prefaces all variables.
const char	SP_VARIABLE_PREFACING_CHAR	= '@';

//  PURPOSE:  To tell the character that prefaces all variables as a string.
#define		SP_VARIABLE_PREFACING_STR	"@"

//  PURPOSE:  To represent addresses in one segment of the SPVM.
typedef	uint64_t	spvmSingleSegAddr_ty;

//  PURPOSE:  To represent an illegal address.
const spvmSingleSegAddr_ty	SPVM_SINGLE_SEG_ADDR_NULL
				= (spvmSingleSegAddr_ty)0xFFFFFFFFFFFFFFFFull;

//----	    Assembly related constants:		----//
//  PURPOSE:  To tell the char used to prefix numbered variables.
const char	ASSEMBLY_VAR_PREFIX_CHAR	= SP_VARIABLE_PREFACING_CHAR;

//  PURPOSE:  To tell the char used to prefix numbered variables as a
//		string.
#define	ASSEMBLY_VAR_PREFIX_STR		SP_VARIABLE_PREFACING_STR

//  PURPOSE:  To tell the to-end-of-line comment for SPVM assembly language.
const char	TO_END_OF_LINE_ASSEMBLY_LANG_COMMENT_CHAR
				= '#';

//  PURPOSE:  To tell the char that used as a suffix for assembly labels.
const char	ASSEMBLY_LABEL_SUFFIX_CHAR	= ':';

//  PURPOSE:  To tell the printf format string of goto targets.
#define	ASSEMBLY_GOTO_TARGET_FORMAT_STRING	"label_%04X%%"

//  PURPOSE:  To tell the printf-format string to generating labels.
#define	ASSEMBLY_LABEL_FORMAT_STRING	\
				ASSEMBLY_GOTO_TARGET_FORMAT_STRING " :\n"

//  PURPOSE:  To tell the whole-code beginning token.
#define	ASSEMBLY_BEGINNING_TOKEN_STRING		"$beginPreAsm"


//  PURPOSE:  To tell the whole-code ending token.
#define	ASSEMBLY_ENDING_TOKEN_STRING		"$endPreAsm"


//  PURPOSE:  To tell the variable beginning token.
#define	VAR_SECTION_BEGINNING_TOKEN_STRING	"%beginVarDecl"

//  PURPOSE:  To denote the start of the declaration of a constant.
#define	CONST_DECL_TOKEN_STRING			"%const"

//  PURPOSE:  To denote the start of the declaration of a variable.
#define	VARIABLE_DECL_TOKEN_STRING		"%var"


//  PURPOSE:  To tell the variable ending token.
#define	VAR_SECTION_ENDING_TOKEN_STRING		"%endVarDecl"


//  PURPOSE:  To tell the code beginning token.
#define	CODE_SECTION_BEGINNING_TOKEN_STRING	"%beginCode"

//  PURPOSE:  To tell the code ending token.
#define	CODE_SECTION_ENDING_TOKEN_STRING	"%endCode"


//  PURPOSE:  To hold the token definition that signifies the 'this'
//		variable for expressions inside structures.
#define	THIS_VAR_STR		"this"

//  PURPOSE:  To hold the token definition that signifies the variable
//		that returns the value.
#define	THIS_SUBJ_VAR_STR	SP_VARIABLE_PREFACING_STR THIS_VAR_STR

//  PURPOSE:  To hold the token defintion that signifies the 'These'
//	  variable for expressions inside set structures.
#define	THESE_VAR_STR		"these"

//  PURPOSE:  To hold the token defintion that signifies the 'exception'
//	  variable for expressions inside Catch structures.
#define	EXCEPTION_VAR_STR	"exception"

//  PURPOSE:  To return 'true' if 'varNameWCPtr' points to the name
//	  of a reserved variable or 'false' otherwise.
extern
bool		isReservedVarName
				(const char*		varNameWCPtr
				);

//  PURPOSE:  To return 'true' if 'varNameWstr' is the name of a reserved
//	  variable or 'false' otherwise.
inline
bool		isReservedVarName
				(const std::string&	name
				)
				{
				  return(isReservedVarName(name.c_str()));
				}


class		Identity;
class		PotentialVariable;
class		CompilerDefinedPotentialVariable;
class		ProgrammerDefinedPotentialVariable;
class		ReturnValuePotentialVariable;
class		PotentialInstruction;
class		MethodDefnParseTreeNode;
class		CompileContext;

#include	"CPtrCompStruct.h"
#include	"StringTempStore.h"
#include	"Identity.h"
#include	"IdentityArray.h"
#include	"IdentityStaticVars.h"
#include	"IdentityTextizer.h"

//  PURPOSE:  To map from 'value_ty' to the Identity of the corresponding SP
//    class.
extern
const Identity&	valueTyToIdentityClassMap
				(value_ty
				);

//  PURPOSE:  To map from 'value_ty' value 'valueTy' to the default value a
//    variable of such a type should have.
extern
const Identity&	valueTyToInitialDefaultValueMap
				(value_ty
				);

//  PURPOSE:  To map from 'Identity' instances that represent classes to
//    the corresponding 'value_ty' value.
extern
value_ty	identityClassToValueTyMap
				(const Identity&	class_
				);

#include	"PotentialVariable.h"
#include	"PotentialInstruction.h"
#include	"CompileContext.h"
#include	"ParseTreeNode.h"
#include	"KnowledgeBase.h"

extern
ParseTreeNode*	rootPtr;

extern
void		setText		(char*	newTextPtr);


extern
int		yyparse		();
