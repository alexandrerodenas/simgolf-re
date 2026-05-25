/* Ghidra decompiled: Terrain.dll */
/* Function: updatePath @ 0x1000125D */


/* public: void __thiscall Terrain::updatePath(int,int,int) */

void __thiscall Terrain::updatePath(Terrain *this,int param_1,int param_2,int param_3)

{
  Tile *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x125d  38  ?updatePath@Terrain@@QAEXHHH@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  pTStack_8 = this;
  this_00 = tileAt(this,param_1,param_2);
  thunk_FUN_100133a0(this_00,param_3);
  pTStack_8 = (Terrain *)0x1000a4f5;
  __chkesp();
  return;
}

