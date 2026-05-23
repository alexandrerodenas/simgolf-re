/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008fa60 @ 0x1008FA60 */
/* Body size: 91 addresses */


int FUN_1008fa60(int *param_1)

{
  int iVar1;
  
  if (((*(int *)*param_1 == -0x1f928c9d) && (*(int *)(*param_1 + 0x10) == 3)) &&
     (*(int *)(*param_1 + 0x14) == 0x19930520)) {
    FUN_10084ff0();
  }
  if ((DAT_10128968 != (_func_int *)0x0) && (iVar1 = _ValidateExecute(DAT_10128968), iVar1 != 0)) {
    iVar1 = (*DAT_10128968)(param_1);
    return iVar1;
  }
  return 0;
}

