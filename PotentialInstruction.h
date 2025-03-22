/*-------------------------------------------------------------------------*
 *---									---*
 *---		PotentialInstruction.h					---*
 *---									---*
 *---	    This file declares classes that represent potential		---*
 *---	instructions in the virtual machine code.			---*
 *---									---*
 *---	----	----	----	----	----	----	----	-----	---*
 *---									---*
 *---	Version 9a		2016 December 23	Joseph Phillips	---*
 *---									---*
 *---				2017 September 5	Joseph Phillips	---*
 *---									---*
 *---	    Moved to code KnowledgeBase/ subdirectory and kb namespace.	---*
 *---									---*
 *-------------------------------------------------------------------------*/

//  PURPOSE:  To represent the opcode for the notAnOp pseudo-instruction.
extern
const SpvmOp		notAnOp;
 
      //  PURPOSE:  To represent the opcode for the loadRetSubj instruction.
      extern
      const SpvmOp		loadRetSubjOp;

      //  PURPOSE:  To represent the opcode for the dsClear instruction.
      extern
      const SpvmOp		dsClearOp;

      //  PURPOSE:  To represent the opcode for the nlistClear instruction.
      extern
      const SpvmOp		nlistClearOp;

      //  PURPOSE:  To represent the opcode for the iterAdvance instruction.
      extern
      const SpvmOp		iterAdvanceOp;

      //  PURPOSE:  To represent the opcode for the iterReset instruction.
      extern
      const SpvmOp		iterResetOp;

      //  PURPOSE:  To represent the opcode for the stdOutPrintOp instruction.
      extern
      const SpvmOp		stdOutPrintOp;

      //  PURPOSE:  To represent the opcode for the stdOutPrintLnOp instruction.
      extern
      const SpvmOp		stdOutPrintLnOp;
 
      //  PURPOSE:  To represent the opcode for the stdErrPrintOp instruction.
      extern
      const SpvmOp		stdErrPrintOp;

      //  PURPOSE:  To represent the opcode for the stdErrPrintLnOp instruction.
      extern
      const SpvmOp		stdErrPrintLnOp;
 
      //  PURPOSE:  To represent the opcode for the stdOutDescribeToJsonOp
      //	instruction.
      extern
      const SpvmOp		stdOutDescribeToJsonOp;

      //  PURPOSE:  To represent the opcode for the stdOutDescribeLnToJsonOp
      //	instruction.
      extern
      const SpvmOp		stdOutDescribeLnToJsonOp;
 
      //  PURPOSE:  To represent the opcode for the stdErrDescribeToJsonOp
      //	instruction.
      extern
      const SpvmOp		stdErrDescribeToJsonOp;

      //  PURPOSE:  To represent the opcode for the stdErrDescribeLnToJsonOp
      //	instruction.
      extern
      const SpvmOp		stdErrDescribeLnToJsonOp;
 
      //  PURPOSE:  To represent the opcode for the load instruction.
      extern
      const SpvmOp		loadOp;

      //  PURPOSE:  To represent the opcode for the intLoad instruction.
      extern
      const SpvmOp		intLoadOp;

      //  PURPOSE:  To represent the opcode for the ratLoad instruction.
      extern
      const SpvmOp		ratLoadOp;

      //  PURPOSE:  To represent the opcode for the realLoad instruction.
      extern
      const SpvmOp		realLoadOp;

      //  PURPOSE:  To represent the opcode for the cplxLoad instruction.
      extern
      const SpvmOp		cplxLoadOp;

      //  PURPOSE:  To represent the opcode for the ideaLoad instruction.
      extern
      const SpvmOp		ideaLoadOp;

      //  PURPOSE:  To represent the opcode for the addVarConst instruction.
      extern
      const SpvmOp		addVarConstOp;

      //  PURPOSE:  To represent the opcode for the intAddVarConst instruction.
      extern
      const SpvmOp		intAddVarConstOp;

      //  PURPOSE:  To represent the opcode for the ratAddVarConst instruction.
      extern
      const SpvmOp		ratAddVarConstOp;

      //  PURPOSE:  To represent the opcode for the realAddVarConst instruction.
      extern
      const SpvmOp		realAddVarConstOp;

      //  PURPOSE:  To represent the opcode for the cplxAddVarConst instruction.
      extern
      const SpvmOp		cplxAddVarConstOp;

      //  PURPOSE:  To represent the opcode for the cplxAddVarConst instruction.
      extern
      const SpvmOp		grpAddVarConstOp;

      //  PURPOSE:  To represent the opcode for the extAddVarConst instruction.
      extern
      const SpvmOp		extAddVarConstOp;

      //  PURPOSE:  To represent the opcode for the subVarConst instruction.
      extern
      const SpvmOp		subVarConstOp;

      //  PURPOSE:  To represent the opcode for the intSubVarConst instruction.
      extern
      const SpvmOp		intSubVarConstOp;

      //  PURPOSE:  To represent the opcode for the ratSubVarConst instruction.
      extern
      const SpvmOp		ratSubVarConstOp;

      //  PURPOSE:  To represent the opcode for the realSubVarConst instruction.
      extern
      const SpvmOp		realSubVarConstOp;

      //  PURPOSE:  To represent the opcode for the cplxSubVarConst instruction.
      extern
      const SpvmOp		cplxSubVarConstOp;

      //  PURPOSE:  To represent the opcode for the cplxSubVarConst instruction.
      extern
      const SpvmOp		grpSubVarConstOp;

      //  PURPOSE:  To represent the opcode for the extSubVarConst instruction.
      extern
      const SpvmOp		extSubVarConstOp;

      //  PURPOSE:  To represent the opcode for the mulVarConst instruction.
      extern
      const SpvmOp		mulVarConstOp;

      //  PURPOSE:  To represent the opcode for the intMulVarConst instruction.
      extern
      const SpvmOp		intMulVarConstOp;

      //  PURPOSE:  To represent the opcode for the ratMulVarConst instruction.
      extern
      const SpvmOp		ratMulVarConstOp;

      //  PURPOSE:  To represent the opcode for the realMulVarConst instruction.
      extern
      const SpvmOp		realMulVarConstOp;

      //  PURPOSE:  To represent the opcode for the cplxMulVarConst instruction.
      extern
      const SpvmOp		cplxMulVarConstOp;

      //  PURPOSE:  To represent the opcode for the sclMulVarConst instruction.
      extern
      const SpvmOp		sclMulVarConstOp;

      //  PURPOSE:  To represent the opcode for the grpMulVarConst instruction.
      extern
      const SpvmOp		grpMulVarConstOp;

      //  PURPOSE:  To represent the opcode for the copy instruction.
      extern
      const SpvmOp		copyOp;

      //  PURPOSE:  To represent the opcode for the intCopy instruction.
      extern
      const SpvmOp		intCopyOp;

      //  PURPOSE:  To represent the opcode for the ratCopy instruction.
      extern
      const SpvmOp		ratCopyOp;

      //  PURPOSE:  To represent the opcode for the realCopy instruction.
      extern
      const SpvmOp		realCopyOp;

      //  PURPOSE:  To represent the opcode for the cplxCopy instruction.
      extern
      const SpvmOp		cplxCopyOp;

      //  PURPOSE:  To represent the opcode for the ideaCopy instruction.
      extern
      const SpvmOp		ideaCopyOp;

      //  PURPOSE:  To represent the opcode for the addVarVar instruction.
      extern
      const SpvmOp		addVarVarOp;

      //  PURPOSE:  To represent the opcode for the intAddVarVar instruction.
      extern
      const SpvmOp		intAddVarVarOp;

      //  PURPOSE:  To represent the opcode for the ratAddVarVar instruction.
      extern
      const SpvmOp		ratAddVarVarOp;

      //  PURPOSE:  To represent the opcode for the realAddVarVar instruction.
      extern
      const SpvmOp		realAddVarVarOp;

      //  PURPOSE:  To represent the opcode for the cplxAddVarVar instruction.
      extern
      const SpvmOp		cplxAddVarVarOp;

      //  PURPOSE:  To represent the opcode for the cplxAddVarVar instruction.
      extern
      const SpvmOp		grpAddVarVarOp;

      //  PURPOSE:  To represent the opcode for the extAddVarVar instruction.
      extern
      const SpvmOp		extAddVarVarOp;

      //  PURPOSE:  To represent the opcode for the grpSubVarVar instruction.
      extern
      const SpvmOp		grpSubVarVarOp;

      //  PURPOSE:  To represent the opcode for the extSubVarVar instruction.
      extern
      const SpvmOp		extSubVarVarOp;

      //  PURPOSE:  To represent the opcode for the mulVarVar instruction.
      extern
      const SpvmOp		mulVarVarOp;

      //  PURPOSE:  To represent the opcode for the sclMulVarVar instruction.
      extern
      const SpvmOp		sclMulVarVarOp;

      //  PURPOSE:  To represent the opcode for the grpMulVarVar instruction.
      extern
      const SpvmOp		grpMulVarVarOp;

      //  PURPOSE:  To represent the opcode for the unary negation instruction.
      extern
      const SpvmOp		unaryNegOp;

      //  PURPOSE:  To represent the opcode for the exp instruction.
      extern
      const SpvmOp		expOp;
 
      //  PURPOSE:  To represent the opcode for the exp2 instruction.
      extern
      const SpvmOp		exp2Op;
 
      //  PURPOSE:  To represent the opcode for the exp10 instruction.
      extern
      const SpvmOp		exp10Op;
 
      //  PURPOSE:  To represent the opcode for the log instruction.
      extern
      const SpvmOp		logOp;
 
      //  PURPOSE:  To represent the opcode for the log2 instruction.
      extern
      const SpvmOp		log2Op;
 
      //  PURPOSE:  To represent the opcode for the log10 instruction.
      extern
      const SpvmOp		log10Op;
 
      //  PURPOSE:  To represent the opcode for the logicNot instruction.
      extern
      const SpvmOp		logicNotOp;
 
      //  PURPOSE:  To represent the opcode for the sin instruction.
      extern
      const SpvmOp		sinOp;
 
      //  PURPOSE:  To represent the opcode for the cos instruction.
      extern
      const SpvmOp		cosOp;
 
      //  PURPOSE:  To represent the opcode for the tan instruction.
      extern
      const SpvmOp		tanOp;
 
      //  PURPOSE:  To represent the opcode for the asin instruction.
      extern
      const SpvmOp		asinOp;
 
      //  PURPOSE:  To represent the opcode for the acos instruction.
      extern
      const SpvmOp		acosOp;
 
      //  PURPOSE:  To represent the opcode for the atan instruction.
      extern
      const SpvmOp		atanOp;
 
      //  PURPOSE:  To represent the opcode for the simplify instruction.
      extern
      const SpvmOp		simplifyOp;
 
      //  PURPOSE:  To represent the opcode for the isNull instruction.
      extern
      const SpvmOp		isNullOp;
 
      //  PURPOSE:  To represent the opcode for the strLen instruction.
      extern
      const SpvmOp		strLenOp;

      //  PURPOSE:  To represent the opcode for the strCapital instruction.
      extern
      const SpvmOp		strCapitalOp;

      //  PURPOSE:  To represent the opcode for the toString instruction.
      extern
      const SpvmOp		toStringOp;
 
      //  PURPOSE:  To represent the opcode for the toJson instruction.
      extern
      const SpvmOp		toJsonOp;

      //  PURPOSE:  To represent the opcode for the obtainStdPropAndArbAttr
      //	instruction.
      extern
      const SpvmOp		obtainStdPropAndArbAttrOp;

      //  PURPOSE:  To represent the opcode for the assertIsA instruction.
      extern
      const SpvmOp		assertIsAOp;
 
      //  PURPOSE:  To represent the opcode for the assertAIsA instruction.
      extern
      const SpvmOp		assertAIsAOp;
 
      //  PURPOSE:  To represent the opcode for the assertZIsA instruction.
      extern
      const SpvmOp		assertZIsAOp;
 
      //  PURPOSE:  To represent the opcode for the dsIsEmpty instruction.
      extern
      const SpvmOp		dsIsEmptyOp;
 
      //  PURPOSE:  To represent the opcode for the dsSize instruction.
      extern
      const SpvmOp		dsSizeOp;

      //  PURPOSE:  To represent the opcode for the dsDistinctCount
      //	instruction.
      extern
      const SpvmOp		dsDistinctCountOp;

      //  PURPOSE:  To represent the opcode for the dsInsertAOp instruction.
      extern
      const SpvmOp		dsInsertAOp;

      //  PURPOSE:  To represent the opcode for the dsInsertZOp instruction.
      extern
      const SpvmOp		dsInsertZOp;

      //  PURPOSE:  To represent the opcode for the dsInsertOp instruction.
      extern
      const SpvmOp		dsInsertOp;

      //  PURPOSE:  To represent the opcode for the dsCopy instruction.
      extern
      const SpvmOp		dsCopyOp;

      //  PURPOSE:  To represent the opcode for the listFirstItem instruction.
      extern
      const SpvmOp		listFirstItemOp;

      //  PURPOSE:  To represent the opcode for the listSecondItem instruction.
      extern
      const SpvmOp		listSecondItemOp;

      //  PURPOSE:  To represent the opcode for the listSort instruction.
      extern
      const SpvmOp		listSortOp;
 
      //  PURPOSE:  To represent the opcode for the vlistIsEmpty instruction.
      extern
      const SpvmOp		vlistIsEmptyOp;
 
      //  PURPOSE:  To represent the opcode for the vlistSize instruction.
      extern
      const SpvmOp		vlistSizeOp;
 
      //  PURPOSE:  To represent the opcode for the vlistSort instruction.
      extern
      const SpvmOp		vlistSortOp;
 
      //  PURPOSE:  To represent the opcode for the nlistIsEmpty instruction.
      extern
      const SpvmOp		nlistIsEmptyOp;
 
      //  PURPOSE:  To represent the opcode for the nlistSize instruction.
      extern
      const SpvmOp		nlistSizeOp;

      //  PURPOSE:  To represent the opcode for the nlistDistinctCount
      //	instruction.
      extern
      const SpvmOp		nlistDistinctCountOp;

      //  PURPOSE:  To represent the opcode for the nlistInsertAOp instruction.
      extern
      const SpvmOp		nlistInsertAOp;

      //  PURPOSE:  To represent the opcode for the nlistInsertZOp instruction.
      extern
      const SpvmOp		nlistInsertZOp;

      //  PURPOSE:  To represent the opcode for the nlistCopy instruction.
      extern
      const SpvmOp		nlistCopyOp;

      //  PURPOSE:  To represent the opcode for the nlistFirstItem instruction.
      extern
      const SpvmOp		nlistFirstItemOp;

      //  PURPOSE:  To represent the opcode for the nlistSecondItem instruction.
      extern
      const SpvmOp		nlistSecondItemOp;

      //  PURPOSE:  To represent the opcode for the nlistSort instruction.
      extern
      const SpvmOp		nlistSortOp;

      //  PURPOSE:  To represent the opcode for the mapIsEmpty instruction.
      extern
      const SpvmOp		mapIsEmptyOp;

      //  PURPOSE:  To represent the opcode for the mapSize instruction.
      extern
      const SpvmOp		mapSizeOp;

      //  PURPOSE:  To represent the opcode for the bagIsEmpty instruction.
      extern
      const SpvmOp		bagIsEmptyOp;

      //  PURPOSE:  To represent the opcode for the bagSize instruction.
      extern
      const SpvmOp		bagSizeOp;

      //  PURPOSE:  To represent the opcode for the iterIsAtEnd instruction.
      extern
      const SpvmOp		iterIsAtEndOp;

      //  PURPOSE:  To represent the opcode for the iterKey instruction.
      extern
      const SpvmOp		iterKeyOp;

      //  PURPOSE:  To represent the opcode for the iterValue instruction.
      extern
      const SpvmOp		iterValueOp;

      //  PURPOSE:  To represent the opcode for the iterEntry instruction.
      extern
      const SpvmOp		iterEntryOp;

      //  PURPOSE:  To represent the opcode for the instanceClassIter
      //	instruction.
      extern
      const SpvmOp		instanceClassIterOp;

      //  PURPOSE:  To represent the opcode for the classSuperclassIter
      //	instruction.
      extern
      const SpvmOp		classSuperclassIterOp;

      //  PURPOSE:  To represent the opcode for the classSubclassIter
      //	instruction.
      extern
      const SpvmOp		classSubclassIterOp;

      //  PURPOSE:  To represent the opcode for the classInstanceIter
      //	instruction.
      extern
      const SpvmOp		classInstanceIterOp;

      //  PURPOSE:  To represent the opcode for the dsIter instruction.
      extern
      const SpvmOp		dsIterOp;

      //  PURPOSE:  To represent the opcode for the nlistIter instruction.
      extern
      const SpvmOp		nlistIterOp;

      //  PURPOSE:  To represent the opcode for the print instruction.
      extern
      const SpvmOp		printOp;

      //  PURPOSE:  To represent the opcode for the printLn instruction.
      extern
      const SpvmOp		printLnOp;

      //  PURPOSE:  To represent the opcode for the parseFile instruction.
      extern
      const SpvmOp		parseFileOp;

      //  PURPOSE:  To represent the opcode for the saveMemoryImage instruction.
      extern
      const SpvmOp		saveMemoryImageOp;

      //  PURPOSE:  To represent the opcode for the importFormattedFile
      //	instruction.
      extern
      const SpvmOp		importFormattedFileOp;

      //  PURPOSE:  To represent the opcode for the div instruction.
      extern
      const SpvmOp		divOp;

      //  PURPOSE:  To represent the opcode for the intDiv instruction.
      extern
      const SpvmOp		intDivOp;

      //  PURPOSE:  To represent the opcode for the ratDiv instruction.
      extern
      const SpvmOp		ratDivOp;

      //  PURPOSE:  To represent the opcode for the realDiv instruction.
      extern
      const SpvmOp		realDivOp;

      //  PURPOSE:  To represent the opcode for the cplxDiv instruction.
      extern
      const SpvmOp		cplxDivOp;

      //  PURPOSE:  To represent the opcode for the sclDiv instruction.
      extern
      const SpvmOp		sclDivOp;

      //  PURPOSE:  To represent the opcode for the nonAnnotPow instruction.
      extern
      const SpvmOp		nonAnnotPowOp;

      //  PURPOSE:  To represent the opcode for the annotPow instruction.
      extern
      const SpvmOp		annotPowOp;

      //  PURPOSE:  To represent the opcode for the logicAnd instruction.
      extern
      const SpvmOp		logicAndOp;

      //  PURPOSE:  To represent the opcode for the logicOr instruction.
      extern
      const SpvmOp		logicOrOp;

      //  PURPOSE:  To represent the opcode for the atan2 instruction.
      extern
      const SpvmOp		atan2Op;
 
      //  PURPOSE:  To represent the opcode for the toAnnot instruction.
      extern
      const SpvmOp		toAnnotOp;
 
      //  PURPOSE:  To represent the opcode for the evalExpr instruction.
      extern
      const SpvmOp		evalExprOp;

      //  PURPOSE:  To represent the opcode for the solveFor instruction.
      extern
      const SpvmOp		solveForOp;

      //  PURPOSE:  To represent the opcode for the differentiate instruction.
      extern
      const SpvmOp		differentiateOp;

      //  PURPOSE:  To represent the opcode for the integrate instruction.
      extern
      const SpvmOp		integrateOp;

      //  PURPOSE:  To represent the opcode for the indefiniteIntegrate
      //	instruction.
      extern
      const SpvmOp		indefiniteIntegrateOp;

      //  PURPOSE:  To represent the opcode for the refEqual instruction.
      extern
      const SpvmOp		refEqualOp;

      //  PURPOSE:  To represent the opcode for the refNotEqual instruction.
      extern
      const SpvmOp		refNotEqualOp;

      //  PURPOSE:  To represent the opcode for the numEqual instruction.
      extern
      const SpvmOp		numEqualOp;

      //  PURPOSE:  To represent the opcode for the numNotEqual instruction.
      extern
      const SpvmOp		numNotEqualOp;

      //  PURPOSE:  To represent the opcode for the objEqual instruction.
      extern
      const SpvmOp		objEqualOp;

      //  PURPOSE:  To represent the opcode for the objNotEqual instruction.
      extern
      const SpvmOp		objNotEqualOp;

      //  PURPOSE:  To represent the opcode for the lesser instruction.
      extern
      const SpvmOp		lesserOp;

      //  PURPOSE:  To represent the opcode for the integer lesser instruction.
      extern
      const SpvmOp		intLesserOp;

      //  PURPOSE:  To represent the opcode for the rational lesser instruction.
      extern
      const SpvmOp		ratLesserOp;

      //  PURPOSE:  To represent the opcode for the real lesser instruction.
      extern
      const SpvmOp		realLesserOp;

      //  PURPOSE:  To represent the opcode for the string lesser instruction.
      extern
      const SpvmOp		strLesserOp;

      //  PURPOSE:  To represent the opcode for the annotated value lesser
      //	instruction.
      extern
      const SpvmOp		annotLesserOp;

      //  PURPOSE:  To represent the opcode for the lesserEqual instruction.
      extern
      const SpvmOp		lesserEqualOp;

      //  PURPOSE:  To represent the opcode for the integer lesserEqual
      //	instruction.
      extern
      const SpvmOp		intLesserEqualOp;

      //  PURPOSE:  To represent the opcode for the rational lesserEqual
      //	instruction.
      extern
      const SpvmOp		ratLesserEqualOp;

      //  PURPOSE:  To represent the opcode for the real lesserEqual
      //	instruction.
      extern
      const SpvmOp		realLesserEqualOp;

      //  PURPOSE:  To represent the opcode for the string lesserEqual
      //	instruction.
      extern
      const SpvmOp		strLesserEqualOp;

      //  PURPOSE:  To represent the opcode for the annotated value lesserEqual
      //	instruction.
      extern
      const SpvmOp		annotLesserEqualOp;

      //  PURPOSE:  To represent the opcode for the greater instruction.
      extern
      const SpvmOp		greaterOp;

      //  PURPOSE:  To represent the opcode for the integer greater instruction.
      extern
      const SpvmOp		intGreaterOp;

      //  PURPOSE:  To represent the opcode for the rational greater
      //	instruction.
      extern
      const SpvmOp		ratGreaterOp;

      //  PURPOSE:  To represent the opcode for the real greater instruction.
      extern
      const SpvmOp		realGreaterOp;

      //  PURPOSE:  To represent the opcode for the string greater instruction.
      extern
      const SpvmOp		strGreaterOp;

      //  PURPOSE:  To represent the opcode for the annotated value greater
      //	instruction.
      extern
      const SpvmOp		annotGreaterOp;

      //  PURPOSE:  To represent the opcode for the greaterEqual instruction.
      extern
      const SpvmOp		greaterEqualOp;

      //  PURPOSE:  To represent the opcode for the integer greaterEqual
      //	instruction.
      extern
      const SpvmOp		intGreaterEqualOp;

      //  PURPOSE:  To represent the opcode for the rational greaterEqual
      //	instruction.
      extern
      const SpvmOp		ratGreaterEqualOp;

      //  PURPOSE:  To represent the opcode for the real greaterEqual
      //	instruction.
      extern
      const SpvmOp		realGreaterEqualOp;

      //  PURPOSE:  To represent the opcode for the string greaterEqual
      //	instruction.
      extern
      const SpvmOp		strGreaterEqualOp;

      //  PURPOSE:  To represent the opcode for the annotated value
      //	greaterEqual instruction.
      extern
      const SpvmOp		annotGreaterEqualOp;

      //  PURPOSE:  To represent the opcode for the strConcat instruction.
      extern
      const SpvmOp		strConcatOp;

      //  PURPOSE:  To represent the opcode for the strPreUncat instruction.
      extern
      const SpvmOp		strPreUncatOp;

      //  PURPOSE:  To represent the opcode for the strPostUncat instruction.
      extern
      const SpvmOp		strPostUncatOp;

      //  PURPOSE:  To represent the opcode for the strPrefix instruction.
      extern
      const SpvmOp		strPrefixOp;

      //  PURPOSE:  To represent the opcode for the strSuffix instruction.
      extern
      const SpvmOp		strSuffixOp;

      //  PURPOSE:  To represent the opcode for the strHasPrefix instruction.
      extern
      const SpvmOp		strHasPrefixOp;

      //  PURPOSE:  To represent the opcode for the strHasSuffix instruction.
      extern
      const SpvmOp		strHasSuffixOp;

      //  PURPOSE:  To represent the opcode for the isInstanceOf instruction.
      extern
      const SpvmOp		isInstanceOfOp;

      //  PURPOSE:  To represent the opcode for the isSubclassOf instruction.
      extern
      const SpvmOp		isSubclassOfOp;

      //  PURPOSE:  To represent the opcode for the localGetOp instruction.
      extern
      const SpvmOp		localGetOp;

      //  PURPOSE:  To represent the opcode for the contextLocalGetOp
      //	instruction.
      extern
      const SpvmOp		contextLocalGetOp;

      //  PURPOSE:  To represent the opcode for the subGetOp instruction.
      extern
      const SpvmOp		subGetOp;

      //  PURPOSE:  To represent the opcode for the getOp instruction.
      extern
      const SpvmOp		getOp;

      //  PURPOSE:  Torepresent the opcode for the contextIsInstanceOfOp
      //	instruction.
      extern
      const SpvmOp		contextIsInstanceOfOp;

      //  PURPOSE:  Torepresent the opcode for the assertOp instruction.
      extern
      const SpvmOp		assertOp;

      //  PURPOSE:  Torepresent the opcode for the assertAOp instruction.
      extern
      const SpvmOp		assertAOp;

      //  PURPOSE:  Torepresent the opcode for the assertZOp instruction.
      extern
      const SpvmOp		assertZOp;

      //  PURPOSE:  To represent the opcode for the contextAssertVal
      //	instruction.
      extern
      const SpvmOp		contextAssertValOp;

      //  PURPOSE:  To represent the opcode for the dsDidInsertOp instruction.
      extern
      const SpvmOp		dsDidInsertOp;

      //  PURPOSE:  To represent the opcode for the dsDoesHaveOp instruction.
      extern
      const SpvmOp		dsDoesHaveOp;

      //  PURPOSE:  To represent the opcode for the dsDidRemoveOp instruction.
      extern
      const SpvmOp		dsDidRemoveOp;

      //  PURPOSE:  To represent the opcode for the vlistGet instruction.
      extern
      const SpvmOp		vlistGetOp;

      //  PURPOSE:  To represent the opcode for the nlistDidInsertOp
      //	instruction.
      extern
      const SpvmOp		nlistDidInsertOp;

      //  PURPOSE:  To represent the opcode for the nlistDoesHaveOp instruction.
      extern
      const SpvmOp		nlistDoesHaveOp;

      //  PURPOSE:  To represent the opcode for the nlistDidRemoveOp
      //	instruction.
      extern
      const SpvmOp		nlistDidRemoveOp;

      //  PURPOSE:  To represent the opcode for the nlistGet instruction.
      extern
      const SpvmOp		nlistGetOp;

      //  PURPOSE:  To represent the opcode for the mapPut instruction.
      extern
      const SpvmOp		mapPutOp;

      //  PURPOSE:  To represent the opcode for the mapGet instruction.
      extern
      const SpvmOp		mapGetOp;

      //  PURPOSE:  To represent the opcode for the bagCount instruction.
      extern
      const SpvmOp		bagCountOp;

      //  PURPOSE:  To represent the opcode for the instanceLocalPropIter
      //	instruction.
      extern
      const SpvmOp		instanceLocalPropIterOp;

      //  PURPOSE:  To represent the opcode for the instancePropIter
      //	instruction.
      extern
      const SpvmOp		instancePropIterOp;

      //  PURPOSE:  To represent the opcode for the externalCall instruction.
      extern
      const SpvmOp		externalCallOp;

      //  PURPOSE:  To represent the opcode for the strSubstr instruction.
      extern
      const SpvmOp		strSubstrOp;

      //  PURPOSE:  To represent the opcode for the vlistDidPut instruction.
      extern
      const SpvmOp		vlistDidPutOp;

      //  PURPOSE:  To represent the opcode for the nlistDidPut instruction.
      extern
      const SpvmOp		nlistDidPutOp;

      //  PURPOSE:  To represent the opcode for the definiteIntegrate
      //	instruction.
      extern
      const SpvmOp		definiteIntegrateOp;

      //  PURPOSE:  To represent the opcode for the callLinkForward instruction.
      extern
      const SpvmOp		callLinkForwardOp;

      //  PURPOSE:  To represent the opcode for the callLinkBackward instruction.
      extern
      const SpvmOp		callLinkBackwardOp;

      //  PURPOSE:  To represent the opcode for the storeArg instruction.
      extern
      const SpvmOp		storeArgOp;

      //  PURPOSE:  To represent the opcode for the storeArg instruction.
      extern
      const SpvmOp		storeArgOp;

      //  PURPOSE:  To return 'true' if 'potOp' is an addition, subtraction
      //	multiplication or division, or 'false' otherwise.
      inline
      bool	isArithmeticPotOp
				(const SpvmOp&	potOp
				)
      {
	//  I.  Application validity check:

	//  II.  Compute answer:
	bool	returnMe	= false;

	switch  ( potOp.getArgsField() )
	{
	case VAR_VAR_ARGS_FIELD :
	  returnMe = ((potOp.getOp() >= ADD_VAR_VAR_OP)	&&
		      (potOp.getOp() <= CPLX_MUL_VAR_VAR_OP)
		     );
	  break;

	case VAR_VAR_VAR_ARGS_FIELD :
	  returnMe = ( (potOp.getOp() == DIV_OP)	||
	  	       (potOp.getOp() == INT_DIV_OP)	||
		       (potOp.getOp() == MOD_OP)
		     );
	  break;

	default :
	  returnMe = false;
	  break;
	}

	//  III.  Finished:
	return(returnMe);
      }


      //  PURPOSE:  To return the string version of 'genOp'.
      extern
      SpvmOp	obtainStringFormOf
				(SpvmOp		genOp
				);


      //  PURPOSE:  To return the integer version of 'genOp'.
      extern
      SpvmOp	obtainIntegerFormOf
				(SpvmOp		genOp
				);


      //  PURPOSE:  To return the rational version of 'genOp'.
      extern
      SpvmOp	obtainRationalFormOf
				(SpvmOp		genOp
				);


      //  PURPOSE:  To return the real version of 'genOp'.
      extern
      SpvmOp	obtainRealFormOf(SpvmOp		genOp
				);


      //  PURPOSE:  To return the annotated version of 'genOp'.
      extern
      SpvmOp	obtainAnnotatedFormOf
				(SpvmOp		genOp
				);

      //  PURPOSE:  To return the var-const opcode that is equivalent to
      //  	var-var 'opCode' if one exists, or 'notAnOp' otherwise.
      SpvmOp	getEquivalentVarConstOpCode
				(SpvmOp		opCode
				);

      //  PURPOSE:  To return the inverse form of 'op'.
      SpvmOp	obtainInverse	(SpvmOp		op
				);

      class	PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the opcode of the potential instruction that
	//	'*this' instance represents.
	spvmOp_ty		potentialInstruct_;

	//  PURPOSE:  To hold how many bytes each argument should take.
	int			numBytesPerArg_;

	//  PURPOSE:  To hold 'true' if '*this' instruction should check the
	//	types of its operand before doing the operation, or 'false'
	//	otherwise.
	bool			shouldCheckOperandTypes_;

	//  PURPOSE:  To hold where '*this' instruction is in the SPVM code
	//	segment.
	spvmSingleSegAddr_ty	addr_;

	//  PURPOSE:  To serve as a identifier for '*this' instruction, if it
	//	is ever jumped-to.
	assemblyLabelIndex_ty	assemblyLabelIndex_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	PotentialInstruction	();

	//  No copy assignment op:
	PotentialInstruction&
		operator=	(const PotentialInstruction&
				);

      protected :
	//  III.  Protected methods:
	//  PURPOSE:  To optimize the chain of instructions in 'instrPtrList'.
	//	'context' gives the compile-time context.  No return value.
	static
	void	optimize	(CompileContext&	context,
				 std::list<PotentialInstruction*>&
							instrPtrList
				);

	//  PURPOSE:  To write into array of characters 'outString' of length
	//	'length' the goto-label for '*this' instruction, if there
	//	is one.  Writes the empty string into 'outString' if there is
	//	no goto-label for '*this' instruction.  Returns 'outString' as
	//	a C++ string.
	std::string
		generateLabelString
				(char*		outString,
				 int		length
				)
				const;

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note that operation proto-type
	//	'newOp' is to be done.  Operands should be checked at
	//	runtime if 'newShouldCheckOperandTypes' == 'true', or operands
	//	should not be checked otherwise.  No return value.
	PotentialInstruction	(spvmOp_ty	newOp,
				 bool		newShouldCheckOperandTypes
						= false
				) :
				potentialInstruct_(newOp),
				numBytesPerArg_(1),
				shouldCheckOperandTypes_
						(newShouldCheckOperandTypes),
				addr_(0x0),
				assemblyLabelIndex_(ASSEMBLY_LABEL_INDEX_NULL)
				{
				}

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	virtual
	~PotentialInstruction	();

	//  V.  Accessors:
	//  PURPOSE:  To return the opcode of the potential instruction that
	//	'*this' instance represents.  No parameters.
	spvmOp_ty
		getOp		()
				const
				{ return(potentialInstruct_); }

	//  PURPOSE:  To hold how many bytes each argument should take.
	int	getNumBytesPerArg
				()
				const
				{ return(numBytesPerArg_); }

	//  PURPOSE:  To return 'true' if '*this' instruction should check the
	//	types of its operand before doing the operation, or 'false'
	//	otherwise.  No parameters.
	bool	getShouldCheckOperandTypes
				()
				const
				{ return(shouldCheckOperandTypes_); }

	//  PURPOSE:  To return the 'spvmOpLenAndChkField_ty' field of the
	//  	op code for '*this' instruction.  No parameters.
	spvmOpLenAndChkField_ty
		getSpvmOpLenAndChkField
				()
				const
				{
				  return( getShouldCheckOperandTypes()
					  ? ( (getNumBytesPerArg() == 1)
					      ? ONE_LEN_CHK_FIELD
					      : TWO_LEN_CHK_FIELD
					    )
					  : ( (getNumBytesPerArg() == 1)
					      ? ONE_LEN_NO_CHK_FIELD
					      : TWO_LEN_NO_CHK_FIELD
					    )
					);
				}

	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	virtual
	argsField_ty
		getArgsField	()
				const
				{ return(ARGS_FIELD); }

	//  PURPOSE:  To return the op code of '*this'.  No parameters.
	uint16_t
		getOpCode	()
				const
				{
				  return( getArgsField()		|
					  getSpvmOpLenAndChkField()	|
					  getOp()
					);
				}

	//  PURPOSE:  To return a corresponding SpvmOp.  No parameters.
	SpvmOp	getSpvmOp	()
				const
				{
				  return(SpvmOp
					  (getArgsField(),
					   getOp()
					  )
					);
				}

	//  PURPOSE:  To return where '*this' instruction is in the SPVM code
	//	segment.  No parameters.
	spvmSingleSegAddr_ty
		getAddr		()
				const
				{ return(addr_); }

	//  PURPOSE:  To return the C++ address of the instruction whose virtual
	//	machine address should be written, or to return 'nullptr' if
	//	there is no such C++ address.  No parameters.
	virtual
	PotentialInstruction*
		getAddrInstructPtr
				()
				const
				{ return(nullptr); }

	//  PURPOSE:  To return then identifier for '*this' instruction, if it
	//	is ever jumped-to.  No parameters.
	assemblyLabelIndex_ty
		getAssemblyLabelIndex
				()
				const
				{ return(assemblyLabelIndex_); }

	//  PURPOSE:  To return the (optional) name of the label in '*this'
	//	instruction.
	virtual
	const std::string&
		getAddrNameStr	()
				const
				{ return(getDefaultAddrName()); }

	//  PURPOSE:  To return the default value of the (optional) name of the
	//	label in '*this' instruction.
	static
	const std::string&
		getDefaultAddrName
				();

	//  VI.  Mutators:
	//  PURPOSE:  To set the opcode of the potential instruction that
	//	'*this' instance represents to 'op'.  No return value.
	void	setOp		(spvmOp_ty	op
				)
				{ potentialInstruct_	= op; }

	//  PURPOSE:  To set how many bytes each argument should take to
	//	'newNumBytes'.  No parameters.
	void	setNumBytesPerArg
				(int	newNumBytes
				)
				{ numBytesPerArg_	= newNumBytes; }

	//  PURPOSE:  To note that '*this' instruction should check the types of
	//	types of its operand before doing the operation.  No return
	//	value.
	void	setShouldCheckOperandTypes
				()
				{ shouldCheckOperandTypes_	= true; }

	//  PURPOSE:  To set where '*this' instruction is in the SPVM code
	//	segment to 'newAddr'.  No return value.
	void	setAddr		(spvmSingleSegAddr_ty	newAddr
				)
				{ addr_ = newAddr; }

	//  PURPOSE:  To set the C++ address of the instruction whose virtual
	//	machine address should be written to 'newAddr', or to take no
	//	action if there is no such C++ address.  No return value.
	virtual
	void	setAddrInstructPtr
				(PotentialInstruction*	newAddr
				)
				{ }

	//  PURPOSE:  To set the identifier for '*this' instruction to
	//	'newLabel'.
	void	setAssemblyLabelIndex
				(assemblyLabelIndex_ty	newLabel
				)
				{ assemblyLabelIndex_	= newLabel; }

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	virtual
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{ }

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	virtual
	void	noteUsedVars	()
				{ }

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	virtual
	std::string
		toString	(const CompileContext&	context
				)
				const;

	//  PURPOSE:  To fill in the offset of goto and conditional goto
	//	instructions.  No return value.
	virtual
	void	fillInGotoOffset()
				{ }

	//  PURPOSE:  To append beginning instructions at end of the instruction
	//	chain in 'instrPtrList', where 'context' tells the compile-time
	//	context.  No return value.
	static
	void	start		(std::list<PotentialInstruction*>&
							instrPtrList,
				 CompileContext&	context
				);

	//  PURPOSE:  To append ending instructions at end of the instruction
	//	chain in 'instrPtrList', where the last value computed was
	//	placed in '*lastVarPtr'.  'context' tells the compile-time
	//	context.  No return value.
	static
	void	finish		(std::list<PotentialInstruction*>&
							instrPtrList,
				 PotentialVariable*	lastVarPtr,
				 CompileContext&	context
				);

	//  PURPOSE:  To assign false addresses to instructions and return a
	//	string representation of the instructions in 'instrPtrList'
	//	given compile-time context 'context'.
	static
	std::string
		toString	(std::list<PotentialInstruction*>&
							instrPtrList,
				 const CompileContext&	context
				);
      };


      class	VarPotentialInstruction : public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the variable.
	PotentialVariable*	varPtr_;

	//  II.  Disallowed auto-generated methods:

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note that operation
	//	'newOp' ought to be done on variable '*newVarPtr'.  No
	//	return value.
	VarPotentialInstruction	(spvmOp_ty		newOp,
				 PotentialVariable*	newVarPtr
				) :
				PotentialInstruction(newOp),
				varPtr_(newVarPtr)
				{
				}

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarPotentialInstruction()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(VAR_ARGS_FIELD); }

	//  PURPOSE:  To return the address of the destination variable.  No
	//	parameters.
	PotentialVariable*
		getVarPtr	()
				const
				{ return(varPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the address of the variable to 'varPtr'.
	//	No return value.
	void	setVarPtr	(PotentialVariable*	varPtr
				)
				{ varPtr_	= varPtr; }


	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (varPtr_ == replacePtr)
				  {
				    varPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  varPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

      };


      class	VarConstPotentialInstruction : public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the destination variable.
	PotentialVariable*	destVarPtr_;

	//  PURPOSE:  To hold the index of the knowledge base that has the
	//	constant that '*this' represents.
	kbRunIndex_ty		kbRunIndex_;

	//  PURPOSE:  To hold the index of the constant to load.
	constPoolIndex_ty	constPoolIndex_;

	//  II.  Disallowed auto-generated methods:

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note that operation
	//	'newOp' ought to be done on variable '*newDestVarPtr'
	//	and the variable indexed by the pair
	//	<'newKbRunIndex','newConstPoolIndex'>.  No return value.
	VarConstPotentialInstruction
				(spvmOp_ty		newOp,
				 PotentialVariable*	newDestVarPtr,
				 kbRunIndex_ty		newKbRunIndex,
				 constPoolIndex_ty	newConstPoolIndex
				) :
				PotentialInstruction(newOp),
				destVarPtr_(newDestVarPtr),
				kbRunIndex_(newKbRunIndex),
				constPoolIndex_(newConstPoolIndex)
				{
				}

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarConstPotentialInstruction
				()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(VAR_CONST_ARGS_FIELD); }

	//  PURPOSE:  To return the address of the destination variable.  No
	//	parameters.
	PotentialVariable*
		getDestVarPtr	()
				const
				{ return(destVarPtr_); }

	//  PURPOSE:  To return the index of the knowledge base that has the
	//	constant that '*this' represents.
	kbRunIndex_ty
		getKbRunIndex	()
				const
				{ return(kbRunIndex_); }

	//  PURPOSE:  To return the index of the constant to load.  No
	//	parameters.
	constPoolIndex_ty
		getConstPoolIndex
				()
				const
				{ return(constPoolIndex_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the address of the destination variable to
	//	'varPtr'.  No return value.
	void	setDestVarPtr	(PotentialVariable*	varPtr
				)
				{ destVarPtr_	= varPtr; }


	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (destVarPtr_ == replacePtr)
				  {
				    destVarPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  destVarPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

      };


      class	VarVarPotentialInstruction : public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the destination variable.
	PotentialVariable*	destVarPtr_;

	//  PURPOSE:  To hold the address of the first source variable.
	PotentialVariable*	src0VarPtr_;

	//  II.  Disallowed auto-generated methods:
	//  PURPOSE:  No default constructor:
	VarVarPotentialInstruction
				();

	//  PURPOSE:  No copy constructor:
	VarVarPotentialInstruction
				(const VarVarPotentialInstruction&
				);

	//  PURPOSE:  No copy assignment op:
	VarVarPotentialInstruction&
		operator=	(const VarVarPotentialInstruction&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To  initialize '*this' to note that operation
	//	'newOp' ought to be done on variables '*newDestVarPtr'
	//	and '*newSrc0VarPtr' in that order.  No return value.
	VarVarPotentialInstruction
				(spvmOp_ty		newOp,
				 PotentialVariable*	newDestVarPtr,
				 PotentialVariable*	newSrc0VarPtr
				) :
				PotentialInstruction
					(
					 newOp
					),
				destVarPtr_(newDestVarPtr),
				src0VarPtr_(newSrc0VarPtr)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarVarPotentialInstruction
				()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(VAR_VAR_ARGS_FIELD); }

	//  PURPOSE:  To return the address of the destination variable.  No
	//	parameters.
	PotentialVariable*
		getDestVarPtr	()
				const
				{ return(destVarPtr_); }

	//  PURPOSE:  To return the address of the first source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc0VarPtr	()
				const
				{ return(src0VarPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the address of the destination variable to
	//	'varPtr'.  No return value.
	void	setDestVarPtr	(PotentialVariable*	varPtr
				)
				{ destVarPtr_	= varPtr; }

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (destVarPtr_ == replacePtr)
				  {
				    destVarPtr_	= withPtr;
				  }

				  if  (src0VarPtr_ == replacePtr)
				  {
				    src0VarPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  destVarPtr_->noteIsUsed();
				  src0VarPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

      };


      class	VarVarVarPotentialInstruction : public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the destination variable.
	PotentialVariable*	destVarPtr_;

	//  PURPOSE:  To hold the address of the first source variable.
	PotentialVariable*	src0VarPtr_;

	//  PURPOSE:  To hold the address of the second source variable.
	PotentialVariable*	src1VarPtr_;

	//  II.  Disallowed auto-generated methods:
	//  PURPOSE:  No default constructor:
	VarVarVarPotentialInstruction();

	//  PURPOSE:  No copy constructor:
	VarVarVarPotentialInstruction
				(const VarVarVarPotentialInstruction&
				);

	//  PURPOSE:  No copy assignment op:
	VarVarVarPotentialInstruction&
		operator=	(const VarVarVarPotentialInstruction&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To  initialize '*this' to note that operation
	//	'newOp' ought to be done on variables '*newDestVarPtr',
	//	'*newSrc0VarPtr' and 'newSrc1VarPtr' in that order.  If
	//	'newShouldCheckOperands' is 'true' then these operands ought
	//	to be checked.  If 'newShouldCheckOperands' is 'false' the
	//	do not need to be checked.  No return value.
	VarVarVarPotentialInstruction
				(spvmOp_ty		newOp,
				 PotentialVariable*	newDestVarPtr,
				 PotentialVariable*	newSrc0VarPtr,
				 PotentialVariable*	newSrc1VarPtr,
				 bool			newShouldCheckOperands
				 			= false
				) :
				PotentialInstruction
						(newOp,
						 newShouldCheckOperands
						),
				destVarPtr_(newDestVarPtr),
				src0VarPtr_(newSrc0VarPtr),
				src1VarPtr_(newSrc1VarPtr)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarVarVarPotentialInstruction
				()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(VAR_VAR_VAR_ARGS_FIELD); }

	//  PURPOSE:  To return the address of the destination variable.  No
	//	parameters.
	PotentialVariable*
		getDestVarPtr	()
				const
				{ return(destVarPtr_); }

	//  PURPOSE:  To return the address of the first source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc0VarPtr	()
				const
				{ return(src0VarPtr_); }

	//  PURPOSE:  To return the address of the second source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc1VarPtr	()
				const
				{ return(src1VarPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the address of the destination variable to
	//	'varPtr'.  No return value.
	void	setDestVarPtr	(PotentialVariable*	varPtr
				)
				{ destVarPtr_	= varPtr; }

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (destVarPtr_ == replacePtr)
				  {
				    destVarPtr_	= withPtr;
				  }

				  if  (src0VarPtr_ == replacePtr)
				  {
				    src0VarPtr_	= withPtr;
				  }

				  if  (src1VarPtr_ == replacePtr)
				  {
				    src1VarPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  destVarPtr_->noteIsUsed();
				  src0VarPtr_->noteIsUsed();
				  src1VarPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

      };


      class	VarVarVarVarPotentialInstruction : public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the destination variable.
	PotentialVariable*	destVarPtr_;

	//  PURPOSE:  To hold the address of the first source variable.
	PotentialVariable*	src0VarPtr_;

	//  PURPOSE:  To hold the address of the second source variable.
	PotentialVariable*	src1VarPtr_;

	//  PURPOSE:  To hold the address of the third source variable.
	PotentialVariable*	src2VarPtr_;

	//  II.  Disallowed auto-generated methods:
	//  PURPOSE:  No default constructor:
	VarVarVarVarPotentialInstruction();

	//  PURPOSE:  No copy constructor:
	VarVarVarVarPotentialInstruction
				(const VarVarVarVarPotentialInstruction&
				);

	//  PURPOSE:  No copy assignment op:
	VarVarVarVarPotentialInstruction&
		operator=	(const VarVarVarVarPotentialInstruction&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  
	VarVarVarVarPotentialInstruction
				(spvmOp_ty		newOp,
				 PotentialVariable*	newDestVarPtr,
				 PotentialVariable*	newSrc0VarPtr,
				 PotentialVariable*	newSrc1VarPtr,
				 PotentialVariable*	newSrc2VarPtr,
				 bool			newShouldCheckOperands
				 			= false
				) :
				PotentialInstruction
						(newOp,
						 newShouldCheckOperands
						),
				destVarPtr_(newDestVarPtr),
				src0VarPtr_(newSrc0VarPtr),
				src1VarPtr_(newSrc1VarPtr),
				src2VarPtr_(newSrc2VarPtr)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarVarVarVarPotentialInstruction
				()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(VAR_VAR_VAR_VAR_ARGS_FIELD); }

	//  PURPOSE:  To return the address of the destination variable.  No
	//	parameters.
	PotentialVariable*
		getDestVarPtr	()
				const
				{ return(destVarPtr_); }

	//  PURPOSE:  To return the address of the first source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc0VarPtr	()
				const
				{ return(src0VarPtr_); }

	//  PURPOSE:  To return the address of the second source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc1VarPtr	()
				const
				{ return(src1VarPtr_); }

	//  PURPOSE:  To return the address of the third source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc2VarPtr	()
				const
				{ return(src2VarPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the address of the destination variable to
	//	'varPtr'.  No return value.
	void	setDestVarPtr	(PotentialVariable*	varPtr
				)
				{ destVarPtr_	= varPtr; }

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (destVarPtr_ == replacePtr)
				  {
				    destVarPtr_	= withPtr;
				  }

				  if  (src0VarPtr_ == replacePtr)
				  {
				    src0VarPtr_	= withPtr;
				  }

				  if  (src1VarPtr_ == replacePtr)
				  {
				    src1VarPtr_	= withPtr;
				  }

				  if  (src2VarPtr_ == replacePtr)
				  {
				    src2VarPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  destVarPtr_->noteIsUsed();
				  src0VarPtr_->noteIsUsed();
				  src1VarPtr_->noteIsUsed();
				  src2VarPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

      };


      class	VarVarVarVarVarPotentialInstruction :
			public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the destination variable.
	PotentialVariable*	destVarPtr_;

	//  PURPOSE:  To hold the address of the first source variable.
	PotentialVariable*	src0VarPtr_;

	//  PURPOSE:  To hold the address of the second source variable.
	PotentialVariable*	src1VarPtr_;

	//  PURPOSE:  To hold the address of the third source variable.
	PotentialVariable*	src2VarPtr_;

	//  PURPOSE:  To hold the address of the fourth source variable.
	PotentialVariable*	src3VarPtr_;

	//  II.  Disallowed auto-generated methods:
	//  PURPOSE:  No default constructor:
	VarVarVarVarVarPotentialInstruction();

	//  PURPOSE:  No copy constructor:
	VarVarVarVarVarPotentialInstruction
				(const VarVarVarVarVarPotentialInstruction&
				);

	//  PURPOSE:  No copy assignment op:
	VarVarVarVarVarPotentialInstruction&
		operator=	(const VarVarVarVarVarPotentialInstruction&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  
	VarVarVarVarVarPotentialInstruction
				(spvmOp_ty		newOp,
				 PotentialVariable*	newDestVarPtr,
				 PotentialVariable*	newSrc0VarPtr,
				 PotentialVariable*	newSrc1VarPtr,
				 PotentialVariable*	newSrc2VarPtr,
				 PotentialVariable*	newSrc3VarPtr,
				 bool			newShouldCheckOperands
				 			= false
				) :
				PotentialInstruction
						(newOp,
						 newShouldCheckOperands
						),
				destVarPtr_(newDestVarPtr),
				src0VarPtr_(newSrc0VarPtr),
				src1VarPtr_(newSrc1VarPtr),
				src2VarPtr_(newSrc2VarPtr),
				src3VarPtr_(newSrc3VarPtr)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarVarVarVarVarPotentialInstruction
				()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(VAR_VAR_VAR_VAR_VAR_ARGS_FIELD); }

	//  PURPOSE:  To return the address of the destination variable.  No
	//	parameters.
	PotentialVariable*
		getDestVarPtr	()
				const
				{ return(destVarPtr_); }

	//  PURPOSE:  To return the address of the first source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc0VarPtr	()
				const
				{ return(src0VarPtr_); }

	//  PURPOSE:  To return the address of the second source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc1VarPtr	()
				const
				{ return(src1VarPtr_); }

	//  PURPOSE:  To return the address of the third source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc2VarPtr	()
				const
				{ return(src2VarPtr_); }

	//  PURPOSE:  To return the address of the fourth source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc3VarPtr	()
				const
				{ return(src3VarPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the address of the destination variable to
	//	'varPtr'.  No return value.
	void	setDestVarPtr	(PotentialVariable*	varPtr
				)
				{ destVarPtr_	= varPtr; }

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (destVarPtr_ == replacePtr)
				  {
				    destVarPtr_	= withPtr;
				  }

				  if  (src0VarPtr_ == replacePtr)
				  {
				    src0VarPtr_	= withPtr;
				  }

				  if  (src1VarPtr_ == replacePtr)
				  {
				    src1VarPtr_	= withPtr;
				  }

				  if  (src2VarPtr_ == replacePtr)
				  {
				    src2VarPtr_	= withPtr;
				  }

				  if  (src3VarPtr_ == replacePtr)
				  {
				    src3VarPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  destVarPtr_->noteIsUsed();
				  src0VarPtr_->noteIsUsed();
				  src1VarPtr_->noteIsUsed();
				  src2VarPtr_->noteIsUsed();
				  src3VarPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

      };

/*
      class	VarVarVarVarVarVarPotentialInstruction :
			public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the destination variable.
	PotentialVariable*	destVarPtr_;

	//  PURPOSE:  To hold the address of the first source variable.
	PotentialVariable*	src0VarPtr_;

	//  PURPOSE:  To hold the address of the second source variable.
	PotentialVariable*	src1VarPtr_;

	//  PURPOSE:  To hold the address of the third source variable.
	PotentialVariable*	src2VarPtr_;

	//  PURPOSE:  To hold the address of the fourth source variable.
	PotentialVariable*	src3VarPtr_;

	//  PURPOSE:  To hold the address of the fifth source variable.
	PotentialVariable*	src4VarPtr_;

	//  II.  Disallowed auto-generated methods:
	//  PURPOSE:  No default constructor:
	VarVarVarVarVarVarPotentialInstruction();

	//  PURPOSE:  No copy constructor:
	VarVarVarVarVarVarPotentialInstruction
				(const VarVarVarVarVarPotentialInstruction&
				);

	//  PURPOSE:  No copy assignment op:
	VarVarVarVarVarVarPotentialInstruction&
		operator=	(const VarVarVarVarVarPotentialInstruction&
				);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  
	VarVarVarVarVarVarPotentialInstruction
				(spvmOp_ty		newOp,
				 PotentialVariable*	newDestVarPtr,
				 PotentialVariable*	newSrc0VarPtr,
				 PotentialVariable*	newSrc1VarPtr,
				 PotentialVariable*	newSrc2VarPtr,
				 PotentialVariable*	newSrc3VarPtr,
				 PotentialVariable*	newSrc4VarPtr,
				 bool			newShouldCheckOperands
				 			= false
				) :
				PotentialInstruction
						(newOp,
						 newShouldCheckOperands
						),
				destVarPtr_(newDestVarPtr),
				src0VarPtr_(newSrc0VarPtr),
				src1VarPtr_(newSrc1VarPtr),
				src2VarPtr_(newSrc2VarPtr),
				src3VarPtr_(newSrc3VarPtr),
				src4VarPtr_(newSrc4VarPtr)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarVarVarVarVarVarPotentialInstruction
				()
				{ }

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(VAR_VAR_VAR_VAR_VAR_VAR_ARGS_FIELD); }

	//  PURPOSE:  To return the address of the destination variable.  No
	//	parameters.
	PotentialVariable*
		getDestVarPtr	()
				const
				{ return(destVarPtr_); }

	//  PURPOSE:  To return the address of the first source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc0VarPtr	()
				const
				{ return(src0VarPtr_); }

	//  PURPOSE:  To return the address of the second source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc1VarPtr	()
				const
				{ return(src1VarPtr_); }

	//  PURPOSE:  To return the address of the third source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc2VarPtr	()
				const
				{ return(src2VarPtr_); }

	//  PURPOSE:  To return the address of the fourth source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc3VarPtr	()
				const
				{ return(src3VarPtr_); }

	//  PURPOSE:  To return the address of the fifth source variable.  No
	//	parameters.
	PotentialVariable*
		getSrc4VarPtr	()
				const
				{ return(src4VarPtr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the address of the destination variable to
	//	'varPtr'.  No return value.
	void	setDestVarPtr	(PotentialVariable*	varPtr
				)
				{ destVarPtr_	= varPtr; }

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (destVarPtr_ == replacePtr)
				  {
				    destVarPtr_	= withPtr;
				  }

				  if  (src0VarPtr_ == replacePtr)
				  {
				    src0VarPtr_	= withPtr;
				  }

				  if  (src1VarPtr_ == replacePtr)
				  {
				    src1VarPtr_	= withPtr;
				  }

				  if  (src2VarPtr_ == replacePtr)
				  {
				    src2VarPtr_	= withPtr;
				  }

				  if  (src3VarPtr_ == replacePtr)
				  {
				    src3VarPtr_	= withPtr;
				  }

				  if  (src4VarPtr_ == replacePtr)
				  {
				    src4VarPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  destVarPtr_->noteIsUsed();
				  src0VarPtr_->noteIsUsed();
				  src1VarPtr_->noteIsUsed();
				  src2VarPtr_->noteIsUsed();
				  src3VarPtr_->noteIsUsed();
				  src4VarPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

      };
 */

      class	AddrPotentialInstruction : public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the C++ address of the instruction whose virtual
	//	machine address should be written.
	PotentialInstruction*	addrInstructPtr_;

	//  PURPOSE:  To hold the (optional) name of the label in '*this'
	//	instruction.
	std::string		addrNameStr_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	AddrPotentialInstruction();

	//  No copy constructor:
	AddrPotentialInstruction(const AddrPotentialInstruction&
				);

	//  No copy assignment op:
	AddrPotentialInstruction&
		operator=	(const AddrPotentialInstruction&
				);
      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' potential instruction to represent
	//	instruction class 'newOp' using the address of the
	//	instruction at 'newAddrInstructPtr'.  No return value.
	AddrPotentialInstruction(spvmOp_ty		newOp,
				 PotentialInstruction*	newAddrInstructPtr
				) :
				PotentialInstruction
					( newOp
					),
				addrInstructPtr_(newAddrInstructPtr),
				addrNameStr_()
				{ }

	//  PURPOSE:  To initialize '*this' potential instruction to represent
	//	instruction class 'newOp' using the address with name
	//	'newAddrNameStr'.  No return value.
//	AddrPotentialInstruction(SpvmOp			newOp,
//				 const std::string&	newAddrNameStr
//				) :
//				PotentialInstruction(newOp),
//				addrInstructPtr_(nullptr),
//				addrNameStr_(newAddrNameStr)
//				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~AddrPotentialInstruction
				()
				{
				  // Do _not_ delete() 'addrInstructPtr_',
				  // '*this' does not own it.
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(ADDR_ARGS_FIELD); }

	//  PURPOSE:  To return the C++ address of the instruction whose virtual
	//	machine address should be written, or to return 'nullptr' if
	//	there is no such C++ address.  No parameters.
	PotentialInstruction*
		getAddrInstructPtr
				()
				const
				{ return(addrInstructPtr_); }

	//  PURPOSE:  To return the (optional) name of the label in '*this'
	//	instruction.
	const std::string&
		getAddrNameStr	()
				const
				{ return(addrNameStr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the C++ address of the instruction whose virtual
	//	machine address should be written to 'newAddr', or to take no
	//	action if there is no such C++ address.  No return value.
	void	setAddrInstructPtr
				(PotentialInstruction*	newAddr
				)
				{
				  addrInstructPtr_	= newAddr;
				}

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

	//  PURPOSE:  To fill in the offset of goto and conditional goto
	//	instructions.  No return value.
	void	fillInGotoOffset();

      };


      class	VarAddrPotentialInstruction : public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the variable.
	PotentialVariable*	varPtr_;

	//  PURPOSE:  To hold the C++ address of the instruction whose virtual
	//	machine address should be written.
	PotentialInstruction*	addrInstructPtr_;

	//  PURPOSE:  To hold the (optional) name of the label in '*this'
	//	instruction.
	std::string		addrNameStr_;

	//  II.  Disallowed auto-generated methods:
	//  No default constructor:
	VarAddrPotentialInstruction
				();

	//  No copy constructor:
	VarAddrPotentialInstruction
				(const VarAddrPotentialInstruction&
				);

	//  No copy assignment op:
	VarAddrPotentialInstruction&
		operator=	(const VarAddrPotentialInstruction&
				);
      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' potential instruction to represent
	//	instruction class 'newOp' using the address of the
	//	instruction at 'newAddrInstructPtr' and variable '*newVarPtr'.
	//	No return value.
	VarAddrPotentialInstruction
				(spvmOp_ty		newOp,
				 PotentialVariable*	newVarPtr,
				 PotentialInstruction*	newAddrInstructPtr
				) :
				PotentialInstruction
					(
					 newOp
					),
				varPtr_(newVarPtr),
				addrInstructPtr_(newAddrInstructPtr),
				addrNameStr_("")
				{ }

	//  PURPOSE:  To initialize '*this' potential instruction to represent
	//	instruction class 'newOp' using the address with name
	//	'newAddrInstructPtr' and variable '*newVarPtr'.
	//	No return value.
	VarAddrPotentialInstruction
				(spvmOp_ty		newOp,
				 PotentialVariable*	newVarPtr,
				 const std::string&	newAddrNameStr
				) :
				PotentialInstruction
					( newOp
					),
				varPtr_(newVarPtr),
				addrInstructPtr_(nullptr),
				addrNameStr_(newAddrNameStr)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarAddrPotentialInstruction
				()
				{
				  // Do _not_ delete() 'addrInstructPtr_',
				  // '*this' does not own it.
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(VAR_ADDR_ARGS_FIELD); }

	//  PURPOSE:  To return the address of the variable.
	PotentialVariable*
		getVarPtr	()
				const
				{ return(varPtr_); }

	//  PURPOSE:  To return the C++ address of the instruction whose
	//	virtual machine address should be written, or to return
	//	'nullptr' if there is no such C++ address.  No parameters.
	PotentialInstruction*
		getAddrInstructPtr
				()
				const
				{ return(addrInstructPtr_); }

	//  PURPOSE:  To return the (optional) name of the label in '*this'
	//	instruction.
	const std::string&
		getAddrNameStr	()
				const
				{ return(addrNameStr_); }

	//  VI.  Mutators:
	//  PURPOSE:  To set the C++ address of the instruction whose virtual
	//	machine address should be written to 'newAddr', or to take no
	//	action if there is no such C++ address.  No return value.
	void	setAddrInstructPtr
				(PotentialInstruction*	newAddr
				)
				{
				  addrInstructPtr_	= newAddr;
				}

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (varPtr_ == replacePtr)
				  {
				    varPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  varPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

	//  PURPOSE:  To fill in the offset of goto and conditional goto
	//	instructions.  No return value.
	void	fillInGotoOffset();

      };


      //  PURPOSE:  To represent potential instructions with an immediate
      //	unsigned integer and a variable.
      class	ImmuintVarPotentialInstruction : public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the destination unsigned integer index.
	uint32_t		uInt_;

	//  PURPOSE:  To hold the address of the variable.
	PotentialVariable*	varPtr_;

	//  II. Disallowed auto-generated methods:
	//  No default constructor:
	ImmuintVarPotentialInstruction
				();

	//  No copy constructor:
	ImmuintVarPotentialInstruction
		(const ImmuintVarPotentialInstruction&
		);

	//  No copy assignment op:
	ImmuintVarPotentialInstruction&
		operator=
		(const ImmuintVarPotentialInstruction&
		);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note that operation proto-type
	//	'newOp' uses the immediate unsigned integer 'newUInt' and
	//	variable '*newVarPtr'.  No return value.
	ImmuintVarPotentialInstruction
				(spvmOp_ty		newOp,
				 uint32_t		newUInt,
				 PotentialVariable*	newVarPtr
				) :
				PotentialInstruction(newOp),
				uInt_(newUInt),
				varPtr_(newVarPtr)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~ImmuintVarPotentialInstruction
				()
				{
				  // Do _not_ delete() 'varPtr_'.
				  // '*this' does not own it.
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(UINT_VAR_ARGS_FIELD); }

	//  PURPOSE:  To return the unsigned integer.  No parameters.
	uint32_t
		getUInt		()
				const
				{ return(uInt_); }

	//  PURPOSE:  To return the address of the variable.  No parameters.
	PotentialVariable*
		getVarPtr	()
				const
				{ return(varPtr_); }

	//  VI.  Mutators:

	//  VII.  Method(s) that do main and misc work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (varPtr_ == replacePtr)
				  {
				    varPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  varPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

      };


      class	VarVarStringIndexParseLocIndexPotentialInstruction :
					public PotentialInstruction
      {
	//  I.  Member vars:
	//  PURPOSE:  To hold the address of the destination variable.
	PotentialVariable*	destVarPtr_;

	//  PURPOSE:  To hold the address of the first source variable.
	PotentialVariable*	src0VarPtr_;

	//  PURPOSE:  To hold the string index.
	entryPartialAddress_ty	stringIndex_;

	//  PURPOSE:  To hold the parse location index.
	parseLocIndex_ty	parseLocIndex_;

	//  II. Disallowed auto-generated methods:
	//  No default constructor:
	VarVarStringIndexParseLocIndexPotentialInstruction
				();

	//  No copy constructor:
	VarVarStringIndexParseLocIndexPotentialInstruction
		(const VarVarStringIndexParseLocIndexPotentialInstruction&
		);

	//  No copy assignment op:
	VarVarStringIndexParseLocIndexPotentialInstruction&
		operator=
		(const VarVarStringIndexParseLocIndexPotentialInstruction&
		);

      protected :
	//  III.  Protected methods:

      public :
	//  IV.  Constructor(s), assignment op(s), factory(s) and destructor:
	//  PURPOSE:  To initialize '*this' to note that operation proto-type
	//	'newOp' is to be done on variables 'newDestVarPtr' and
	//	'newSrc0VarPtr'; and on string index 'newStringIndex' and
	//	parse location index 'newParseLocIndex'.  No return value.
	VarVarStringIndexParseLocIndexPotentialInstruction
				(spvmOp_ty		newOp,
				 PotentialVariable*	newDestVarPtr,
				 PotentialVariable*	newSrc0VarPtr,
				 entryPartialAddress_ty	newStringIndex,
				 parseLocIndex_ty	newParseLocIndex
				) :
				PotentialInstruction(newOp),
				destVarPtr_(newDestVarPtr),
				src0VarPtr_(newSrc0VarPtr),
				stringIndex_(newStringIndex),
				parseLocIndex_(newParseLocIndex)
				{ }

	//  PURPOSE:  To release the resources of '*this'.  No parameters.  No
	//	return value.
	~VarVarStringIndexParseLocIndexPotentialInstruction
				()
				{
				  // Do _not_ delete() 'src0VarPtr_' or
				  // 'destVarPtr_'.  '*this' does not own it.
				}

	//  V.  Accessors:
	//  PURPOSE:  To return the 'argsField_ty' of '*this' instruction.
	//	No parameters.
	argsField_ty
		getArgsField	()
				const
				{ return(VAR_VAR_IND_IND_ARGS_FIELD); }

	//  PURPOSE:  To return the address of the destination variable.
	PotentialVariable*
		getDestVarPtr	()
				const
				{ return(destVarPtr_); }

	//  PURPOSE:  To return the address of the first source variable.
	PotentialVariable*
		getSrc0VarPtr	()
				const
				{ return(src0VarPtr_); }

	//  PURPOSE:  To return the string index.
	entryPartialAddress_ty
		getStringIndex	()
				const
				{ return(stringIndex_); }

	//  PURPOSE:  To return the parse location index.
	parseLocIndex_ty
		getParseLocIndex()
				const
				{ return(parseLocIndex_); }

	//  VI.  Mutators:

	//  VII.  Methods that do main and misc. work of class:
	//  PURPOSE:  To substitute all occurrences of variable 'replacePtr'
	//	with 'withPtr'.  No return value.
	void	replaceVarWith	(PotentialVariable*	replacePtr,
				 PotentialVariable*	withPtr
				)
				{
				  if  (destVarPtr_ == replacePtr)
				  {
				    destVarPtr_	= withPtr;
				  }

				  if  (src0VarPtr_ == replacePtr)
				  {
				    src0VarPtr_	= withPtr;
				  }
				}

	//  PURPOSE:  To note which variables '*this' instruction uses by
	//	setting a flag for those var(s).  No parameters.  No return
	//	value.
	void	noteUsedVars	()
				{
				  destVarPtr_->noteIsUsed();
				  src0VarPtr_->noteIsUsed();
				}

	//  PURPOSE:  To return a string representation of '*this'
	//	PotentialInstruction.  'context' tells the compile-time
	//	context.
	std::string
		toString	(const CompileContext&	context
				)
				const;

      };


      //  PURPOSE:  To write into 'bufferPtr' of length 'bufferLen' the
      //	instruction at address 'segmentPtr'.  'instructLen' is
      //	set to the length of this instruction.  Returns 'buffer'.
      extern
      char*	instructToStdEndian
				(char*		bufferPtr,
				 size_t		bufferLen,
				 size_t&	instructLen,
				 const uint8_t*	segmentPtr
				);

