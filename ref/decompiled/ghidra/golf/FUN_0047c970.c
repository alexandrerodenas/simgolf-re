/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047c970 @ 0x0047C970 */
/* Body size: 153 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0047c970(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1[0x27] & 0x200000U) != 0) || ((*(byte *)(param_1 + 0x28) & 8) != 0)) {
    return 0;
  }
  if ((param_1[0x50] != 0) && (iVar1 = FUN_0047c970(param_2), iVar1 != 0)) {
    return 1;
  }
  iVar1 = 0;
  _DAT_0083ab2c = param_1;
  if ((code *)param_1[0x99] != (code *)0x0) {
    iVar1 = (*(code *)param_1[0x99])(param_2);
  }
  iVar2 = (**(code **)(*param_1 + 0x94))(param_2);
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 0x1c))();
  }
  return iVar1 + iVar2;
}

