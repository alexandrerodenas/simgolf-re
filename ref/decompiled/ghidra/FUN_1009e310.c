/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009e310 @ 0x1009E310 */
/* Body size: 91 addresses */


void __cdecl FUN_1009e310(int param_1,undefined4 *param_2,uint param_3)

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
  FUN_1007f3a0(*(undefined4 **)(param_1 + 0x24),param_2,param_3);
  *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x24) + param_3;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x30);
  uStack_8 = 0x1009e367;
  __chkesp();
  return;
}

