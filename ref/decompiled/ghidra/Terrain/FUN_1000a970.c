/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a970 @ 0x1000A970 */


void __fastcall FUN_1000a970(Terrain *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [9];
  undefined4 uStack_24;
  Terrain *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  thunk_FUN_1000a130(param_1);
  uVar1 = thunk_FUN_100032b0();
  glVertexPointer(3,0x1406,0,uVar1);
  __chkesp();
  uVar1 = thunk_FUN_10003270();
  glNormalPointer(0x1406,0,uVar1);
  __chkesp();
  uStack_24 = 0x1000a9e2;
  __chkesp();
  return;
}

