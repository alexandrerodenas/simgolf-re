/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029bb0 @ 0x10029BB0 */
/* Body size: 15 addresses */


uint __fastcall FUN_10029bb0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10029bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x78))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

