/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100340e0 @ 0x100340E0 */
/* Body size: 107 addresses */


int * __fastcall FUN_100340e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x13] == -1) {
    param_1 = (int *)0x0;
  }
  else {
    FUN_10034090((int)param_1);
    iVar1 = (**(code **)(*param_1 + 4))();
    iVar2 = FUN_1001e9c0(param_1[0x13]);
    if ((iVar2 == -1) || (iVar1 == -1)) {
      FUN_10034150((int)param_1);
      param_1 = (int *)0x0;
    }
    else {
      param_1[0x13] = -1;
      FUN_10034150((int)param_1);
    }
  }
  return param_1;
}

