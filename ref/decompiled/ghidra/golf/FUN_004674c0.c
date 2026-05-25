/* Ghidra decompiled: golf.exe */
/* Function: FUN_004674c0 @ 0x004674C0 */


int FUN_004674c0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_2 + -0x80 >> 8 & 0xfU) + (param_1 + -0x80 >> 8 & 0xfU) * 0x13;
  uVar1 = param_1 + -0x80 >> 3 & 0x1f;
  uVar2 = param_2 + -0x80 >> 3 & 0x1f;
  iVar3 = (int)(char)(&DAT_00838c1d)[iVar3] * (0x20 - uVar1) * uVar2 +
          (int)(char)(&DAT_00838c2f)[iVar3] * (0x20 - uVar2) * uVar1 +
          (int)(char)(&DAT_00838c1c)[iVar3] * (0x20 - uVar1) * (0x20 - uVar2) +
          (int)(char)(&DAT_00838c30)[iVar3] * uVar2 * uVar1;
  return (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
}

