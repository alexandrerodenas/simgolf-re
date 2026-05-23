/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040ca10 @ 0x0040CA10 */
/* Body size: 226 addresses */


void FUN_0040ca10(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  param_3 = param_3 + param_1;
  if (param_1 < param_3) {
    iVar1 = param_2;
    do {
      for (; iVar1 < param_2 + param_4; iVar1 = iVar1 + 0x10) {
        if (param_5 == 0) {
          FUN_004740f0(PTR_DAT_004c1570,param_1,iVar1,DAT_00824148,0);
        }
        else {
          FUN_004740f0(PTR_DAT_004c1570,param_1,iVar1,DAT_00824148,0);
        }
      }
      param_1 = param_1 + 0x10;
      iVar1 = param_2;
    } while (param_1 < param_3);
  }
  return;
}

