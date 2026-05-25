/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100680a0 @ 0x100680A0 */


void __fastcall FUN_100680a0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_1011da5c;
  param_1[1] = 0;
  local_8 = param_1;
  thunk_FUN_100685c0((int)param_1);
  local_8 = (undefined4 *)0x100680e8;
  __chkesp();
  return;
}

