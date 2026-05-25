/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10013dd0 @ 0x10013DD0 */


undefined4 FUN_10013dd0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [18];
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 10:
  case 0xc:
  case 0x14:
  case 0x15:
    uVar1 = 0;
    break;
  case 3:
  case 0x2b:
    uVar1 = 2;
    break;
  case 4:
  case 0xe:
  case 0x18:
  case 0x22:
    uVar1 = 4;
    break;
  case 5:
  case 7:
  case 0x19:
    uVar1 = 3;
    break;
  case 6:
  case 0x10:
    uVar1 = 1;
    break;
  default:
    uVar1 = 0;
    break;
  case 0x1e:
    uVar1 = 6;
    break;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x3d:
    uVar1 = 8;
    break;
  case 0x32:
  case 0x34:
  case 0x46:
    uVar1 = 7;
    break;
  case 0x3c:
    uVar1 = 5;
  }
  return uVar1;
}

