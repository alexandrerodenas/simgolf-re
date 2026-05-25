/* Ghidra decompiled: Terrain.dll */
/* Function: changeLighting @ 0x100011C2 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::changeLighting(int) */

void __thiscall Terrain::changeLighting(Terrain *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_88 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float afStack_18 [4];
  Terrain *pTStack_8;
  
                    /* 0x11c2  4  ?changeLighting@Terrain@@QAEXH@Z */
  puVar2 = auStack_88;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == 0) {
    if (_DAT_1005f164 < *(float *)(this + 4)) {
      *(float *)(this + 4) = *(float *)(this + 4) - _DAT_1005f164;
      *(float *)(this + 8) = *(float *)(this + 8) - _DAT_1005f164;
      *(float *)(this + 0xc) = *(float *)(this + 0xc) - _DAT_1005f164;
    }
  }
  else if (*(float *)(this + 4) < _DAT_1005f024) {
    *(float *)(this + 4) = *(float *)(this + 4) + _DAT_1005f164;
    *(float *)(this + 8) = *(float *)(this + 8) + _DAT_1005f164;
    *(float *)(this + 0xc) = *(float *)(this + 0xc) + _DAT_1005f164;
  }
  afStack_18[0] = -0.5;
  afStack_18[1] = 0.1;
  afStack_18[2] = -1.0;
  afStack_18[3] = 0.0;
  pTStack_8 = this;
  thunk_FUN_10003a50(40.0,1.0,0.0,0.0,afStack_18);
  thunk_FUN_10003a50(45.0,0.0,1.0,0.0,afStack_18);
  thunk_FUN_10037c80(afStack_18);
  uStack_28 = 0x3f666666;
  uStack_24 = 0x3f666666;
  uStack_20 = 0x3f666666;
  uStack_1c = 0x3f800000;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_30 = 0x3f666666;
  uStack_2c = 0x3f800000;
  uStack_48 = 0x3f800000;
  uStack_44 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  glLightfv(0x4000,0x1203,afStack_18);
  __chkesp();
  glLightfv(0x4000,0x1200,pTStack_8 + 4);
  __chkesp();
  glLightfv(0x4000,0x1201,&uStack_28);
  __chkesp();
  glLightfv(0x4000,0x1202,&uStack_38);
  __chkesp();
  glEnable(0x4000);
  __chkesp();
  uStack_3c = 0x10003748;
  __chkesp();
  return;
}

