/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047d060 @ 0x0047D060 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d060(int param_1)

{
  int iVar1;
  RECT local_10;
  
  if (DAT_0083aaa0 != 0) {
    FUN_00475c60(&DAT_0083a7b8,0,0,DAT_0083aaa4,DAT_0083aaa8,DAT_0083aab4,DAT_0083aab8);
    local_10.right = DAT_0083aab4 + DAT_0083aaa4;
    local_10.left = DAT_0083aaa4;
    local_10.bottom = DAT_0083aab8 + DAT_0083aaa8;
    local_10.top = DAT_0083aaa8;
    UnionRect((LPRECT)&DAT_0083a4d8,(RECT *)&DAT_0083a4d8,&local_10);
    iVar1 = DAT_0083aaa0;
    DAT_0083aaa0 = iVar1;
    if (param_1 != 0) {
      DAT_0083aaa0 = 0;
      FUN_0047cdb0(&DAT_0083a4d8);
      _DAT_0083a4d8 = 0;
      DAT_0083a4e0 = 0;
      DAT_0083aaa0 = iVar1;
    }
  }
  return;
}

