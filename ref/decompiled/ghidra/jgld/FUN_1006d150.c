/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006d150 @ 0x1006D150 */


void __cdecl FUN_1006d150(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  void *local_10;
  void *local_c;
  undefined4 *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = (undefined4 *)0x0;
  local_c = (void *)0x0;
  local_10 = (void *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    local_8 = (undefined4 *)*param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    local_c = (void *)*param_2;
  }
  if (param_3 != (undefined4 *)0x0) {
    local_10 = (void *)*param_3;
  }
  FUN_1006d250(local_8,local_c,local_10);
  if (local_c != (void *)0x0) {
    FUN_10078ed0((int)local_8,*(void **)((int)local_c + 0x38));
    FUN_10078e20(local_c);
    *param_2 = 0;
  }
  if (local_10 != (void *)0x0) {
    FUN_10078ed0((int)local_8,*(void **)((int)local_10 + 0x38));
    FUN_10078e20(local_10);
    *param_3 = 0;
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_10078e20(local_8);
    *param_1 = 0;
  }
  local_8 = (undefined4 *)0x1006d23f;
  __chkesp();
  return;
}

