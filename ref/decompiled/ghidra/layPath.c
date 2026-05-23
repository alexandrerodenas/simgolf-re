/* Ghidra decompiled: Terrain.dll */
/* Function: layPath @ 0x100012C1 */
/* Body size: 5 addresses */


/* public: void __thiscall Terrain::layPath(class Tile *,int,int) */

void __thiscall Terrain::layPath(Terrain *this,Tile *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x12c1  20  ?layPath@Terrain@@QAEXPAVTile@@HH@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  pTStack_8 = this;
  if (param_2 == 0) {
    thunk_FUN_10013400(param_1,'\0',param_3);
  }
  else {
    thunk_FUN_10013400(param_1,'\x01',param_3);
  }
  pTStack_8 = (Terrain *)0x1000a42e;
  __chkesp();
  return;
}

