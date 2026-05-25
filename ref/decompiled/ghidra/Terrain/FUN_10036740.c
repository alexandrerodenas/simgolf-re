/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036740 @ 0x10036740 */


int __fastcall FUN_10036740(int *param_1)

{
  int iVar1;
  
  if (param_1[2] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x20))();
  }
  else {
    if (param_1[3] == -1) {
      iVar1 = (**(code **)(*param_1 + 0x20))();
      param_1[3] = iVar1;
    }
    iVar1 = param_1[3];
  }
  return iVar1;
}

