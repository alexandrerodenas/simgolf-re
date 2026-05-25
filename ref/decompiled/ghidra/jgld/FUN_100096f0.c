/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100096f0 @ 0x100096F0 */


void __fastcall FUN_100096f0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_1011d220;
  local_8 = param_1;
  thunk_FUN_10006b80(param_1);
  local_8 = (undefined4 *)0x1000972b;
  __chkesp();
  return;
}

