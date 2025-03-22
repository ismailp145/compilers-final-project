/*-------------------------------------------------------------------------*
 *---									---*
 *---		CPtrCompStruct.h					---*
 *---									---*
 *---	    This file declares a struct that holds a method that	---*
 *---	compares two C strings.						---*
 *---									---*
 *---		    This file is classified as: DECLASSIFIED		---*
 *---			Applied Philosophy of Science			---*
 *--									---*
 *---	----	----	----	----	----	----	----	----	---*
 *---									---*
 *---	Version 9a		2023 May 18		Joseph Phillips	---*
 *---							Jakub Zywicki	---*
 *---									---*
 *-------------------------------------------------------------------------*/



  struct	CPtrCompStruct
  {
    bool operator	()	(char*	lhsPtr,
		    		 char*	rhsPtr
				)
	    			const
				{
				  return( strcmp(lhsPtr,rhsPtr) < 0 );
				}
  };

  struct	ConstCPtrCompStruct
  {
    bool operator	()	(const char*	lhsPtr,
		    		 const char*	rhsPtr
				)
	    			const
				{
				  return( strcmp(lhsPtr,rhsPtr) < 0 );
				}
  };
