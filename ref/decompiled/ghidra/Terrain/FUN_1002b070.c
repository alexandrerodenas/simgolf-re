/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002b070 @ 0x1002B070 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_1002b070(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
    *(undefined1 *)param_2 = 0x43;
    *(undefined1 *)((int)param_2 + 1) = 0;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 1) = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    iVar1 = _strcmp(&DAT_10066bc0,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_10066b3c,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_1002b260((char *)local_8c,(byte *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_1002f1e0((char *)local_8c,(undefined2 *)&DAT_101109c4,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_101109cc = (uint)DAT_101109c8;
      ___lc_lctostr((uint *)&DAT_10066bc0,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_10018580((uint *)&DAT_10066b3c,(uint *)&DAT_10066bc0);
      }
      else {
        FUN_10018580((uint *)&DAT_10066b3c,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_1001f510(param_3,(undefined4 *)&DAT_101109c4,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_1001f510(param_4,(undefined4 *)&DAT_101109cc,4);
    }
    FUN_10018580(param_2,(uint *)&DAT_10066bc0);
    param_2 = (uint *)&DAT_10066bc0;
  }
  return param_2;
}

