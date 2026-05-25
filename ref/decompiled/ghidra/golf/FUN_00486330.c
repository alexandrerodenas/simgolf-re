/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486330 @ 0x00486330 */


int __thiscall FUN_00486330(int param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_4) {
    do {
      if ((uint)(*(int *)(param_1 + 0x574) + param_2) < *param_3) break;
      iVar1 = iVar1 + 1;
      param_3 = param_3 + 1;
    } while (iVar1 < param_4);
  }
  return iVar1 + -1;
}

