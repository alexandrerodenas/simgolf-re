/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a130 @ 0x1000A130 */
/* Body size: 549 addresses */


void __fastcall FUN_1000a130(Terrain *param_1)

{
  void *this;
  Tile *pTVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  Terrain *local_8;
  
  puVar3 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  thunk_FUN_1000c560(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18));
  for (local_c = 0; local_c < *(int *)(local_8 + 0x14); local_c = local_c + 1) {
    for (local_10 = 0; local_10 < *(int *)(local_8 + 0x18); local_10 = local_10 + 1) {
      thunk_FUN_1000c2c0(local_8 + (local_c + local_10 * *(int *)(local_8 + 0x14)) * 0x248 + 0x3a4,
                         local_c,local_10);
      iVar2 = *(int *)(local_8 + 0x14);
      iVar4 = local_c;
      iVar5 = local_10;
      this = (void *)thunk_FUN_100153c0((int)(local_8 +
                                             (local_c + local_10 * *(int *)(local_8 + 0x14)) * 0x248
                                             + 0x3a4));
      thunk_FUN_10002060(this,iVar4,iVar5,iVar2);
    }
  }
  for (local_c = 0; local_c < *(int *)(local_8 + 0x14); local_c = local_c + 1) {
    for (local_14 = 0; local_14 < *(int *)(local_8 + 0x18); local_14 = local_14 + 1) {
      pTVar1 = Terrain::tileAt(local_8,local_c + -1,local_14);
      thunk_FUN_1000c520(local_8 + (local_c + local_14 * *(int *)(local_8 + 0x14)) * 0x248 + 0x3a4,2
                         ,pTVar1);
      pTVar1 = Terrain::tileAt(local_8,local_c,local_14 + -1);
      thunk_FUN_1000c520(local_8 + (local_c + local_14 * *(int *)(local_8 + 0x14)) * 0x248 + 0x3a4,0
                         ,pTVar1);
      pTVar1 = Terrain::tileAt(local_8,local_c + 1,local_14);
      thunk_FUN_1000c520(local_8 + (local_c + local_14 * *(int *)(local_8 + 0x14)) * 0x248 + 0x3a4,3
                         ,pTVar1);
      pTVar1 = Terrain::tileAt(local_8,local_c,local_14 + 1);
      thunk_FUN_1000c520(local_8 + (local_c + local_14 * *(int *)(local_8 + 0x14)) * 0x248 + 0x3a4,1
                         ,pTVar1);
    }
  }
  local_8 = (Terrain *)0x1000a351;
  __chkesp();
  return;
}

