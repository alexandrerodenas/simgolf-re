/* Ghidra decompiled: Terrain.dll */
/* Function: resize @ 0x100012F8 */


/* public: void __thiscall Terrain::resize(int,int) */

void __thiscall Terrain::resize(Terrain *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_68 [6];
  undefined4 uStack_50;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  Terrain *pTStack_8;
  
                    /* 0x12f8  30  ?resize@Terrain@@QAEXHH@Z */
  puVar3 = auStack_68;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  pTStack_8 = this;
  glViewport(0,0,param_1,param_2);
  __chkesp();
  glMatrixMode(0x1701);
  __chkesp();
  glLoadIdentity();
  __chkesp();
  if ((param_1 == 800) && (param_2 == 600)) {
    param_1 = 0x6e7;
    param_2 = 0x52d;
  }
  else if ((param_1 == 0x400) && (param_2 == 0x300)) {
    param_1 = 0x712;
    param_2 = 0x517;
  }
  else if ((param_1 == 0x500) && (param_2 == 0x400)) {
    param_1 = 0x6cc;
    param_2 = 0x570;
  }
  iVar2 = param_2 >> 1;
  iVar1 = param_1 >> 1;
  if (pTStack_8[0x28] == (Terrain)0x0) {
    iStack_20 = -param_2 >> 1;
    iStack_28 = -param_1 >> 1;
    iStack_24 = iVar1;
    iStack_1c = iVar2;
    glOrtho((double)iStack_28,(double)iVar1,(double)iStack_20,(double)iVar2,0,0x40b38800,0,
            0xc0b38800);
    __chkesp();
  }
  else {
    iStack_c = -param_2 >> 1;
    iStack_18 = -param_1 >> 1;
    iStack_14 = iVar1;
    iStack_10 = iVar2;
    glOrtho((double)iStack_18,(double)iVar1,(double)iVar2,(double)iStack_c,0,0x40b38800,0,0xc0b38800
           );
    __chkesp();
  }
  glMatrixMode(0x1700);
  __chkesp();
  glLoadIdentity();
  __chkesp();
  uStack_50 = 0x1000a0b1;
  __chkesp();
  return;
}

