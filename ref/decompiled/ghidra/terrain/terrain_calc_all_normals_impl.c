/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a740 @ 0x1000A740 */
/* Body size: 201 addresses */


void __thiscall FUN_1000a740(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_64 [16];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  Tile *local_c;
  Terrain *local_8;
  
  puVar2 = local_64;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_1c = 0xd << ((byte)*(undefined4 *)((int)this + 0x1c) & 0x1f);
  local_18 = local_1c;
  local_14 = local_1c;
  local_10 = local_1c;
  local_8 = this;
  local_20 = thunk_FUN_10006810(param_1);
  local_20 = local_20 - local_10;
  while( true ) {
    iVar1 = thunk_FUN_10006810(param_1);
    if (iVar1 + local_14 <= local_20) break;
    local_24 = thunk_FUN_10005960(param_1);
    local_24 = local_24 + local_1c;
    while( true ) {
      iVar1 = thunk_FUN_10005960(param_1);
      if (local_24 <= iVar1 - local_18) break;
      local_c = Terrain::tileAt(local_8,local_24,local_20);
      if (local_c != (Tile *)0x0) {
        thunk_FUN_10012cf0(local_c);
      }
      local_24 = local_24 + -1;
    }
    local_20 = local_20 + 1;
  }
  local_8 = (Terrain *)0x1000a803;
  __chkesp();
  return;
}

