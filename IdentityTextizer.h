/*-------------------------------------------------------------------------*
 *---									---*
 *---		IdentityTextizer.h					---*
 *---									---*
 *---	    This file declares class(es) that format into strings and	---*
 *---	optionally print Identity values using printf()-inspired	---*
 *---	formatting							---*
 *---									---*
 *---		    This file is classified as: DECLASSIFIED		---*
 *---			Applied Philosophy of Science			---*
 *---									---*
 *---	----	----	----	----	----	----	----	-----	---*
 *---									---*
 *---	Version 9a		2021 June 30		Joseph Phillips	---*
 *---									---*
 *-------------------------------------------------------------------------*/

/*
 *	From https://en.cppreference.com/w/c/variadic 2021 June 30

#include <stdio.h>
#include <stdarg.h>
 
void simple_printf(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
 
    while (*fmt != '\0') {
        if (*fmt == 'd') {
            int i = va_arg(args, int);
            printf("%d\n", i);
        } else if (*fmt == 'c') {
            // A 'char' variable will be promoted to 'int'
            // A character literal in C is already 'int' by itself
            int c = va_arg(args, int);
            printf("%c\n", c);
        } else if (*fmt == 'f') {
            double d = va_arg(args, double);
            printf("%f\n", d);
        }
        ++fmt;
    }
 
    va_end(args);
}
 
int main(void)
{
    simple_printf("dcff", 3, 'a', 1.999, 42.5); 
}

 *
 */

    class	IdentityTextizer
    {
      //  0.  Local classes:
      //  PURPOSE:  To keep track of things being recursively described so
      //	do not infinitely recurse round-and-round.
      struct	BeingDescribed
      {
	Identity		beingDescribed_;

	Identity		classOfBeingDescribed_;

	const BeingDescribed*	prevPtr_;

	BeingDescribed		(const Identity&	newBeingDescribed,
				 const Identity&      newClassOfBeingDescribed,
				 const BeingDescribed*	newPrevPtr = nullptr
				) :
				beingDescribed_(newBeingDescribed),
				classOfBeingDescribed_
						(newClassOfBeingDescribed),
				prevPtr_(newPrevPtr)
				{ }

	~BeingDescribed		()
				{ }

	bool  isBeingDescribed	(const Identity&	value,
	      			 const Identity*	contextPtr
	      			)
				const;

      private :
	//  No default constructor:
	BeingDescribed		();

	//  No copy constructor:
	BeingDescribed		(const BeingDescribed&);

	//  No copy assignment op:
	BeingDescribed&
		operator=	(const BeingDescribed&);

      };


      //  PURPOSE:  To keep track of the number of bytes and Unicode chars
      //	in a string.
      struct	ByteAndCharCount
      {
	size_t			numBytes_;
	size_t			numUnicodeChars_;

	ByteAndCharCount	() :
				numBytes_(0),
				numUnicodeChars_(0)
				{ }

	ByteAndCharCount	(const ByteAndCharCount&	source
				) :
				numBytes_(source.getNumBytes()),
				numUnicodeChars_(source.getNumUnicodeChars())
				{ }

	ByteAndCharCount	(size_t				count
				) :
				numBytes_(count),
				numUnicodeChars_(count)
				{ }

	ByteAndCharCount	(size_t			newNumBytes,
				 size_t			newNumUnicodeChars
				) :
				numBytes_(newNumBytes),
				numUnicodeChars_(newNumUnicodeChars)
				{ }

	ByteAndCharCount&
		operator=	(const ByteAndCharCount&	source
				)
				{
				  if  (this != &source)
				  {
				    //  A.  Release resources:

				    //  B.  Copy 'source':
				    numBytes_	= source.getNumBytes();
				    numUnicodeChars_
						= source.getNumUnicodeChars();
				  }

				  return(*this);
				}

	ByteAndCharCount&
		operator=	(size_t		count
				)
				{
				  //  A.  Release resources:

				  //  B.  Copy 'source':
				  numBytes_		= count;
				  numUnicodeChars_	= count;
				  return(*this);
				}

	ByteAndCharCount&
		operator+=	(size_t		addendum
				)
				{
				  numBytes_		+= addendum;
				  numUnicodeChars_	+= addendum;
				  return(*this);
				}

	ByteAndCharCount&
		operator+=	(const ByteAndCharCount&	addendum
				)
				{
				  numBytes_	+= addendum.getNumBytes();
				  numUnicodeChars_
						+= addendum.
							getNumUnicodeChars();
				  return(*this);
				}

	ByteAndCharCount&
		operator-=	(size_t		addendum
				)
				{
				  numBytes_		-= addendum;
				  numUnicodeChars_	-= addendum;
				  return(*this);
				}

	size_t	getNumBytes	()
				const
				{ return(numBytes_); }

	size_t	getNumUnicodeChars
				()
				const
				{ return(numUnicodeChars_); }

	void	clear		()
				{
				  numUnicodeChars_ = numBytes_	= 0;
				}

      };

      class	HeapAllocation
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the number of bytes to which 'cPtr_' points.
	size_t			length_;

	//  PURPOSE:  To hold 'true' if '*this' is being used by a thread or
	//	'false' otherwise.
	bool			isInUse_;

	//  PURPOSE:  To hold the address of heap-allocated space.
	char*			cPtr_;

	//  II.  Disallowed auto-generated methods:
	//  No copy constructor:
	HeapAllocation		(const HeapAllocation&);

	//  No copy assignment op:
	HeapAllocation&
		operator=	(const HeapAllocation&);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to its default values.  No
	//	parameters.  No return value.
	HeapAllocation		() :
				length_(MAX_TINY_ARRAY_LEN),
				isInUse_(false),
				cPtr_((char*)malloc(length_))
				{
				  if  (cPtr_ == nullptr)
				  {
				    fprintf(stderr,"OutOfHeapMemoryException");
				    exit(EXIT_FAILURE);
				  }
				}

	//  PURPOSE:  To release the resources of '*this'.  No parameters.
	//	No return value.
	~HeapAllocation		()
				{
				  free(cPtr_);
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the number of bytes to which 'cPtr_' points.
	//	No parameters.
	size_t	getLength	()
				const
				{
				  return(length_);
				}

	//  PURPOSE:  To return 'true' if '*this' is being used by a thread
	//	or 'false' otherwise.  No parameters.
	bool	getIsInUse	()
	  			const
				{
				  return(isInUse_);
				}

	//  PURPOSE:  To hold the address of heap-allocated space.
	//	No parameters.
	char*	getCPtr		()
				const
				{
				  return(cPtr_);
				}

	//  VI.  Mutators:
	//  PURPOSE:  To note that '*this' is in use.  No parameters.  No
	//	return value.
	void	setIsInUse	()
				{
				  isInUse_	= true;
				}

	//  PURPOSE:  To note that '*this' is no longer in use.  No
	//	parameters.  No return value.
	void	clearIsInUse	()
				{
				  isInUse_	= false;
				  cPtr_[0]	= '\0';
				}

	//  PURPOSE:  To capitalize the first character of '*this'.  No
	//	parameters.  No return value.
	void	capitalize	()
				{
				  *cPtr_	= toupper(*cPtr_);
				}

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To copy 'c' into the C-string space of '*this' at
	//	position 'indexPtr'.  'indexPtr' is updated to point to the
	//	next free char.  Returns number of bytes (1) and number of
	//	beginning UTF-8 Unicode chars (either 0 or 1).
	ByteAndCharCount
		copy		(char*&		indexPtr,
				 char		c
				);

	//  PURPOSE:  To copy the 'numBytes' bytes pointed to by 'sourcePtr'
	//	into the C-string space of '*this' at position 'indexPtr'.
	//	'indexPtr' is updated to point 'numBytes' bytes further in the
	//	C-string space.  Returns number of bytes copied.
	size_t	copy		(char*&		indexPtr,
	  			 size_t		numBytes,
	  			 const char*	sourcePtr
				);

	//  PURPOSE:  To copy the 'numBytes' bytes pointed to by 'sourcePtr'
	//	into the C-string space of '*this' at position 'indexPtr'.
	//	'indexPtr' is updated to point 'numBytes' bytes further in the
	//	C-string space.  Returns number of bytes copied.
	ByteAndCharCount
		copy		(char*&		indexPtr,
	  			 const ByteAndCharCount
						counts,
	  			 const char*	sourcePtr
				)
				{
				  copy(indexPtr,counts.getNumBytes(),sourcePtr);
				  return(counts);
				}

	//  PURPOSE:  To copy the converted string pointed to by 'sourcePtr'
	//	of length 'numBytes' into the C-string space of '*this' at
	//	position 'indexPtr'.  Each character of the string pointed to
	//	by 'sourcePtr' is converted by fnc '*convertFncPtr'.
	size_t	copy		(char*&		cPtr,
	  			 size_t		numBytes,
				 const char*	sourcePtr,
				 const char*	(*convertFncPtr)(char)
				);

	//  PURPOSE:  To remove the last character.  Returns number of bytes
	//	removed.
	size_t	removeLastChar	(char*&		cPtr
				);

      };


      class	HeapSpace
      {
	//  I.  Member vars:
	//  PURPOSE:  To serve as the mutex to control access to '*this'.
	pthread_mutex_t		lock_;

	//  PURPOSE:  To hold the addresses of available HeapAllocation* values.
	std::vector<HeapAllocation*>
				heapAllocationPtrVect_;

	//  PURPOSE:  To hold the mapping of addresses of checked out
	//	instances HeapAllocation to the id of the thread that checked
	//	them out.
	std::map<HeapAllocation*,pthread_t>
				checkedOutHeapAllocPtrToThreadIdMap_;

	//  II.  Disallowed auto-generated methods:
	//  No copy constructor:
	HeapSpace		(const HeapSpace&);

	//  No copy assignment op:
	HeapSpace&
		operator=	(const HeapSpace&);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to its default value of holding
	//	the address of one HeapAllocation instance.  No parameters.
	HeapSpace		();

	//  PURPOSE:  To release the resources of '*this'.  No parameters.
	//	No return value.
	~HeapSpace		();

	//  V.  Accessors:

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To find an unused HeapAllocation instance, mark it as
	//	used, and to return its address.  Sets 'cPtr' to the first
	//	address of its C-string memory.
	HeapAllocation*
		checkOut	(char*&		cPtr
				);

	//  PURPOSE:  To note that the 'HeapAllocation' instances whose
	//	addresses are in 'ds' are now available for reuse.  No return
	//	value.
	void	checkIn		(std::vector<HeapAllocation*>&	ds
				);

      };


      //  I.  Member vars:
      //  PURPOSE:  To hold the heap space for all instances of
      //	IdentityTextizer.
      static
      HeapSpace			heapSpace_;

      //  PURPOSE:  To hold the collection of addresses of HeapAllocation
      //	instances being used by '*this'.
      std::vector<HeapAllocation*>
				usedAllocationDS_;

      //  PURPOSE:  To hold the number of bytes and Unicode chars (not
      //	 including ending '\0').
      ByteAndCharCount		counts_;

      //  PURPOSE:  To hold the address of the C-string as a const char*.
      const char*		cPtr_;

      //  PURPOSE:  To hold the index in 'usedAllocationDS_' of the
      //	HeapAllocation that has the text that '*this' should print.
      //	(_Should_ be 0 if allocated, or -1 if 'cPtr_' points to
      //	 C-string constant elsewhere.)
      int			allocIndex_;

      //  II.  Disallowed auto-generated methods:
      //  No copy assignment operator:
      IdentityTextizer&
		operator=	(const IdentityTextizer&);

    protected :
      //  III.  Protected methods:
      //  PURPOSE:  To save 'allocPtr' into 'usedAllocationDS_' and to
      //	return the index in that data-structure of where it is.
      int 	obtainAllocDSIndex
				(HeapAllocation*	allocPtr
				)
				{
				  int	allocDSIndex;

				  allocDSIndex	= (int)usedAllocationDS_.size();
				  usedAllocationDS_.push_back(allocPtr);
				  return(allocDSIndex);
				}

      //  PURPOSE:  To find an unused HeapAllocation instance in 'heapSpace_',
      //	to mark it as used, to store its address in
      //	'usedAllocationDS_', and to return its address.  Sets 'cPtr'
      //	to the first address of its C-string memory, and sets
      //	'allocDSIndex' to the index at which it was saved in
      //	'usedAllocationDS_'.
      HeapAllocation*
		checkOut	(char*&		cPtr,
				 int&		allocDSIndex
				)
				{
				  HeapAllocation*	allocPtr;

				  allocPtr	= heapSpace_.checkOut(cPtr);
				  allocDSIndex	= obtainAllocDSIndex(allocPtr);
				  return(allocPtr);
				}

      //  PURPOSE:  To delete any 'HeapAllocation*' values in
      //  	'usedAllocationDS_' beyond those of index 'keepIndex'.  No
      //	return value.
      void	deleteTempHeapAllocations
				(size_t			keepIndex
				)
				{
//				  size_t	keepSize	= keepIndex+1;
//
//				  while  (usedAllocationDS_.size() > keepSize)
//				  {
//				    delete(usedAllocationDS_.back());
//				    usedAllocationDS_.pop_back();
//				  }
//
				}

      //  PURPOSE:  To set 'cPtr' to the address of the C-string that holds the
      //	raw form of 'textMe'.  'allocDSIndex' is set to the index of
      //	the generated string in 'usedAllocationDS_'.
      //	Returns how many bytes were used.
      size_t	identityToRaw	(const char*&		cPtr,
				 int&			allocDSIndex,
				 const Identity&	textMe
				);

      //  PURPOSE:  To set 'cPtr' to the address of the C-string that holds
      //	the text form of integer 'numerator'.  'allocDSIndex' is set
      //	to the index of the generated string in 'usedAllocationDS_'.
      //	Returns how many bytes were used.
      size_t	integerToText	(const char*&		cPtr,
				 int&			allocDSIndex,
				 numerator_ty		numerator
				);

      //  PURPOSE:  To set 'cPtr' to the address of the C-string that holds
      //	the text form of rational 'numerator' \ 'denominator' according
      //	to 'howStringify'.  'allocDSIndex' is set to the index of the
      //	generated string in 'usedAllocationDS_'.  Returns how many
      //	bytes were used.
      size_t	rationalToText	(const char*&		cPtr,
				 int&			allocDSIndex,
				 numerator_ty		numerator,
				 denominator_ty		denominator,
				 howStringify_ty	howStringify
				);

      //  PURPOSE:  To set 'cPtr' to the address of the C-string that holds
      //	the text form of real 'real'.  'allocDSIndex' is set to the
      //	index of the generated string in 'usedAllocationDS_'.
      //	'sigFigs' tells how many significant digits are in 'real',
      //	or is '-1' to signify just to use C "%g" printf conversion.
      //	Texted wrapped in double-quotes of 'shouldQuote' == 'true'.
      //	Returns how many bytes were used.
      size_t	realToText	(const char*&		cPtr,
				 int&			allocDSIndex,
				 spFloat_ty		real,
				 int			sigFigs,
				 bool			shouldQuote	= false
				);

      //  PURPOSE:  To set 'cPtr' to the address of the C-string that holds the
      //	text form of complex number 'real' +i*'imaginary' according
      //	to 'howStringify'.  'allocDSIndex' is set to the index of the
      //	generated string in 'usedAllocationDS_'.  'realSigFigs' and
      //	'imagSigFigs' tells how many significant digits are in 'real'
      //	and 'imaginary' respectively, or are '-1' to signify just to
      //	use C "%g" printf conversion.  Returns how many bytes and
      //	UTF-8 Unicode chars were used.
      ByteAndCharCount
		complexToText	(const char*&		cPtr,
				 int&			allocDSIndex,
				 spFloat_ty		real,
				 int			realSigFigs,
				 spFloat_ty		imaginary,
				 int			imagSigFigs,
				 howStringify_ty	howStringify
				);

      //  PURPOSE:  To record in '*this' the C-string pointed to by 'sourceCPtr'
      //	printed according to 'howStringify'.  No return value.
      ByteAndCharCount
		stringToText	(const char*&		cPtr,
				 int&			allocDSIndex,
				 howStringify_ty	howStringify,
				 const char*		sourceCPtr,
				 size_t			numBytes,
				 size_t			numUnicodeChars,
				 size_t			numEscapedChars
				);

      //  PURPOSE:  To set 'cPtr' to the address of the C-string that holds
      //	the text form of unary expression 'textMe' according to
      //	'howStringify'.  'allocDSIndex' is set to the index of the
      //	generated string in 'usedAllocationDS_' .  Returns byte and
      //	Unicode char counts.
      ByteAndCharCount
		unaryExprToText	(const char*&		cPtr,
				 int&			allocDSIndex,
				 const Identity&	textMe,
      				 howStringify_ty	howStringify,
				 const Identity*	contextPtr
				);

      //  PURPOSE:  To set 'cPtr' to the address of the C-string that holds
      //	the text form of binary expression 'textMe' according to
      //	'howStringify'.  'allocDSIndex' is set to the index of the
      //	generated string in 'usedAllocationDS_' .  Returns byte and
      //	Unicode char counts.
      ByteAndCharCount
		binaryExprToText(const char*&		cPtr,
				 int&			allocDSIndex,
				 const Identity&	textMe,
      				 howStringify_ty	howStringify,
				 const Identity*	contextPtr
				);

      //  PURPOSE:  To set 'cPtr' to the address of the C-string that holds
      //	the text form of concept 'textMe' according to 'howStringify'.
      //	'allocDSIndex' is set to the index of the generated string in
      //	'usedAllocationDS_' .  'conceptPtr' holds the address of the
      //	current computational context, or 'nullptr' if there is none.
      //	Returns byte and Unicode char counts.
      ByteAndCharCount
		conceptToText	(const char*&		cPtr,
				 int&			allocDSIndex,
				 const Identity&	textMe,
      				 howStringify_ty	howStringify,
				 const BeingDescribed*	beingDescribedPtr,
				 const Identity*	contextPtr
				);

      //  PURPOSE:  To set 'cPtr' to the address of the C-string that holds
      //	the text form of 'textMe' according to 'howStringify'.
      //	'allocDSIndex' is set to the index of the generated string
      //	in 'usedAllocationDS_' if a generated string is in it, or
      //	set to '-1' otherwise.  Returns counts of bytes and Unicode
      //	chars in string (not including ending '\0').
      ByteAndCharCount
		toText		(const char*&		cPtr,
				 int&			allocDSIndex,
				 const Identity&	textMe,
      				 howStringify_ty	howStringify,
				 const BeingDescribed*	beingDescribedPtr
								   = nullptr,
				 const Identity*	contextPtr = nullptr
				);

    public :
      //  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
      //  PURPOSE:  To initialize '*this' to an empty string.  No parameters.
      //	No return value.
      IdentityTextizer		();

      //  PURPOSE:  To initialize '*this' to represent the text form of
      //	'textMe' according to 'howStringify'.  'contexPtr' holds the
      //	address of the computational context if one is given, or
      //	'nullptr' otherwise.
      IdentityTextizer		(const Identity*	contextPtr,
				 const Identity&	textMe,
      				 howStringify_ty	howStringify
							= SP_STRINGIFY
				);

      //  PURPOSE:  To initialize '*this' to represent the filling-in of
      //  	template string 'formatCPtr' 
      IdentityTextizer		(howStringify_ty	howStringify,
				 const Identity*	contextPtr,
				 const char*		formatCPtr,
      				 ...
				);

      ~IdentityTextizer		();

      //  V.  Accessors:
      //  PURPOSE:  To return the numbers of bytes and Unicode chars (not
      //	 including ending '\0').  No parameters.
      const ByteAndCharCount&
		getCounts	()
				const
				{
				  return(counts_);
				}

      //  PURPOSE:  To return the number of bytes (not including ending '\0').
      //	No parameters.
      size_t	getNumBytes	()
      				const
				{
				  return(counts_.getNumBytes());
				}

      //  PURPOSE:  To return the number of Unicode chars (not including
      //	 ending '\0').  No parameters.
      size_t	getNumUnicodeChars
				()
				const
				{
				  return(counts_.getNumUnicodeChars());
				}

      //  PURPOSE:  To return the address of the C-string as a const char*.
      //	No parameters.
      const char*
		getCPtr		()
				const
				{ return(cPtr_); }

      //  VI.  Mutators:
      //  PURPOSE:  To clear '*this' to represent an empty string.
      //	No parameters.  No return value.
      void	clear		();

      //  PURPOSE:  To capitalize the first character of '*this'.  No
      //	parameters.  Returns reference to '*this'.
      IdentityTextizer&
		capitalize	();

      //  PURPOSE:  To append byte 'c' to the end of '*this'.  NOTE: 'c'
      //	may only be a portion of the multi-byte UTF-8 char.
      //	Returns reference to '*this'.
      IdentityTextizer&
		operator+=	(char	c
				);

      //  PURPOSE:  To append C-string 'cPtr' to the end of '*this'.  Returns
      //	reference to '*this'.
      IdentityTextizer&
		operator+=	(const char*	cPtr
				);

      //  PURPOSE:  To append the 'SP_STRINGIFY' representation of 'textMe'
      //	to '*this'.  Returns reference to '*this'.
      IdentityTextizer&
		operator+=	(const Identity&	textMe
				);

      //  PURPOSE:  To append the string in 'string' to the end of '*this'.
      //	Returns reference to '*this'.
      IdentityTextizer&
		operator+=	(const IdentityTextizer&	string
				);

      //  VII.  Methods that do main and misc work of class:
      //  PURPOSE:  To print to 'charArray' with 'charArrayLen' available bytes
      //	the 'sigFigs' digits of spFloat_ty value 'value'.  'cPtr' is
      //	advanced to the end of the string (the '\0' char).  'sigFigs'
      //	tells how many significant digits are in 'real', or is '-1' to
      //	signify just to use C "%g" printf conversion.  Returns how
      //	many bytes were used (not including ending '\0').
      static
      size_t	printFloat	(char*&			cPtr,
				 size_t			charArrayLen,
				 spFloat_ty		value,
				 int			sigFigs
				);

      //  PURPOSE:  To attempt to write() '*this' to file descriptor 'fd',
      //	which has optional name pointed to by 'filePathNameCPtr'.
      //	Returns number of _bytes_ written.
      size_t	write		(int		fd,
				 const char*	filePathNameCPtr
						= nullptr
      				);

      //  PURPOSE:  To attempt to write() '*this' followed by '\n' to file
      //	descriptor 'fd', which has optional name pointed to by
      //	'filePathNameCPtr'.  Returns number of _bytes_ written.
      size_t	writeLn		(int		fd,
				 const char*	filePathNameCPtr
						= nullptr
      				);

      //  PURPOSE:  To attempt to print '*this' to 'stdout'.  Returns number
      //	of _bytes_ written.
      size_t	print		()
      				const
				{
				  return(printf("%s",getCPtr()));
				}

      //  PURPOSE:  To attempt to print '*this' to 'stdout', followed by '\n'.
      //	Returns number of _bytes_ written.
      size_t	printLn		()
      				const
				{
				  return(printf("%s\n",getCPtr()));
				}

      //  PURPOSE:  To attempt to print '*this' to 'outFilePtr'.  Returns
      //	number of _bytes_ written.
      size_t	fprint		(FILE*		outFilePtr
				)
				const
				{
				  return(fprintf(outFilePtr,"%s",getCPtr()));
				}

      //  PURPOSE:  To attempt to print '*this' to 'outFilePtr', followed by
      //	'\n'.  Returns number of _bytes_ written.
      size_t	fprintLn	(FILE*		outFilePtr
				)
				const
				{
				  return(fprintf(outFilePtr,"%s\n",getCPtr()));
				}

    };
