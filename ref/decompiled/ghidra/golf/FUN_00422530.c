/* Ghidra decompiled: golf.exe */
/* Function: FUN_00422530 @ 0x00422530 */
/* Body size: 360 addresses */


int FUN_00422530(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 * 0x100;
  if (DAT_00822c88 < 1) {
    iVar4 = (-(uint)(((&DAT_005794d1)[iVar3] & 1) != 0) & 0xf) + 0x19;
  }
  else {
    iVar4 = ((char)(&DAT_00579572)[iVar3] * 0x32) / 3;
  }
  iVar4 = (-(uint)(((&DAT_005794d1)[iVar3] & 1) != 0) & 0x32) + 0x96 + iVar4;
  uVar1 = FUN_0040bfa0((&DAT_0057958c)[param_1 * 0x40],(&DAT_00579590)[param_1 * 0x40]);
  if (0x97 < param_1) {
    uVar1 = -(uint)((&DAT_005794da)[iVar3] != '\0') & 2;
  }
  if ((&DAT_005794d0)[iVar3] != '\0') {
    if ((*(ushort *)(&DAT_005794ce + iVar3) & 1) != 0) {
      iVar4 = iVar4 + -0x14 + (uint)(byte)(&DAT_005795a8)[iVar3] * 4;
    }
    if (((*(ushort *)(&DAT_005794ce + iVar3) & 2) != 0) && (uVar1 == 0)) {
      iVar4 = iVar4 + ((byte)(&DAT_005795a9)[iVar3] - 5) * 6;
    }
  }
  if ('\0' < (char)(&DAT_005794ee)[iVar3]) {
    iVar2 = FUN_00467130((int)(char)(&DAT_005794ee)[iVar3],0,3);
    iVar4 = iVar4 + (iVar2 * iVar4) / 0x18;
  }
  if (((&DAT_005794d1)[iVar3] & 1) != 0) {
    iVar4 = DAT_00543cc8 * 0xf + iVar4;
  }
  if ('\0' < (char)(&DAT_00578372)[uVar1 * 0x30]) {
    iVar3 = FUN_00467130((int)(char)(&DAT_00578372)[uVar1 * 0x30],0,3);
    iVar4 = iVar4 - ((int)(iVar3 * iVar4 + (iVar3 * iVar4 >> 0x1f & 7U)) >> 3);
  }
  if (uVar1 != 0) {
    iVar3 = (int)((ulonglong)((longlong)iVar4 * -0x66666667) >> 0x20);
    iVar4 = iVar4 + ((iVar3 >> 1) - (iVar3 >> 0x1f));
  }
  iVar3 = 0x14a;
  if (iVar4 < 0x14b) {
    iVar3 = iVar4;
  }
  return iVar3;
}

