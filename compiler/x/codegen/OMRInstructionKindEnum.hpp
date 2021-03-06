/*******************************************************************************
 *
 * (c) Copyright IBM Corp. 2000, 2016
 *
 *  This program and the accompanying materials are made available
 *  under the terms of the Eclipse Public License v1.0 and
 *  Apache License v2.0 which accompanies this distribution.
 *
 *      The Eclipse Public License is available at
 *      http://www.eclipse.org/legal/epl-v10.html
 *
 *      The Apache License v2.0 is available at
 *      http://www.opensource.org/licenses/apache2.0.php
 *
 * Contributors:
 *    Multiple authors (IBM Corp.) - initial implementation and documentation
 *******************************************************************************/

/*
 * This file will be included within an enum.  Only comments and enumerator
 * definitions are permitted.
 */

IsNotExtended,
      IsLabel,
         IsVirtualGuardNOP,
      IsFence,
      IsPadding,
      IsAlignment,
      IsBoundaryAvoidance,
         IsPatchableCodeAlignment,
      IsImm,
         IsImmSnippet,
         IsImmSym,
      IsImm64,
         IsImm64Sym,
      IsVFPSave,
      IsVFPRestore,
      IsVFPDedicate,
      IsVFPRelease,
      IsVFPCallCleanup,
      IsReg,
         IsRegReg,
            IsRegRegImm,
            IsRegRegReg,
            IsFPRegReg,
               IsFPST0ST1RegReg,
               IsFPST0STiRegReg,
               IsFPSTiST0RegReg,
               IsFPArithmeticRegReg,
               IsFPCompareRegReg,
               IsFPRemainderRegReg,
         IsRegImm,
            IsRegImmSym,
         IsRegImm64,
            IsRegImm64Sym,
         IsRegMem,
            IsRegMemImm,
            IsFPRegMem,
         IsFPReg,
      IsMem,
         IsMemTable,
         IsCallMem,
         IsMemImm,
            IsMemImmSym,
            IsMemImmSnippet,
         IsMemReg,
            IsMemRegImm,
            IsMemRegReg,
            IsFPMemReg,
      IsFPCompareEval,
      IsRestoreVMThread,
      IsFfsdPPSRecord,
