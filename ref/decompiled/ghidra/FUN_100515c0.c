/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100515c0 @ 0x100515C0 */
/* Body size: 318 addresses */


undefined4 __cdecl
FUN_100515c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_4bc;
  undefined1 local_4b8 [32];
  undefined1 *local_498;
  undefined4 local_494;
  undefined1 *local_490;
  int local_480 [144];
  undefined4 local_240 [112];
  undefined4 local_80 [24];
  undefined4 local_20 [8];
  
  local_490 = (undefined1 *)&local_4bc;
  if (DAT_10059080 == 0) {
    piVar3 = local_480;
    for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 8;
      piVar3 = piVar3 + 1;
    }
    puVar2 = local_240;
    for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 9;
      puVar2 = puVar2 + 1;
    }
    local_4bc = 0x212;
    puVar2 = local_80;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 7;
      puVar2 = puVar2 + 1;
    }
    local_498 = &LAB_10051700;
    puVar2 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 8;
      puVar2 = puVar2 + 1;
    }
    local_494 = 0;
    DAT_1005907c = 7;
    FUN_10051010(local_480,0x120,0x101,0x10057814,0x10057890,&DAT_10057fe4,&DAT_1005907c,
                 (int)local_4b8);
    DAT_10059078 = 5;
    piVar3 = local_480;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 5;
      piVar3 = piVar3 + 1;
    }
    FUN_10051010(local_480,0x1e,0,0x1005790c,0x10057984,&DAT_10057fe0,&DAT_10059078,(int)local_4b8);
    DAT_10059080 = 1;
  }
  *param_1 = DAT_1005907c;
  *param_2 = DAT_10059078;
  *param_3 = DAT_10057fe4;
  *param_4 = DAT_10057fe0;
  return 0;
}

