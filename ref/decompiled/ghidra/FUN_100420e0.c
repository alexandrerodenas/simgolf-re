/* Ghidra decompiled: sound.dll */
/* Function: FUN_100420e0 @ 0x100420E0 */
/* Body size: 7 addresses */


void FUN_100420e0(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100420e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

