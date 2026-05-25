/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c3a0 @ 0x0040C3A0 */


int FUN_0040c3a0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((byte)DAT_0059e7b8 & 1) == 0) {
    iVar6 = param_1 >> 10;
    param_2 = param_2 >> 10;
    cVar1 = *(char *)((int)&DAT_005722e8 + iVar6 * 0x32 + param_2);
    if (((cVar1 != '\a') && (cVar1 != '\t')) && (((&DAT_0057837c)[cVar1 * 0x30] & 0xe) == 0)) {
      iVar2 = FUN_0040bfe0(iVar6,param_2,5,1);
      iVar3 = FUN_0040bfe0(iVar6,param_2,7,1);
      iVar4 = FUN_0040bfe0(iVar6,param_2,1,1);
      iVar5 = FUN_0040bfe0(iVar6,param_2,3,1);
      if (iVar6 * 0x400 + 0x200 < param_1) {
        return iVar5 - iVar4;
      }
      return iVar2 - iVar3;
    }
  }
  return 0;
}

