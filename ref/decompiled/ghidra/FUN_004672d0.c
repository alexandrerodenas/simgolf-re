/* Ghidra decompiled: golf.exe */
/* Function: FUN_004672d0 @ 0x004672D0 */
/* Body size: 270 addresses */


int FUN_004672d0(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = -param_2;
  if (param_1 == 0) {
    return (((int)uVar8 < 1) - 1 & 0x80000000) + 0x80000000;
  }
  if (uVar8 == 0) {
    return (((int)param_1 < 1) - 1 & 0x80000000) + 0xc0000000;
  }
  iVar5 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar2 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
  iVar3 = iVar2;
  iVar6 = iVar5;
  if (iVar2 < iVar5) {
    iVar3 = iVar5;
    iVar6 = iVar2;
  }
  bVar1 = iVar2 < iVar5;
  iVar3 = (iVar6 * 0x4000) / iVar3;
  uVar4 = 0x1333 - iVar3;
  uVar7 = (int)uVar4 >> 0x1f;
  iVar6 = (0x2800 - ((int)(((uVar4 ^ uVar7) - uVar7) * 0xb00) >> 0xe)) * iVar3 >> 0xe;
  if ((int)param_1 < 1) {
    if ((int)uVar8 < 1) {
      if (!bVar1) {
        return (iVar6 + 0x8000) * 0x10000;
      }
      return (0xc000 - iVar6) * 0x10000;
    }
    if (bVar1) {
      return (iVar6 + 0xc000) * 0x10000;
    }
    iVar6 = -iVar6;
  }
  else {
    if ((int)uVar8 < 1) {
      if (!bVar1) {
        return (0x8000 - iVar6) * 0x10000;
      }
      return (iVar6 + 0x4000) * 0x10000;
    }
    if (bVar1) {
      return (0x4000 - iVar6) * 0x10000;
    }
  }
  return iVar6 << 0x10;
}

