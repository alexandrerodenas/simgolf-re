/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10003980 @ 0x10003980 */
/* Body size: 143 addresses */


void FUN_10003980(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = DAT_10070a0c;
  switch(DAT_10070a0c) {
  case 0:
    thunk_FUN_10006dd0("ParklandLighting.txt");
    break;
  case 1:
    thunk_FUN_10006dd0("DesertLighting.txt");
    break;
  case 2:
    thunk_FUN_10006dd0("TropicalLighting.txt");
    break;
  case 3:
    thunk_FUN_10006dd0("LinksLighting.txt");
    break;
  default:
    thunk_FUN_10006dd0("lighting.txt");
  }
  local_8 = 0x10003a0b;
  __chkesp();
  return;
}

