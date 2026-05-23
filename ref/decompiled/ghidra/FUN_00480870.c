/* Ghidra decompiled: golf.exe */
/* Function: FUN_00480870 @ 0x00480870 */
/* Body size: 72 addresses */


undefined4
FUN_00480870(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x10;
  }
  uVar1 = FUN_004806c0(*param_1,param_1[1],param_1[2] - *param_1,param_1[3] - param_1[1],param_2,
                       param_3,param_4,param_5,param_6);
  return uVar1;
}

