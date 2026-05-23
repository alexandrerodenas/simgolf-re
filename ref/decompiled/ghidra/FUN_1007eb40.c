/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007eb40 @ 0x1007EB40 */
/* Body size: 7 addresses */


void FUN_1007eb40(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1007eb45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

