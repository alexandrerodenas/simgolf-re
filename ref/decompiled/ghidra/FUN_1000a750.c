/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000a750 @ 0x1000A750 */
/* Body size: 66 addresses */


void __fastcall FUN_1000a750(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  (**(code **)(*param_1 + 0x10))();
  __chkesp();
  local_8 = (int *)0x1000a78e;
  __chkesp();
  return;
}

