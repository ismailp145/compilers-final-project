/*-------------------------------------------------------------------------*
 *---									---*
 *---		IdentityStaticVars.h					---*
 *---									---*
 *---	    This file declares predefined Identity vars.		---*
 *---									---*
 *---	----	----	----	----	----	----	----	-----	---*
 *---									---*
 *---	Version 9a	2025-03-09	generateIdentitiesFromDict	---*
 *---	Source: /srv/AppPhiloSci/SOM/Ver9A/Local/Persist/Public/StdLocal0/Knowledge/default.som9dict
 *---									---*
 *-------------------------------------------------------------------------*/

    struct	IdentityStaticVars
    {

      /*  PURPOSE:   To represent the assertion value meaning "no answer
       *	exists"(null)
       */
      static const Identity	null_;

      /*  PURPOSE:   To represent the assertion value meaning "not-yet-known"
       */
      static const Identity	unknown;

      /*  PURPOSE:   To represent the assertion value meaning
       *	"not-yet-queried"
       */
      static const Identity	notYetQueried;

      /*  PURPOSE:   To represent the value of the subject itself.
       */
      static const Identity	theSubject;

      /*  PURPOSE:   To represent the knowledge list marker meaning "query
       *	prior kb runs"
       */
      static const Identity	RECURSE_MARKER;

      /*  PURPOSE:   To represent falsity.(false)
       */
      static const Identity	false_;

      /*  PURPOSE:   To represent truth.(true)
       */
      static const Identity	true_;

      /*  PURPOSE:   To represent the class to which 'null', 'unknown' and
       *	'notYetQueried' belong.
       */
      static const Identity	NoAnswer;

      static const Identity	Idea;

      /*  PURPOSE:   To represent the class of values
       */
      static const Identity	Value;

      static const Identity	NonannotatedValue;

      static const Identity	String;

      static const Identity	Boolean;

      static const Identity	Concept;

      static const Identity	Class;

      static const Identity	Nonaffiliated;

      static const Identity	EmpiricalNominalValue;

      /*  PURPOSE:   To represent the class of attributes.
       */
      static const Identity	Attribute;

      /*  PURPOSE:   To represent the class of attributes of ProgramObject
       *	instances.
       */
      static const Identity	ProgramObjectA;

      /*  PURPOSE:   To map from a set-representing idea to an attribute that
       *	instances of the set should define
       */
      static const Identity	instancesOfIdeaShouldHaveAttrA;

      /*  PURPOSE:   To map from an idea to an expression (function, equation,
       *	decision tree or process set) that describes it.
       */
      static const Identity	ideasExprA;

      /*  PURPOSE:   To map from an idea to its implicit constructor.
       */
      static const Identity	implicitConstructorA;

      /*  PURPOSE:   To map from an idea to 'true' if it is immutable or
       *	'false' otherwise.
       */
      static const Identity	isImmutableA;

      /*  PURPOSE:   To map from an idea to 'true' if it is a singleDistinct
       *	instance.
       */
      static const Identity	isSingleDistinctA;

      /*  PURPOSE:   To map from an idea to 'true' if it is "class-full" (not
       *	allowed to have any more instances or subclasses defined) or 'false'
       *	otherwise.
       */
      static const Identity	isClassFullA;

      /*  PURPOSE:   To map from a class to 'true' if its instances are
       *	automatically named or to 'false' otherwise.
       */
      static const Identity	areInstancesAutomaticallyNamedA;

      /*  PURPOSE:   To map from a class to the integer for the next
       *	automatically-named instance.
       */
      static const Identity	nextAutomaticallyNamedIntegerA;

      /*  PURPOSE:   To map from an idea to a list of assertions that describe
       *	it.
       */
      static const Identity	ideasAssertionA;

      /*  PURPOSE:   To map from an idea to 'true' if it can be destroyed
       *	after use, or to 'false' otherwise.
       */
      static const Identity	mayBeDestroyedA;

      /*  PURPOSE:   To serve as the class of program attributes related to
       *	parsing.
       */
      static const Identity	ParseProgramObjectA;

      /*  PURPOSE:   To map from an idea to the filepath string at which the
       *	idea was first parsed.
       */
      static const Identity	parsedFilepathA;

      /*  PURPOSE:   To map from an idea to the line number at which the idea
       *	was first parsed.
       */
      static const Identity	parsedLineNumA;

      /*  PURPOSE:   To map from an idea to the column number at which the
       *	idea was first parsed.
       */
      static const Identity	parsedColNumA;

      /*  PURPOSE:   To map from an instance of Idea to a String telling the
       *	location at which that Idea was first parsed.
       */
      static const Identity	parseLocationStrA;

      /*  PURPOSE:   To map from an instance of Idea to a list of strings that
       *	are nicknames for that Idea
       */
      static const Identity	nicknameListA;

      /*  PURPOSE:   (FOR HYPOTHETICAL CONCEPTS ONLY) To map from the concept
       *	to the name of the concept.
       */
      static const Identity	hypotheticalsNameA;

      /*  PURPOSE:   (FOR HYPOTHETICAL CONCEPTS ONLY) To map from the concept
       *	to the all of the values specified in its constructor.
       */
      static const Identity	hypotheticalsConstructorAttrsA;

      /*  PURPOSE:   To map from an instance of 'Idea' to a map that maps from
       *	structural vars to the 'StructuralVarStruct' instances of the subject
       *	instance.
       */
      static const Identity	structVarInfoMapA;

      /*  PURPOSE:   To map from an attribute to 'true' if that attribute is
       *	single-valued, or 'false' otherwise.
       */
      static const Identity	isAttrSingleValuedA;

      /*  PURPOSE:   To map from an attribute to 'true' if that attribute
       *	cannot be changed by 'assertX()', or 'false' if it can be.
       */
      static const Identity	isAttrReadOnlyA;

      /*  PURPOSE:   To map from an attribute to its domain: the class of
       *	items to be described by the attribute
       */
      static const Identity	attrsDomainA;

      /*  PURPOSE:   To map from an attribute to its range: the class in which
       *	all its values should be
       */
      static const Identity	attrsRangeA;

      /*  PURPOSE:   To map from an Attribute instance to its AssertBack
       *	value, if one exists.
       */
      static const Identity	attrsAssertBackA;

      /*  PURPOSE:   To represent the class of attributes of attributes.
       */
      static const Identity	AttributeA;

      /*  PURPOSE:   To represent the class of attributes of Value instances
       */
      static const Identity	ValueA;

      /*  PURPOSE:   To represent the class of attributes of AnnotatedValue
       *	instances
       */
      static const Identity	AnnotatedValueA;

      /*  PURPOSE:   To map from instances of 'Attribute' to the domain that
       *	they are for by default
       */
      static const Identity	attrsDefaultDomainA;

      /*  PURPOSE:   To represent the class of attributes of empirical
       *	phenomena.
       */
      static const Identity	EmpiricalEntityA;

      /*  PURPOSE:   To map from the class 'EmpiricalEntityA' to a map that
       *	maps from operators to another map of lists of operand attribute to
       *	resulting attributes.
       */
      static const Identity	empiricalEntityAttrClassesOperatorToMapMapA;

      /*  PURPOSE:   To serve as the subclass of all non-specified empirical
       *	attributes.
       */
      static const Identity	NonSpecifiedEmpiricalA;

      /*  PURPOSE:   To represent a non-specified empirical attribute:
       */
      static const Identity	nonSpecifiedEmpiricalA;

      /*  PURPOSE:   To represent a non-specified empirical attribute for
       *	non-negative values.
       */
      static const Identity	nonNegNonSpecifiedEmpiricalA;

      /*  PURPOSE:   To represent a non-specified empirical attribute over
       *	dimensionless values that may range in [0..1].
       */
      static const Identity	fraction;

      /*  PURPOSE:   To represent a non-specified empirical attribute over
       *	value dimensionless value when an attribute has been divided by
       *	itself.
       */
      static const Identity	ratio;

      /*  PURPOSE:   To serve as the superclass of all pre-implemented
       *	data-structures, specifically: List (VectorList and NodeList), Bag
       *	and Map.
       */
      static const Identity	DataStructure;

      /*  PURPOSE:   To map from a primary data-structure class (VectorList,
       *	NodeList, Bag or Map) to a map that maps data-structure sizes to a
       *	linked list of registered immutable singleDistinct instances of those
       *	respective datastructures to return if an equivalent immutable
       *	singleDistinct is ever asked for.
       */
      static const Identity	dataStructureClassesSingleDistinctSizeToLenMapA;

      static const Identity	List;

      static const Identity	VectorList;

      static const Identity	NodeList;

      static const Identity	listOfA;

      static const Identity	Bag;

      static const Identity	bagOfA;

      static const Identity	Map;

      static const Identity	mapFromA;

      static const Identity	mapToA;

      static const Identity	SubjectDescription;

      /*  PURPOSE:   To represent the class of annotated values
       */
      static const Identity	AnnotatedValue;

      static const Identity	AnnotatedBoolean;

      static const Identity	AnnotatedInteger;

      static const Identity	AnnotatedRational;

      static const Identity	AnnotatedReal;

      static const Identity	AnnotatedComplex;

      static const Identity	AnnotatedConcept;

      /*  PURPOSE:   To map from 'AnnotatedValue' to the thing being annotated
       */
      static const Identity	annotatedValuesSubjA;

      /*  PURPOSE:   To map from 'AnnotatedValue' to the aspect of the thing
       *	being annotated
       */
      static const Identity	annotatedValuesAttrA;

      /*  PURPOSE:   To map from 'AnnotatedValue' to the nonannotated value
       */
      static const Identity	annotatedValuesValueA;

      /*  PURPOSE:   To map from 'AnnotatedValue' to the domain in which it is
       *	in
       */
      static const Identity	annotatedValuesDomainA;

      /*  PURPOSE:   To map from 'AnnotatedValue' to the type of the
       *	nonannotated value: either Boolean, Rational, FloatingPt or Concept
       */
      static const Identity	annotatedValuesTypeA;

      /*  PURPOSE:   To tell the standard deviation of an annotated value.
       */
      static const Identity	annotatedValuesStdDevA;

      /*  PURPOSE:   To tell the number of real significant digits.
       */
      static const Identity	annotatedValuesRealSigFigsA;

      /*  PURPOSE:   To tell the number of imaginary significant digits.
       */
      static const Identity	annotatedValuesImagSigFigsA;

      /*  PURPOSE:   To map from AnnotatedValue to their Justification.
       */
      static const Identity	valuesJustificationA;

      /*  PURPOSE:   To represent the class of all metadata attribute:
       */
      static const Identity	ValueMetadataA;

      /*  PURPOSE:   To map from an annoated value to the operator that
       *	created it.
       */
      static const Identity	annotatedValuesOperatorA;

      /*  PURPOSE:   To map from an annotated value to a list of the operands
       *	that went into creating that value.
       */
      static const Identity	annotatedValuesOperandListA;

      /*  PURPOSE:   To serve as a class of attributes that map from
       *	'AnnotatedValue' instances to 'MetadataCalculatingFncsFamily' that
       *	compute metadata that result from a particular binary operator and a
       *	particular metadata attribute.
       */
      static const Identity	AnnotatedValuesBinaryOpMetadataComboFncA;

      static const Identity	findMetadataFncFamily;

      /*  PURPOSE:   To instance of 'this' tell how to annotate a value with a
       *	metadatum
       */
      static const Identity	ValMetadataChoice;

      static const Identity	valMetadataChoicesMatchingClassA;

      static const Identity	valMetadataChoicesAssertedAttrA;

      static const Identity	valMetadataChoicesSecondaryMetadataMappingAttrA;

      static const Identity	valMetadataChoicesSecondaryMetadataAttrA;

      /*  PURPOSE:   To map from 'thisSE' to multiple 'ValMetadataChoice'
       *	instances.
       */
      static const Identity	valueMetadataChoiceA;

      /*  PURPOSE:   To be the function family for the function that returns
       *	an instance of AnnotatedValue corresponding to '@this' annotated by
       *	its the list in its first argument.
       */
      static const Identity	parsedValueFactory;

      /*  PURPOSE:   To see if '@this' AnnotatedValue instance violates any
       *	the constraints of its Domain instance.  Returns '@this'.
       */
      static const Identity	checkAgainstDomainConstraints;

      /*  PURPOSE:   To represent the class of all program-related objects.
       */
      static const Identity	ProgramObject;

      /*  PURPOSE:   To represent the class of all SP environments.
       */
      static const Identity	SpEnv;

      /*  PURPOSE:   To represent this running of the SP environment.
       */
      static const Identity	thisSE;

      /*  PURPOSE:   To represent the class of all knowledge bases.
       */
      static const Identity	KnowledgeBase;

      /*  PURPOSE:   To represent the class of all knowledge base runs.
       */
      static const Identity	KnowledgeBaseRun;

      /*  PURPOSE:   To represent the first kbRun.  To represent the class of
       *	Message instances
       */
      static const Identity	Message;

      /*  PURPOSE:   To represent the class of attributes of the SP
       *	environment.
       */
      static const Identity	SpEnvA;

      /*  PURPOSE:   To map from 'thisSE' to the specific natural language
       *	function family it should use for 'NatLangExpr' instances.
       */
      static const Identity	spEnvsNatLangFncA;

      /*  PURPOSE:   To map from 'thisSE' to the level of formality the SP
       *	environment should address the user.
       */
      static const Identity	spEnvsNatLangFormalityA;

      /*  PURPOSE:   To map from 'thisSE' to the filename currently being
       *	parsed.
       */
      static const Identity	spEnvsCurrentParseFileA;

      /*  PURPOSE:   To map from 'thisSE' to 'true' if its compiler-linker
       *	should display the pre-assembly, pre-optimized code, or to map to
       *	'false' otherwise.
       */
      static const Identity	spEnvsShouldDisplayPreAssemPreOptA;

      /*  PURPOSE:   To map from 'thisSE' to 'true' if its compiler-linker
       *	should display the pre-assembly, post-optimized code, or to map to
       *	'false' otherwise.
       */
      static const Identity	spEnvsShouldDisplayPreAssemPostOptA;

      /*  PURPOSE:   To map from 'thisSE' to 'true' if its compiler-linker
       *	should display the assembly code, or to map to 'false' otherwise.
       */
      static const Identity	spEnvsShouldDisplayAssemA;

      /*  PURPOSE:   To map from 'thisSE' to a value in
       *	'SpEnvsOptimizationLevel' telling the desired degree of sp compiler
       *	optimization.
       */
      static const Identity	spEnvsOptimizationDegreeA;

      /*  PURPOSE:   To map from 'thisSE' to a 'true' if Justifications should
       *	be printed for annotated values or to 'false' otherwise.
       */
      static const Identity	spEnvsShouldPrintJustificationA;

      /*  PURPOSE:   To map from KnowledgeBaseRun instances to their authoring
       *	agent.
       */
      static const Identity	kbRunsAuthorA;

      /*  PURPOSE:   To map from KnowledgeBaseRun instances to their starting
       *	time.
       */
      static const Identity	kbRunsStartingTimeA;

      /*  PURPOSE:   To map from KnowledgeBaseRun instances to their stopping
       *	time.
       */
      static const Identity	kbRunsStoppingTimeA;

      /*  PURPOSE:   To map from KnowledgeBaseRun instances to their map of
       *	strings to the Idea instances for which they may be nicknames.
       */
      static const Identity	kbRunsNicknameStringToDenotedMapA;

      /*  PURPOSE:   To map from 'thisSE' to a non-negative integer telling
       *	the current maximum effort with which to attempt to answer queries. 
       *	The higher the number the more the effort.  Value is limited to value
       *	specified on command line.
       */
      static const Identity	spEnvsCurrentMaxReasoningEffortA;

      /*  PURPOSE:   To map from instances of 'Message' to the corresponding
       *	string.
       */
      static const Identity	message;

      /*  PURPOSE:   To represent the class of sp compiler optimization
       *	degrees.
       */
      static const Identity	SpEnvsOptimizationDegree;

      /*  PURPOSE:   To represent the lowest degree of sp compiler
       *	optimization.
       */
      static const Identity	optimizeDegreeLowest;

      /*  PURPOSE:   To represent the second lowest degree of sp compiler
       *	optimization.
       */
      static const Identity	optimizeDegree2ndLowest;

      /*  PURPOSE:   To represent the second highest degree of sp compiler
       *	optimization.
       */
      static const Identity	optimizeDegree2ndHighest;

      /*  PURPOSE:   To represent the highest degree of sp compiler
       *	optimization.
       */
      static const Identity	optimizeDegreeHighest;

      /*  PURPOSE:   To represent the class of input/output streams
       */
      static const Identity	IOStream;

      /*  PURPOSE:   To represent the class of input-only streams
       */
      static const Identity	InputStream;

      /*  PURPOSE:   To represent the class of output-only streams
       */
      static const Identity	OutputStream;

      /*  PURPOSE:   To represent the default input stream
       */
      static const Identity	stdIn;

      /*  PURPOSE:   To represent the default main output stream
       */
      static const Identity	stdOut;

      /*  PURPOSE:   To represent the default error message output stream
       */
      static const Identity	stdErr;

      /*  PURPOSE:   To represent the class of knowledge discovery actions.
       */
      static const Identity	Research;

      /*  PURPOSE:   To represent the class of "research efforts", loosely
       *	akin to Lakatosian "research programmes".
       */
      static const Identity	ResearchEffort;

      /*  PURPOSE:   To represent the class of FileFormat instances
       */
      static const Identity	FileFormat;

      /*  PURPOSE:   To represent the class of line specifications in
       *	FileFormat instances
       */
      static const Identity	FileFormatLine;

      /*  PURPOSE:   To represent the superclass of classes allowed to be in a
       *	FileFormatLine
       */
      static const Identity	FileFormatLineField;

      /*  PURPOSE:   To represent a string literal on a line.
       */
      static const Identity	FileFormatLineLiteralField;

      /*  PURPOSE:   To represent an attribute value that is text
       */
      static const Identity	FileFormatLineTextField;

      /*  PURPOSE:   To represent an attribute value that is a named concept
       */
      static const Identity	FileFormatLineConceptField;

      /*  PURPOSE:   To map from FileFormat instances to a string telling the
       *	file format for which they are for.
       */
      static const Identity	fileFormatsFileFormatA;

      /*  PURPOSE:   To map from FileFormat instances to a List of
       *	FileFormatLine instances describing the format
       */
      static const Identity	fileFormatsLineListA;

      /*  PURPOSE:   To map from FileFormatLine instances to a List of
       *	FileFormatLineField instances.
       */
      static const Identity	fileFormatLinesListA;

      /*  PURPOSE:   To map from FileFormatLineField instances to their string
       *	literal (if they have one)
       */
      static const Identity	fileFormatLineFieldsStringA;

      /*  PURPOSE:   To map from FileFormatLineField instances to their
       *	concept (if they have one)
       */
      static const Identity	fileFormatLineFieldsConceptA;

      static const Identity	AttributeMultiplicativeResultStruct;

      static const Identity	attributeMultiplicativeResultStructProductA;

      static const Identity	Operator;

      static const Identity	OpExistence;

      /*  PURPOSE:   To represent the runtime new operator.(^^)
       */
      static const Identity	runtimeNew;

      static const Identity	OpProperty;

      /*  PURPOSE:   To represent the property returning operator.(->)
       */
      static const Identity	propertyOp;

      /*  PURPOSE:   To represent the class of numeric operators.
       */
      static const Identity	NumericOp;

      static const Identity	ExponentiatingOp;

      /*  PURPOSE:   To represent the exponentiation operator.(**)
       */
      static const Identity	exponentiationOp;

      /*  PURPOSE:   To represent the class of operators that multiply.
       */
      static const Identity	MultiplicativeOp;

      /*  PURPOSE:   To represent the multiplication operator.(*)
       */
      static const Identity	multiplicationOp;

      /*  PURPOSE:   To represent scaling multiplication.
       */
      static const Identity	scalingMult;

      /*  PURPOSE:   To represent grouping multiplication.
       */
      static const Identity	product;

      /*  PURPOSE:   To represent the class of operators that divide.
       */
      static const Identity	DividingOp;

      /*  PURPOSE:   To represent the division operator.(/)
       */
      static const Identity	divisionOp;

      /*  PURPOSE:   To represent integer division
       */
      static const Identity	div;

      /*  PURPOSE:   To represent modulus
       */
      static const Identity	mod;

      /*  PURPOSE:   To represent scaling division.
       */
      static const Identity	scalingDiv;

      /*  PURPOSE:   To represent the attribute telling if a multiplicative
       *	operator multiplies or divides.
       */
      static const Identity	doesMultiplicativeOpMultiplyA;

      /*  PURPOSE:   To represent the class of all adding and subtracting
       *	operators
       */
      static const Identity	AdditiveOp;

      /*  PURPOSE:   To represent the subclass of all grouping adding and
       *	subtracting operators
       */
      static const Identity	GroupingAdditiveOp;

      /*  PURPOSE:   To represent the subclass of all extending adding and
       *	subtracting operators
       */
      static const Identity	ExtendingAdditiveOp;

      /*  PURPOSE:   To represent the subclass of all non-delta adding and
       *	subtracting operators
       */
      static const Identity	NondeltaAdditiveOp;

      /*  PURPOSE:   To represent the subclass of all delta adding and
       *	subtracting operators
       */
      static const Identity	DeltaAdditiveOp;

      static const Identity	PositiveAdditiveOp;

      static const Identity	NegativeAdditiveOp;

      /*  PURPOSE:   To represent the grouping addition operator.(+grp)
       */
      static const Identity	groupingAddOp;

      /*  PURPOSE:   To represent the grouping addition function.
       */
      static const Identity	sum;

      /*  PURPOSE:   To represent the grouping subtraction operator.(-grp)
       */
      static const Identity	groupingSubtractOp;

      /*  PURPOSE:   To represent the grouping subtraction operator.
       */
      static const Identity	diff;

      /*  PURPOSE:   To represent the extending addition operator.(+ext)
       */
      static const Identity	extendingAddOp;

      /*  PURPOSE:   To represent the extending subtraction operator.(-ext)
       */
      static const Identity	extendingSubtractOp;

      /*  PURPOSE:   To represent the delta grouping addition operator.(+dGrp)
       */
      static const Identity	deltaGroupingAddOp;

      /*  PURPOSE:   To represent the delta grouping subtraction
       *	operator.(-dGrp)
       */
      static const Identity	deltaGroupingSubtractOp;

      /*  PURPOSE:   To represent the delta extending addition
       *	operator.(+dExt)
       */
      static const Identity	deltaExtendingAddOp;

      /*  PURPOSE:   To represent the delta extending subtraction
       *	operator.(-dExt)
       */
      static const Identity	deltaExtendingSubtractOp;

      /*  PURPOSE:   To represent plain addition without any meta-data
       *	manipulation.(+)
       */
      static const Identity	simpleAddition;

      /*  PURPOSE:   To represent plain subtraction without any meta-data
       *	manipulation, or unary negation.(-)
       */
      static const Identity	simpleSubtractionOrUnaryNegation;

      /*  PURPOSE:   To represent the class of trigonometric operators.
       */
      static const Identity	TrigonometricOp;

      /*  PURPOSE:   To represent the class of arc-operand trigonometric
       *	operators.
       */
      static const Identity	ArcOperandTrigonometricOp;

      /*  PURPOSE:   To represent the sine operator.
       */
      static const Identity	sin;

      /*  PURPOSE:   To represent the cosine operator.
       */
      static const Identity	cos;

      /*  PURPOSE:   To represent the tangent operator.
       */
      static const Identity	tan;

      /*  PURPOSE:   To represent the class of arc-returning trigonometric
       *	operators.
       */
      static const Identity	ArcReturningTrigonometricOp;

      /*  PURPOSE:   To represent the sine operator.
       */
      static const Identity	asin;

      /*  PURPOSE:   To represent the cosine operator.
       */
      static const Identity	acos;

      /*  PURPOSE:   To represent the tangent operator.
       */
      static const Identity	atan;

      /*  PURPOSE:   To represent the class of exponential functions.
       */
      static const Identity	ExponentialFnc;

      /*  PURPOSE:   To represent the function that raises e to a power.
       */
      static const Identity	exp;

      /*  PURPOSE:   To represent the function that raises 2 to a power
       */
      static const Identity	exp2;

      /*  PURPOSE:   To represent the function that raises 10 to a power
       */
      static const Identity	exp10;

      /*  PURPOSE:   To represent the function that computes the base-e
       *	logarithm.
       */
      static const Identity	log;

      /*  PURPOSE:   To represent the function that computes the base-2
       *	logarithm.
       */
      static const Identity	log2;

      /*  PURPOSE:   To represent the function that computes the base-10
       *	logarithm.
       */
      static const Identity	log10;

      /*  PURPOSE:   To represent the function that evaluates expressions of
       *	structural variables.
       */
      static const Identity	evalExpr;

      /*  PURPOSE:   To represent the function that solves expressions for a
       *	particular structural variable.
       */
      static const Identity	solveFor;

      /*  PURPOSE:   To represent the function that simplifies expressions.
       */
      static const Identity	simplify;

      /*  PURPOSE:   To represent the function that differentiates expression
       */
      static const Identity	differentiate;

      /*  PURPOSE:   To represent either indefiniteIntegrate or
       *	definiteIntegrate
       */
      static const Identity	integrate;

      /*  PURPOSE:   To represent the function that computes the indefinite
       *	integral of an expression.
       */
      static const Identity	indefiniteIntegrate;

      /*  PURPOSE:   To represent the function that computes the definite
       *	integral of an expression.
       */
      static const Identity	definiteIntegrate;

      /*  PURPOSE:   To represent the operator that raises numbers to powers
       */
      static const Identity	powerOp;

      /*  PURPOSE:   To represent the function that returns a non-specific
       *	member of the instances in the given data-structure.
       */
      static const Identity	group;

      /*  PURPOSE:   To represent the rational -1 as a non-annotated value.
       */
      static const Identity	negOneRational;

      /*  PURPOSE:   To represent the rational 0 as a non-annotated value.
       */
      static const Identity	zeroRational;

      /*  PURPOSE:   To represent the rational +1 as a non-annotated value.
       */
      static const Identity	posOneRational;

      /*  PURPOSE:   To represent the rational -1 as a non-annotated value.
       */
      static const Identity	negOneFloatPt;

      /*  PURPOSE:   To represent the rational 0 as a non-annotated value.
       */
      static const Identity	zeroFloatPt;

      /*  PURPOSE:   To represent the rational +1 as a non-annotated value.
       */
      static const Identity	posOneFloatPt;

      /*  PURPOSE:   To represent the Euler's number as a non-annotated value.
       */
      static const Identity	e;

      /*  PURPOSE:   To represent the constant representing the ratio of the
       *	circumference of a circle divided by its diameter as a non-annotated
       *	value.
       */
      static const Identity	pi;

      /*  PURPOSE:   To represent the constant representing positive infinity
       *	as a non-annotated value.(+infinity)
       */
      static const Identity	posInfinity;

      /*  PURPOSE:   To represent the constant representing negative infinity
       *	as a non-annotated value.(-infinity)
       */
      static const Identity	negInfinity;

      /*  PURPOSE:   To represent the attribute telling if an additive
       *	operator adds or subtracts.
       */
      static const Identity	doesAdditiveOpAddA;

      /*  PURPOSE:   To represent the definitional equivalence operator.(=)
       */
      static const Identity	definitionalEquivalenceOp;

      /*  PURPOSE:   To represent the class of comparison-testing operators.
       */
      static const Identity	ComparisonOp;

      /*  PURPOSE:   To represent the class of operators testing for
       *	lesser-than-ness or greater-than-ness.
       */
      static const Identity	LesserGreaterOp;

      /*  PURPOSE:   To represent the lesser equal operator.(<=)
       */
      static const Identity	lesserEqualOp;

      /*  PURPOSE:   To represent the lesser operator.(<)
       */
      static const Identity	lesserOp;

      /*  PURPOSE:   To represent the much lesser operator.(<<)
       */
      static const Identity	muchLesserOp;

      /*  PURPOSE:   To represent the greater equal operator.(>=)
       */
      static const Identity	greaterEqualOp;

      /*  PURPOSE:   To represent the greater operator.(>)
       */
      static const Identity	greaterOp;

      /*  PURPOSE:   To represent the much greater operator.(>>)
       */
      static const Identity	muchGreaterOp;

      /*  PURPOSE:   To represent the class of equality-testing operators.
       */
      static const Identity	EqualityOp;

      /*  PURPOSE:   To represent the operator that tests for the equivalence
       *	of references (and strings).(==ref)
       */
      static const Identity	equivalentReferenceTestOp;

      /*  PURPOSE:   To represent the operator that tests for the
       *	inequivalence of references (and strings).(!=ref)
       */
      static const Identity	inequivalentReferenceTestOp;

      /*  PURPOSE:   To represent the operator that tests for the equivalence
       *	of numbers.(==num)
       */
      static const Identity	equivalentNumberTestOp;

      /*  PURPOSE:   To represent the operator that tests for the
       *	inequivalence of numbers.(!=num)
       */
      static const Identity	inequivalentNumberTestOp;

      /*  PURPOSE:   To represent the operator that tests for the equivalence
       *	of recursively-defined objects.(==obj)
       */
      static const Identity	equivalentObjectTestOp;

      /*  PURPOSE:   To represent the operator that tests for the
       *	inequivalence of recursively-defined objects.(!=obj)
       */
      static const Identity	inequivalentObjectTestOp;

      /*  PURPOSE:   To represent the class of boolean logic manipulating
       *	operators
       */
      static const Identity	LogicOp;

      /*  PURPOSE:   To represent the logical NOT operator.(!)
       */
      static const Identity	notOp;

      /*  PURPOSE:   To represent the logical AND operator.(&&)
       */
      static const Identity	andOp;

      /*  PURPOSE:   To represent the logical OR operator.(||)
       */
      static const Identity	orOp;

      /*  PURPOSE:   To represent the class of assignment operators.
       */
      static const Identity	AssignmentOp;

      /*  PURPOSE:   To represent the assignment operator.(:=)
       */
      static const Identity	assignmentOp;

      /*  PURPOSE:   To represent the class of string operators.
       */
      static const Identity	StringOp;

      /*  PURPOSE:   To represent the string concatenation operator.(+con)
       */
      static const Identity	stringConcatOp;

      /*  PURPOSE:   To represent the string front uncatenation
       *	operator(-uncA)
       */
      static const Identity	stringFrontUncatOp;

      /*  PURPOSE:   To represent the string back uncatenation operator(-uncZ)
       */
      static const Identity	stringBackUncatOp;

      /*  PURPOSE:   To represent the method of String instances that returns
       *	'true' if the subject string begins with the given prefix string.
       */
      static const Identity	string_hasPrefix;

      /*  PURPOSE:   To represent the method of String instances that returns
       *	'true' if the subject string ends with the given suffix string.
       */
      static const Identity	string_hasSuffix;

      /*  PURPOSE:   To represent the method of String instances that return a
       *	(potentially) new string with the first letter capitalized.
       */
      static const Identity	string_capitalize;

      /*  PURPOSE:   To represent the method of String instances that returns
       *	the length of the string.
       */
      static const Identity	string_length;

      /*  PURPOSE:   To represent the method of String instances that returns
       *	the substring at the beginning whose length is given as a parameter.
       */
      static const Identity	string_prefix;

      /*  PURPOSE:   To represent the method of String instances that returns
       *	the substring at the end whose length is given as a parameter.
       */
      static const Identity	string_suffix;

      /*  PURPOSE:   To represent the method of String instances that returns
       *	the substring that begins at the first parameter and has number of
       *	characters specified by the last parameter.
       */
      static const Identity	string_substring;

      static const Identity	ProgrammingExpr;

      static const Identity	PredefinedCommand;

      static const Identity	Return;

      static const Identity	Break;

      static const Identity	Continue;

      static const Identity	Throw;

      static const Identity	PredefCmdConditional;

      static const Identity	If;

      static const Identity	Test;

      static const Identity	Match;

      static const Identity	Try;

      static const Identity	PredefCmdLoop;

      static const Identity	Do;

      static const Identity	Hypothesize;

      static const Identity	Catch;

      static const Identity	For;

      static const Identity	While;

      static const Identity	Repeat;

      /*  PURPOSE:   To represent the class of things that hold multiple Match
       *	instances.
       */
      static const Identity	MultiMatch;

      static const Identity	DefiningCmd;

      /*  PURPOSE:   To represent the class of operations
       */
      static const Identity	Operation;

      static const Identity	UnaryOperation;

      static const Identity	BinaryOperation;

      static const Identity	operationsOperatorA;

      /*  PURPOSE:   To map from programming elements to either 'true', if
       *	that programming element was created internally, or 'false' (or
       *	'null') otherwise.
       */
      static const Identity	isProgrammingElementInternallyCreatedA;

      /*  PURPOSE:   To map from a command instance to the main body of code
       *	that it is supposed to execute when invoked (for all commands)
       */
      static const Identity	commandsBodyA;

      /*  PURPOSE:   To map from a command instance to an alternative body of
       *	code that it is supposed to execute when invoked (else clause of If
       *	commands, or catch clause of Try commands)
       */
      static const Identity	commandsAlternativeBodyA;

      /*  PURPOSE:   To map from a command instance to the test expression it
       *	should invoke in conditions and loops (for all commands except Do,
       *	which is the only non-loop and non-conditional)
       */
      static const Identity	commandsTestA;

      /*  PURPOSE:   To map from a command instance to the code to execute
       *	before the main body (for the initialization step of For commands)
       */
      static const Identity	commandsPrebodyA;

      /*  PURPOSE:   To map from a command instance to the code to execute
       *	after the main body (for the increment step of For commands)
       */
      static const Identity	commandsPostbodyA;

      /*  PURPOSE:   To map from a Catch instance to the subclass of Exception
       *	that that Catch statement matches.
       */
      static const Identity	catchsExceptionClassA;

      /*  PURPOSE:   To map from Match instances to their comparison operator.
       */
      static const Identity	matchesOperatorA;

      /*  PURPOSE:   To map from Match instances to the operand with which the
       *	outer Match instance's test value should be compared.
       */
      static const Identity	matchesOperandA;

      /*  PURPOSE:   To map from Test instances to a list of Match instances.
       */
      static const Identity	multiMatchesMatchA;

      /*  PURPOSE:   To map from Try instances to the declaration of the
       *	variable that catches the Exception instance.
       */
      static const Identity	trysVarDeclA;

      /*  PURPOSE:   To map from Try instances to the usage of the variable
       *	that catches the Exception instance.
       */
      static const Identity	trysVarUsageA;

      /*  PURPOSE:   To map from operation/justification/etc. instances to
       *	their operator
       */
      static const Identity	operatorA;

      /*  PURPOSE:   To map from operation/justification/etc. instances to
       *	their first (or lhs) operand expression.
       */
      static const Identity	operand0A;

      /*  PURPOSE:   To map from operation/justification/etc. instances to
       *	their second (or rhs) operand expression.
       */
      static const Identity	operand1A;

      /*  PURPOSE:   To represent the class of variable usages.
       */
      static const Identity	VariableUsage;

      /*  PURPOSE:   To represent the attribute that maps from variable usages
       *	to their declarations.
       */
      static const Identity	variableUsagesVarDeclA;

      /*  PURPOSE:   To represent the attribute that maps from variable usages
       *	to 'true' if they represent themselves or 'false' otherwise.
       */
      static const Identity	variableUsagesDoesRepresentSelfA;

      /*  PURPOSE:   To represent the attribute that maps from variable usages
       *	to their rule quantifier (as opposed to a variable declaration).
       */
      static const Identity	variableUsagesQuantA;

      /*  PURPOSE:   To represent the attribute that maps from variable usages
       *	to the string that tells their name.
       */
      static const Identity	variableUsagesNameA;

      /*  PURPOSE:   To represent the class of variable declarations.
       */
      static const Identity	VarDecl;

      /*  PURPOSE:   To represent the class of constant declarations.
       */
      static const Identity	ConstDecl;

      /*  PURPOSE:   To map from variable declarations to their domains.
       */
      static const Identity	varDeclsDomainA;

      /*  PURPOSE:   To map from variable declarations to the variable usages
       *	inside of them.
       */
      static const Identity	varDeclsVarUsageA;

      /*  PURPOSE:   To map from variable declarations to the variable compile
       *	context in which they are declared.
       */
      static const Identity	varDeclsVariableCompileContextA;

      /*  PURPOSE:   To map from variable declarations to the variable static
       *	context in which they are declared.
       */
      static const Identity	varDeclsVariableStaticContextA;

      /*  PURPOSE:   To map from variable declarations to the index of their
       *	position in their static context
       */
      static const Identity	varDeclsVariableStaticContextIndexA;

      /*  PURPOSE:   To represent the class of values telling which values are
       *	allowed in a variable or argument
       */
      static const Identity	ArgAllowed;

      /*  PURPOSE:   To represent that null should _not_ be allowed for an
       *	argument (if it is not already covered by the class, as with 'Idea').
       *	 This is the default value for arguments.
       */
      static const Identity	nullNotArgAllowed;

      /*  PURPOSE:   To represent that null _should_ be allowed for an
       *	argument.
       */
      static const Identity	nullArgAllowed;

      /*  PURPOSE:   To represent the class of variable compile contexts
       *	associated with function declarations.
       */
      static const Identity	VariableCompileContext;

      /*  PURPOSE:   To map from VariableCompileContext instances to the
       *	VariableCompileContext instance in which it is declared.
       */
      static const Identity	variableCompileContextsOuterVariableCompileContextA;

      /*  PURPOSE:   To map from VariableCompileContext instances to variable
       *	declarations in them.
       */
      static const Identity	variableCompileContextsVarDeclA;

      /*  PURPOSE:   To map from VariableCompileContext instances to other
       *	VariableCompileContext instances declared in them.
       */
      static const Identity	variableCompileContextsInnerVariableCompileContextA;

      /*  PURPOSE:   To map from VariableCompileContext instances to
       *	quantifier instances in them.
       */
      static const Identity	variableCompileContextsQuantA;

      /*  PURPOSE:   To represent the class of variable static contexts
       *	associated with function declarations.
       */
      static const Identity	VariableStaticContext;

      /*  PURPOSE:   To map from VariableStaticContext instances to variable
       *	declarations in them.
       */
      static const Identity	variableStaticContextsVarDeclA;

      /*  PURPOSE:   To map from VariableStaticContext instances to the number
       *	of variable declarations which they contain
       */
      static const Identity	variableStaticContextsNumVarDeclsA;

      /*  PURPOSE:   To map from VariableStaticContext instances to quantifier
       *	instances in them.
       */
      static const Identity	variableStaticContextsQuantA;

      /*  PURPOSE:   To represent the class of all functions
       */
      static const Identity	Fnc;

      /*  PURPOSE:   To represent the class of AnonFnc
       */
      static const Identity	AnonFnc;

      /*  PURPOSE:   TO represent the class of function families
       */
      static const Identity	FncsFamily;

      /*  PURPOSE:   To represent the class of predefined function families.
       */
      static const Identity	PredefinedFncsFamily;

      /*  PURPOSE:   To represent the class of predefined querying function
       *	families
       */
      static const Identity	PredefinedKnowledgeQueryingFncsFamily;

      /*  PURPOSE:   To represent the class of predefined asserting function
       *	families.
       */
      static const Identity	PredefinedKnowledgeAssertingFncsFamily;

      /*  PURPOSE:   To represent the class of families of predefined
       *	functions of DataStructure instances.
       */
      static const Identity	PredefinedDataStructFncsFamily;

      /*  PURPOSE:   To represent the class of predefined input/output related
       *	function families.
       */
      static const Identity	PredefinedIOFncsFamily;

      /*  PURPOSE:   To represent the class of families of predefined
       *	functions of Iterator instances.
       */
      static const Identity	PredefinedIteratorFncsFamily;

      /*  PURPOSE:   To represent the class of families of predefined
       *	functions of String instances.
       */
      static const Identity	PredefinedStringFncsFamily;

      /*  PURPOSE:   To represent the class of families of predefined
       *	functions of 'thisSE'.
       */
      static const Identity	PredefinedThisSEFncsFamily;

      /*  PURPOSE:   To represent the attr that maps from functions to their
       *	family.
       */
      static const Identity	fncsFamilyA;

      /*  PURPOSE:   To represent the attr that maps from functions to their
       *	return class.
       */
      static const Identity	fncsReturnCA;

      /*  PURPOSE:   To represent the attr that maps from functions to one of
       *	their list of parameters.
       */
      static const Identity	fncsParamLA;

      /*  PURPOSE:   To represent the attr that maps from functions to their
       *	num of params (the length of the list of parameters).
       */
      static const Identity	fncsParamLLenA;

      /*  PURPOSE:   To represent the attr that maps from functions to their
       *	initially given instructions
       */
      static const Identity	fncsInstrA;

      /*  PURPOSE:   To represent the attr that maps from functions to their
       *	compiled instructions
       */
      static const Identity	fncsCompiledInstrA;

      /*  PURPOSE:   To map from functions to their variable static contexts.
       */
      static const Identity	fncsStaticContextA;

      /*  PURPOSE:   To represent the class of AnonFncTemplate
       */
      static const Identity	AnonFncTemplate;

      /*  PURPOSE:   To represent the attr that maps from AnonFncTemplate
       *	instances to their lists of template parameters.
       */
      static const Identity	anonFncTemplatesParamLA;

      /*  PURPOSE:   To represent the class of anonymous fnc instantiator
       *	computation identites.
       */
      static const Identity	AnonFncTemplateInstantiator;

      /*  PURPOSE:   To map from instances of 'AnonFncTemplateInstantiator' to
       *	the anonymous template to instantiate.
       */
      static const Identity	anonFncTemplateInstantiatorsAnonTemplateA;

      /*  PURPOSE:   To map from instances of 'AnonFncTemplateInstantiator' to
       *	the list of expressions to that substitute in.
       */
      static const Identity	anonFncTemplateInstantiatorsSubstituteInLA;

      /*  PURPOSE:   To map from instances of 'AnonFncTemplateInstantiator' to
       *	the template's instructions after substitutions are made during
       *	compilation.
       */
      static const Identity	anonFncTemplateInstantiatorsPostCompilationInstrA;

      /*  PURPOSE:   To map from instances of 'AnonFncTemplateInstantiator' to
       *	'true_' if their template is fixed (their value for attr
       *	'anonFncTemplateInstantiatorsAnonTemplateA' is an instance of
       *	'AnonFncTemplate'), or 'false_' if it is a variable.
       */
      static const Identity	isAnonFncTemplateInstantiatorsTemplateFixedA;

      /*  PURPOSE:   To represent the class of function calls
       */
      static const Identity	FunctionCall;

      /*  PURPOSE:   To map from a function call to its family.
       */
      static const Identity	functionCallsFamilyA;

      /*  PURPOSE:   To map from a function call to its list of arguments.
       */
      static const Identity	functionCallsArgListA;

      /*  PURPOSE:   To map from a function call to a label that denotes its
       *	underlying implementation function.
       */
      static const Identity	functionCallsSubSPImplementationLabelA;

      /*  PURPOSE:   To map from a function call to its function.
       */
      static const Identity	functionCallsFncA;

      /*  PURPOSE:   To map from a function call to an expression that
       *	computes the fnc if should use.
       */
      static const Identity	functionCallsFncExprA;

      /*  PURPOSE:   To map from a function call to its anonymous function
       *	template instantiator.
       */
      static const Identity	functionCallsAnonFncTemplateInstantiatorA;

      /*  PURPOSE:   To map from a function call (or similar Identity) to
       *	'true' if it has been compiled or 'false' otherwise.  Only defined if
       *	it's an Identity whose compilation may be delayed (like calls to
       *	anonymous fncs whose fnc expression is a variable)
       */
      static const Identity	hasBeenCompiledA;

      /*  PURPOSE:   To represent the class of all commands
       */
      static const Identity	Command;

      /*  PURPOSE:   To represent the command to quit.
       */
      static const Identity	quit;

      /*  PURPOSE:   To represent the command to turn the parser tracer on.
       */
      static const Identity	parserTron;

      /*  PURPOSE:   To represent the command to turn the parser tracer on.
       */
      static const Identity	parserTroff;

      /*  PURPOSE:   To represent the class of all methods
       */
      static const Identity	Method;

      /*  PURPOSE:   To represent the class of all method call sequences
       */
      static const Identity	MethodCallSequence;

      /*  PURPOSE:   To represent the attribute that maps from
       *	MethodCallSequence instances to the calling object.
       */
      static const Identity	methodCallSequencesObjectA;

      /*  PURPOSE:   To represent the attribute that maps from
       *	MethodCallSequence instances to the list of function call instances.
       */
      static const Identity	methodCallSequencesFncCallListA;

      static const Identity	PropertyFunction;

      /*  PURPOSE:   To represent the renaming method.
       */
      static const Identity	rename;

      /*  PURPOSE:   To represent the assert method.(assert)
       */
      static const Identity	assert_;

      /*  PURPOSE:   To represent the assertA method.
       */
      static const Identity	assertA;

      /*  PURPOSE:   To represent the assertZ method.
       */
      static const Identity	assertZ;

      /*  PURPOSE:   To represent the general property of being locally
       *	specified
       */
      static const Identity	locallyAsserted;

      /*  PURPOSE:   To represent the subAssert method.
       */
      static const Identity	subAssert;

      /*  PURPOSE:   To represent the subAssertA method.
       */
      static const Identity	subAssertA;

      /*  PURPOSE:   To represent the subAssertZ method.
       */
      static const Identity	subAssertZ;

      /*  PURPOSE:   To represent the general property of being specified for
       *	inherited instances
       */
      static const Identity	inheritedAsserted;

      /*  PURPOSE:   To represent the forget method.
       */
      static const Identity	forget;

      /*  PURPOSE:   To represent the subForget method.
       */
      static const Identity	subForget;

      /*  PURPOSE:   To represent the constEntity method.
       */
      static const Identity	constEntity;

      /*  PURPOSE:   To represent the subConstEntity method.
       */
      static const Identity	subConstEntity;

      /*  PURPOSE:   To represent the constValue method.
       */
      static const Identity	constValue;

      /*  PURPOSE:   To represent the subConstValue method.
       */
      static const Identity	subConstValue;

      /*  PURPOSE:   To represent the varEntity method.
       */
      static const Identity	varEntity;

      /*  PURPOSE:   To represent the subVarEntity method.
       */
      static const Identity	subVarEntity;

      /*  PURPOSE:   To represent the varValue method.
       */
      static const Identity	varValue;

      /*  PURPOSE:   To represent the subVarValue method.
       */
      static const Identity	subVarValue;

      /*  PURPOSE:   To represent the class of assert-back identities.
       */
      static const Identity	AssertBack;

      /*  PURPOSE:   To represent the class of attributes of AssertBack
       *	instances.
       */
      static const Identity	AssertBackA;

      /*  PURPOSE:   To map from an AssertBack instance to the attribute of
       *	the property that should be back-asserted.
       */
      static const Identity	assertBacksAttrA;

      /*  PURPOSE:   To map from an AssertBack instance to the function family
       *	that should be used to back assert.
       */
      static const Identity	assertBacksFncFamilyA;

      static const Identity	IteratorFunction;

      /*  PURPOSE:   To represent the method to query the context for an
       *	attribute value.
       */
      static const Identity	contextGet;

      /*  PURPOSE:   To represent the method to query the locally stated
       *	properties for an attribute value.
       */
      static const Identity	localGet;

      /*  PURPOSE:   To represent the method to query the attribute values the
       *	would be inherited by instances.
       */
      static const Identity	subGet;

      /*  PURPOSE:   To represent the method to query attribute values over
       *	all sources.
       */
      static const Identity	get;

      /*  PURPOSE:   To represent the method to query if an instance is a
       *	member of a class.
       */
      static const Identity	isInstanceOf;

      /*  PURPOSE:   To represent the method to query if a class is a subclass
       *	of a superclass.
       */
      static const Identity	isSubclassOf;

      /*  PURPOSE:   To represent the method to query if a class is a
       *	superclass of a subclass.
       */
      static const Identity	isSuperclassOf;

      /*  PURPOSE:   To represent the method that returns the reference
       *	fraction.
       */
      static const Identity	refFrac;

      /*  PURPOSE:   To represent the method that returns 'true' if 'this' is
       *	immutable, or 'false' or otherwise.
       */
      static const Identity	isImmutable;

      /*  PURPOSE:   To represent the method that returns 'true' if 'this' is
       *	'null', or 'false' otherwise.
       */
      static const Identity	isNull;

      /*  PURPOSE:   To represent the method that returns a Rational based
       *	upon a hash value of the properties.
       */
      static const Identity	propertyRationalHash;

      /*  PURPOSE:   To represent the method that returns a registered
       *	immutable single distinct instance.
       */
      static const Identity	getEquivalentSingleDistinct;

      static const Identity	contextProp_iter;

      static const Identity	instance_localPropIter;

      static const Identity	subProp_iter;

      static const Identity	instance_propIter;

      /*  PURPOSE:   To be the method over iterators that returns 'true' if
       *	the iterator is at the end or 'false' otherwise.
       */
      static const Identity	iter_isAtEnd;

      /*  PURPOSE:   To be the method over *map* iterators that returns the
       *	current key to which the iterator refers, or 'null' if it is at the
       *	end.  For all other iterators except map iterators, returns exactly
       *	what iter_value returns.
       */
      static const Identity	iter_key;

      /*  PURPOSE:   To be the method over iterators that return the current
       *	value to which the iterator refers, or 'null' if it is at the end. 
       *	In C notation corresponds to "*ptr".
       */
      static const Identity	iter_value;

      /*  PURPOSE:   To be the method over iterators that return the current
       *	entry to which the iterator refers, or 'null' if it is at the end.
       */
      static const Identity	iter_entry;

      /*  PURPOSE:   To be the method over iterators that both advances the
       *	iterator by one and returns the old value to which it used to refer. 
       *	In C notation corresponds to "*ptr++".  Return 'null' if already at
       *	end.
       */
      static const Identity	iter_advance;

      /*  PURPOSE:   To be the method over iterators that returns the iterator
       *	to the first item to which it refered.
       */
      static const Identity	iter_reset;

      /*  PURPOSE:   To be the method over iterators thru node lists that
       *	inserts an item just before the current iterator position, and
       *	revises the iterator to refer to the newly inserted item.
       */
      static const Identity	nListIter_insertA;

      /*  PURPOSE:   To be the method over iterators thru node lists that
       *	inserts an item just after the current iterator position, and revises
       *	the iterator to refer to the newly inserted item.
       */
      static const Identity	nListIter_insertZ;

      /*  PURPOSE:   To be the method over iterators thru node lists that
       *	removes the currently referred item and moves the iterator to the
       *	item before the removed item (if it exists).  Returns 'true' if an
       *	item was removed or 'false' otherwise.
       */
      static const Identity	nListIter_didRemoveA;

      /*  PURPOSE:   To be the method over iterators thru node lists that
       *	removes the currently referred item and moves the iterator to the
       *	item after the removed item (if it exists).  Returns 'true' if an
       *	item was removed or 'false' otherwise.
       */
      static const Identity	nListIter_didRemoveZ;

      /*  PURPOSE:   To return the index of the rule variable given as a
       *	parameter in the map of 'this' 'RuleIterEntry' instance.
       */
      static const Identity	ruleIterEntry_getVarsIndex;

      /*  PURPOSE:   To return the index of the rule variable given as a
       *	parameter in the map of 'this' 'RuleIterEntry' instance.
       */
      static const Identity	ruleIterEntry_getVarsValue;

      /*  PURPOSE:   To map from instances of iterators to 'true' if
       *	occurrences of 'theSubject' should be replaced by their subject, or
       *	to 'false' or 'null' otherwise.
       */
      static const Identity	shouldIterReplaceTheSubjectOccurrenceA;

      /*  PURPOSE:   To map from instances of class Iterator to either 'isA'
       *	if that iterator returns supersets of a given set or 'instanceOf' if
       *	that it returns sets of a given instance.
       */
      static const Identity	iteratorsQueryRelationA;

      /*  PURPOSE:   To map from instances of class Iterator to the class
       *	being considered.
       */
      static const Identity	iteratorsBeingConsideredSetA;

      /*  PURPOSE:   To map from instances of class Iterator to the list of
       *	super/subclasses to consider.
       */
      static const Identity	iteratorsToVisitListA;

      /*  PURPOSE:   To map from instances of class Iterator to the iterator
       *	over the list of super/subclasses to consider.
       */
      static const Identity	iteratorsToVisitListIterA;

      /*  PURPOSE:   To tell the current length of the list to which
       *	'iteratorsToVisitListA' maps.
       */
      static const Identity	iteratorsToVisitListLenA;

      /*  PURPOSE:   To map from instances of class Iterator to either 'true'
       *	if the iterator has reached its end, or to 'false' otherwise.  NOTE:
       *	Only meant for iterators for which this is impossible to determine by
       *	looking at other state.
       */
      static const Identity	hasIteratorReachedEndA;

      /*  PURPOSE:   To be the method over OutputStream to print a name or
       *	constant w/o an ending newline.  Takes name or const as param.
       */
      static const Identity	print;

      /*  PURPOSE:   To be the method over OutputStream to print a name or
       *	constant followed by a semicolon but no newline character.  Takes
       *	name or const as param.
       */
      static const Identity	printSc;

      /*  PURPOSE:   To be the method over OutputStream to print a name or
       *	constant w/an ending newline.  Takes name or const as param.
       */
      static const Identity	printLn;

      /*  PURPOSE:   To be the method over OutputStream to print a name or
       *	constant followed by a semicolon and then a newline character.  Takes
       *	name or const as param.
       */
      static const Identity	printScLn;

      /*  PURPOSE:   To be the method over OutputStream to write a structure
       *	to an output stream w/o an ending newline.  Takes Idea as param.
       */
      static const Identity	describe;

      /*  PURPOSE:   To be the method over OutputStream to write a structure
       *	to an output stream w/an ending newline.  Takes Idea as param.
       */
      static const Identity	describeLn;

      /*  PURPOSE:   To be the method over InputStream to read a structure. 
       *	No param.
       */
      static const Identity	read;

      /*  PURPOSE:   To be the method over SpEnv to attempt to return an
       *	InputStream.  Takes filename as param.
       */
      static const Identity	openIn;

      /*  PURPOSE:   To be the method over SpEnv to attempt to return an
       *	OutputStream.  Takes filename as param.
       */
      static const Identity	openOut;

      /*  PURPOSE:   To be the method over IoStream to attempt to close the
       *	stream.  No params.
       */
      static const Identity	close;

      /*  PURPOSE:   To be the method over SpEnv to turn debugging tracing on.
       */
      static const Identity	trOn;

      /*  PURPOSE:   To be the method over SpEnv to turn debugging tracing
       *	off.
       */
      static const Identity	trOff;

      /*  PURPOSE:   To be the method over SpEnv that parses file.
       */
      static const Identity	parseFile;

      /*  PURPOSE:   To be the method over SpEnv that saves the current memory
       *	image as an object file.
       */
      static const Identity	saveMemoryImage;

      /*  PURPOSE:   To be the method over SpEnv that imports the knowledge
       *	from a formatted file.
       */
      static const Identity	importFormattedFile;

      /*  PURPOSE:   To be the method over SpEnv that exports knowledge to a
       *	formatted file.
       */
      static const Identity	exportFormattedFile;

      /*  PURPOSE:   To be the method over SpEnv that returns an iterator over
       *	rule solutoins to a predicate expression.
       */
      static const Identity	predExprIterFactory;

      /*  PURPOSE:   To be a method over Idea that returns newly created
       *	vector list of attributes that tell the properties of the subject.
       */
      static const Identity	getAttrVect;

      /*  PURPOSE:   To be a method over Idea that returns newly created
       *	vector list of attributes that tell the properties of the instances
       *	of the subject.
       */
      static const Identity	getSubAttrVect;

      /*  PURPOSE:   To represent the class of iterators.
       */
      static const Identity	Iterator;

      /*  PURPOSE:   To represent the class of attributes of instances of
       *	Iterator
       */
      static const Identity	IteratorA;

      /*  PURPOSE:   To map from an iterator to its index in a vector list.
       */
      static const Identity	iteratorsIndexA;

      /*  PURPOSE:   To map from an iterator to the index just beyond the last
       *	legal index of the property list thru which it iterates (if it is
       *	known).
       */
      static const Identity	iteratorsJustBeyondLastIndexA;

      /*  PURPOSE:   To map from an iterator to its current node in a node
       *	list or tree.
       */
      static const Identity	iteratorsNodeA;

      /*  PURPOSE:   To map from iterators to the subject (including
       *	data-structure) over which they iterate.
       */
      static const Identity	iteratorsSubjectA;

      /*  PURPOSE:   To map from iterators to the attribute for which they
       *	iterate.
       */
      static const Identity	iteratorsAttributeA;

      /*  PURPOSE:   To map from iterators to the context that they assume
       */
      static const Identity	iteratorsContextA;

      /*  PURPOSE:   To map from iterators to an ordinal telling the current
       *	stage of the iterator.
       */
      static const Identity	iteratorsStageA;

      /*  PURPOSE:   To map from iterators to their current value.
       */
      static const Identity	iteratorsValueA;

      /*  PURPOSE:   To map from iterators to either 'locallyAsserted' if they
       *	iterate over local values or 'inheritedAsserted' if they iterate over
       *	locally inherited values.
       */
      static const Identity	iteratorsHowAssertedA;

      /*  PURPOSE:   To map from iterators to 'true' if they are inherently
       *	unsatisfiable.
       */
      static const Identity	iteratorsIsInherentlyUnsatisfiableA;

      /*  PURPOSE:   To map from an iterator to the first helping iterator it
       *	uses.
       */
      static const Identity	iteratorsFirstIterA;

      /*  PURPOSE:   To map from an iterator to the second helping iterator it
       *	uses.
       */
      static const Identity	iteratorsSecondIterA;

      /*  PURPOSE:   To map from an iterator to the third helping iterator it
       *	uses.
       */
      static const Identity	iteratorsThirdIterA;

      /*  PURPOSE:   To map from an Iterator to the fourth helping iterator it
       *	uses.
       */
      static const Identity	iteratorsFourthIterA;

      /*  PURPOSE:   To map from an Iterator to the fifth helping iterator it
       *	uses.
       */
      static const Identity	iteratorsFifthIterA;

      /*  PURPOSE:   To map from an Iterator to the sixth helping iterator it
       *	uses.
       */
      static const Identity	iteratorsSixthIterA;

      /*  PURPOSE:   To map from an Iterator to the seventh helping iterator
       *	it uses.
       */
      static const Identity	iteratorsSeventhIterA;

      /*  PURPOSE:   To map from an Iterator to the eighth helping iterator it
       *	uses.
       */
      static const Identity	iteratorsEighthIterA;

      /*  PURPOSE:   To map from an iterator to its current depth limit.
       */
      static const Identity	iteratorsCurrentDepthLimitA;

      /*  PURPOSE:   To map from an iterator to its recursive depth limit.
       */
      static const Identity	iteratorsRecursiveDepthLimitA;

      /*  PURPOSE:   To map from inherited property iterators to the iterators
       *	they used over sets
       */
      static const Identity	inheritedPropItersIncludingSetIterA;

      /*  PURPOSE:   To map from inherited property iterators to the attribute
       *	that the query wants.
       */
      static const Identity	inheritedPropItersQuerysAttrA;

      /*  PURPOSE:   To map from ontology property iterators to their iterator
       *	over the context (if there is a context over which to iterate)
       */
      static const Identity	ontologyPropItersContextIterA;

      /*  PURPOSE:   To map from ontology property iterators to their iterator
       *	over locally stored properties.
       */
      static const Identity	ontologyPropItersLocalPropIterA;

      /*  PURPOSE:   To map from ontology property iterators to their iterator
       *	over including sets:
       */
      static const Identity	ontologyPropItersIncludingSetIterA;

      /*  PURPOSE:   To map from ontology property iterators to their iterator
       *	over the inherited stated values of the current set:
       */
      static const Identity	ontologyPropItersInheritedPropListIterA;

      /*  PURPOSE:   To map from ontology property iterators to their iterator
       *	over the inherited computing assertions of the current set:
       */
      static const Identity	ontologyPropItersInheritedAssertListIterA;

      /*  PURPOSE:   To map from ontology property iterators to their iterator
       *	over expression of the current computing assertion:
       */
      static const Identity	ontologyPropItersInheritedAssertExprIterA;

      /*  PURPOSE:   To map from an iterator over a derived binary tree
       *	container to the iterator it uses to actually iterate over items in
       *	the binary tree (regardless of the tree's derived class).
       */
      static const Identity	derivedBinTreeIteratorsIterA;

      /*  PURPOSE:   To map from an iterator over a bag to the current count
       *	(starting from 0) of the current item.
       */
      static const Identity	bagIteratorsCountA;

      /*  PURPOSE:   To map from an iterator over the instances of a class to
       *	the subclass iterator it uses.
       */
      static const Identity	instanceItersSubclassIterA;

      /*  PURPOSE:   To map from an iterator over the instances of a class to
       *	the iterator over the locally-asserted instances of the current class
       *	it uses.
       */
      static const Identity	instanceItersLocalInstanceIterA;

      /*  PURPOSE:   To represent the class of predefined iterators.
       */
      static const Identity	PredefinedIter;

      /*  PURPOSE:   To represent the class of iterators over the
       *	<value,justification> pairs for an attribute listed in ValueSection
       *	for a given subject.
       */
      static const Identity	ArrayedValueJustPairIter;

      /*  PURPOSE:   To represent the class of iterators over the
       *	locally-asserted attributes of a subject
       */
      static const Identity	SubjLocalPropIter;

      /*  PURPOSE:   To map from 'SubjLocalPropIter' instances to 'false'
       *	before the class information of the SubjectSection has been checked
       *	to see if it can answer the query, or to 'true' after.
       */
      static const Identity	subjLocalPropItersHaveCheckedClassA;

      /*  PURPOSE:   To map from 'SubjLocalPropIter' instances to 'false'
       *	before the bit vector of the SubjectSection has been checked to see
       *	if it can answer the query, or to 'true' after.
       */
      static const Identity	subjLocalPropItersHaveCheckedBitVectA;

      /*  PURPOSE:   To map from 'SubjLocalPropIter' instances to 'false'
       *	before the standard values of the SubjectSection has been checked to
       *	see if it can answer the query, or to 'true' after.
       */
      static const Identity	subjLocalPropItersHaveCheckedStdValsA;

      /*  PURPOSE:   To map from 'SubjLocalPropIter' instances to an
       *	ArrayedValueJustPairIter instance over the arbitrary values of a
       *	subject.
       */
      static const Identity	subjLocalPropItersArbitraryValIterA;

      /*  PURPOSE:   To map from 'SubjLocalPropIter' instances to 'true' if
       *	the iterator currently is at a value, or 'false' otherwise.
       */
      static const Identity	subjLocalPropItersIsAtValueA;

      /*  PURPOSE:   To represent the class of ontology-related iterators
       */
      static const Identity	PredefOntologyIter;

      /*  PURPOSE:   To represent the class of iterators over the
       *	inherit-asserted attributes of a class.
       */
      static const Identity	ClassInheritPropIter;

      /*  PURPOSE:   To represent the class of predefined iterators over
       *	simple data structures.
       */
      static const Identity	PredefSimpleDataStructIter;

      /*  PURPOSE:   To represent the class of predefined science iterators
       */
      static const Identity	PredefScienceIter;

      /*  PURPOSE:   To represent the class of iterators over node lists.
       */
      static const Identity	NodeListIter;

      /*  PURPOSE:   To represent the class of iterators over maps.
       */
      static const Identity	MapIter;

      /*  PURPOSE:   To represent the class of iterators over bags.
       */
      static const Identity	BagIter;

      /*  PURPOSE:   To represent the class of iterators over superclasses.
       */
      static const Identity	SuperclassIter;

      /*  PURPOSE:   To represent the class of iterators over subclasses.
       */
      static const Identity	SubclassIter;

      /*  PURPOSE:   To represent the class of iterators over instances of a
       *	class.
       */
      static const Identity	InstanceIter;

      /*  PURPOSE:   To represent the class of iterators over properties
       *	(local and inherited) of an instance
       */
      static const Identity	InstancePropIter;

      /*  PURPOSE:   To represent the class of iterators over instances of a
       *	class as defined in a context
       */
      static const Identity	ContextsClassInstanceIter;

      /*  PURPOSE:   To represent the class of iterators that return simple
       *	(ontology-based) properties.
       */
      static const Identity	PredefSimplePropertyIter;

      /*  PURPOSE:   To map from instances of ContextsClassInstanceIter to the
       *	context to which they currently refer.
       */
      static const Identity	iteratorsCurrentContextA;

      /*  PURPOSE:   To represent the class of iterators for general purpose
       *	scientific reasoning
       */
      static const Identity	SciReasoningIter;

      /*  PURPOSE:   To represent the class of iterators for scientific
       *	reasoning that operate at fixed maximum search depth (as opposed to
       *	doing iterative-deepening depth-first search)
       */
      static const Identity	FixedDepthSciReasoningIter;

      /*  PURPOSE:   To represent the class of iterators for scientific
       *	reasoning that attempt to answer the question from the knowledge
       *	inherited from a particular class.
       */
      static const Identity	InheritSciReasoningIter;

      /*  PURPOSE:   To represent the class of iterators for scientific
       *	reasoning that attempt to answer the question from a given sequence
       *	of events.
       */
      static const Identity	EventSciReasoningIter;

      /*  PURPOSE:   To represent the class of iterators for scientific
       *	reasoning that attempt to answer the question from the different ways
       *	a relation may be solved.
       */
      static const Identity	SolveRelationSciReasoningIter;

      /*  PURPOSE:   To represent the class of iterators for scientific
       *	reasoning that attempt to answer the question from the different
       *	values that variable may have.
       */
      static const Identity	VariableValueSciReasoningIter;

      /*  PURPOSE:   To represent the attribute that maps from instances of
       *	InheritSciReasoningIter to the class from which they are currently
       *	getting their inherited knowledge.
       */
      static const Identity	inheritSciReasItersClassA;

      /*  PURPOSE:   To represent the attribute that maps from instances of
       *	SciReasoningIter to the Event instance being considered.
       */
      static const Identity	sciReasItersEventA;

      /*  PURPOSE:   To represent the attribute that maps from instances of
       *	SolveRelationSciReasoningIter to the relation under consideration
       */
      static const Identity	solveRelationSciReasItersRelationA;

      /*  PURPOSE:   To represent the attribute that maps from instances of
       *	SolveRelationSciReasoningIter to the variable being solved for.
       */
      static const Identity	solveRelationSciReasItersSolveForVarA;

      /*  PURPOSE:   To represent the attribute that maps from instances of
       *	SolveRelationSciReasoningIter to the expression being computed.
       */
      static const Identity	solveRelationSciReasItersComputeExprA;

      /*  PURPOSE:   To represent the attribute that maps from instances of
       *	SolveRelationSciReasoningIter to the data-structure of iterators that
       *	iterate over specific variable values.
       */
      static const Identity	solveRelationSciReasItersIterDSA;

      /*  PURPOSE:   To represent the class of iterators that try to find
       *	examples.
       */
      static const Identity	FindExampleIter;

      /*  PURPOSE:   To map from 'FindExampleIter' instances to the iterator
       *	over candidate instances.
       */
      static const Identity	findExampleItersInstanceIterA;

      /*  PURPOSE:   To map from 'FindExampleIter' instances to the
       *	data-structure of (attribute,comparison,value) property triplets.
       */
      static const Identity	findExampleItersPropDSA;

      /*  PURPOSE:   To map from 'FindExampleIter' instances to the iterator
       *	over (attribute,comparison,value) property triplets.
       */
      static const Identity	findExampleItersPropDSIterA;

      /*  PURPOSE:   To map from instances of 'SciReasoningIter',
       *	'MiddleSciReasoningIter' and 'InnerSciReasoningIter' to a
       *	data-structure that keeps track of relations to avoid.
       */
      static const Identity	sciReasoningItersAvoidRelationDSA;

      /*  PURPOSE:   To map from instances of 'SciReasoningIter',
       *	'MiddleSciReasoningIter' and 'InnerSciReasoningIter' to a
       *	data-structure that keeps track of queries to avoid.
       */
      static const Identity	sciReasoningItersAvoidQueryDSA;

      /*  PURPOSE:   To map from instances of '' to the variable over which
       *	whose values should be iterated.
       */
      static const Identity	variableValueSciReasItersVarA;

      /*  PURPOSE:   To map from iterators to the next entity they should
       *	return, if it is trouble to compute it.
       */
      static const Identity	itersStoredEntryA;

      /*  PURPOSE:   To represent the class of iterators that attempt to use
       *	assertions to answer queries.
       */
      static const Identity	AssertionUsageIter;

      /*  PURPOSE:   To represent the class of iterators that attempt to bind
       *	variables to specific values as a subtask of 'AssertionUsageIter'
       *	instances.
       */
      static const Identity	AssertionUsagesBindingIter;

      /*  PURPOSE:   To represent the class of iterators that attempt to use
       *	specific expressions as a subtask of 'AssertionUsageIter' instances.
       */
      static const Identity	AssertionUsagesExprIter;

      /*  PURPOSE:   To map from AssertionUsageIter instances to 'true' if the
       *	subject has potentially could answer the given query or to 'false'
       *	otherwise.
       */
      static const Identity	canIterPotentiallyAnswerQuery;

      /*  PURPOSE:   To map from AssertionUsageIter instances to the first in
       *	a series of 'AssertionUsagesBindingIter' instance iterators that try
       *	to find bindings to variables.
       */
      static const Identity	assertionUsageItersBindingIter;

      /*  PURPOSE:   To map from AssertionUsageIter instances to the last
       *	'AssertionUsagesExprIter' iterator instance that tries to compute
       *	expressions.
       */
      static const Identity	assertionUsageItersExprIter;

      /*  PURPOSE:   To map from an 'AssertionUsagesBindingIter' instance to
       *	the iterator it uses to iterate over instances of a set.
       */
      static const Identity	assertionUsagesBindingItersSetIter;

      /*  PURPOSE:   To map from an 'AssertionUsagesBindingIter' instance to
       *	the iterator it uses to continue attempting to apply the given
       *	assertion.
       */
      static const Identity	assertionUsagesBindingItersRecursiveIter;

      /*  PURPOSE:   To map from an 'AssertionUsagesExprIter' instance to its
       *	iterator over expressions.
       */
      static const Identity	assertionUsagesExprItersExprIter;

      /*  PURPOSE:   To represent the class of iterators iterating over rules.
       */
      static const Identity	RuleIter;

      /*  PURPOSE:   To map from 'RuleIter' instances to a non-negative
       *	integer telling the index of the highest clause.
       */
      static const Identity	ruleItersHighestClauseIndexA;

      /*  PURPOSE:   To map from 'RuleIter' instances to a non-negative
       *	integer telling the maximum number of clauses that may be resolved at
       *	one time.
       */
      static const Identity	ruleItersMaxNumSimultaneousClausesA;

      /*  PURPOSE:   To map from 'RuleIter' instances to the data structure
       *	which holds the rules in which to search.
       */
      static const Identity	ruleItersRuleDSA;

      /*  PURPOSE:   To map from 'RuleIter' instances to the type of search to
       *	conduct (e.g. breadth-first, A*, etc.).
       */
      static const Identity	ruleItersSearchStructA;

      /*  PURPOSE:   To map from 'RuleIter' instances to an (optional) list of
       *	classes and/or data-structures that tell the values that the
       *	corresponding quantifier variables ought to iterate over.
       */
      static const Identity	ruleItersVarScopeListA;

      /*  PURPOSE:   To map from 'RuleIter' instances to other (optional)
       *	parameters.
       */
      static const Identity	ruleItersOtherParamA;

      /*  PURPOSE:   To map from 'RuleIter' instances to a vector list indexed
       *	by search depth of the predicate expression for which a match is
       *	searched.
       */
      static const Identity	ruleItersPredExprListA;

      /*  PURPOSE:   To map from 'RuleIter' instances to a vector list indexed
       *	by search depth of rules being considered to satisfy the
       *	corresponding clause.
       */
      static const Identity	ruleItersRuleListA;

      /*  PURPOSE:   To map from 'RuleIter' instances to a vector list indexed
       *	by search depth of data structure iterators over rules, all of which
       *	always refer to the last rule used.
       */
      static const Identity	ruleItersRuleDataStructIterListA;

      /*  PURPOSE:   To map from 'RuleIter' instances to a vector list indexed
       *	by search depth of highest indexes needed to satisfy each
       *	corresponding clause.
       */
      static const Identity	ruleItersIndexListA;

      /*  PURPOSE:   To map from 'RuleIter' instances to a vector list indexed
       *	by search depth of RuleVarBindingGroup instances.
       */
      static const Identity	ruleItersVarBindingGroupListA;

      /*  PURPOSE:   To map from 'RuleIter' instances to a
       *	'RuleVarBindingGroup' instance that binds the arguments to the
       *	initial rule query.
       */
      static const Identity	ruleItersExtVarBindingGroupA;

      /*  PURPOSE:   To map from 'RuleIter' instances to the
       *	'RuleIterBindingSolnIterator' instance for the current variable
       *	binding solution (if one exists).
       */
      static const Identity	ruleItersRuleIterBindingSolnIterA;

      /*  PURPOSE:   To map from 'RuleIter' instances to the initial predicate
       *	expression query that it is trying to satisfy.
       */
      static const Identity	ruleItersInitialQueryPredExprA;

      /*  PURPOSE:   To map from 'RuleIter' instances to 'true' if the
       *	iterator has been initialized or to 'false' otherwise.
       */
      static const Identity	hasRuleIterBeenInitializedA;

      /*  PURPOSE:   To the class of thing returned by the 'iter_entry()'
       *	method of 'RuleIter' instances.
       */
      static const Identity	RuleIterEntry;

      /*  PURPOSE:   To map from 'RuleIterEntry' instances to the vector that
       *	has the current answers.
       */
      static const Identity	ruleIterEntrysValueVectA;

      /*  PURPOSE:   To map from 'RuleIterEntry' instances to the variable
       *	name in the external group's rule to index (in the vector of
       *	'ruleIterEntrysValueVectA') map
       */
      static const Identity	ruleIterEntrysRulesVarToIndexMapA;

      /*  PURPOSE:   To represent the class of bindings of rule vars
       *	instances.
       */
      static const Identity	RuleVarBinding;

      /*  PURPOSE:   To map from 'RuleVarBinding' instances to the single
       *	quantifier with the variable that they bind.
       */
      static const Identity	ruleVarBindingsQuantA;

      /*  PURPOSE:   To map from 'RuleVarBinding' instances to list of
       *	quantifiers that they are charged with trying to satisfy.  This
       *	attribute is mutually exclusive with 'ruleVarBindingsSpecValA'.
       */
      static const Identity	ruleVarBindingsQuantListA;

      /*  PURPOSE:   To map from 'RuleVarBinding' instances to the specific
       *	value (if there is one) to which the quantifiers are bound.  This
       *	attribute is mutually exclusive with 'ruleVarBindingsQuantListA'.
       */
      static const Identity	ruleVarBindingsSpecValA;

      /*  PURPOSE:   To map from 'RuleVarBinding' instances to another
       *	'RuleVarBinding' instance for a variable in the rule that caused the
       *	current rule to be recursively invoked, and to which this rule var is
       *	bound.
       */
      static const Identity	ruleVarBindingsImmediateBindingA;

      /*  PURPOSE:   To map from 'RuleVarBinding' instances to the first such
       *	'RuleVarBinding' instance with the first variable to which this
       *	subject 'RuleVarBinding' instance is ultimately bound.
       */
      static const Identity	ruleVarBindingsUltimateBindingA;

      /*  PURPOSE:   To map from a list of quantifiers that is the value of a
       *	'ruleVarBindingsQuantListA' attribute to the most specific class that
       *	instances must belong (for InClassQuant and ValOfQuant)
       */
      static const Identity	ruleVarBindingQuantListsMostSpecificInstanceClassA;

      /*  PURPOSE:   To map from a list of quantifiers that is the value of a
       *	'ruleVarBindingsQuantListA' attribute to the most general class
       *	allowable (for ClassOfQuant and SuperclassOfQuant).  Maps to 'null'
       *	if not yet defined.
       */
      static const Identity	ruleVarBindingQuantListsMostGeneralClassA;

      /*  PURPOSE:   To map from a list of quantifiers that is the value of a
       *	'ruleVarBindingsQuantListA' attribute to the most specific class that
       *	subclass must belong (for SubclassOfQuant)
       */
      static const Identity	ruleVarBindingQuantListsMostSpecificClassClassA;

      /*  PURPOSE:   To represent a group of 'RuleVarBinding' instances for
       *	one particular rule invocation.
       */
      static const Identity	RuleVarBindingGroup;

      /*  PURPOSE:   To map from 'RuleVarBindingGroup' instances to their map
       *	of rule variable names to that variable's specific value (if a
       *	specific value has been defined).
       */
      static const Identity	ruleVarBindingGroupsVarToSpecValMapA;

      /*  PURPOSE:   To map from external 'RuleVarBindingGroup' instances to
       *	their map of rule variable names to their bindings.
       */
      static const Identity	ruleVarBindingGroupsVarNameToBindingMapA;

      /*  PURPOSE:   To map from 'RuleVarBindingGroup' instances to their map
       *	of rule quantifiers to the bindings that serve them.
       */
      static const Identity	ruleVarBindingGroupsQuantToBindingMapA;

      /*  PURPOSE:   To map from 'RuleVarBindingGroup' instances to the list
       *	of logic clauses they should check after their rule's logic clause
       *	list is at the end.
       */
      static const Identity	ruleVarBindingGroupsToCheckLogicClauseListA;

      /*  PURPOSE:   To map from 'RuleVarBindingGroup' instances to the list
       *	of 'RuleVarBindingGroup' used in the clauses of the corresponding
       *	'ruleVarBindingGroupsToCheckLogicClauseListA' list.
       */
      static const Identity	ruleVarBindingGroupsVarBindingGroupOfToCheckLogicClauseListA;

      /*  PURPOSE:   To map from 'RuleVarBindingGroup' instances to the
       *	previous 'RuleVarBindingGroup' upon which they are based.
       */
      static const Identity	ruleVarBindingGroupsPrevRuleVarBindingGroupA;

      /*  PURPOSE:   To map from 'RuleVarBindingGroup' instances to the rule
       *	whose quantifiers that this instance binds.
       */
      static const Identity	ruleVarBindingGroupsRuleA;

      /*  PURPOSE:   To map from external 'RuleVarBindingGroup' that
       *	originates a query to a list of the quantifiers that appear in the
       *	querying predicate expression.
       */
      static const Identity	extRuleVarBindingGroupsQuantListA;

      /*  PURPOSE:   To represent a group of iterators that implementing an
       *	internal class used by 'RuleIteratorIdeaStructure' instances to
       *	iterate over the solutions to one particular configuration of
       *	bindings and rules.
       */
      static const Identity	RuleIterBindingSolnIterator;

      /*  PURPOSE:   To map from RuleIterBindingSolnIterator instances to the
       *	vectorlist that contains their bindings.
       */
      static const Identity	ruleIterBindingSolnItersBindingVectA;

      /*  PURPOSE:   To map from RuleIterBindingSolnIterator instances to the
       *	vectorlist that contains the RuleVarBindingGroup for the
       *	corresponding bindings in 'ruleIterBindingSolnItersBindingVectA'
       */
      static const Identity	ruleIterBindingSolnItersBindingGroupVectA;

      /*  PURPOSE:   To map from RuleIterBindingSolnIterator instances to the
       *	RuleVarBindingGroup instance from which they were constructed.
       */
      static const Identity	ruleIterBindingSolnItersRuleVarBindingGroupA;

      /*  PURPOSE:   To map from RuleIterBindingSolnIterator instances to the
       *	vector in which they store and report their values.
       */
      static const Identity	ruleIterBindingSolnItersValueVectA;

      /*  PURPOSE:   To map from RuleIterBindingSolnIterator instances to the
       *	vector in which they store the iterators they use.
       */
      static const Identity	ruleIterBindingSolnItersIterVectA;

      /*  PURPOSE:   To map from RuleIterBindingSolnIterator instances to the
       *	vector in which they store the indexes of where in the
       *	'ruleIterBindingSolnItersValueVectA' vector to store the value from
       *	the iterator with the corresponding position in
       *	'ruleIterBindingSolnItersIterVectA'.
       */
      static const Identity	ruleIterBindingSolnItersIndexVectA;

      /*  PURPOSE:   To map from RuleIterBindingSolnIterator instances to the
       *	map from ultimate bindings to the indices in the
       *	ruleIterBindingSolnItersValueVectA value at which their corresponding
       *	values are placed.
       */
      static const Identity	ruleIterBindingSolnItersUltBindToValIndexMapA;

      /*  PURPOSE:   To map from RuleIterBindingSolnIterator instances to
       *	'true' if the current values in the
       *	'ruleIterBindingSolnItersValueVectA' have been checked, or to 'false'
       *	otherwise.
       */
      static const Identity	ruleIterBindingSolnItersAreValueVecValsKnownToBeValidA;

      /*  PURPOSE:   To map from RuleIterBindingSolnIterator instances to a
       *	list of quantifiers.  Legal values for that position must satisfy all
       *	the conditions.
       */
      static const Identity	ruleIterBindingSolnItersQuantListVectA;

      /*  PURPOSE:   To map form RuleIterBindingSolnIterator instances to a
       *	map from variable names in the external binding group's rule to their
       *	corresponding index in 'ruleIterBindingSolnItersValueVectA'.
       */
      static const Identity	ruleIterBindingSolnItersRuleVarToIndexMapA;

      /*  PURPOSE:   To represent the class of all exceptions.
       */
      static const Identity	Exception;

      /*  PURPOSE:   To represent the subclass of Exceptions defined in
       *	StructProc (as opposed to the language in which StructProc is
       *	implemented).
       */
      static const Identity	SPDefinedException;

      /*  PURPOSE:   To map from an Exception instance to its single, default
       *	value (if defined).
       */
      static const Identity	exceptionsValueA;

      /*  PURPOSE:   To tell the function family that computes the property
       *	for attribute 'exceptionsValueA'.
       */
      static const Identity	computeValue;

      /*  PURPOSE:   To represent the exception for a subject not having a
       *	value for a particular attribute.
       */
      static const Identity	MissingValueException;

      /*  PURPOSE:   To represent the exception of attempting to rename
       *	something to an illegal name.
       */
      static const Identity	IllegalNameException;

      /*  PURPOSE:   To represent the exception of attempting to rename
       *	something to a name that is already taken.
       */
      static const Identity	NameAlreadyTakenException;

      /*  PURPOSE:   To represent the exception of attempting to rename
       *	something to a name that is reserved.
       */
      static const Identity	NameReservedException;

      /*  PURPOSE:   To represent the exception of attempting to rename
       *	something to a name with an illegal prefix.
       */
      static const Identity	IllegalPrefixException;

      /*  PURPOSE:   To represent the exception of attempting to rename
       *	something that was not created during this SP run.
       */
      static const Identity	IdeaCreatedDuringDifferentSPRunException;

      /*  PURPOSE:   To represent an attempt to call a function with an
       *	argument that has the wrong dimension.
       */
      static const Identity	ArgumentInWrongDimensionException;

      /*  PURPOSE:   To represent the error of trying to raise a dimension in
       *	a non-annotated value to a non-integer power
       */
      static const Identity	ExpectedDimensionRaisedToIntegerPowerException;

      /*  PURPOSE:   To represent the creation of an AnnotatedValue with a
       *	value that is outside of a semantic domain boundary.
       */
      static const Identity	AnnotatedValueOutsideOfRangeException;

      /*  PURPOSE:   To represent an attempt to create a Domain instance with
       *	inconsistent limits.
       */
      static const Identity	DomainsLimitsException;

      static const Identity	Context;

      static const Identity	assume;

      static const Identity	forbid;

      static const Identity	metaMatch;

      static const Identity	metaForbid;

      static const Identity	only;

      static const Identity	avoid;

      static const Identity	recurseUsing;

      /*  PURPOSE:   To map from an instance of a Context to the Context from
       *	which it was derived.
       */
      static const Identity	contextsDerivedFromContextA;

      /*  PURPOSE:   To map from an instance of a Context to a non-negative
       *	integer that tells the maximum effort (implemented as maximum
       *	recursive depth, maximum number of simultaneous clauses to match,
       *	etc.)
       */
      static const Identity	contextsMaxEffortIntegerLimitA;

      /*  PURPOSE:   To represent the class of pre-context structures.  To map
       *	from instances of PreContext to the map that maps from subjects to
       *	their property maps (maps that map from attributes to their value). 
       *	To map from instances of PreContext to the Identity of the next
       *	hypothetical instance to use.  To map from instances of PreContext to
       *	the map that maps from subjects to their 3-property maps (maps that
       *	map from attributes to <subject,value,domain>)  To hold the
       *	3-property (<subject,value,domain>) triplets  To represent the class
       *	of implicit constructors.
       */
      static const Identity	Constructor;

      /*  PURPOSE:   To map from an implicit constructor to zero or more
       *	attributes of the <attribute,value> pairs that all instances of the
       *	described class should be endowed with upon creation.
       */
      static const Identity	constructorsDefaultValueAttrA;

      /*  PURPOSE:   To map from an implicit constructor to zero or more
       *	values of the <attribute,value> pairs that all instances of the
       *	described class should be endowed with upon creation.
       */
      static const Identity	constructorsDefaultValueValueA;

      /*  PURPOSE:   To map from an implicit constructor to zero or more
       *	attributes of the <attribute,type> pairs used to give knowledge to
       *	instances of the described class.  Properties are create by pairing
       *	these attribute(s) with the values coming from the implicit
       *	constructor call.
       */
      static const Identity	constructorsImplicitAttrA;

      /*  PURPOSE:   To map from an implicit constructor to zero or more types
       *	of the <attribute,type> pairs used to give knowledge to instances of
       *	the described class.  Values in the implicit constructor call must be
       *	inside the corresponding type.
       */
      static const Identity	constructorsImplicitTypeA;

      /*  PURPOSE:   To represent the class of datastructures:
       */
      static const Identity	dataStruct_isEmpty;

      static const Identity	dataStruct_size;

      static const Identity	dataStruct_distinctCount;

      static const Identity	dataStruct_iter;

      static const Identity	dataStruct_insertA;

      static const Identity	dataStruct_insertZ;

      static const Identity	dataStruct_insert;

      static const Identity	dataStruct_didInsertBecauseNotPresent;

      static const Identity	dataStruct_doesHave;

      static const Identity	dataStruct_didRemove;

      static const Identity	dataStruct_clear;

      static const Identity	dataStruct_copy;

      static const Identity	dataStruct_peek;

      static const Identity	list_firstItem;

      static const Identity	list_secondItem;

      static const Identity	list_sort;

      static const Identity	vList_didPut;

      static const Identity	vList_get;

      static const Identity	vList_numInsertA;

      static const Identity	didMovePropertyToFront;

      static const Identity	didMovePropertyToBack;

      static const Identity	didMovePropertyOneForward;

      static const Identity	didMovePropertyOneBack;

      static const Identity	bag_count;

      static const Identity	map_put;

      static const Identity	map_get;

      static const Identity	datastructuresDataA;

      static const Identity	datastructuresFirstDataA;

      static const Identity	datastructuresLastDataA;

      static const Identity	datastructuresDomainClassA;

      static const Identity	datastructuresRangeClassA;

      static const Identity	isBagRestrictedToSet;

      static const Identity	nList_didPut;

      static const Identity	nList_get;

      static const Identity	bag_get;

      static const Identity	instance_classIter;

      static const Identity	class_superclassIter;

      static const Identity	class_subclassIter;

      static const Identity	class_instanceIter;

      static const Identity	main;

      static const Identity	BreadFirstOntologySearch;

      static const Identity	BreadFirstSetsOfMemberSearch;

      static const Identity	SortOrder;

      static const Identity	ascendingOrder;

      static const Identity	descendingOrder;

      /*  PURPOSE:   To map from a datastructure to its size.
       */
      static const Identity	datastructuresSizeA;

      /*  PURPOSE:   To map from a bag to the number of distinct items that
       *	are in it.
       */
      static const Identity	bagsDistinctCountA;

      /*  PURPOSE:   To map from binary trees to their roots.
       */
      static const Identity	treesRootA;

      /*  PURPOSE:   To map from binary trees and node lists to their 'nil'
       *	node.
       */
      static const Identity	datastructuresNilA;

      /*  PURPOSE:   To serve as the class of all concepts that are only used
       *	as map-keys.
       */
      static const Identity	MapKey;

      /*  PURPOSE:   To serve as the class of all concepts that are map-key
       *	for JobRequestSomMsg and ResultSomMsg.
       */
      static const Identity	JobMapKey;

      /*  PURPOSE:   In maps corresponding to JobRequestSomMsg and
       *	ResultSomMsg instances, to be the key that maps to the job id.
       */
      static const Identity	jobIdKey;

      /*  PURPOSE:   In maps corresponding to ResultSomMsg instances, to be
       *	the key that maps to the status code telling how the job did.
       */
      static const Identity	jobStatusCodeKey;

      /*  PURPOSE:   In maps corresponding to ResultSomMsg instances, to be
       *	the key that maps to the resulting string or data-structure.
       */
      static const Identity	jobResultKey;

      /*  PURPOSE:   To be the key that maps to an error description string.
       */
      static const Identity	errorMsgKey;

      /*  PURPOSE:   To represent the class of assertion:
       */
      static const Identity	Assertion;

      /*  PURPOSE:   To represent the class of relations:
       */
      static const Identity	Relation;

      /*  PURPOSE:   To map from an assertion to its expression.
       */
      static const Identity	assertionsExpressionA;

      /*  PURPOSE:   To map from an assertion to its list of conditions.
       */
      static const Identity	assertionsConditionListA;

      /*  PURPOSE:   To map from assertions with more than one expression to
       *	'true' if their expressions are equivalent (e.g. the Ideal gas law:
       *	internal energy = U = (heatCapacity)*P*V = (heatCapacity)*n*R*T), or
       *	to 'false' if their expressions are not equivalent (e.g. diff
       *	solutions to quadratic formula: (-b + sqrt(b^2 -4*a*c))/(2*a) != (-b
       *	- sqrt(b^2 -4*a*c))/(2*a) in general)
       */
      static const Identity	areAssertionsExpressionsEquivalentA;

      /*  PURPOSE:   To map from an assertion to a list of its justifications.
       */
      static const Identity	assertionsJustificationListA;

      /*  PURPOSE:   To map from an assertion to a list of its attacks.
       */
      static const Identity	assertionsAttackListA;

      /*  PURPOSE:   To map from an assertion to a map that maps structural
       *	vars to AssertionsStructVarStruct instances
       */
      static const Identity	assertionsVarToInfoMapA;

      /*  PURPOSE:   To map from an assertion or relation to the entity or
       *	class to which it pertains.
       */
      static const Identity	relationsEventOrClassA;

      /*  PURPOSE:   To represent the class of info on structural vars
       */
      static const Identity	StructuralVarStruct;

      /*  PURPOSE:   To represent the class of info on structural vars that
       *	represent instances of EmpiricalEntity
       */
      static const Identity	EmpiricalEntityStructuralVarStruct;

      /*  PURPOSE:   To represent the class of info on structural vars that
       *	represent instances of CulturalConvention
       */
      static const Identity	CulturalConventionStructuralVarStruct;

      /*  PURPOSE:   To represent the class of info on structural vars that
       *	represent instances of Dimension
       */
      static const Identity	DimensionStructuralVarStruct;

      /*  PURPOSE:   To map from StructuralVarStruct instances to their
       *	subject variables.
       */
      static const Identity	structuralVarStructsSubjVarA;

      /*  PURPOSE:   To map from StructuralVarStruct instances to their
       *	attributes.
       */
      static const Identity	structuralVarStructsAttrA;

      /*  PURPOSE:   To map from StructuralVarStruct instances to their
       *	variables.
       */
      static const Identity	structuralVarStructsVarA;

      /*  PURPOSE:   To map from StructuralVarStruct instances to their
       *	empirical entity  or cultural convention class.
       */
      static const Identity	structuralVarStructsEntityClassA;

      /*  PURPOSE:   To map from StructuralVarStruct instances to their
       *	dimensions.
       */
      static const Identity	structuralVarStructsDimA;

      /*  PURPOSE:   To map from StructuralVarStruct instances to their list
       *	of argument variables.
       */
      static const Identity	structuralVarStructsArgListA;

      /*  PURPOSE:   To represent the class of info on structural vars
       *	occuring in an assertion
       */
      static const Identity	AssertionsStructVarStruct;

      /*  PURPOSE:   To map from AssertionsStructVarStruct instances to the
       *	corresponding StructuralVarStruct telling more information.
       */
      static const Identity	assertionsStructVarStructsInfoA;

      /*  PURPOSE:   To map from AssertionsStructVarStruct instances to the
       *	class to which that variable is restricted
       */
      static const Identity	assertionsStructVarStructsSubjClassA;

      /*  PURPOSE:   To map from AssertionsStructVarStruct instances to a
       *	member in {lhs,rhs,both} depending on if the corresponding variable
       *	occurs solely on the left-hand side/right-hand side/both sides of the
       *	relation for which AssertionsStructVarStruct exists
       */
      static const Identity	assertionsStructVarStructsSideA;

      /*  PURPOSE:   To map from AssertionsStructVarStruct instances to a
       *	relation solved for the corresponding variable, if one exists.  Maps
       *	to 'null' if no such relation has been cached yet.
       */
      static const Identity	assertionsStructVarStructsSolvedExprA;

      /*  PURPOSE:   To represent the side(s) on which a variable may appear
       *	in a relation.
       */
      static const Identity	SideOfVariable;

      /*  PURPOSE:   To represent neither side (variable does not appear in
       *	relation)
       */
      static const Identity	neitherSide;

      /*  PURPOSE:   To represent the left-hand side.
       */
      static const Identity	leftHandSide;

      /*  PURPOSE:   To represent the right-hand side.
       */
      static const Identity	rightHandSide;

      /*  PURPOSE:   To represent the both the left-hand and right-hand sides.
       */
      static const Identity	bothSides;

      /*  PURPOSE:   To represent the class of nodes in subexpressions.
       */
      static const Identity	SubexpressionNode;

      /*  PURPOSE:   To represent the class of subexpressions that are
       *	function calls.
       */
      static const Identity	FunctionSubexpressionNode;

      /*  PURPOSE:   To represent the class of subexpressions that are
       *	relations.
       */
      static const Identity	RelationSubexpressionNode;

      /*  PURPOSE:   To represent the class of structural variables.
       */
      static const Identity	StructuralVar;

      /*  PURPOSE:   To represent the class of Arguments:
       */
      static const Identity	Argument;

      /*  PURPOSE:   To represent the class of abstract Justifications:
       */
      static const Identity	AbstractJustification;

      /*  PURPOSE:   To represent the class of Justifying instances:
       */
      static const Identity	Justification;

      /*  PURPOSE:   To represent the class of attributes of Justifications
       */
      static const Identity	JustificationA;

      /*  PURPOSE:   To map from instances of Justification to the kbrun in
       *	which it was proposed
       */
      static const Identity	justificationsKbRunA;

      /*  PURPOSE:   To map from instances of Justification to the subject of
       *	the justifid property.
       */
      static const Identity	justificationsSubjectA;

      /*  PURPOSE:   To map from instances of Justification to the justified
       *	property attribute.
       */
      static const Identity	justificationsAttrA;

      /*  PURPOSE:   To map from instances of Justification to the justified
       *	property value.
       */
      static const Identity	justificationsValueA;

      /*  PURPOSE:   To map from instances of Justification to the type of
       *	justification hat was immmediately employed
       */
      static const Identity	justificationsImmediateTypeA;

      /*  PURPOSE:   To map from instances of Justification to the
       *	data-structure of all types of justification that were employed up to
       *	and including this one.
       */
      static const Identity	justificationsDependentTypesDsA;

      /*  PURPOSE:   To map from instances of Justification to the operator,
       *	function, program, etc. that was done to compute the value.  To map
       *	from instances of Justification to a map that tells the arguments of
       *	the operator, function, program etc.  Keys of the map can either be
       *	natural numbers (e.g. 0,1,2, etc) that tell the position in a list of
       *	arguments, or can be strings or concepts that tell argument names.
       */
      static const Identity	justificationsOperandMapA;

      /*  PURPOSE:   To map from instances of Justification to the
       *	data-structure of instances of Attack addressed against this
       *	Justification
       */
      static const Identity	justificationsDSOfAttackersA;

      /*  PURPOSE:   To serve as the base class of all justification type
       *	instances
       */
      static const Identity	ByJustificationType;

      /*  PURPOSE:   To represent the class of justifications that are always
       *	attacked but offer no counter-attack.
       */
      static const Identity	ByNonsense;

      /*  PURPOSE:   To be the justification for 'unknown'
       */
      static const Identity	byIgnorance;

      /*  PURPOSE:   To be the justification for undefined values ('null')
       */
      static const Identity	byBeingUndefined;

      /*  PURPOSE:   To represent the class of truth-preserving
       *	justifications.
       */
      static const Identity	ByTruthPreserving;

      /*  PURPOSE:   To represent instances of applying logic.
       */
      static const Identity	byLogic;

      /*  PURPOSE:   To represent instances of applying arithmetic
       */
      static const Identity	byArithmetic;

      /*  PURPOSE:   To represent instances of applying algebra (including
       *	calculus)
       */
      static const Identity	byAlgebra;

      /*  PURPOSE:   To represent instances of applying geometry
       */
      static const Identity	byGeometry;

      /*  PURPOSE:   To represent Justifications that appeal to definition.
       */
      static const Identity	byDefinition;

      /*  PURPOSE:   To represent Justifications that appeal to convention.
       */
      static const Identity	byConvention;

      /*  PURPOSE:   To represent Justifications based upon simulations
       */
      static const Identity	bySimulation;

      /*  PURPOSE:   To represent the class of justifications that do not
       *	preserve the truth.
       */
      static const Identity	ByTruthNonPreserving;

      /*  PURPOSE:   To be the super-class of both bySaySoOf and
       *	byObservation.
       */
      static const Identity	ByReportOf;

      /*  PURPOSE:   To represent the class of justifications based merely on
       *	the kbrun's agents saying so.
       */
      static const Identity	bySaySoOf;

      /*  PURPOSE:   To represent the class of justifications of observations.
       */
      static const Identity	byObservation;

      /*  PURPOSE:   To represent the class of justifications of hypotheses.
       */
      static const Identity	byHypothesis;

      /*  PURPOSE:   To represent the class of justifications of abductions.
       */
      static const Identity	byAbduction;

      /*  PURPOSE:   To represent the class of justifications of
       *	approximations.
       */
      static const Identity	byApproximation;

      /*  PURPOSE:   To represent the class of justifications that apply
       *	generalizations.
       */
      static const Identity	byApplyingGeneralization;

      /*  PURPOSE:   To represent the class of justifications that find
       *	generalizations.
       */
      static const Identity	byFindingGeneralization;

      /*  PURPOSE:   To represent the class of justifications of analogies.
       */
      static const Identity	byAnalogy;

      /*  PURPOSE:   To represent the class of Justification patterns:
       */
      static const Identity	JustificationPattern;

      /*  PURPOSE:   To represent the class of abstract Attack:
       */
      static const Identity	AbstractAttack;

      /*  PURPOSE:   To represent the class of Attacking instances:
       */
      static const Identity	Attack;

      /*  PURPOSE:   To represent the class of Attack patterns:
       */
      static const Identity	AttackPattern;

      /*  PURPOSE:   To represent the class of assumption subject entries:
       */
      static const Identity	AssumptionSubjEntry;

      /*  PURPOSE:   To represent the default context:
       */
      static const Identity	defaultContext;

      /*  PURPOSE:   To map from instances to Assumption at which inherited
       *	values are stored.
       */
      static const Identity	assumptionsInheritAssumeEntryA;

      /*  PURPOSE:   To map from instances to Assumption to the 'this'
       *	identity for the current object instance.  (NOTE: By convention
       *	thisSE is the subject.)
       */
      static const Identity	assumptionsThisA;

      /*  PURPOSE:   To represent the class of rules.
       */
      static const Identity	Rule;

      /*  PURPOSE:   To map from a rule to its head predicate expression.
       */
      static const Identity	rulesHeadPredExprA;

      /*  PURPOSE:   To map from a rule to its list of conjunctive clauses to
       *	satisfy.
       */
      static const Identity	rulesConjunctiveClauseListA;

      /*  PURPOSE:   To map from a rule to a list of quantifiers (other than
       *	SpecValQuant instances) that appear in it.
       */
      static const Identity	rulesQuantListA;

      /*  PURPOSE:   To map from a rule to a list of names of variables that
       *	it quantifies.
       */
      static const Identity	rulesVarNameListA;

      /*  PURPOSE:   To map from a rule to a map from the variable names in
       *	the rule to the quantifier that quantifies them.
       */
      static const Identity	rulesVarNameToQuantMapA;

      /*  PURPOSE:   To represent the class of predicate expressions and
       *	quantifier instances.
       */
      static const Identity	LogicClause;

      /*  PURPOSE:   To represent the class of predicate expressions.
       */
      static const Identity	PredicateExpression;

      /*  PURPOSE:   To map from a predicate expression to its predicate.
       */
      static const Identity	predicateExpressionsPredicateA;

      /*  PURPOSE:   To map from a predicate expression to its list of
       *	arguments.
       */
      static const Identity	predicateExpressionsArgListA;

      /*  PURPOSE:   To map from a predicate expression to either 'true' if it
       *	is asserted positively, or to 'false' if it is negated.
       */
      static const Identity	predicateExpressionsBooleanAssertA;

      /*  PURPOSE:   To represent the class of quantifiers.
       */
      static const Identity	Quantifier;

      /*  PURPOSE:   To map from a quantifier to the variable usage that it
       *	has.
       */
      static const Identity	quantifiersVarUsageA;

      /*  PURPOSE:   To map from a quantifier to the class of which it finds
       *	instances.
       */
      static const Identity	quantifiersClassA;

      /*  PURPOSE:   To map from a quantifier to the instance of which it
       *	finds classes that contain it.
       */
      static const Identity	quantifiersInstanceA;

      /*  PURPOSE:   To map from a quantifier to the subject of the
       *	<subj,attr> pair over which it quantifies.
       */
      static const Identity	quantifiersSubjA;

      /*  PURPOSE:   To map from a quantifier to the attribute of the
       *	<subj,attr> pair over which it quantifies.
       */
      static const Identity	quantifiersAttrA;

      /*  PURPOSE:   To map from a quantifier to the single value over which
       *	it quantified.
       */
      static const Identity	quantifiersValA;

      /*  PURPOSE:   To represent the class of quantifiers over single,
       *	specific values.
       */
      static const Identity	SpecValQuant;

      /*  PURPOSE:   To represent the class of quantifiers over values of a
       *	given <subj,attr> pair.
       */
      static const Identity	ValOfQuant;

      /*  PURPOSE:   To represent the class of quantifiers over a instances of
       *	a class
       */
      static const Identity	InClassQuant;

      /*  PURPOSE:   To represent the class of quantifiers over classes of a
       *	given instance
       */
      static const Identity	ClassOfQuant;

      /*  PURPOSE:   To represent the class of quantifiers over superclasses
       *	of a given class
       */
      static const Identity	SuperclassOfQuant;

      /*  PURPOSE:   To represent the class of quantifiers over subclasses of
       *	a given class
       */
      static const Identity	SubclassOfQuant;

      /*  PURPOSE:   To represent the class of predicates.
       */
      static const Identity	Predicate;

      /*  PURPOSE:   To represent the predicate that queries the larger kb to
       *	see if some subject has a specific <attribute,value>
       *	property.(?isAsserted)
       */
      static const Identity	isAssertedPred;

      /*  PURPOSE:   To represent the predicate that queries the larger kb to
       *	see if it is locally-asserted that some subject has a specific
       *	<attribute,value> property.(?isLocallyAsserted)
       */
      static const Identity	isLocallyAssertedPred;

      /*  PURPOSE:   To represent the class of numbers.
       */
      static const Identity	Number;

      /*  PURPOSE:   To represent the class of integer numbers.
       */
      static const Identity	Integer;

      /*  PURPOSE:   To represent the class of rational numbers.
       */
      static const Identity	Rational;

      /*  PURPOSE:   To represent the class of floating point numbers.
       */
      static const Identity	Real;

      static const Identity	Complex;

      /*  PURPOSE:   To represent a method over all Idea instances that
       *	returns 'true' for Number instances or false otherwise.
       */
      static const Identity	isNumber;

      /*  PURPOSE:   To represent a method over all Idea instances that
       *	returns 'true' for Rational instances or false otherwise.
       */
      static const Identity	isRational;

      /*  PURPOSE:   To represent a method over all Idea instances that
       *	returns 'true' for floating point instances or false otherwise.
       */
      static const Identity	isFloatingPt;

      /*  PURPOSE:   To represent a method over all Idea instances that
       *	returns 'true' for Rational instances that are integers or false
       *	otherwise.
       */
      static const Identity	isRationalInteger;

      /*  PURPOSE:   To represent a method over Rational instances that
       *	returns the numerator of that instance.
       */
      static const Identity	rational_numerator;

      /*  PURPOSE:   To represent a method over Rational instances that
       *	returns the denominator of that instance.
       */
      static const Identity	rational_denominator;

      /*  PURPOSE:   To represent a method over Rational instances that
       *	returns the integer that results by rounding to negative infinity.
       */
      static const Identity	rational_roundToNegInf;

      /*  PURPOSE:   To represent a method over Rational instances that
       *	returns the integer that results by rounding to positive infinity.
       */
      static const Identity	rational_roundToPosInf;

      /*  PURPOSE:   To represent a method over Rational instances that
       *	returns the integer that results by rounding to 0.
       */
      static const Identity	rational_roundTo0;

      /*  PURPOSE:   To represent a method over Rational instances that
       *	returns the integer that results by rounding away from 0.
       */
      static const Identity	rational_roundAway0;

      /*  PURPOSE:   To represent a method over Number instances that returns
       *	the floating point approximation of 'this' number.
       */
      static const Identity	number_floatPt;

      /*  PURPOSE:   To represent the method that returns 'true' if 'this' is
       *	'0' or '0.0',  or 'false' otherwise.
       */
      static const Identity	number_isZero;

      /*  PURPOSE:   To represent the method that returns 'true' if 'this' is
       *	'+1' or '+1.0',  or 'false' otherwise.
       */
      static const Identity	number_isOne;

      /*  PURPOSE:   To represent the method that returns 'true' if 'this' is
       *	'-1' or '-1.0',  or 'false' otherwise.
       */
      static const Identity	number_isNegOne;

      /*  PURPOSE:   To represent the class of cultural conventions
       */
      static const Identity	CulturalConvention;

      /*  PURPOSE:   To represent the class of attributes of
       *	CulturalConvention instances.
       */
      static const Identity	CulturalConventionA;

      static const Identity	NaturalLanguage;

      /*  PURPOSE:   To represent the default language: English as used in the
       *	United States, time period: early 21st Century(`en-US-x-tp21CnEr`)
       */
      static const Identity	en_US_x_tp21CnEr;

      /*  PURPOSE:   To represent the class of domains:
       */
      static const Identity	Domain;

      static const Identity	limitlessDimensionlessDomain;

      static const Identity	nonNegativeDimensionlessDomain;

      static const Identity	greaterThanZeroDimensionlessDomain;

      static const Identity	negOneToPosOneDimensionlessDomain;

      static const Identity	zeroToOneDimensionlessDomain;

      static const Identity	singlePointOneDimensionlessDomain;

      static const Identity	negPiToPosPiRadiansDomain;

      static const Identity	negHalfPiToPosHalfPiRadiansDomain;

      static const Identity	zeroToPiRadiansDomain;

      /*  PURPOSE:   To represent the class of attributes of Domain instances.
       */
      static const Identity	DomainA;

      /*  PURPOSE:   To map from instances of 'Domain' to the dimension of
       *	that domain.
       */
      static const Identity	domainsDimensionA;

      /*  PURPOSE:   To map from instances of 'Domain' to the units used in
       *	that domain.
       */
      static const Identity	domainsUnitsA;

      /*  PURPOSE:   To map from instances of 'Domain' to the attribute that
       *	they are for by default
       */
      static const Identity	domainsDefaultAttrA;

      /*  PURPOSE:   To represent the class of dimensions:
       */
      static const Identity	Dimension;

      /*  PURPOSE:   To represent the fundamental dimension 'dimensionless'.
       */
      static const Identity	dimensionless;

      /*  PURPOSE:   To represent the fundamental dimension 'arc'.
       */
      static const Identity	arc;

      /*  PURPOSE:   To represent the method of 'AnnotatedValue' that returns
       *	the non-annotated Number instance that is equivalent to
       *	'@originalNumber' converted from units '@originalUnits' to
       *	'@requestedUnits'.  '@dimension' tells the dimension of both units.
       */
      static const Identity	numberConvertedToRequestedUnits;

      /*  PURPOSE:   To represent the set of attributes of Dimension
       */
      static const Identity	DimensionA;

      /*  PURPOSE:   To map from a dimension to the domain to give a value if
       *	only that dimension of that value are given.
       */
      static const Identity	dimensionsDefaultDomainA;

      /*  PURPOSE:   To map from a dimension to the default attribute for that
       *	dimension.
       */
      static const Identity	dimensionsDefaultAttrA;

      /*  PURPOSE:   To map from a dimension to either 'true' if that
       *	dimension is conventionally taken to be fundamental (e.g. time,
       *	linear position, mass, etc.)
       */
      static const Identity	isDimensionConventionallyFundamentalA;

      /*  PURPOSE:   To map from the class of dimensions ('Dimension') to a
       *	map that maps from bags of 2 multiplied 'Dimension' instances to
       *	resulting 'Dimension' instance'.
       */
      static const Identity	dimensionClassesMultiplicativeResultMapA;

      /*  PURPOSE:   To map from the class of dimensions ('Dimension') to a
       *	map that maps from lists of 2 divided 'Dimension' instances to
       *	resulting 'Dimension' instance'.
       */
      static const Identity	dimensionClassesDivisionResultMapA;

      /*  PURPOSE:   To map from the class of dimensions ('Dimension') to a
       *	map that maps from lists of a unary operator and a  'Dimension'
       *	instances to resulting 'Dimension' instance'.
       */
      static const Identity	dimensionClassesUnaryOperationResultMapA;

      /*  PURPOSE:   To encompass the set of dimensions which are
       *	conventionally thought of as being fundamental (ie. non-composite).
       */
      static const Identity	ConventionallyFundamentalDimension;

      /*  PURPOSE:   To encompass the set of dimensions which are
       *	conventionally thought of as being composite (ie. non-fundamental).
       */
      static const Identity	ConventionallyCompositeDimension;

      /*  PURPOSE:   To encompass the set of structures that tell, in part,
       *	how something (e.g. a composite dimension) is partially composed of a
       *	more basic dimension.  Attribute
       *	'compositeDimensionsBasicDimStructsToDimensionA' maps from instances
       *	of this set to a basic dimension.  Attribute
       *	'compositeDimensionsBasicDimStructsPowerA' maps from instances of
       *	this set to the power to which the basic dimension is raised.
       */
      static const Identity	CompositeDimensionsBasicDimStruct;

      /*  PURPOSE:   To map from instances of
       *	'ConventionallyCompositeDimension' to one or more instances of
       *	'CompositeDimensionsBasicDimStruct' that tell how that composite
       *	dimension is partially composed of a
       *	'ConventionallyFundamentalDimension' instance.
       */
      static const Identity	compositeDimensionsBasicDimStructsToDimensionA;

      /*  PURPOSE:   To map from a 'CompositeDimensionsBasicDimStruct'
       *	instance to the Rational power that the fundamental dimension is
       *	raised to inside of the composite dimension that is the subject of an
       *	assertion.
       */
      static const Identity	compositeDimensionsBasicDimStructsPowerA;

      /*  PURPOSE:   To map from an instance of
       *	ConventionallyCompositeDimension to a list of its
       *	CompositeDimensionsBasicDimStruct instances.
       */
      static const Identity	compositeDimensionsBasicDimListA;

      /*  PURPOSE:   To tell how one operator maps one dimension to another
       *	dimension.
       */
      static const Identity	UnaryOpDimensionMappingStruct;

      /*  PURPOSE:   To map from an UnaryOpDimensionMappingStruct instance to
       *	the operator being described.
       */
      static const Identity	unaryOpDimensionMappingStructsOpA;

      /*  PURPOSE:   To map from an UnaryOpDimensionMappingStruct instance to
       *	the domain dimension.
       */
      static const Identity	unaryOpDimensionMappingStructsDomainDimA;

      /*  PURPOSE:   To map from an UnaryOpDimensionMappingStruct instance to
       *	the range dimension.
       */
      static const Identity	unaryOpDimensionMappingStructsRangeDimA;

      /*  PURPOSE:   To represent the class of units:
       */
      static const Identity	Units;

      /*  PURPOSE:   To represent the class of units of arc
       */
      static const Identity	ArcUnits;

      /*  PURPOSE:   To represent the class of attributes of units.
       */
      static const Identity	UnitsA;

      /*  PURPOSE:   To represent the class of parameterized attributes that
       *	map from a Units to LinearUnitsToUnitsStruct instance telling how to
       *	convert the subject unit to the unit given as the parameter.
       */
      static const Identity	ToUnitsAttr;

      /*  PURPOSE:   To map from an instance of 'ToUnitsAttr' to the Units
       *	instance for which it tells how to convert.
       */
      static const Identity	toUnitsAttrUnitsAttr;

      /*  PURPOSE:   To map from instances of 'Units' to the attribute that
       *	they are for by default
       */
      static const Identity	unitsDefaultAttrA;

      /*  PURPOSE:   To represent the units 'unitless' (the sole units of
       *	Dimension instance 'dimensionless')
       */
      static const Identity	unitless;

      /*  PURPOSE:   To represent the units assumed by the trigonometic
       *	functions used by the language in which sp8b is implemented.
       */
      static const Identity	radians;

      /*  PURPOSE:   To map from a unit to the domain to give a value if only
       *	that unit of that value are given.
       */
      static const Identity	unitsDefaultDomainA;

      /*  PURPOSE:   To map from a unit to its dimension
       */
      static const Identity	unitsDimensionA;

      /*  PURPOSE:   To map from a composite units to a map that maps from
       *	basic units to the integer power to which that basic unit is raised
       *	in the composite unit.
       */
      static const Identity	compositeUnitsBasicUnitToPowerMapA;

      /*  PURPOSE:   To represent a set of attributes that map from a unit to
       *	a UnitsToUnitsStruct instance that tells how to convert from it to
       *	another unit of the same dimension.  Instances are immutable
       *	singleDistincts.  The constructor for this set takes one parameter:
       *	the units to which to convert.  To represent the attribute that maps
       *	from a unit of a fundamental dimension to a LinearUnitsToUnitsStruct
       *	that tells how to convert to the main units of that dimension.
       */
      static const Identity	unitsToMainUnitsConvertA;

      /*  PURPOSE:   To encompass the class of structures that tell how to
       *	convert from one unit of a given dimension to another unit of the
       *	same dimension.  This should be an abstract set.  Actual instances
       *	should be instances of subsets, like 'LinearUnitsToUnitsStruct'.
       */
      static const Identity	UnitsToUnitsStruct;

      /*  PURPOSE:   To encompass the class of structures that tell how to
       *	convert from one unit of a given dimension to another unit of the
       *	same dimension by means of a linear transformation.  The attribute
       *	linearUnitsToUnitsStructsMultiplierA maps from instances of this set
       *	to a number 'm', and, the attribute linearUnitsToUnitsStructsOffsetA
       *	maps from instances of this set to a number 'b' such that for a
       *	number 'x' in the "from" units the formula 'm*x + b' computes the
       *	number in the "to" units.
       */
      static const Identity	LinearUnitsToUnitsStruct;

      static const Identity	linearUnitsToUnitsStructsMultiplierA;

      static const Identity	linearUnitsToUnitsStructsOffsetA;

      /*  PURPOSE:   To tell how one operator maps one units to another units.
       */
      static const Identity	UnaryOpUnitsMappingStruct;

      /*  PURPOSE:   To map from an UnaryOpUnitsMappingStruct instance to the
       *	operator being described.
       */
      static const Identity	unaryOpUnitsMappingStructsOpA;

      /*  PURPOSE:   To map from an UnaryOpUnitsMappingStruct instance to the
       *	domain units.
       */
      static const Identity	unaryOpUnitsMappingStructsDomainUnitsA;

      /*  PURPOSE:   To map from an UnaryOpUnitsMappingStruct instance to the
       *	range units.
       */
      static const Identity	unaryOpUnitsMappingStructsRangeUnitsA;

      /*  PURPOSE:   To encompass the class of structures that map from sets
       *	to DiffDimensionalUnitConversionStruct instances that tell how to
       *	convert attribute values belonging to instances of those sets from
       *	one dimensionality to another.
       */
      static const Identity	SetsDiffDimensionalUnitConversionA;

      /*  PURPOSE:   To map from a SetsDiffDimensionalUnitConversionA instance
       *	to the attribute from which to convert.
       */
      static const Identity	setsDiffDimensionalUnitConversionAttrsFromAttrA;

      /*  PURPOSE:   To map from a SetsDiffDimensionalUnitConversionA instance
       *	to the dimension from which to convert.
       */
      static const Identity	setsDiffDimensionalUnitConversionAttrsFromDimA;

      /*  PURPOSE:   To map from a SetsDiffDimensionalUnitConversionA instance
       *	to the attribute to which to convert.
       */
      static const Identity	setsDiffDimensionalUnitConversionAttrsToAttrA;

      /*  PURPOSE:   To map from a SetsDiffDimensionalUnitConversionA instance
       *	to the dimension to which to convert.
       */
      static const Identity	setsDiffDimensionalUnitConversionAttrsToDimA;

      /*  PURPOSE:   To tell how to convert to from one value of one
       *	attribute, dimension and units to another of another attribute,
       *	dimension and units.
       */
      static const Identity	DiffDimensionalUnitConversionStruct;

      /*  PURPOSE:   To map from 'DiffDimensionalUnitConversionStruct'
       *	instances to the unit the which that instance's expression expects.
       */
      static const Identity	diffDimensionalUnitConversionStructsFromUnitA;

      /*  PURPOSE:   To map from 'DiffDimensionalUnitConversionStruct'
       *	instances to the unit the which that instance's expression returns.
       */
      static const Identity	diffDimensionalUnitConversionStructsToUnitA;

      /*  PURPOSE:   To map from 'DiffDimensionalUnitConversionStruct'
       *	instances to the expression that does the conversion
       */
      static const Identity	diffDimensionalUnitConversionStructsExprA;

      /*  PURPOSE:   To map from 'DiffDimensionalUnitConversionStruct'
       *	instances to the assumption list needed by the conversion
       */
      static const Identity	diffDimensionalUnitConversionStructsAssmptnA;

      /*  PURPOSE:   To represent the class of attributes of Domains defined
       *	pragmatically by extremities.
       */
      static const Identity	DomainsPragmaticExtremeRangeA;

      /*  PURPOSE:   To represent the class of attributes of Domains defined
       *	semantically.
       */
      static const Identity	DomainsSemanticRangeA;

      /*  PURPOSE:   To represent the attribute that maps from subclasses of
       *	'DomainsSemanticRangeA' to the attribute that tells the lower bound
       *	of that class.
       */
      static const Identity	domainsSemanticRangeAttrClassesLowerBoundAttrA;

      /*  PURPOSE:   To represent the attribute that maps from subclasses of
       *	'DomainsSemanticRangeA' to the attribute that tells the upper bound
       *	of that class.
       */
      static const Identity	domainsSemanticRangeAttrClassesUpperBoundAttrA;

      /*  PURPOSE:   To represent the multi-valued attribute that tells which
       *	subclasses of 'DomainsSemanticRangeA' are to generate warnings when
       *	AnnotatedValue instances are generated with values outside of their
       *	range.
       */
      static const Identity	spEnvsWarningGeneratingSemanticDomainClassA;

      /*  PURPOSE:   To represent the multi-valued attribute that tells which
       *	subclasses of 'DomainsSemanticRangeA' are to generate errors
       *	(exception 'AnnotatedValueOutsideOfRangeException') when
       *	AnnotatedValue instances are generated with values outside of their
       *	range.
       */
      static const Identity	spEnvsErrorGeneratingSemanticDomainClassA;

      /*  PURPOSE:  To map from the class 'Domain' to a map that goes from a
       *	hash-rational to a Domain based upon the properties of the Domain:
       */
      static const Identity	domainClassesHashToListOfDomainsMapA;

      /*  PURPOSE:  To map from the class 'Domain' to a map that goes from
       *	[operator,Domain0,Domain1] to what the resulting Domain would be:
       */
      static const Identity	domainClassesOperationResultMapA;

      /*  PURPOSE:   To map from instances of 'Domain' to the low range
       *	definition limit.
       */
      static const Identity	domainsLoRangeDefnLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the low system
       *	limit.
       */
      static const Identity	domainsLoSystemLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the low detect
       *	limit.
       */
      static const Identity	domainsLoDetectLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the low saturate
       *	limit.
       */
      static const Identity	domainsLoSaturateLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the low reliable
       *	limit.
       */
      static const Identity	domainsLoReliableLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the low observed
       *	limit.
       */
      static const Identity	domainsLoObservedLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the high range
       *	definition limit.
       */
      static const Identity	domainsHiRangeDefnLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the high system
       *	limit.
       */
      static const Identity	domainsHiSystemLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the high detect
       *	limit.
       */
      static const Identity	domainsHiDetectLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the high saturate
       *	limit.
       */
      static const Identity	domainsHiSaturateLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the high reliable
       *	limit.
       */
      static const Identity	domainsHiReliableLimitA;

      /*  PURPOSE:   To map from instances of 'Domain' to the high observed
       *	limit.
       */
      static const Identity	domainsHiObservedLimitA;

      /*  PURPOSE:   To map from an attribute to the domain to give a value if
       *	only that attribute of that value are given.
       */
      static const Identity	attributesDefaultDomainA;

      /*  PURPOSE:   To represent the class of axis systems:
       */
      static const Identity	AxisSystem;

      /*  PURPOSE:   To represent the class of coordinate systems:
       */
      static const Identity	CoordinateSystem;

      static const Identity	coordinateSystemsAxisSystemA;

      /*  PURPOSE:   To represent the class of times:
       */
      static const Identity	Time;

      /*  PURPOSE:   To represent the class of places:
       */
      static const Identity	Place;

      /*  PURPOSE:   To represent the class of knowledge generating actors:
       */
      static const Identity	KnowledgeGeneratingActor;

      /*  PURPOSE:   To represent the class of reasons for scientific actions:
       */
      static const Identity	Reason;

      /*  PURPOSE:   To represent the class of value generating machines (e.g.
       *	measuring equipment or simulation programs):
       */
      static const Identity	ValueGeneratingMachine;

      /*  PURPOSE:   To represent the class of natural language related things
       *	(except attributes).
       */
      static const Identity	NatLangRelated;

      /*  PURPOSE:   To represent the class of speaker perspective "persons"
       *	in a natural language sentence.
       */
      static const Identity	NatLangPerson;

      /*  PURPOSE:   To represent the speaker perspective "first person" in a
       *	natural language sentence.
       */
      static const Identity	firstPerson;

      /*  PURPOSE:   To represent the speaker perspective "second person" in a
       *	natural language sentence.
       */
      static const Identity	secondPerson;

      /*  PURPOSE:   To represent the speaker perspective "third person" in a
       *	natural language sentence.
       */
      static const Identity	thirdPerson;

      /*  PURPOSE:   To represent the class of possible noun's plurality in a
       *	natural language expression.
       */
      static const Identity	NatLangPlurality;

      /*  PURPOSE:   To represent the plurality of none in a natural language
       *	expression.
       */
      static const Identity	zeroPlurality;

      /*  PURPOSE:   To represent the plurality of more than one in a natural
       *	language expression.
       */
      static const Identity	moreThanZeroPlurality;

      /*  PURPOSE:   To represent the plurality of one in a natural language
       *	expression.
       */
      static const Identity	singularPlurality;

      /*  PURPOSE:   To represent the plurality of more than one in a natural
       *	language expression.
       */
      static const Identity	moreThanOnePlurality;

      /*  PURPOSE:   To represent the plurality of few in a natural language
       *	expression.
       */
      static const Identity	fewPlurality;

      /*  PURPOSE:   To represent the plurality of many in a natural language
       *	expression.
       */
      static const Identity	manyPlurality;

      /*  PURPOSE:   To map from an instance of NatLangPlurality to the
       *	minimum number of things that it entails.
       */
      static const Identity	natLangMinPluralityCountA;

      /*  PURPOSE:   To map from an instance of NatLangPlurality to the
       *	maximum number of things that it entails.
       */
      static const Identity	natLangMaxPluralityCountA;

      /*  PURPOSE:   To represent the class of possible noun genders in a
       *	natural language expression.
       */
      static const Identity	NatLangGender;

      /*  PURPOSE:   To represent feminine gender in a natural language
       *	expression.
       */
      static const Identity	femaleNatLangGender;

      /*  PURPOSE:   To represent masculine gender in a natural language
       *	expression.
       */
      static const Identity	maleNatLangGender;

      /*  PURPOSE:   To represent neuter gender in a natural language
       *	expression.
       */
      static const Identity	neuterNatLangGender;

      /*  PURPOSE:   To represent the class of when-ness that a verb tense can
       *	convey.
       */
      static const Identity	NatLangTenseWhen;

      /*  PURPOSE:   To represent pass-ness of a verb.
       */
      static const Identity	pastNatLangTenseWhen;

      /*  PURPOSE:   To represent present-ness of a verb.
       */
      static const Identity	presentNatLangTenseWhen;

      /*  PURPOSE:   To represent future-ness of a verb.
       */
      static const Identity	futureNatLangTenseWhen;

      /*  PURPOSE:   To represent the class of how immediately the action was
       *	done: in-general, right-then or was completed.
       */
      static const Identity	NatLangTenseImmediacy;

      /*  PURPOSE:   To represent the immediacy of the action happening in
       *	general (sometimes called a "simple" tense in English).
       */
      static const Identity	inGeneralNatLangTenseImmediacy;

      /*  PURPOSE:   To represent the immediacy of the action happening right
       *	then, ongoing ("continuous") period of a verb.
       */
      static const Identity	rightThenNatLangTenseImmediacy;

      /*  PURPOSE:   To represent the immediacy of the action having been
       *	completed (sometimes called a "perfect" tense in English).
       */
      static const Identity	completedNatLangTenseImmediacy;

      /*  PURPOSE:   To represent the class of verb tenses conveying both
       *	when-ness and period.
       */
      static const Identity	NatLangTense;

      /*  PURPOSE:   To represent the in-general (simple) past tense (English:
       *	"I programmed")
       */
      static const Identity	inGeneralPastNatLangTense;

      /*  PURPOSE:   To represent the right then past tense (English: "I was
       *	programming")
       */
      static const Identity	rightThenPastNatLangTense;

      /*  PURPOSE:   To represent the completed past tense (English: "I had
       *	programmed")
       */
      static const Identity	completedPastNatLangTense;

      /*  PURPOSE:   To represent the in-general (simple) present tense
       *	(English: "I program")
       */
      static const Identity	inGeneralPresentNatLangTense;

      /*  PURPOSE:   To represent the right then present tense (English: "I am
       *	programming")
       */
      static const Identity	rightThenPresentNatLangTense;

      /*  PURPOSE:   To represent the completed present tense (English: "I
       *	have programmed")
       */
      static const Identity	completedPresentNatLangTense;

      /*  PURPOSE:   To represent the in-general (simple) future tense
       *	(English: "I will program")
       */
      static const Identity	inGeneralFutureNatLangTense;

      /*  PURPOSE:   To represent the right-then future tense (English: "I
       *	will be programming")
       */
      static const Identity	rightThenFutureNatLangTense;

      /*  PURPOSE:   To represent the completed future tense (English: "I will
       *	have programmed")
       */
      static const Identity	completedFutureNatLangTense;

      /*  PURPOSE:   To represent the "tense" of a verb abstracted from time. 
       *	In some Indo-European languages this is the infinitive form of the
       *	verb (English: "to program")
       */
      static const Identity	timelessNatLangTense;

      /*  PURPOSE:   To represent the "tense" of a verb when turned into a
       *	noun.  In some Indo-European languages this is the gerund form of the
       *	verb (English: "programming")
       */
      static const Identity	nounifiedNatLangTense;

      /*  PURPOSE:   To map from NatLangTense instances to their
       *	NatLangTenseWhen values
       */
      static const Identity	natLangTensesWhenA;

      /*  PURPOSE:   To map from NatLangTense instances to their
       *	NatLangTenseImmediacy values
       */
      static const Identity	natLangTensesImmediacyA;

      /*  PURPOSE:   To represent the class of formalities that can be used in
       *	natural language expressions.
       */
      static const Identity	NatLangFormality;

      /*  PURPOSE:   To represent a rude manner of natural language
       */
      static const Identity	rudeNatLangFormality;

      /*  PURPOSE:   To represent an informal manner of natural language
       */
      static const Identity	informalNatLangFormality;

      /*  PURPOSE:   To represent a formal manner of natural language
       */
      static const Identity	formalNatLangFormality;

      /*  PURPOSE:   To represent an obsequious manner of natural language
       */
      static const Identity	obsequiousNatLangFormality;

      /*  PURPOSE:   To represent the class of natural language expressions.
       */
      static const Identity	NatLangExpr;

      /*  PURPOSE:   To represent the class of natural language sentences
       */
      static const Identity	NatLangSentence;

      /*  PURPOSE:   To represent the class of interrogative natural language
       *	sentences.
       */
      static const Identity	NatLangInterrogativeSentence;

      /*  PURPOSE:   To represent the class of imperative natural language
       *	sentences.
       */
      static const Identity	NatLangImperativeSentence;

      /*  PURPOSE:   To represent the class of exclamatory natural language
       *	sentences.
       */
      static const Identity	NatLangExclamatorySentence;

      /*  PURPOSE:   To represent the class of declarative natural language
       *	sentences.
       */
      static const Identity	NatLangDeclarativeSentence;

      /*  PURPOSE:   To map from sentences to their verb term
       */
      static const Identity	natLangSentencesVerbA;

      /*  PURPOSE:   To map from an 'NatLangSentence' instance to the tense of
       *	its verb term.
       */
      static const Identity	natLangSentencesTenseA;

      /*  PURPOSE:   To define identities that distinguish whether an
       *	expression is being affirmed, negated, or declared as unknown.
       */
      static const Identity	NatLangAffirmNegateStatus;

      /*  PURPOSE:   To represent the status of a sentence affirming the verb.
       */
      static const Identity	affirmNatLangStatus;

      /*  PURPOSE:   To represent the status of a sentence denying the verb.
       */
      static const Identity	negateNatLangStatus;

      /*  PURPOSE:   To represent the status of a sentence not knowing the
       *	vericity of the verb.
       */
      static const Identity	ignorantNatLangStatus;

      /*  PURPOSE:   To define identities that distinguish among the roles
       *	that phrases may play in sentences (other than being the verb).
       */
      static const Identity	NatLangPhraseRole;

      static const Identity	subjectNatLangPhraseRole;

      static const Identity	directObjectNatLangPhraseRole;

      static const Identity	directObjectTextNatLangPhraseRole;

      static const Identity	havingNatLangPhraseRole;

      static const Identity	withValueNatLangPhraseRole;

      static const Identity	becauseOfNatLangPhraseRole;

      static const Identity	usingNatLangPhraseRole;

      static const Identity	forThePurposeOfNatLangPhraseRole;

      static const Identity	towardNatLangPhraseRole;

      static const Identity	awayFromNatLangPhraseRole;

      static const Identity	whereNatLangPhraseRole;

      static const Identity	whenNatLangPhraseRole;

      static const Identity	relativeToNatLangPhraseRol;

      static const Identity	notObjectNatLangPhraseRole;

      /*  PURPOSE:   To map from an 'NatLangSentence' instance to its
       *	'NatLangAffirmNegateStatus' value that tells whether the sentence is
       *	affirmed, negated, or unknown.
       */
      static const Identity	natLangSentencesAffirmNegateStatusA;

      /*  PURPOSE:   To map from an 'NatLangSentence' instance to the
       *	datastructure of role-labeled phrases (other than its verb) that it
       *	includes.
       */
      static const Identity	natLangSentencesPhraseDSA;

      /*  PURPOSE:   To map from because-therefore phrases to their because
       *	clause.
       */
      static const Identity	natLangBecauseThereforePhrasesPreconditionA;

      /*  PURPOSE:   To map from because-therefore phrases to their therefore
       *	clause.
       */
      static const Identity	natLangBecauseThereforePhrasesResultA;

      /*  PURPOSE:   To map from an 'NatLangExpr' instance representing a
       *	sentence phrase to its 'NatLangPhraseRole' value.
       */
      static const Identity	natLangExprsPhraseRoleA;

      /*  PURPOSE:   To map from 'NatLangExpr' instances to 'true' if they are
       *	the main topic, or to 'false' (or 'null') otherwise.  NOTE: THE TOPIC
       *	OF A SENTENCE DOES NOT HAVE TO BE ITS SUBJECT!  For example, if want
       *	to emphasize that Ann gave Bob $100 (as oppose to giving it to
       *	Charlie, we could say in English "Ann gave BOB $100"
       */
      static const Identity	isNatLangExprPhraseTheTopicA;

      /*  PURPOSE:   To represent the class of natural language role phrases.
       */
      static const Identity	NatLangRolePhrase;

      /*  PURPOSE:   To represent a NatLangNounPhrase instance that has
       *	'theSpRun' as a subject.
       */
      static const Identity	theSpRunSubject;

      /*  PURPOSE:   To map from role phrases to their nouns
       */
      static const Identity	natLangRolePhrasesNounA;

      /*  PURPOSE:   To map from role phrases to 0 or more of their
       *	descriptors (adjectives, prepositional phrases, etc.)
       */
      static const Identity	natLangRolePhrasesDescriptorA;

      /*  PURPOSE:   To represent the class of fnc families that convert
       *	NatLangExpr instances to readable strings.
       */
      static const Identity	NatLangFncFamily;

      /*  PURPOSE:   To tell the 0-arity function family of NatLangExpr that
       *	decides which specific function family will convert NatLangExpr
       *	instances to human readable strings.
       */
      static const Identity	toNatLang;

      /*  PURPOSE:   To tell the 0-arity function family of Idea that creates
       *	a NatLangExpr instance that describes '@this' object.
       */
      static const Identity	toNatLangExpr;

      /*  PURPOSE:   To tell the default specific function family of
       *	NatLangExpr to use.
       */
      static const Identity	toEnglish;

      /*  PURPOSE:   To map from an instance of 'LanguageFamily' to its method
       *	that creates inter-term grammatical info structure.
       */
      static const Identity	languageFamilysInterTermGrammarMakingFncFamilyA;

      /*  PURPOSE:   To tell the default function family for method that
       *	creates inter-term grammatical info structure.
       */
      static const Identity	makeInterTermGrammarInfo_indoEuropean;

      /*  PURPOSE:   To tell the method that tries to return a natural
       *	language independent name for the identity.
       */
      static const Identity	toString;

      /*  PURPOSE:   To tell the method that returns a JSON string
       *	representation of an SP object.
       */
      static const Identity	toJson;

      /*  PURPOSE:   To tell the class that maps from words to their string
       *	text terms according as parameterized by a natural language function
       *	family (like toEnglish).
       */
      static const Identity	TermsTextA;

      /*  PURPOSE:   To represent the class of natural language conjunctive
       *	noun phrases.
       */
      static const Identity	NatLangConjunctiveAndNounPhrase;

      /*  PURPOSE:   To represent the class of parameterized descriptor
       *	phrases.  (e.g. prepositional phrases)
       */
      static const Identity	NatLangParameterizedDescriptorPhrase;

      /*  PURPOSE:   To represent the class of natural language terms
       */
      static const Identity	NatLangTerm;

      /*  PURPOSE:   To represent the class of verbs
       */
      static const Identity	NatLangVerbTerm;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to exist (at all)"
       */
      static const Identity	toExist;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be as (noun phrase)" or "to exist as (noun phrase)":
       */
      static const Identity	toBeAs;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to own (a owned thing)"
       */
      static const Identity	toOwn;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to belong to (an owning thing)"
       */
      static const Identity	toBelongTo;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to have the property of"
       */
      static const Identity	toHaveTheProperty;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to happen"
       */
      static const Identity	toHappen;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be able to (verb phrase)" or "to can (verb phrase)"
       */
      static const Identity	toBeAbleTo;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be allowed to " or "to may" or "to be permitted to"
       */
      static const Identity	toBeAllowed;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to must (verb phrase)" or "to have to (verb phrase)"
       */
      static const Identity	toMust;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to know about"
       */
      static const Identity	toKnow;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to recognize (a character or item)"
       */
      static const Identity	toRecognize;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to attempt"
       */
      static const Identity	toAttempt;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to redo"
       */
      static const Identity	toRedo;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to succeed"
       */
      static const Identity	toSucceed;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to fail"
       */
      static const Identity	toFail;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to use"
       */
      static const Identity	toUse;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to modify"
       */
      static const Identity	toModify;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to assert (knowledge)"
       */
      static const Identity	toAssert;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to declare a variable or function"
       */
      static const Identity	toDeclareAVarOrFnc;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to quantify the scope of (a variable)"
       */
      static const Identity	toQuantifyTheScopeOf;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to define (knowledge)"
       */
      static const Identity	toDefine;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to have a vale for (an attribute)"
       */
      static const Identity	toHaveAValueFor;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to assign a value to"
       */
      static const Identity	toAssignAValueTo;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to look for"
       */
      static const Identity	toLookFor;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to find"
       */
      static const Identity	toFind;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to query"
       */
      static const Identity	toQuery;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to sort"
       */
      static const Identity	toSort;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to compile"
       */
      static const Identity	toCompile;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to compute"
       */
      static const Identity	toCompute;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to parse"
       */
      static const Identity	toParse;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to open (as in a file)"
       */
      static const Identity	toOpen;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to close (as in a file)"
       */
      static const Identity	toClose;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to read"
       */
      static const Identity	toRead;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to write"
       */
      static const Identity	toWrite;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to flush (a file)"
       */
      static const Identity	toFlush;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to insert (an item into a datastructure)"
       */
      static const Identity	toInsert;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to remove (an item from a datastructure)"
       */
      static const Identity	toRemove;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to (mathematically) add"
       */
      static const Identity	toAdd;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to (mathematically) subtract"
       */
      static const Identity	toSubtract;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to (mathematically) multiply"
       */
      static const Identity	toMultiply;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to (mathematically) divide"
       */
      static const Identity	toDivide;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to (mathematically) raise (to a power)"
       */
      static const Identity	toRaiseToAPower;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to throw (an exception)"
       */
      static const Identity	toThrow;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to start"
       */
      static const Identity	toStart;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be in the act of" or "to be in the middle of"
       */
      static const Identity	toBeInTheActOf;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to interrupt (an act)"
       */
      static const Identity	toInterrupt;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to continue (an act)"
       */
      static const Identity	toContinue;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to stop"
       */
      static const Identity	toStop;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to finish (some action)" or "to complete (some action)"
       */
      static const Identity	toFinish;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to expect (something)"
       */
      static const Identity	toExpect;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to need (something)"
       */
      static const Identity	toNeed;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to lack (something)" or "to be missing (something)"
       */
      static const Identity	toLack;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to name (noun phrase)"
       */
      static const Identity	toName;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to assign a number to (noun phrase)"
       */
      static const Identity	toNumber;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to match (a rule, function call, etc.)"
       */
      static const Identity	toMatch;

      /*  PURPOSE:   To represent the idea denoted by the English verb terms
       *	"to run (a function or program)" or "to execute (a function or
       *	program)"
       */
      static const Identity	toRun;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to implement (a function or program)"
       */
      static const Identity	toImplement;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to encounter" or "to run into"
       */
      static const Identity	toEncounter;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be described by (noun phrase)"
       */
      static const Identity	toBeDescribedBy;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be own by (noun phrase)"
       */
      static const Identity	toBeOwnedBy;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be in(side of) (noun phrase)"
       */
      static const Identity	toBeIn;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be out(side of) (noun phrase)"
       */
      static const Identity	toBeOut;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be inside of the range of (noun phrase)"
       */
      static const Identity	toBeInsideTheRangeOf;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be outside of the range of (noun phrase)"
       */
      static const Identity	toBeOutsideTheRangeOf;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be less than (some value)"
       */
      static const Identity	toBeLesserThan;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be less than (some value)"
       */
      static const Identity	toBeGreaterThan;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to be reserved" (as of a reserved word in the StructProc language
       */
      static const Identity	toBeReserved;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to convert" (as in one set of units into another)
       */
      static const Identity	toConvert;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to regisiter" (a thing) (with a store of things)
       */
      static const Identity	toRegister;

      /*  PURPOSE:   To represent the idea denoted by the English verb term
       *	"to violate" (some constraint, etc.)
       */
      static const Identity	toViolate;

      /*  PURPOSE:   To represent the class of nouns, noun terms and pronouns
       */
      static const Identity	NatLangNounTerm;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the most recently requested computation"
       */
      static const Identity	theLastRequestedComputation;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the user"
       */
      static const Identity	theUser;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the SOM programmers"
       */
      static const Identity	theSomProgrammers;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the knowledge base"
       */
      static const Identity	theKnowledgeBase;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the SP program"
       */
      static const Identity	theSpProgram;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the SP (program) run"
       */
      static const Identity	theSpRun;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the computer"
       */
      static const Identity	theComputer;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the networked computing system"
       */
      static const Identity	theNetworkedComputingSystem;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the Internet"
       */
      static const Identity	theInternet;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	query"
       */
      static const Identity	aQuery;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an answer"
       */
      static const Identity	anAnswer;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	subject"
       */
      static const Identity	aSubject;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an attribute"
       */
      static const Identity	anAttribute;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an expression"
       */
      static const Identity	anExpression;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	nonannotated value"
       */
      static const Identity	aNonannotatedValue;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an annotated value"
       */
      static const Identity	anAnnotatedValue;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	value"
       */
      static const Identity	aValue;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an index (to an array)"
       */
      static const Identity	anIndex;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	key (to a map datastructure)"
       */
      static const Identity	aKey;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	constant"
       */
      static const Identity	aConstant;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	variable"
       */
      static const Identity	aVariable;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	self variable"
       */
      static const Identity	aSelfVariable;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	divisor"
       */
      static const Identity	aDivisor;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	(mathematical) power"
       */
      static const Identity	aMathematicalPower;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an idea"
       */
      static const Identity	anIdea;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	class"
       */
      static const Identity	aClass;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	subclass"
       */
      static const Identity	aSubclass;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	superclass"
       */
      static const Identity	aSuperclass;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an instance"
       */
      static const Identity	anInstance;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	boolean value"
       */
      static const Identity	aBooleanValue;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	number"
       */
      static const Identity	aNumber;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an integer "
       */
      static const Identity	anInteger;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	rational number"
       */
      static const Identity	aRationalNumber;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	floating point number"
       */
      static const Identity	aFloatingPointNumber;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"unicode byte sequence"
       */
      static const Identity	unicodeByteSequence;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	character string"
       */
      static const Identity	aCharacterString;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	character"
       */
      static const Identity	aCharacter;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	nextline character (\n or \r)"
       */
      static const Identity	aNextLineChar;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	hexadecimal digit"
       */
      static const Identity	aHexadecimalDigit;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	decimal digit"
       */
      static const Identity	aDecimalDigit;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an idea's hexadecimal value"
       */
      static const Identity	anIdeasHexadecimalValue;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an iterator"
       */
      static const Identity	anIterator;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	data structure"
       */
      static const Identity	aDataStructure;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	(data structure) node"
       */
      static const Identity	aNode;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	domain" (like for an attribute)
       */
      static const Identity	aDomain;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	range" (like for an attribute)
       */
      static const Identity	aRange;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	binary treee node"
       */
      static const Identity	aBinaryTreeNode;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	linear data structure"
       */
      static const Identity	aLinearDataStructure;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	list"
       */
      static const Identity	aList;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	vector list"
       */
      static const Identity	aVectorList;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	node list"
       */
      static const Identity	aNodeList;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	list node"
       */
      static const Identity	aListNode;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	data node"
       */
      static const Identity	aDataNode;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	nil node"
       */
      static const Identity	aNilNode;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	stack"
       */
      static const Identity	aStack;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	queue"
       */
      static const Identity	aQueue;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an identifier"
       */
      static const Identity	anIdentifier;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	command"
       */
      static const Identity	aCommand;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	function"
       */
      static const Identity	aFunction;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	constructor
       */
      static const Identity	aConstructor;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an anonymous (or 'lambda') function"
       */
      static const Identity	anAnonymousFunction;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an anonymous (or 'lambda') function template"
       */
      static const Identity	anAnonymousFunctionTemplate;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	function call"
       */
      static const Identity	aFunctionCall;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an operator"
       */
      static const Identity	anOperator;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	method call sequence"
       */
      static const Identity	aMethodCallSequence;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	predicate"
       */
      static const Identity	aPredicate;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	predicate expression"
       */
      static const Identity	aPredicateExpression;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	rule"
       */
      static const Identity	aRule;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	rule's head predicate"
       */
      static const Identity	aRulesHeadPredicate;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	rule's clause list"
       */
      static const Identity	aRulesClauseList;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an assumption context"
       */
      static const Identity	anAssumptionContext;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an argument (to a method or command)"
       */
      static const Identity	anArgument;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an operand"
       */
      static const Identity	anOperand;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	mapping (from domain to range)"
       */
      static const Identity	aMapping;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	natural language"
       */
      static const Identity	aNaturalLanguage;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an assumption"
       */
      static const Identity	anAssumption;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"an I/O problem"
       */
      static const Identity	anIOProblem;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	(programming) bug"
       */
      static const Identity	aBug;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	syntax error"
       */
      static const Identity	aSyntaxError;

      /*  PURPOSE:   To represent the idea denoted by the English noun term "a
       *	(computer) file"
       */
      static const Identity	aFile;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"(a computer) input file"
       */
      static const Identity	anInputFile;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"(a computer) output file"
       */
      static const Identity	anOutputFile;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"(a computer) directory"
       */
      static const Identity	aDirectory;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"(an) end of a file"
       */
      static const Identity	theEndOfFile;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"the type (of an idea, e.g. rational, floating-pt, boolean, etc.)"
       */
      static const Identity	ideaType;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"(a) description"
       */
      static const Identity	aDescription;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"(a) prefix"
       */
      static const Identity	aPrefix;

      /*  PURPOSE:   To represent the idea denoted by the English noun term
       *	"(a) prefix"
       */
      static const Identity	aSuffix;

      /*  PURPOSE:   To represent the class of adjective terms
       */
      static const Identity	NatLangAdjectiveTerm;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "non-specific"
       */
      static const Identity	nonSpecific;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "immutable"
       */
      static const Identity	immutable;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "singleDistinct"
       */
      static const Identity	singleDistinct;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "single"
       */
      static const Identity	single_adj;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "double"
       */
      static const Identity	double_adj;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "class-full"
       */
      static const Identity	classFull;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "redundant"
       */
      static const Identity	redundant;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "non-redundant"
       */
      static const Identity	nonredundant;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "too few"
       */
      static const Identity	tooFew;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "too many"
       */
      static const Identity	tooMany;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "legal (value)"
       */
      static const Identity	legal;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "illegal (value)"
       */
      static const Identity	illegal;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "expected (value)"
       */
      static const Identity	expected;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "the same"
       */
      static const Identity	same;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "different"
       */
      static const Identity	different;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "positive (as in numeric sign)"
       */
      static const Identity	positive;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "negative (as in numeric sign)"
       */
      static const Identity	negative;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "non-positive (as in numeric sign)"(non_positive)
       */
      static const Identity	nonPositive;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "non-negative (as in numeric sign)"(non_negative)
       */
      static const Identity	nonNegative;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "executable (as in code)"
       */
      static const Identity	executable;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "non-executable (as in code)"
       */
      static const Identity	nonExecutable;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "recognized (as in an idea by the SP system for a purpose)"
       */
      static const Identity	recognized;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "non-recognized (as in an idea by the SP system for a purpose)"
       */
      static const Identity	nonRecognized;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "ordered" (as in sorting, not as in commands)
       */
      static const Identity	ordered;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "unordered" (as in sorting, not as in commands)
       */
      static const Identity	unordered;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "compatiable" (as in operands with each other)
       */
      static const Identity	compatible;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "incompatiable" (as in operands with each other)
       */
      static const Identity	incompatible;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "usable"
       */
      static const Identity	usable;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "unusable"
       */
      static const Identity	unusable;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "contradictory"
       */
      static const Identity	contradictory;

      /*  PURPOSE:   To represent the idea denoted by the English adjective
       *	term "noncontradictory"
       */
      static const Identity	noncontradictory;

      /*  PURPOSE:   To represent the class of conjunctions
       */
      static const Identity	NatLangConjunctionTerm;

      /*  PURPOSE:   To represent the idea denoted by the English conjunction
       *	"and"(and)
       */
      static const Identity	and_;

      /*  PURPOSE:   To represent the idea denoted by the English conjunction
       *	"but"
       */
      static const Identity	but;

      /*  PURPOSE:   To represent the idea denoted by the English conjunction
       *	"or"(or)
       */
      static const Identity	or_;

      /*  PURPOSE:   To represent the idea denoted by the English conjunctive
       *	term "and then" or "subsequently"
       */
      static const Identity	andThen;

      /*  PURPOSE:   To represent the idea denoted by the English conjunctive
       *	terms "because"
       */
      static const Identity	because;

      /*  PURPOSE:   To represent the idea denoted by the English conjunctive
       *	terms "therefore" or "wherefore"
       */
      static const Identity	therefore;

      /*  PURPOSE:   To represent the class of parameterized descriptors (e.g.
       *	what in English would be prepositional phrases)
       */
      static const Identity	NatLangParameterizedDescriptorTerm;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "instead of (noun phrase)"
       */
      static const Identity	insteadOf;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "continuation of (noun phrase)"
       */
      static const Identity	continuationOf;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "as an argument to"
       */
      static const Identity	asAnArgumentTo;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrases "that belongs to"
       */
      static const Identity	thatBelongsTo;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "that resulted from the computation of
       *	<subject>'s attribute <attribute>"
       */
      static const Identity	thatResultedFromTheComputationOf;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "inside of <region>"
       */
      static const Identity	insideOf;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "outside of <region>"
       */
      static const Identity	outsideOf;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "at the position with index <number>"
       */
      static const Identity	atThePositionWithIndex;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "to the function <fnc>"
       */
      static const Identity	toTheFunction;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "between <first> and <second>"
       */
      static const Identity	between;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "into <region>"
       */
      static const Identity	into;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "for <purpose>" or "that serves <purpose>"
       */
      static const Identity	thatServes;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "from <object or location>"
       */
      static const Identity	from;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "with value <value>"
       */
      static const Identity	withValue;

      /*  PURPOSE:   To represent the idea denoted by the English
       *	prepositional phrase "located at <location>"
       */
      static const Identity	locatedAt;

      static const Identity	EmpiricalEntity;

      /*  PURPOSE:   To map from an instance of an EmpiricalEntity to a
       *	data-structure of the events in which it is known to partake.
       */
      static const Identity	empiricalEntitysEventsDSA;

      /*  PURPOSE:   To be the class that contains composite structures
       */
      static const Identity	CompositeStruct;

      static const Identity	compositeStructsOperatorA;

      static const Identity	compositeStructsLOperandA;

      static const Identity	compositeStructsROperandA;

      static const Identity	Substance;

      static const Identity	PhysicalField;

      static const Identity	PhysicalObjectCollection;

      static const Identity	Event;

      static const Identity	Process;

      static const Identity	ProcessNetworkProcess;

      static const Identity	currentEventsDSA;

      static const Identity	eventsRelationListA;

      static const Identity	OntologyAttr;

      /*  PURPOSE:   To represent the isA attribute mapping a subclass to a
       *	superclass.
       */
      static const Identity	isA;

      /*  PURPOSE:   To represent the instanceOf attribute mapping an instance
       *	to its class.
       */
      static const Identity	instanceOf;

      /*  PURPOSE:   To represent the hasSubclass attribute mapping a
       *	superclass to a subclass.
       */
      static const Identity	hasSubclass;

      /*  PURPOSE:   To represent the hasInstance attribute mapping a class to
       *	one of its instances.
       */
      static const Identity	hasInstance;

      /*  PURPOSE:   To represent the attribute that maps from sets to either
       *	'true' or 'false' depending on whether their members may be
       *	considered interchangeable (as in pieces of mass-produced equipment)
       *	or not (as in people).
       */
      static const Identity	areSetMembersInterchangeableA;

      /*  PURPOSE:   To map from an idea to 'true' if the idea represents a
       *	nonspecified set member or 'false' otherwise.
       */
      static const Identity	isIdeaANonspecifiedSetMemberA;

      /*  PURPOSE:   To map from an idea that represents an nonspecified set
       *	member to its set.
       */
      static const Identity	nonspecifiedSetMembersSetA;

      /*  PURPOSE:   To map from set to its nonspecified member.
       */
      static const Identity	setsNonspecifiedMemberA;

      /*  PURPOSE:   To map from an attribute to either 'true' or 'false'
       *	depending on whether or not the attribute is a magnitude-style
       *	attribute whose values cannot logically be negative.  Examples
       *	include length (as opposed to linearPosition), speed (as opposed to
       *	velocity), and duration (as opposed to time).  If defined then should
       *	be the logical negation of the 'isSignedAttrA'.
       */
      static const Identity	isMagnitudeAttrA;

      /*  PURPOSE:   To map from an attribute to either 'true' or 'false'
       *	depending on whether or not the attribute is a signed-style attribute
       *	whose values can be logically be positive, negative or zero. 
       *	Examples include linearPosition (as opposed to length), velocity (as
       *	opposed to speed), and time (as opposed to duration).  If defined
       *	then should be the logical negation of the 'isMagnitudeAttrA'.
       */
      static const Identity	isSignedAttrA;

      /*  PURPOSE:   To map from a magnitude attribute to its corresponding
       *	signed attribute.  For example length->magnitudeAttrsSignedAttrA =
       *	linearPosition, speed->magnitudeAttrsSignedAttrA = velocity.
       */
      static const Identity	magnitudeAttrsSignedAttrA;

      /*  PURPOSE:   To map from a signed attribute to its corresponding
       *	magnitude attribute.  For example
       *	linearPosition->magnitudeAttrsSignedAttrA = length,
       *	velocity->magnitudeAttrsSignedAttrA = speed.
       */
      static const Identity	signedAttrsMagnitudeAttrA;

      /*  PURPOSE:   To map from sets of empirical numeric attributes to a
       *	member of that set that corresponds to a generic instance.  For
       *	example LengthA->attributeSetsGenericMemberA = genericLengthA
       */
      static const Identity	attributeSetsGenericMemberA;

      /*  PURPOSE:   To map from an attribute to a ResultingAttrStruct
       *	instance that describes what attribute results when 'this' attribute
       *	is combined with another specified attribute with a specified
       *	operator.
       */
      static const Identity	attributesResultingAttrStructA;

      /*  PURPOSE:   To map from ResultingAttrStruct instances to the operator
       *	applied to 'this' and the other attribute.
       */
      static const Identity	resultingAttrStructsOperatorA;

      /*  PURPOSE:   To map from ResultingAttrStruct instances to the second
       *	attribute (along with 'this') being combined with the operator.  If
       *	defined then no resultingAttrStructsOperandsAttrSetA property should
       *	defined.
       */
      static const Identity	resultingAttrStructsOperandsAttrA;

      /*  PURPOSE:   To map from ResultingAttrStruct instances to the class of
       *	which the second attribute should be a member.  If defined then no
       *	resultingAttrStructsOperandsAttrA property should be defined.
       */
      static const Identity	resultingAttrStructsOperandsAttrSetA;

      /*  PURPOSE:   To map from ResultingAttrStruct instances to the
       *	attribute that results.
       */
      static const Identity	resultingAttrStructsResultingAttrA;


    };
