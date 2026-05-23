/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009e290 @ 0x1009E290 */
/* Body size: 124 addresses */


void __cdecl FUN_1009e290(int *param_1,int param_2,int *param_3)

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
  FUN_1009cc70(param_1,param_2,param_3);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[9]);
  __chkesp();
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  __chkesp();
  uStack_8 = 0x1009e308;
  __chkesp();
  return;
}

