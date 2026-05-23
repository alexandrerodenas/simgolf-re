/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005450 @ 0x10005450 */
/* Body size: 77 addresses */


void __fastcall FUN_10005450(undefined4 *param_1)

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
  local_8 = param_1;
  thunk_FUN_10003050(param_1 + 1);
  *local_8 = &PTR_LAB_1011d028;
  thunk_FUN_10005650((int)local_8);
  local_8 = (undefined4 *)0x10005499;
  __chkesp();
  return;
}

