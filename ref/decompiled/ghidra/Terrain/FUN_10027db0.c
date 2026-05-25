/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10027db0 @ 0x10027DB0 */


int FUN_10027db0(int *param_1)

{
  int iVar1;
  
  if (((*(int *)*param_1 == -0x1f928c9d) && (*(int *)(*param_1 + 0x10) == 3)) &&
     (*(int *)(*param_1 + 0x14) == 0x19930520)) {
    FUN_10020af0();
  }
  if ((DAT_10110990 != (_func_int *)0x0) && (iVar1 = _ValidateExecute(DAT_10110990), iVar1 != 0)) {
    iVar1 = (*DAT_10110990)(param_1);
    return iVar1;
  }
  return 0;
}

