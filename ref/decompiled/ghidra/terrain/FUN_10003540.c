/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10003540 @ 0x10003540 */
/* Body size: 526 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10003540(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_88 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18 [4];
  void *local_8;
  
  puVar2 = local_88;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == 0) {
    if (_DAT_1005f164 < *(float *)((int)this + 4)) {
      *(float *)((int)this + 4) = *(float *)((int)this + 4) - _DAT_1005f164;
      *(float *)((int)this + 8) = *(float *)((int)this + 8) - _DAT_1005f164;
      *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - _DAT_1005f164;
    }
  }
  else if (*(float *)((int)this + 4) < _DAT_1005f024) {
    *(float *)((int)this + 4) = *(float *)((int)this + 4) + _DAT_1005f164;
    *(float *)((int)this + 8) = *(float *)((int)this + 8) + _DAT_1005f164;
    *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) + _DAT_1005f164;
  }
  local_18[0] = -0.5;
  local_18[1] = 0.1;
  local_18[2] = -1.0;
  local_18[3] = 0.0;
  local_8 = this;
  thunk_FUN_10003a50(40.0,1.0,0.0,0.0,local_18);
  thunk_FUN_10003a50(45.0,0.0,1.0,0.0,local_18);
  thunk_FUN_10037c80(local_18);
  local_28 = 0x3f666666;
  local_24 = 0x3f666666;
  local_20 = 0x3f666666;
  local_1c = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f666666;
  local_2c = 0x3f800000;
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  glLightfv(0x4000,0x1203,local_18);
  __chkesp();
  glLightfv(0x4000,0x1200,(int)local_8 + 4);
  __chkesp();
  glLightfv(0x4000,0x1201,&local_28);
  __chkesp();
  glLightfv(0x4000,0x1202,&local_38);
  __chkesp();
  glEnable(0x4000);
  __chkesp();
  local_3c = 0x10003748;
  __chkesp();
  return;
}

