/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10093c70 @ 0x10093C70 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_10093c70(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

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
    iVar1 = _strcmp(&DAT_101260f8,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_10126074,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_10093e60((char *)local_8c,(byte *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_100973c0((char *)local_8c,(undefined2 *)&DAT_10128978,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_10128980 = (uint)DAT_1012897c;
      ___lc_lctostr((uint *)&DAT_101260f8,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_1007f760((uint *)&DAT_10126074,(uint *)&DAT_101260f8);
      }
      else {
        FUN_1007f760((uint *)&DAT_10126074,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_1007f3a0(param_3,(undefined4 *)&DAT_10128978,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_1007f3a0(param_4,(undefined4 *)&DAT_10128980,4);
    }
    FUN_1007f760(param_2,(uint *)&DAT_101260f8);
    param_2 = (uint *)&DAT_101260f8;
  }
  return param_2;
}

