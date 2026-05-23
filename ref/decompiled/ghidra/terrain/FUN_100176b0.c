/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100176b0 @ 0x100176B0 */
/* Body size: 689 addresses */


void FUN_100176b0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  void *in_ECX;
  undefined4 *local_24;
  undefined4 *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005fc50;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  local_24 = (undefined4 *)0x0;
  ExceptionList = &pvStack_14;
  FUN_10019e10(in_ECX,9);
  local_8 = 0;
  iVar2 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_24 = (undefined4 *)*param_1;
  }
  local_20 = DAT_10110774;
  do {
    if ((local_20 == (undefined4 *)0x0) || (local_20 == local_24)) {
      local_8 = 0xffffffff;
      FUN_10017961();
      FUN_1001796c();
      return;
    }
    if ((((local_20[5] & 0xffff) != 3) && ((local_20[5] & 0xffff) != 0)) &&
       (((local_20[5] & 0xffff) != 2 || ((DAT_10063e5c & 0x10) != 0)))) {
      if (local_20[2] != 0) {
        iVar2 = __CrtIsValidPointer((void *)local_20[2],1,0);
        if (iVar2 == 0) {
          iVar2 = FUN_1001a320(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = FUN_1001a320(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = FUN_1001a320(0,0,0,0,(byte *)"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_20[5] & 0xffff) == 4) {
        iVar2 = FUN_1001a320(0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n")
        ;
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_10112324 == (code *)0x0) {
          FUN_100179b0((int)local_20);
        }
        else {
          (*DAT_10112324)(local_20 + 8,local_20[4]);
        }
      }
      else if (local_20[5] == 1) {
        iVar2 = FUN_1001a320(0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_100179b0((int)local_20);
      }
      else if ((local_20[5] & 0xffff) == 2) {
        iVar2 = FUN_1001a320(0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_100179b0((int)local_20);
      }
    }
    local_20 = (undefined4 *)*local_20;
  } while( true );
}

