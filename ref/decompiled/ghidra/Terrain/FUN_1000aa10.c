/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000aa10 @ 0x1000AA10 */


void __fastcall FUN_1000aa10(Terrain *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [11];
  undefined4 uStack_24;
  int local_10;
  int local_c;
  Terrain *local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  for (local_c = 0; local_c < *(int *)(local_8 + 0x14); local_c = local_c + 1) {
    for (local_10 = 0; local_10 < *(int *)(local_8 + 0x18); local_10 = local_10 + 1) {
      thunk_FUN_1000c2c0(local_8 + (local_c + local_10 * *(int *)(local_8 + 0x14)) * 0x248 + 0x3a4,
                         local_c,local_10);
    }
  }
  thunk_FUN_1000a130(local_8);
  uVar1 = thunk_FUN_100032b0();
  glVertexPointer(3,0x1406,0,uVar1);
  __chkesp();
  uVar1 = thunk_FUN_10003270();
  glNormalPointer(0x1406,0,uVar1);
  __chkesp();
  uStack_24 = 0x1000aaec;
  __chkesp();
  return;
}

