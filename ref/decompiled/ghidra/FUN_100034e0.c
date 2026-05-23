/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100034e0 @ 0x100034E0 */
/* Body size: 63 addresses */


void __fastcall FUN_100034e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_1 = &PTR_LAB_1011d028;
  local_8 = param_1;
  thunk_FUN_10005650((int)param_1);
  local_8 = (undefined4 *)0x1000351b;
  __chkesp();
  return;
}

