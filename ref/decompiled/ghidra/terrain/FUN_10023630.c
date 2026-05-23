/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10023630 @ 0x10023630 */
/* Body size: 329 addresses */


void __fastcall FUN_10023630(void *param_1)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_101122b4 == 0) {
    FUN_1002a400(param_1);
  }
  local_c = 0;
  for (local_8 = DAT_1011078c; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  pvVar2 = (void *)(local_c * 4 + 4);
  local_10 = (int *)__malloc_dbg(pvVar2,pvVar2,2,"stdenvp.c",0x6d);
  DAT_10110830 = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_1011078c; (char)*local_8 != '\0';
      local_8 = (uint *)((int)local_8 + (int)pvVar2)) {
    sVar1 = _strlen((char *)local_8);
    pvVar2 = (void *)(sVar1 + 1);
    if ((char)*local_8 != '=') {
      iVar3 = __malloc_dbg(pvVar2,pvVar2,2,"stdenvp.c",0x79);
      *local_10 = iVar3;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_10018580((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  __free_dbg(DAT_1011078c,2);
  DAT_1011078c = (uint *)0x0;
  *local_10 = 0;
  DAT_101122a4 = 1;
  return;
}

