/* Ghidra decompiled: golf.exe */
/* Function: FUN_004671a0 @ 0x004671A0 */
/* Body size: 205 addresses */


undefined4 FUN_004671a0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar5;
  uint uVar4;
  
  uVar3 = (int)param_2 >> 0x1f;
  uVar4 = (int)param_1 >> 0x1f;
  if ((int)param_1 < 1) {
    if ((int)param_2 < 1) {
      uVar5 = 7;
      iVar2 = (param_2 ^ uVar3) - uVar3;
      iVar1 = (param_1 ^ uVar4) - uVar4;
      if (iVar2 * 2 < iVar1) {
        uVar5 = 6;
      }
      if (iVar1 * 2 < iVar2) {
        return 0;
      }
    }
    else {
      uVar5 = 5;
      iVar2 = (param_2 ^ uVar3) - uVar3;
      iVar1 = (param_1 ^ uVar4) - uVar4;
      if (iVar2 * 2 < iVar1) {
        uVar5 = 6;
      }
      if (iVar1 * 2 < iVar2) {
        return 4;
      }
    }
  }
  else if ((int)param_2 < 1) {
    uVar5 = 1;
    iVar2 = (param_2 ^ uVar3) - uVar3;
    iVar1 = (param_1 ^ uVar4) - uVar4;
    if (iVar2 * 2 < iVar1) {
      uVar5 = 2;
    }
    if (iVar1 * 2 < iVar2) {
      return 0;
    }
  }
  else {
    uVar5 = 3;
    iVar2 = (param_2 ^ uVar3) - uVar3;
    iVar1 = (param_1 ^ uVar4) - uVar4;
    if (iVar2 * 2 < iVar1) {
      uVar5 = 2;
    }
    if (iVar1 * 2 < iVar2) {
      return 4;
    }
  }
  return uVar5;
}

