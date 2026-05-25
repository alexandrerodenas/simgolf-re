/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c2f0 @ 0x0040C2F0 */


int FUN_0040c2f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((byte)DAT_0059e7b8 & 1) == 0) {
    param_1 = param_1 >> 10;
    iVar6 = param_2 >> 10;
    cVar1 = *(char *)((int)&DAT_005722e8 + param_1 * 0x32 + iVar6);
    if (((cVar1 != '\a') && (cVar1 != '\t')) && (((&DAT_0057837c)[cVar1 * 0x30] & 0xe) == 0)) {
      iVar2 = FUN_0040bfe0(param_1,iVar6,5,1);
      iVar3 = FUN_0040bfe0(param_1,iVar6,7,1);
      iVar4 = FUN_0040bfe0(param_1,iVar6,1,1);
      iVar5 = FUN_0040bfe0(param_1,iVar6,3,1);
      if (iVar6 * 0x400 + 0x200 < param_2) {
        return iVar5 - iVar2;
      }
      return iVar4 - iVar3;
    }
  }
  return 0;
}

