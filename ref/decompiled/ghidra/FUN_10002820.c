/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10002820 @ 0x10002820 */
/* Body size: 63 addresses */


void __fastcall FUN_10002820(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_1011d01c;
  local_8 = param_1;
  thunk_FUN_10002e10((int)param_1);
  local_8 = (undefined4 *)0x1000285b;
  __chkesp();
  return;
}

