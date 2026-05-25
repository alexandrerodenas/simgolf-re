/* Ghidra decompiled: golf.exe */
/* Function: FUN_00491c70 @ 0x00491C70 */


int FUN_00491c70(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 & 0x80000000) != 0) {
    param_2 = -param_2;
  }
  uVar3 = param_1 & 0x40000000;
  iVar2 = (int)(param_1 & 0x3fffffff) >> 0x16;
  if (param_2 < 0xffff) {
    iVar1 = (&DAT_0083b9f4)[iVar2];
    if (uVar3 != 0) {
      return ((((int)((*(int *)(&DAT_0083b9f8 + iVar2 * 4) - iVar1) * (param_1 & 0x3fffff)) >> 0x16)
              - iVar1) + 0xffff) * param_2 >> 0x10;
    }
    return (((int)((*(int *)(&DAT_0083b9f8 + iVar2 * 4) - iVar1) * (param_1 & 0x3fffff)) >> 0x16) +
           iVar1) * param_2 >> 0x10;
  }
  if (0xfffffe < param_2) {
    iVar1 = (&DAT_0083b9f4)[iVar2];
    if (uVar3 != 0) {
      return ((((int)((*(int *)(&DAT_0083b9f8 + iVar2 * 4) - iVar1) * (param_1 & 0x3fffff)) >> 0x16)
              - iVar1) + 0xffff) * (param_2 >> 0x10);
    }
    return (((int)((*(int *)(&DAT_0083b9f8 + iVar2 * 4) - iVar1) * (param_1 & 0x3fffff)) >> 0x16) +
           iVar1) * (param_2 >> 0x10);
  }
  iVar1 = (&DAT_0083b9f4)[iVar2];
  if (uVar3 != 0) {
    return ((((int)((*(int *)(&DAT_0083b9f8 + iVar2 * 4) - iVar1) * (param_1 & 0x3fffff)) >> 0x16) -
            iVar1) + 0xffff) * (param_2 >> 8) >> 8;
  }
  return (((int)((*(int *)(&DAT_0083b9f8 + iVar2 * 4) - iVar1) * (param_1 & 0x3fffff)) >> 0x16) +
         iVar1) * (param_2 >> 8) >> 8;
}

