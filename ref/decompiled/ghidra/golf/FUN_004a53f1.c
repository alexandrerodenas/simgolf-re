/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a53f1 @ 0x004A53F1 */
/* Body size: 114 addresses */


undefined4 FUN_004a53f1(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  FUN_004a8582(param_1,*(undefined4 *)(param_2 + 0xc),param_3,0,*(undefined4 *)(param_2 + 8),
               *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),1);
  if (*(int *)(param_2 + 0x24) == 0) {
    FUN_004a523d(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x004a545b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_2 + 0x18))();
  return uVar1;
}

