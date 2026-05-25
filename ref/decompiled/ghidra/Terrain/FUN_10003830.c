/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10003830 @ 0x10003830 */


void FUN_10003830(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_78 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar2 = local_78;
  for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  glDisable(0x4000);
  __chkesp();
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  glLightfv(0x4001,0x1200,&local_18);
  __chkesp();
  glLightfv(0x4001,0x1201,&local_28);
  __chkesp();
  glLightfv(0x4001,0x1202,&local_38);
  __chkesp();
  glEnable(0x4001);
  __chkesp();
  local_34 = 0x1000392d;
  __chkesp();
  return;
}

