/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a48f0 @ 0x004A48F0 */


undefined4 __thiscall FUN_004a48f0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((int)param_2 <= iVar1 + -1) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x80);
    if ((int)param_2 < 0) {
      iVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
      if (iVar1 < iVar2) goto LAB_004a4953;
      if (0 < iVar2) {
        do {
          iVar2 = iVar2 + -1;
          *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x10);
        } while (iVar2 != 0);
      }
      param_2 = iVar1 + param_2;
    }
    else {
      uVar3 = param_2;
      if (0 < (int)param_2) {
        do {
          uVar3 = uVar3 - 1;
          *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x84) + 0xc);
        } while (uVar3 != 0);
      }
    }
    *(uint *)(param_1 + 0x8c) = param_2;
  }
LAB_004a4953:
  if (*(int *)(param_1 + 0x80) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x84) + 4);
  }
  return 0;
}

