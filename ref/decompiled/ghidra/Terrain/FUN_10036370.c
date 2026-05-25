/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036370 @ 0x10036370 */


undefined4 __fastcall FUN_10036370(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1[2] == 0) && (param_1[4] == 0)) {
    iVar2 = (**(code **)(*param_1 + 0x28))();
    if (iVar2 == -1) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

