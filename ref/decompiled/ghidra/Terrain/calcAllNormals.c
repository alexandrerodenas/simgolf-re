/* Ghidra decompiled: Terrain.dll */
/* Function: calcAllNormals @ 0x100010D2 */


/* public: void __thiscall Terrain::calcAllNormals(class Tile *) */

void __thiscall Terrain::calcAllNormals(Terrain *this,Tile *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_64 [16];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  Tile *pTStack_c;
  Terrain *pTStack_8;
  
                    /* 0x10d2  2  ?calcAllNormals@Terrain@@QAEXPAVTile@@@Z */
  puVar2 = auStack_64;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iStack_1c = 0xd << ((byte)*(undefined4 *)(this + 0x1c) & 0x1f);
  iStack_18 = iStack_1c;
  iStack_14 = iStack_1c;
  iStack_10 = iStack_1c;
  pTStack_8 = this;
  iStack_20 = thunk_FUN_10006810((int)param_1);
  iStack_20 = iStack_20 - iStack_10;
  while( true ) {
    iVar1 = thunk_FUN_10006810((int)param_1);
    if (iVar1 + iStack_14 <= iStack_20) break;
    iStack_24 = thunk_FUN_10005960((int)param_1);
    iStack_24 = iStack_24 + iStack_1c;
    while( true ) {
      iVar1 = thunk_FUN_10005960((int)param_1);
      if (iStack_24 <= iVar1 - iStack_18) break;
      pTStack_c = tileAt(pTStack_8,iStack_24,iStack_20);
      if (pTStack_c != (Tile *)0x0) {
        thunk_FUN_10012cf0(pTStack_c);
      }
      iStack_24 = iStack_24 + -1;
    }
    iStack_20 = iStack_20 + 1;
  }
  pTStack_8 = (Terrain *)0x1000a803;
  __chkesp();
  return;
}

