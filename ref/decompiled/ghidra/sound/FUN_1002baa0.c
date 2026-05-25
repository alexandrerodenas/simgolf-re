/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002baa0 @ 0x1002BAA0 */


undefined4 __fastcall FUN_1002baa0(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x5c))();
    return uVar2;
  }
  if ((((*(uint *)(param_1 + 0x58) >> 4 & 1) != 0) && (*(int *)(param_1 + 0x68) != 0)) &&
     (DVar1 = timeGetTime(), DVar1 - *(int *)(param_1 + 0x68) < *(uint *)(param_1 + 100))) {
    return 1;
  }
  return 0;
}

