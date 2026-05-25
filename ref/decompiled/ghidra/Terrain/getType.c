/* Ghidra decompiled: Terrain.dll */
/* Function: getType @ 0x1000124E */


/* public: int __thiscall Terrain::getType(class Tile *) */

int __thiscall Terrain::getType(Terrain *this,Tile *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x124e  13  ?getType@Terrain@@QAEHPAVTile@@@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  pTStack_8 = this;
  thunk_FUN_10001f60((int)param_1);
  pTStack_8 = (Terrain *)0x10001f42;
  iVar1 = __chkesp();
  return iVar1;
}

