/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100a00e0 @ 0x100A00E0 */


void __cdecl FUN_100a00e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  __chkesp();
  uStack_8 = 0x100a0122;
  __chkesp();
  return;
}

