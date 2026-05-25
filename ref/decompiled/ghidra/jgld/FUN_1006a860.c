/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a860 @ 0x1006A860 */


void __fastcall FUN_1006a860(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10128738 != (HPALETTE)0x0) {
    local_8 = param_1;
    AnimatePalette(DAT_10128738,10,0xec,(PALETTEENTRY *)(param_1 + 0x34));
    __chkesp();
  }
  local_8 = 0x1006a8b9;
  __chkesp();
  return;
}

