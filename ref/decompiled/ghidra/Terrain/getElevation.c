/* Ghidra decompiled: Terrain.dll */
/* Function: getElevation @ 0x10001343 */


/* public: int __thiscall Terrain::getElevation(class Tile *,int) */

int __thiscall Terrain::getElevation(Terrain *this,Tile *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x1343  11  ?getElevation@Terrain@@QAEHPAVTile@@H@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (Tile *)0x0) {
    pTStack_8 = this;
    thunk_FUN_10001e40(param_1,param_2);
  }
  pTStack_8 = (Terrain *)0x10001e20;
  iVar1 = __chkesp();
  return iVar1;
}

