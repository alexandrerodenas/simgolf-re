/* Ghidra decompiled: golf.exe */
/* Function: FUN_004941e0 @ 0x004941E0 */


undefined4 __fastcall FUN_004941e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    param_1 = *(int *)(*(int *)(param_1 + 0x2d98) + 8) + 0x2e58 + param_1;
    if (*(int *)(param_1 + 8) != 0) {
      return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 4);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1488) + 8);
    iVar1 = iVar2 + 0x1548 + param_1;
    if (*(int *)(iVar2 + 0x1550 + param_1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      iVar3 = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 8);
      if (0 < *(int *)(iVar1 + 0x10)) {
        do {
          if (*(int *)(*(int *)(iVar1 + 0xc) + 4) == iVar2) break;
          iVar3 = iVar3 + 1;
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
        } while (iVar3 < *(int *)(iVar1 + 0x10));
      }
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1488) + 8);
    if (*(int *)(iVar1 + 0x1550 + param_1) != 0) {
      return *(undefined4 *)(*(int *)(*(int *)(iVar1 + param_1 + 0x1554) + 8) + 4);
    }
  }
  return uRam00000004;
}

