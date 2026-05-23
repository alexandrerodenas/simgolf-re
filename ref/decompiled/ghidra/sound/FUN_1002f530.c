/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f530 @ 0x1002F530 */
/* Body size: 40 addresses */


int __fastcall FUN_1002f530(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    if ((*(int **)(param_1 + 0x40) != (int *)0x0) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x90))(), iVar1 != 0)) {
      return iVar1;
    }
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
  }
  return 0;
}

