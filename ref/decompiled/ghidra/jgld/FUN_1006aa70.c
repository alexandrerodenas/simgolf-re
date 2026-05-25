/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006aa70 @ 0x1006AA70 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1006aa70(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  LOGPALETTE *local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_1006ad60();
  local_c = (LOGPALETTE *)thunk_FUN_10014a40(0x404);
  if (local_c == (LOGPALETTE *)0x0) {
    local_c = (LOGPALETTE *)0x0;
  }
  else {
    local_c->palVersion = 0x300;
    local_c->palNumEntries = 0x100;
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      local_c->palPalEntry[local_8].peRed = (&DAT_1011dab2)[local_8 * 4];
      local_c->palPalEntry[local_8].peGreen = (&DAT_1011dab1)[local_8 * 4];
      local_c->palPalEntry[local_8].peBlue = (&DAT_1011dab0)[local_8 * 4];
      local_c->palPalEntry[local_8].peFlags = '\0';
      local_c[0x7b].palPalEntry[local_8].peRed = (&DAT_1011dada)[local_8 * 4];
      local_c[0x7b].palPalEntry[local_8].peGreen = (&DAT_1011dad9)[local_8 * 4];
      local_c[0x7b].palPalEntry[local_8].peBlue = (&DAT_1011dad8)[local_8 * 4];
      local_c[0x7b].palPalEntry[local_8].peFlags = '\0';
    }
    for (local_8 = 10; local_8 < 0xf6; local_8 = local_8 + 1) {
      local_c->palPalEntry[local_8].peFlags = '\x05';
    }
    for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
      local_c[4].palPalEntry[local_8].peRed = (char)local_8 + '\b';
      local_c[4].palPalEntry[local_8].peGreen = '\0';
      local_c[4].palPalEntry[local_8].peBlue = '\0';
      local_c[4].palPalEntry[local_8].peFlags = '\x02';
      local_c[0x7b].palPalEntry[local_8].peRed = (char)local_8 + 0xf5;
      local_c[0x7b].palPalEntry[local_8].peGreen = '\0';
      local_c[0x7b].palPalEntry[local_8].peBlue = '\0';
      local_c[0x7b].palPalEntry[local_8].peFlags = '\x02';
    }
    CreatePalette(local_c);
    DAT_10128738 = __chkesp();
    if (DAT_10128738 == 0) {
      thunk_FUN_10014a90(local_c);
      local_c = (LOGPALETTE *)0x0;
    }
    else {
      thunk_FUN_10014a90(local_c);
      local_c = (LOGPALETTE *)0x0;
      (**(code **)*param_1)();
      __chkesp();
      (**(code **)*param_2)();
      __chkesp();
      DAT_1012873c = param_1;
      _DAT_10128740 = param_2;
    }
  }
  local_8 = 0x1006acc3;
  __chkesp();
  return;
}

