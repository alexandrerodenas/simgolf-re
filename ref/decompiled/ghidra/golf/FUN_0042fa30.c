/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042fa30 @ 0x0042FA30 */


int FUN_0042fa30(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  int local_4;
  
  iVar5 = param_1 >> 10;
  iVar6 = param_2 >> 10;
  uVar1 = *(uint *)(&DAT_0057837c + *(char *)((int)&DAT_005722e8 + iVar5 * 0x32 + iVar6) * 0x30);
  if ((uVar1 & 8) != 0) {
    return 0;
  }
  if ((uVar1 & 2) != 0) {
    FUN_0042f4b0(iVar5,iVar6,&local_8,&local_c);
    return (local_c + -3) * 0x10;
  }
  if ((uVar1 & 4) != 0) {
    FUN_0042f4b0(iVar5,iVar6,&local_8,&local_c);
    return (local_8 + -3) * 0x10;
  }
  iVar2 = FUN_0040bfe0(iVar5,iVar6,5,1);
  iVar2 = iVar2 + -3;
  iVar3 = FUN_0040bfe0(iVar5,iVar6,7,1);
  local_4 = FUN_0040bfe0(iVar5,iVar6,1,1);
  local_4 = local_4 + -3;
  iVar4 = FUN_0040bfe0(iVar5,iVar6,3,1);
  if (((iVar2 == iVar3 + -3) && (iVar2 == local_4)) && (iVar2 == iVar4 + -3)) {
    return iVar2 * 0x10;
  }
  param_1 = param_1 + iVar5 * -0x400;
  param_2 = param_2 + iVar6 * -0x400;
  iVar5 = (((0x400 - param_1) * (iVar3 + -3) + param_1 * local_4) * (0x400 - param_2) +
          ((0x400 - param_1) * iVar2 + param_1 * (iVar4 + -3)) * param_2) * 0x10;
  iVar5 = iVar5 + (iVar5 >> 0x1f & 0x3ffU);
  return (int)((iVar5 >> 10) + (iVar5 >> 0x1f & 0x3ffU)) >> 10;
}

