/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100032f0 @ 0x100032F0 */


void __fastcall FUN_100032f0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_1011d024;
  local_8 = param_1;
  thunk_FUN_100045f0((int)param_1);
  local_8 = (undefined4 *)0x1000332b;
  __chkesp();
  return;
}

