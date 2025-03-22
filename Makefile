CXX			= /usr/bin/g++

HEADERS			= headers.h					\
			  CPtrCompStruct.h				\
			  StringTempStore.h				\
			  Identity.h					\
			  IdentityArray.h				\
			  IdentityStaticVars.h    			\
			  IdentityTextizer.h    			\
			  PotentialVariable.h				\
			  PotentialInstruction.h			\
			  CompileContext.h				\
			  KnowledgeBase.h				\
			  ParseTreeNode.h

SOURCE			= editMe.cpp

OBJECTS			= $(SOURCE:.cpp=.o)

MAIN_OBJECTS		= StringTempStore.o				\
			  Identity.o					\
			  IdentityArray.o				\
			  IdentityStaticVars.o    			\
			  IdentityTextizer.o    			\
			  PotentialInstruction.o			\
			  CompileContext.o				\
			  ParseTreeNode.o				\
			  KnowledgeBase.o				\
			  main.o					\
			  structProc.tab.o				\
			  structProc_token.o

compiler		: $(OBJECTS) $(MAIN_OBJECTS)
			$(CXX) -g -std=c++17 -o $@ $(OBJECTS) $(MAIN_OBJECTS)

$(OBJECTS)		: $(HEADERS) $(SOURCE)
			$(CXX) -g -c -std=c++17 -o $@ $*.cpp

.PHONY			: clean
clean:
	rm compiler editMe.o
