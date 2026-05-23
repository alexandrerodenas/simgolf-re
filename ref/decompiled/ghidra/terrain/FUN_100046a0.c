/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100046a0 @ 0x100046A0 */
/* Body size: 68 addresses */


void __fastcall FUN_100046a0(int param_1)

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
  local_8 = param_1;
  FUN_10033cd0(param_1 + 0xc);
  FUN_10034cd0((undefined4 *)(local_8 + 0xc));
  local_8 = 0x100046e0;
  __chkesp();
  return;
}

