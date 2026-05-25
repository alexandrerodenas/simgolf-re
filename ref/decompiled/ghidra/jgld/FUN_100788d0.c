/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100788d0 @ 0x100788D0 */


void __cdecl FUN_100788d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = (void *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    local_8 = (void *)*param_2;
  }
  if (local_8 != (void *)0x0) {
    FUN_10078980(param_1,local_8);
    FUN_10078e20(local_8);
    *param_2 = 0;
  }
  local_8 = (void *)0x10078935;
  __chkesp();
  return;
}

