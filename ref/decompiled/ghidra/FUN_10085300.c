/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085300 @ 0x10085300 */
/* Body size: 68 addresses */


int __cdecl FUN_10085300(undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_10085470(0);
  }
  else {
    FUN_10083230(param_1);
    iVar1 = FUN_10085350((int *)param_1);
    FUN_100832a0(param_1);
  }
  return iVar1;
}

