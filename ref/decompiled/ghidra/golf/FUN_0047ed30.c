/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047ed30 @ 0x0047ED30 */
/* Body size: 311 addresses */


undefined4 __thiscall FUN_0047ed30(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0xa0) & 2) != 0) {
    iVar1 = *(int *)(param_1 + 0x1f0);
    if (param_2 < iVar1) {
      if (param_3 < iVar1) {
        return 0xd;
      }
      if ((param_2 < iVar1) &&
         ((*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0)) - iVar1 < param_3)) {
        return 0x10;
      }
    }
    iVar3 = (*(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1bc)) - iVar1;
    if (iVar3 < param_2) {
      if (param_3 < iVar1) {
        return 0xe;
      }
      if ((iVar3 < param_2) &&
         ((*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0)) - iVar1 < param_3)) {
        return 0x11;
      }
    }
    if (param_2 < iVar1) {
      return 10;
    }
    if (param_3 < iVar1) {
      return 0xc;
    }
    if (iVar3 < param_2) {
      return 0xb;
    }
    if ((*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0)) - iVar1 < param_3) {
      return 0xf;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x9c);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  if ((uVar2 & 0x10) == 0) {
    if (((uVar2 & 0x4000000) != 0) && (param_3 < *(int *)(param_1 + 0x1ec))) {
      return 2;
    }
  }
  else if (param_3 < *(int *)(param_1 + 0x180)) {
    return 2;
  }
  return 0;
}

