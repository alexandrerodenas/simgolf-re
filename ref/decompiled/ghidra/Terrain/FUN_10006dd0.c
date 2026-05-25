/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10006dd0 @ 0x10006DD0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006dd0(LPCSTR param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 local_218 [16];
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  float local_1a4 [4];
  int local_194 [23];
  byte local_138 [256];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1004117c;
  local_10 = ExceptionList;
  puVar4 = local_218;
  for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  ExceptionList = &local_10;
  FUN_10033980(local_194,param_1,0x20,DAT_100612c4,1);
  local_8 = 0;
  uVar1 = thunk_FUN_10002510((int)local_194 + *(int *)(local_194[0] + 4));
  if (uVar1 == 0) {
    thunk_FUN_10010590(local_194,(int)local_138,0x100,10);
    while( true ) {
      pcVar5 = "#AMBIENT";
      pbVar2 = FUN_10019000(local_138,&DAT_1005f20c);
      iVar3 = _strcmp((char *)pbVar2,pcVar5);
      if (iVar3 == 0) break;
      thunk_FUN_10010590(local_194,(int)local_138,0x100,10);
    }
    thunk_FUN_10010590(local_194,(int)local_138,0x100,10);
    pbVar2 = FUN_10019000(local_138,&DAT_1005f20c);
    local_1b8 = FUN_10018e20(pbVar2);
    local_20 = (float)local_1b8 / _DAT_1005f200;
    pbVar2 = FUN_10019000((byte *)0x0,&DAT_1005f20c);
    local_1bc = FUN_10018e20(pbVar2);
    local_1c = (float)local_1bc / _DAT_1005f200;
    pbVar2 = FUN_10019000((byte *)0x0,&DAT_1005f20c);
    local_1c0 = FUN_10018e20(pbVar2);
    local_18 = (float)local_1c0 / _DAT_1005f200;
    thunk_FUN_10010590(local_194,(int)local_138,0x100,10);
    while( true ) {
      pcVar5 = "#DIFFUSE";
      pbVar2 = FUN_10019000(local_138,&DAT_1005f20c);
      iVar3 = _strcmp((char *)pbVar2,pcVar5);
      if (iVar3 == 0) break;
      thunk_FUN_10010590(local_194,(int)local_138,0x100,10);
    }
    thunk_FUN_10010590(local_194,(int)local_138,0x100,10);
    pbVar2 = FUN_10019000(local_138,&DAT_1005f20c);
    local_1c4 = FUN_10018e20(pbVar2);
    local_2c = (float)local_1c4 / _DAT_1005f200;
    pbVar2 = FUN_10019000((byte *)0x0,&DAT_1005f20c);
    local_1c8 = FUN_10018e20(pbVar2);
    local_28 = (float)local_1c8 / _DAT_1005f200;
    pbVar2 = FUN_10019000((byte *)0x0,&DAT_1005f20c);
    local_1cc = FUN_10018e20(pbVar2);
    local_24 = (float)local_1cc / _DAT_1005f200;
    thunk_FUN_10010590(local_194,(int)local_138,0x100,10);
    while( true ) {
      pcVar5 = "#SPECULAR";
      pbVar2 = FUN_10019000(local_138,&DAT_1005f20c);
      iVar3 = _strcmp((char *)pbVar2,pcVar5);
      if (iVar3 == 0) break;
      thunk_FUN_10010590(local_194,(int)local_138,0x100,10);
    }
    thunk_FUN_10010590(local_194,(int)local_138,0x100,10);
    pbVar2 = FUN_10019000(local_138,&DAT_1005f20c);
    local_1d0 = FUN_10018e20(pbVar2);
    local_38 = (float)local_1d0 / _DAT_1005f200;
    pbVar2 = FUN_10019000((byte *)0x0,&DAT_1005f20c);
    local_1d4 = FUN_10018e20(pbVar2);
    local_34 = (float)local_1d4 / _DAT_1005f200;
    pbVar2 = FUN_10019000((byte *)0x0,&DAT_1005f20c);
    local_1d8 = FUN_10018e20(pbVar2);
    local_30 = (float)local_1d8 / _DAT_1005f200;
    local_1a4[0] = -0.5;
    local_1a4[1] = 0.1;
    local_1a4[2] = -1.0;
    local_1a4[3] = 0.0;
    thunk_FUN_10003a50(40.0,1.0,0.0,0.0,local_1a4);
    thunk_FUN_10003a50(45.0,0.0,1.0,0.0,local_1a4);
    thunk_FUN_10037c80(local_1a4);
    local_1b4 = 0x3f800000;
    local_1b0 = 0x3f800000;
    local_1ac = 0x3f800000;
    local_1a8 = 0x3f800000;
    glLightfv(0x4000,0x1203,local_1a4);
    __chkesp();
    glLightfv(0x4000,0x1200,&local_20);
    __chkesp();
    glLightfv(0x4000,0x1201,&local_2c);
    __chkesp();
    glLightfv(0x4000,0x1202,&local_38);
    __chkesp();
    glEnable(0x4000);
    __chkesp();
    glMaterialfv(0x404,0x1202,&local_1b4);
    __chkesp();
    glMateriali(0x404,0x1601,0xd);
    __chkesp();
    FUN_10033e90(local_194);
    local_8 = 0xffffffff;
    thunk_FUN_100046a0((int)local_194);
  }
  else {
    local_8 = 0xffffffff;
    thunk_FUN_100046a0((int)local_194);
  }
  ExceptionList = local_10;
  local_8 = 0x100072eb;
  __chkesp();
  return;
}

