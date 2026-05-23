/* Ghidra decompiled: Terrain.dll */
/* Function: calcNormals @ 0x10001307 */
/* Body size: 5 addresses */


/* public: void __thiscall Terrain::calcNormals(class Tile *) */

void __thiscall Terrain::calcNormals(Terrain *this,Tile *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x1307  3  ?calcNormals@Terrain@@QAEXPAVTile@@@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (Tile *)0x0) {
    pTStack_8 = this;
    thunk_FUN_10012cf0(param_1);
  }
  pTStack_8 = (Terrain *)0x1000a728;
  __chkesp();
  return;
}

