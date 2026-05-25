/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10080ed0 @ 0x10080ED0 */


undefined4 FUN_10080ed0(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f278;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  if ((DAT_10123350 & 1) == 0) {
    return 1;
  }
  ExceptionList = &pvStack_14;
  FUN_100833f0(9);
  local_8 = 0;
  iVar3 = __heapchk();
  if ((iVar3 == -1) || (iVar3 == -2)) {
    for (local_24 = DAT_101287a0; local_24 != (undefined4 *)0x0; local_24 = (undefined4 *)*local_24)
    {
      bVar2 = true;
      iVar3 = FUN_10080e40((char *)(local_24 + 7),DAT_1012335c,4);
      if (iVar3 == 0) {
        iVar3 = FUN_10081f90(0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      iVar3 = FUN_10080e40((char *)((int)local_24 + local_24[4] + 0x20),DAT_1012335c,4);
      if (iVar3 == 0) {
        iVar3 = FUN_10081f90(0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      if ((local_24[5] == 0) &&
         (iVar3 = FUN_10080e40((char *)(local_24 + 8),DAT_1012335d,local_24[4]), iVar3 == 0)) {
        iVar3 = FUN_10081f90(0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      if (!bVar2) {
        if ((local_24[2] != 0) &&
           (iVar3 = FUN_10081f90(0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar3 == 1)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        iVar3 = FUN_10081f90(0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
    }
  }
  else {
    switch(iVar3) {
    case -6:
      iVar3 = FUN_10081f90(0,0,0,0,&DAT_1011d528);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -5:
      iVar3 = FUN_10081f90(0,0,0,0,&DAT_1011d528);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -4:
      iVar3 = FUN_10081f90(0,0,0,0,&DAT_1011d528);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -3:
      iVar3 = FUN_10081f90(0,0,0,0,&DAT_1011d528);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    default:
      iVar3 = FUN_10081f90(0,0,0,0,&DAT_1011d528);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_10081245();
  uVar4 = FUN_10081250();
  return uVar4;
}

