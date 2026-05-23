/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c4b0 @ 0x0040C4B0 */
/* Body size: 66 addresses */


int FUN_0040c4b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040acd0(param_1 + param_3 * -0x400 + -0x200,param_2 + param_4 * -0x400 + -0x200);
  return (int)(iVar1 * 0x19 + (iVar1 * 0x19 >> 0x1f & 0x3ffU)) >> 10;
}

