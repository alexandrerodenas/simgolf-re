/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004ca17 @ 0x1004CA17 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004ca17(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint *puVar3;
  size_t sVar4;
  uint *puVar5;
  int iVar6;
  uint local_a8 [33];
  undefined4 local_24 [2];
  undefined4 local_1c;
  uint local_18;
  ushort local_14 [4];
  undefined4 *local_c;
  undefined4 local_8;
  
  puVar3 = FUN_1004cbeb(param_2,local_a8,(undefined4 *)local_14,&local_1c);
  if (puVar3 != (uint *)0x0) {
    sVar4 = _strlen((char *)local_a8);
    puVar3 = _malloc(sVar4 + 1);
    if (puVar3 != (uint *)0x0) {
      puVar1 = (uint *)(&DAT_100b573c + param_1 * 4);
      puVar2 = (undefined *)(&DAT_10067cf4)[param_1 * 3];
      local_18 = *puVar1;
      local_c = (undefined4 *)(&DAT_100b577c + param_1 * 6);
      FUN_1004a460(local_24,local_c,6);
      local_8 = DAT_100b5754;
      puVar5 = FUN_1004a010(puVar3,local_a8);
      (&DAT_10067cf4)[param_1 * 3] = puVar5;
      *puVar1 = (uint)local_14[0];
      FUN_1004a460(local_c,(undefined4 *)local_14,6);
      if (param_1 == 2) {
        DAT_100b5754 = local_1c;
      }
      if (param_1 == 1) {
        _DAT_100b5758 = local_1c;
      }
      iVar6 = (**(code **)(&DAT_10067cf8 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (puVar2 != &DAT_10067be4) {
          FUN_10042c07(puVar2);
        }
        return (&DAT_10067cf4)[param_1 * 3];
      }
      (&DAT_10067cf4)[param_1 * 3] = puVar2;
      FUN_10042c07((undefined *)puVar3);
      *puVar1 = local_18;
      DAT_100b5754 = local_8;
    }
  }
  return 0;
}

