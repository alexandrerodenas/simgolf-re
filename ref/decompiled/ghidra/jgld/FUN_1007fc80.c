/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007fc80 @ 0x1007FC80 */


undefined4 * __cdecl FUN_1007fc80(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  bVar2 = false;
  if ((((DAT_10123350 & 4) != 0) && (iVar4 = FUN_10080ed0(), iVar4 == 0)) &&
     (iVar4 = FUN_10081f90(2,0x1011edf0,0x14c,0,(byte *)"_CrtCheckMemory()"), iVar4 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  iVar4 = DAT_10123354;
  if (DAT_10123354 == DAT_10123358) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  iVar6 = (*(code *)PTR_FUN_10123758)(1,0,param_1,param_2,DAT_10123354,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = FUN_10081f90(0,0,0,0,&DAT_1011d528);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    else {
      iVar4 = FUN_10081f90(0,0,0,0,(byte *)"Client hook allocation failure at file %hs line %d.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_10123350 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_10081f90(1,0,0,0,&DAT_1011d528), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
      puVar5 = (undefined4 *)__heap_alloc_base(param_1 + 0x24);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        DAT_10123354 = DAT_10123354 + 1;
        if (bVar2) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0xfedcbabc;
          puVar5[4] = param_1;
          puVar5[5] = 3;
          puVar5[6] = 0;
        }
        else {
          DAT_1012879c = DAT_1012879c + param_1;
          DAT_101287a4 = DAT_101287a4 + param_1;
          if (DAT_101287a8 < DAT_101287a4) {
            DAT_101287a8 = DAT_101287a4;
          }
          puVar3 = puVar5;
          if (DAT_101287a0 != (undefined4 *)0x0) {
            DAT_101287a0[1] = puVar5;
            puVar3 = DAT_10128798;
          }
          DAT_10128798 = puVar3;
          *puVar5 = DAT_101287a0;
          puVar5[1] = 0;
          puVar5[2] = param_3;
          puVar5[3] = param_4;
          puVar5[4] = param_1;
          puVar5[5] = param_2;
          puVar5[6] = iVar4;
          DAT_101287a0 = puVar5;
        }
        _memset(puVar5 + 7,(uint)DAT_1012335c,4);
        _memset((void *)((int)puVar5 + param_1 + 0x20),(uint)DAT_1012335c,4);
        _memset(puVar5 + 8,(uint)DAT_1012335e,param_1);
        puVar5 = puVar5 + 8;
      }
    }
    else {
      iVar4 = FUN_10081f90(1,0,0,0,(byte *)"Invalid allocation size: %u bytes.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
      puVar5 = (undefined4 *)0x0;
    }
  }
  return puVar5;
}

