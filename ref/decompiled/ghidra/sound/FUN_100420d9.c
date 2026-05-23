/* Ghidra decompiled: sound.dll */
/* Function: FUN_100420d9 @ 0x100420D9 */
/* Body size: 7 addresses */


void FUN_100420d9(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100420de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

