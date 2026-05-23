/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10066200 @ 0x10066200 */
/* Body size: 120 addresses */


void FUN_10066200(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [15];
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  GetSystemMetrics(0);
  local_c = __chkesp();
  GetSystemMetrics(1);
  local_10 = __chkesp();
  (**(code **)(*local_8 + 0x58))(local_c,local_10,param_1);
  __chkesp();
  uStack_14 = 0x10066272;
  __chkesp();
  return;
}

