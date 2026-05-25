/* Ghidra decompiled: Terrain.dll */
/* Function: tileHit @ 0x1000109B */


/* public: class Tile * __thiscall Terrain::tileHit(int,int) */

Tile * __thiscall Terrain::tileHit(Terrain *this,int param_1,int param_2)

{
  char *pcVar1;
  Tile *pTVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 auStack_80 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  char acStack_10 [8];
  Terrain *pTStack_8;
  
                    /* 0x109b  37  ?tileHit@Terrain@@QAEPAVTile@@HH@Z */
  puVar4 = auStack_80;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  pTStack_8 = this;
  OutputDebugStringA("\nX: ");
  __chkesp();
  pcVar1 = __itoa(param_1,acStack_10,10);
  OutputDebugStringA(pcVar1);
  __chkesp();
  OutputDebugStringA("   Y: ");
  __chkesp();
  pcVar1 = __itoa(param_2,acStack_10,10);
  OutputDebugStringA(pcVar1);
  __chkesp();
  OutputDebugStringA("\n");
  __chkesp();
  uStack_3c = 0xfffffb50;
  uStack_40 = 300;
  iStack_2c = 0x20;
  uStack_30 = 0x41a00000;
  iStack_20 = param_1 + -400;
  iStack_1c = param_2 + -300;
  lVar5 = __ftol();
  iStack_28 = (int)lVar5;
  iVar3 = iStack_1c * iStack_2c;
  lVar5 = __ftol();
  iStack_24 = (iVar3 - (int)lVar5) + iStack_28 / 2;
  if (iStack_24 < 0) {
    iStack_24 = iStack_24 - iStack_28;
  }
  iStack_14 = iStack_24 / iStack_28;
  iVar3 = iStack_1c * iStack_2c;
  lVar5 = __ftol();
  iStack_24 = iVar3 + (int)lVar5 + iStack_28 / 2;
  if (iStack_24 < 0) {
    iStack_24 = iStack_24 - iStack_28;
  }
  iStack_18 = iStack_24 / iStack_28;
  iStack_34 = 0x18 - iStack_14;
  iStack_38 = iStack_18 + 0x18;
  OutputDebugStringA("\nTile X: ");
  __chkesp();
  pcVar1 = __itoa(iStack_38,acStack_10,10);
  OutputDebugStringA(pcVar1);
  __chkesp();
  OutputDebugStringA("   Tile Y: ");
  __chkesp();
  pcVar1 = __itoa(iStack_34,acStack_10,10);
  OutputDebugStringA(pcVar1);
  __chkesp();
  OutputDebugStringA("\n");
  __chkesp();
  tileAt(pTStack_8,iStack_34,iStack_38);
  pTStack_8 = (Terrain *)0x1000ad36;
  pTVar2 = (Tile *)__chkesp();
  return pTVar2;
}

