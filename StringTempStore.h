/*-------------------------------------------------------------------------*
 *---									---*
 *---		StringTempStore.h					---*
 *---									---*
 *---	    This file declares a class that holds strings temporarily.	---*
 *---									---*
 *---		    This file is classified as: DECLASSIFIED		---*
 *---			Applied Philosophy of Science			---*
 *---									---*
 *---	----	----	----	----	----	----	----	-----	---*
 *---									---*
 *---	Version 9a		2017 September 30	Joseph Phillips	---*
 *---									---*
 *-------------------------------------------------------------------------*/

    class		StringTempStore
    {

      //  -1:  Internal types:
      //  PURPOSE:  To hold the length and ptr address of a C-string.
      class		SizeTConstCPtrPair
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the length of a string.
	size_t			length_;

	//  PURPOSE:  To hold the ptr address of a C-string.
	const char*		cPtr_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	SizeTConstCPtrPair	();

      protected :
      	//  III.  Protected methods:

      public :
      	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note a string of length 'newLen'
	//	starts at address 'newCPtr'.  No return value.
	SizeTConstCPtrPair	(size_t		newLen,
				 const char*	newCPtr
				) :
				length_(newLen),
				cPtr_(newCPtr)
				{ }

	//  PURPOSE:  To make '*this' a copy of 'source'.  No return value.
	SizeTConstCPtrPair	(const SizeTConstCPtrPair&	source
				) :
				length_(source.getLength()),
				cPtr_(source.getCPtr())
				{ }

        //  PURPOSE:  To release the resources of '*this', make '*this' a copy
	//	of 'source', and return a reference to '*this'.
	SizeTConstCPtrPair&
		operator=	(const SizeTConstCPtrPair&	source
				)
				{
				  //  I.  Application validity check:
				  if  (this == &source)
				  {
				    return(*this);
				  }

				  //  II.  Release resources of '*this':

				  //  III.  Copy 'source':
				  length_	= source.getLength();
				  cPtr_		= source.getCPtr();

				  //  IV.  Return reference to '*this':
				  return(*this);
				}

	//  V.  Accessors:
	//  PURPOSE:  To hold the length of a string.
	size_t	getLength	()
				const
				{ return(length_); }

	//  PURPOSE:  To hold the ptr address of a C-string.
	const char*
		getCPtr		()
				const
				{ return(cPtr_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc work of class:
	//  PURPOSE:  To return 'true' if '*this' should be ordered before
	//	'rhs', or 'false' otherwise.
	bool	operator<	(const SizeTConstCPtrPair&	rhs
				)
				const
				{
				  if  (getLength() < rhs.getLength())
				  {
				    return(true);
				  }

				  if  (getLength() > rhs.getLength())
				  {
				    return(false);
				  }

				  return( strcmp(getCPtr(),rhs.getCPtr()) < 0);
				}

	//  PURPOSE:  To return 'true' if '*this' is equivalent to
	//	'rhs', or 'false' otherwise.
	bool	operator==	(const SizeTConstCPtrPair&	rhs
				)
				const
				{
				  if  ( (getLength() == rhs.getLength())  &&
				      	(strcmp(getCPtr(),rhs.getCPtr()) == 0)
				      )
				  {
				    return(true);
				  }

				  return(false);
				}
      };

    public :
      //  0.  Constants:
      enum
      {
	DEFAULT_INIT_LEN	= 4096 - 2 * sizeof(void*)
      };

    private :
      //  I.  Member vars:
      //  PURPOSE:  To hold the length of 'nameArrayCPtr_'
      sharedStrInd_ty		nameArrayLen_;

      //  PURPOSE:  To hold the index of the first unused char.
      sharedStrInd_ty		nameArrayJustBeyondEndIndex_;

      //  PURPOSE:  To point to the read/write array of names.
      char*			nameArrayCPtr_;

      //  PURPOSE:  To point to the read-only array of names.
      const char*		constNameArrayCPtr_;

      //  PURPOSE:  To hold the indexes of the strings already in '*this' store.
      std::map<const char*,sharedStrInd_ty,ConstCPtrCompStruct>
				cPtrToIndexMap_;

      //  II.  Disallowed auto-generated methods:
      //  No default constructor:
      StringTempStore		();

      //  No copy constructor:
      StringTempStore		(const StringTempStore&
				);

      //  No copy assignment op:
      StringTempStore&
		operator=	(const StringTempStore&
				);

    protected :
      //  III.  Protected methods:
      //  PURPOSE:  To return the non-const address to where the strings are.
      //	No parameters.
      char*	getNameArrayCPtr()
				const
				{ return(nameArrayCPtr_); }

      //  PURPOSE:  To return the number of strings stored in '*this'.
      size_t	getNumStrings	()
				const
				{
				  return(cPtrToIndexMap_.size());
				}

      //  PURPOSE:  To return an iterator to the beginning of the map from
      //	c-strings to their indexes.
      std::map<const char*,sharedStrInd_ty,ConstCPtrCompStruct>::const_iterator
		getMapBeginIter	()
				const
				{
				  return(cPtrToIndexMap_.begin());
				}

      //  PURPOSE:  To return an iterator to just beyond the end of the map from
      //	c-strings to their indexes.
      std::map<const char*,sharedStrInd_ty,ConstCPtrCompStruct>::const_iterator
		getMapEndIter	()
				const
				{
				  return(cPtrToIndexMap_.end());
				}

      //  PURPOSE:  To set the length of 'nameArrayCPtr_' to 'newLen'.
      //	No return value.
      void	setNameArrayLen	(sharedStrInd_ty	newLen
				)
				{
				  nameArrayJustBeyondEndIndex_	= newLen;
				}

      //  PURPOSE:  To set the beginning of the array of strings to 'cPtr'.
      //	No return value.
      void	setNameArrayCPtr(char*	cPtr
      				)
				{
				  constNameArrayCPtr_	= 
				  nameArrayCPtr_	= cPtr;
				}

      //  PURPOSE:  To note that there is a string at index 'index'.  No return
      //	value.
      void	noteStringAt	(entryPartialAddress_ty	index
      				)
				{
				  cPtrToIndexMap_[getText() + index]	= index;
				}

    public :
      //  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
      //  PURPOSE:  To initialize '*this' to hold strings of total length
      //	'initLen' bytes.  No return value.
      StringTempStore		(sharedStrInd_ty	initLen
				);

      //  PURPOSE:  To initialize '*this' as a read-only string store that
      //	contains 'newTextLen' chars of strings pointed to by
      //	'newTextLenCPtr'.  No return value.
      StringTempStore		(sharedStrInd_ty	newTextLen,
      				 const char*		newTextLenCPtr
				) :
				nameArrayLen_(newTextLen),
				nameArrayJustBeyondEndIndex_(newTextLen),
				nameArrayCPtr_(nullptr),
				constNameArrayCPtr_(newTextLenCPtr),
				cPtrToIndexMap_()
				{ }

      //  PURPOSE:  To release the resources of '*this'.  No parameters.
      //	No return value.
      virtual
      ~StringTempStore		()
    				{
				  free(nameArrayCPtr_);
				}

      //  V.  Accessors:
      //  PURPOSE:  To return the address of the array of strings as a
      //	read-only address.
      const char*
		getText		()
				const
				{ return(constNameArrayCPtr_); }

      //  PURPOSE:  To return the length of the array of strings to which
      //	'getText()' points.
      sharedStrInd_ty
		getTextLen	()
				const
				{ return(nameArrayJustBeyondEndIndex_); }

      //  VI.  Mutators:

      //  VII.  Methods that do main and misc. work of class:
      //  PURPOSE:  To return the length of '*this' section when expressed in
      //  	an object file.
      denominator_ty
		getObjLen	()
				const;

      //  PURPOSE:  To return 'true' if 'rhs' is equivalent to '*this' or
      //	'false' otherwise.  (NOTE: This method and derived methods
      //	 are primarily intended to help with debugging.)
      bool	operator==	(const StringTempStore&	rhs
				)
				const;

      //  PURPOSE:  To store 'cPtr' of length 'len'.  Sets 'index' to index
      //	at which it is stored and returns internal address at which it
      //	stores copy of string.
      const char*
		storeCPtr	(const char*		cPtr,
				 sharedStrInd_ty	len,
				 sharedStrInd_ty&	index
				);

      //  PURPOSE:  To store the string pointed to by 'cPtr' in the shared
      //	string section.  Sets 'index' to index at which it is
      //	stored and returns address of internally stored string.
      const char*
		storeCPtr	(const char*		cPtr,
				 sharedStrInd_ty&	index
				);

      //  PURPOSE:  To store 'cPtr' of length 'len'.  Returns index at
      //	which it is stored.
      sharedStrInd_ty
		storeIndex	(const char*		cPtr,
				 sharedStrInd_ty	len
				);

      //  PURPOSE:  To store 'cPtr'.  Returns index at which it is stored.
      sharedStrInd_ty
		storeIndex	(const char*		cPtr
				);

      //  PURPOSE:  To return 'true' if the string pointed to by 'cPtr' is in
      //  	'*this' store, or 'false' otherwise.  If string is found then
      //	'index' is set to its location.
      bool	didFindIndex	(const char*		cPtr,
				 sharedStrInd_ty&	index
				)
				const;

      //  PURPOSE:  To return the address of the string held at 'index'.
      const char*
		get		(sharedStrInd_ty	index
				)
				const
				{
				  return(constNameArrayCPtr_ + index);
				}

      //  PURPOSE:  To reset '*this' so that it stores no strings.  No
      //	return value.
      void	reset		()
				{
				  nameArrayJustBeyondEndIndex_	= 0;
				  cPtrToIndexMap_.clear();
				}

    };
