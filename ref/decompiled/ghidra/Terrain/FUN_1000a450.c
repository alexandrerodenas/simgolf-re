/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a450 @ 0x1000A450 */


void __thiscall FUN_1000a450(void *this,int param_1,int param_2)

{
  Tile *pTVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  pTVar1 = Terrain::tileAt(this,param_1,param_2);
  thunk_FUN_10013360((int)pTVar1);
  local_8 = (void *)0x1000a491;
  __chkesp();
  return;
}

