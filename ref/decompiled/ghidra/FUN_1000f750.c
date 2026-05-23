/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000f750 @ 0x1000F750 */
/* Body size: 57 addresses */


void __fastcall FUN_1000f750(int param_1)

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
  thunk_FUN_1000f7a0(param_1);
  local_8 = 0x1000f785;
  __chkesp();
  return;
}

