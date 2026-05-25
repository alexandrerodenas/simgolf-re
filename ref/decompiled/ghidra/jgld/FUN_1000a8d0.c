/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000a8d0 @ 0x1000A8D0 */


void __fastcall FUN_1000a8d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [15];
  undefined4 uStack_c;
  int *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  (**(code **)(*param_1 + 0x34))(param_1 + 0x15);
  __chkesp();
  uStack_c = 0x1000a915;
  __chkesp();
  return;
}

