/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007eb50 @ 0x1007EB50 */
/* Body size: 7 addresses */


void FUN_1007eb50(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1007eb55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

