/* Ghidra decompiled: sound.dll */
/* Function: FUN_100231e0 @ 0x100231E0 */


undefined4 __fastcall FUN_100231e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x89] == 0) {
    return 0x24;
  }
  iVar2 = param_1[0x86];
  param_1[0x88] = iVar2;
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 8), iVar2 != 0)) {
    while (*(int *)(iVar2 + 4) != param_1[0x1ce]) {
      if (param_1[0x88] == 0) {
        return 0x24;
      }
      iVar2 = *(int *)(param_1[0x88] + 4);
      param_1[0x88] = iVar2;
      if (iVar2 == 0) {
        return 0x24;
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        return 0x24;
      }
    }
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x1c) != 0) {
        (**(code **)(*param_1 + 0x84))(*(int *)(iVar2 + 0x1c));
      }
      uVar1 = (**(code **)(*param_1 + 0x94))
                        (*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      return uVar1;
    }
  }
  return 0x24;
}

