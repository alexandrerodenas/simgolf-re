/* Ghidra decompiled: golf.exe */
/* Function: FUN_00489890 @ 0x00489890 */


undefined4 __thiscall FUN_00489890(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 3;
  }
  *(int *)(param_1 + 0xdc) = param_2;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  uVar1 = FUN_00401d10(param_3);
  return uVar1;
}

