/* Ghidra decompiled: sound.dll */
/* Function: FUN_100420a5 @ 0x100420A5 */


void FUN_100420a5(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x100420d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

