/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10016c70 @ 0x10016C70 */
/* Body size: 885 addresses */


undefined4 FUN_10016c70(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  void *in_ECX;
  undefined4 *local_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005fac0;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  if ((DAT_10063e5c & 1) == 0) {
    return 1;
  }
  ExceptionList = &pvStack_14;
  FUN_10019e10(in_ECX,9);
  local_8 = 0;
  iVar3 = __heapchk();
  if ((iVar3 == -1) || (iVar3 == -2)) {
    for (local_24 = DAT_10110774; local_24 != (undefined4 *)0x0; local_24 = (undefined4 *)*local_24)
    {
      bVar2 = true;
      iVar3 = FUN_10016be0((char *)(local_24 + 7),DAT_10063e68,4);
      if (iVar3 == 0) {
        iVar3 = FUN_1001a320(0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      iVar3 = FUN_10016be0((char *)((int)local_24 + local_24[4] + 0x20),DAT_10063e68,4);
      if (iVar3 == 0) {
        iVar3 = FUN_1001a320(0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      if ((local_24[5] == 0) &&
         (iVar3 = FUN_10016be0((char *)(local_24 + 8),DAT_10063e69,local_24[4]), iVar3 == 0)) {
        iVar3 = FUN_1001a320(0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      if (!bVar2) {
        if ((local_24[2] != 0) &&
           (iVar3 = FUN_1001a320(0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar3 == 1)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        iVar3 = FUN_1001a320(0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
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
      iVar3 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -5:
      iVar3 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -4:
      iVar3 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -3:
      iVar3 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    default:
      iVar3 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_10016fe5();
  uVar4 = FUN_10016ff0();
  return uVar4;
}

