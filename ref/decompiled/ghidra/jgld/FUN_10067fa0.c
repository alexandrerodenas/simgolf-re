/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10067fa0 @ 0x10067FA0 */
/* Body size: 76 addresses */


void __fastcall FUN_10067fa0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_1011da58;
  param_1[1] = 0;
  local_8 = param_1;
  thunk_FUN_10068570((int)param_1);
  local_8 = (undefined4 *)0x10067fe8;
  __chkesp();
  return;
}

