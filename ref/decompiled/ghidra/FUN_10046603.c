/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046603 @ 0x10046603 */
/* Body size: 7 addresses */


void FUN_10046603(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10046608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

