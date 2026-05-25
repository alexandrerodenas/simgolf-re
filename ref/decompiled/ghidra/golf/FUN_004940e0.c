/* Ghidra decompiled: golf.exe */
/* Function: FUN_004940e0 @ 0x004940E0 */


undefined4 __thiscall FUN_004940e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2d98) + 8);
    iVar2 = *(int *)(iVar1 + 0x2e60 + param_1);
    iVar1 = iVar1 + 0x2e58 + param_1;
    if (iVar2 != 0) {
      iVar3 = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(int *)(iVar1 + 0xc) = iVar2;
      if (0 < *(int *)(iVar1 + 0x10)) {
        do {
          if (*(int *)(*(int *)(iVar1 + 0xc) + 4) == param_2) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x2d98) + 8) + 0x2e58;
            goto LAB_004941b7;
          }
          iVar3 = iVar3 + 1;
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
        } while (iVar3 < *(int *)(iVar1 + 0x10));
      }
    }
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1488) + 8);
  iVar1 = iVar2 + 0x1548 + param_1;
  iVar2 = *(int *)(iVar2 + 0x1550 + param_1);
  if (iVar2 != 0) {
    iVar3 = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(int *)(iVar1 + 0xc) = iVar2;
    if (0 < *(int *)(iVar1 + 0x10)) {
      do {
        if (*(int *)(*(int *)(iVar1 + 0xc) + 4) == param_2) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x1488) + 8) + 0x1548;
LAB_004941b7:
          if (*(int *)(iVar1 + param_1 + 8) == 0) {
            return uRam00000004;
          }
          return *(undefined4 *)(*(int *)(*(int *)(iVar1 + param_1 + 0xc) + 8) + 4);
        }
        iVar3 = iVar3 + 1;
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
      } while (iVar3 < *(int *)(iVar1 + 0x10));
    }
  }
  return 0;
}

