/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006cb20 @ 0x1006CB20 */
/* Body size: 292 addresses */


void __cdecl FUN_1006cb20(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_60 [16];
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  puVar2 = local_60;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = param_2;
  local_10 = param_3;
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    if (param_2 == (undefined4 *)0x0) {
      if (param_3 != (undefined4 *)0x0) {
        for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
          local_20 = (byte *)*local_10;
          FUN_1006c3f0(param_1,(byte *)0x0,local_20);
          local_10 = local_10 + 1;
        }
      }
    }
    else {
      for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
        local_1c = (byte *)*local_c;
        FUN_1006c3f0(param_1,local_1c,(byte *)0x0);
        local_c = local_c + 1;
      }
    }
  }
  else {
    for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
      local_14 = (byte *)*local_c;
      local_c = local_c + 1;
      local_18 = (byte *)*local_10;
      local_10 = local_10 + 1;
      FUN_1006c3f0(param_1,local_14,local_18);
    }
  }
  local_8 = 0x1006cc40;
  __chkesp();
  return;
}

