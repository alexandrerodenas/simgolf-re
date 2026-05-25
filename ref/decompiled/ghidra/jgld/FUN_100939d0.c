/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100939d0 @ 0x100939D0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100939d0(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint local_ac [2];
  undefined4 local_a4;
  uint local_a0 [33];
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined *local_10;
  uint *local_c;
  undefined4 local_8;
  
  puVar1 = FUN_10093c70(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x132;
    pcVar6 = "setlocal.c";
    uVar5 = 2;
    sVar3 = _strlen((char *)local_a0);
    local_c = (uint *)__malloc_dbg(sVar3 + 1,uVar5,(int)pcVar6,uVar2);
    if (local_c == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = (undefined *)(&DAT_10126184)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_10128984 + param_1 * 4);
      FUN_1007f3a0(local_18,(undefined4 *)(&DAT_101289c8 + param_1 * 6),6);
      local_1c = DAT_1012899c;
      puVar1 = FUN_1007f760(local_c,local_a0);
      (&DAT_10126184)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_10128984 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_1007f3a0((undefined4 *)(&DAT_101289c8 + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_1012899c = local_a4;
      }
      if (param_1 == 1) {
        _DAT_101289a0 = local_a4;
      }
      iVar4 = (**(code **)(&DAT_10126188 + param_1 * 0xc))();
      if (iVar4 == 0) {
        if (local_10 != &DAT_10126070) {
          __free_dbg(local_10,2);
        }
        uVar2 = (&DAT_10126184)[param_1 * 3];
      }
      else {
        (&DAT_10126184)[param_1 * 3] = local_10;
        __free_dbg(local_c,2);
        *(undefined4 *)(&DAT_10128984 + param_1 * 4) = local_8;
        DAT_1012899c = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

