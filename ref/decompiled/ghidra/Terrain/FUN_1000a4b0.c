/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a4b0 @ 0x1000A4B0 */


void __thiscall FUN_1000a4b0(void *this,int param_1,int param_2,int param_3)

{
  Tile *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  this_00 = Terrain::tileAt(this,param_1,param_2);
  thunk_FUN_100133a0(this_00,param_3);
  local_8 = (void *)0x1000a4f5;
  __chkesp();
  return;
}

