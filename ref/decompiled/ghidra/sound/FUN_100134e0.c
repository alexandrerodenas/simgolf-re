/* Ghidra decompiled: sound.dll */
/* Function: FUN_100134e0 @ 0x100134E0 */


undefined4 FUN_100134e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xbc);
    iVar2 = *(int *)(param_1 + 0xc0);
    iVar3 = iVar2;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc0) = iVar2;
      iVar3 = DAT_100b4a34;
    }
    DAT_100b4a34 = iVar3;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xbc) = iVar1;
      iVar1 = DAT_100b4a38;
    }
    DAT_100b4a38 = iVar1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    return 0;
  }
  return 10;
}

