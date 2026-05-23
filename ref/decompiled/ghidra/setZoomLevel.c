/* Ghidra decompiled: Terrain.dll */
/* Function: setZoomLevel @ 0x10001294 */
/* Body size: 5 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::setZoomLevel(int) */

void __thiscall Terrain::setZoomLevel(Terrain *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_54 [5];
  undefined4 uStack_40;
  int iStack_14;
  float fStack_10;
  float fStack_c;
  Terrain *pTStack_8;
  
                    /* 0x1294  34  ?setZoomLevel@Terrain@@QAEXH@Z */
  puVar2 = auStack_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  pTStack_8 = this;
  glMatrixMode(0x1701);
  __chkesp();
  glLoadIdentity();
  __chkesp();
  if ((*(int *)(pTStack_8 + 0x20) == 800) && (*(int *)(pTStack_8 + 0x24) == 600)) {
    fStack_c = 1767.767;
    fStack_10 = 1325.8252;
  }
  else if ((*(int *)(pTStack_8 + 0x20) == 0x400) && (*(int *)(pTStack_8 + 0x24) == 0x300)) {
    fStack_c = 1810.1934;
    fStack_10 = 1357.645;
  }
  else if ((*(int *)(pTStack_8 + 0x20) == 0x500) && (*(int *)(pTStack_8 + 0x24) == 0x400)) {
    fStack_c = 1740.5706;
    fStack_10 = 1392.4564;
  }
  iStack_14 = param_1;
  if (param_1 == 1) {
    fStack_c = fStack_c * _DAT_1005f3e4;
    fStack_10 = fStack_10 * _DAT_1005f3e4;
    *(undefined4 *)(pTStack_8 + 0x1c) = 2;
  }
  else if (param_1 == 2) {
    fStack_c = fStack_c + fStack_c;
    fStack_10 = fStack_10 + fStack_10;
    *(undefined4 *)(pTStack_8 + 0x1c) = 1;
  }
  else if (param_1 == 4) {
    resize(pTStack_8,*(int *)(pTStack_8 + 0x20),*(int *)(pTStack_8 + 0x24));
    *(undefined4 *)(pTStack_8 + 0x1c) = 0;
  }
  if (pTStack_8[0x28] == (Terrain)0x0) {
    glOrtho((double)(-fStack_c * _DAT_1005f3e0),(double)(fStack_c * _DAT_1005f3e0),
            (double)(-fStack_10 * _DAT_1005f3e0),(double)(fStack_10 * _DAT_1005f3e0),0,0x40b38800,0,
            0xc0b38800);
    __chkesp();
  }
  else {
    glOrtho((double)(-fStack_c * _DAT_1005f3e0),(double)(fStack_c * _DAT_1005f3e0),
            (double)(fStack_10 * _DAT_1005f3e0),(double)(-fStack_10 * _DAT_1005f3e0),0,0x40b38800,0,
            0xc0b38800);
    __chkesp();
  }
  glMatrixMode(0x1700);
  __chkesp();
  uStack_40 = 0x100091d9;
  __chkesp();
  return;
}

