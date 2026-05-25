/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040bfa0 @ 0x0040BFA0 */


int FUN_0040bfa0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040bf60(param_1 >> 10,param_2 >> 10);
  if (iVar1 != 0) {
    return 0x14;
  }
  return (int)*(char *)((int)&DAT_005722e8 + (param_1 >> 10) * 0x32 + (param_2 >> 10));
}

