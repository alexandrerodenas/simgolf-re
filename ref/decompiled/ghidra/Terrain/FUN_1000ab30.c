/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000ab30 @ 0x1000AB30 */


void FUN_1000ab30(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 local_80 [16];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_10 [8];
  Terrain *local_8;
  
  puVar3 = local_80;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  OutputDebugStringA("\nX: ");
  __chkesp();
  pcVar1 = __itoa(param_1,local_10,10);
  OutputDebugStringA(pcVar1);
  __chkesp();
  OutputDebugStringA("   Y: ");
  __chkesp();
  pcVar1 = __itoa(param_2,local_10,10);
  OutputDebugStringA(pcVar1);
  __chkesp();
  OutputDebugStringA("\n");
  __chkesp();
  local_3c = 0xfffffb50;
  local_40 = 300;
  local_2c = 0x20;
  local_30 = 0x41a00000;
  local_20 = param_1 + -400;
  local_1c = param_2 + -300;
  lVar4 = __ftol();
  local_28 = (int)lVar4;
  iVar2 = local_1c * local_2c;
  lVar4 = __ftol();
  local_24 = (iVar2 - (int)lVar4) + local_28 / 2;
  if (local_24 < 0) {
    local_24 = local_24 - local_28;
  }
  local_14 = local_24 / local_28;
  iVar2 = local_1c * local_2c;
  lVar4 = __ftol();
  local_24 = iVar2 + (int)lVar4 + local_28 / 2;
  if (local_24 < 0) {
    local_24 = local_24 - local_28;
  }
  local_18 = local_24 / local_28;
  local_34 = 0x18 - local_14;
  local_38 = local_18 + 0x18;
  OutputDebugStringA("\nTile X: ");
  __chkesp();
  pcVar1 = __itoa(local_38,local_10,10);
  OutputDebugStringA(pcVar1);
  __chkesp();
  OutputDebugStringA("   Tile Y: ");
  __chkesp();
  pcVar1 = __itoa(local_34,local_10,10);
  OutputDebugStringA(pcVar1);
  __chkesp();
  OutputDebugStringA("\n");
  __chkesp();
  Terrain::tileAt(local_8,local_34,local_38);
  local_8 = (Terrain *)0x1000ad36;
  __chkesp();
  return;
}

