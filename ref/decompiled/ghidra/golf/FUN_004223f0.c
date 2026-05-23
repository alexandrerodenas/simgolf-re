/* Ghidra decompiled: golf.exe */
/* Function: FUN_004223f0 @ 0x004223F0 */
/* Body size: 64 addresses */


int FUN_004223f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar1 + ((int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3);
    iVar2 = iVar2 + ((int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4);
    param_1 = param_1 - (param_1 >> 4);
    param_2 = param_2 + -0x80;
  } while (0 < iVar2);
  return iVar1;
}

