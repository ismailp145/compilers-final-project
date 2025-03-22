/*-------------------------------------------------------------------------*
 *---									---*
 *---		IdentityArray.h						---*
 *---									---*
 *---	    This file declares a class for holding a size-aware array 	---*
 *---	of Identity instances.						---*
 *---									---*
 *---		    This file is classified as: DECLASSIFIED		---*
 *---			Applied Philosophy of Science			---*
 *---									---*
 *---	----	----	----	----	----	----	----	-----	---*
 *---									---*
 *---	Version 9a		2017 August 6		Joseph Phillips	---*
 *---									---*
 *-------------------------------------------------------------------------*/

    class	IdentityArray
    {
      //  0.  Constants and internal types:
      enum
      {
	//  PURPOSE:  To keep track of the default internal size allocated size.
	INITIAL_CAPACITY		= 4
      };
      
      //  I.  Member vars:
      //  PURPOSE:  To hold the first 'INITIAL_CAPACITY' initial values, in a
      //	compressed form.
      uint8_t			initialMemory_
					[INITIAL_CAPACITY *
					 Identity::COMPRESSED_SIZE
					];

      //  PURPOSE:  To point to the memory for elements beyond the first
      //	'INITIAL_CAPACITY'.
      uint8_t*			auxElementMemPtr_;
      

      //  PURPOSE:  To hold the current data-structure capacity.
      size_t			capacity_;

      //  PURPOSE:  To hold the current number of stored elements.
      size_t			numElements_;

      //  II.  Disallowed auto-generated methods:

    protected :
      //  III.  Protected methods:

    public :
      //  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
      //  PURPOSE:  To initialize '*this' array to hold 'INITIAL_CAPACITY'
      //	'null_' instances.  No parameters.
      IdentityArray		();

      //  PURPOSE:  To initialize '*this' array to hold the values in list
      //	'list' if it is a VectorList, or 'INITIAL_CAPACITY' 'null_'
      //	instances if 'list' is 'null_'.
      IdentityArray		(const Identity&	list
				);

      //  PURPOSE:  To release the resources of '*this'.  No parameters.  No
      //	return value.
      ~IdentityArray		()
      				{
				  free(auxElementMemPtr_);
				}

      //  V.  Accessors:
      //  PURPOSE:  To hold the current data-structure capacity.
      size_t	getCapacity	()
				const
				{ return(capacity_); }

      //  PURPOSE:  To hold the current number of stored elements.
      size_t	getNumElements	()
				const
				{ return(numElements_); }

      //  PURPOSE:  To set 'id' to the 'i'-th element of '*this' array.  No
      //  	return value.
      void	obtain		(size_t		i,
				 Identity&	id
				)
				const;

      //  VI.  Mutators:
      //  PURPOSE:  To store 'id' in the 'i'-th element of '*this' array.  No
      //  	return value.
      void	set		(size_t			i,
				 const Identity&	id
				);

      //  VII.  Methods that do main and misc. work of class:
      //  PURPOSE:  To erase everything in '*this' store.  No parameters.  No
      //  	return value.
      void	clear		();

    };
