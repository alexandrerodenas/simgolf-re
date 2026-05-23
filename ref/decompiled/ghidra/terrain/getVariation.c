/* Ghidra decompiled: Terrain.dll */
/* Function: getVariation @ 0x1000105A */
/* Body size: 5 addresses */


/* public: int __thiscall Terrain::getVariation(class Tile *) */

int __thiscall Terrain::getVariation(Terrain *this,Tile *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x105a  14  ?getVariation@Terrain@@QAEHPAVTile@@@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  pTStack_8 = this;
  thunk_FUN_10015340((int)param_1);
  pTStack_8 = (Terrain *)0x100033c5;
  iVar1 = __chkesp();
  return iVar1;
}

