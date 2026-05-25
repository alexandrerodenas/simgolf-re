/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007e070 @ 0x1007E070 */


void __cdecl FUN_1007e070(int param_1,int param_2,undefined4 *param_3)

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
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_1007f3a0((undefined4 *)(param_2 + 0x44),param_3,5);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  }
  uStack_8 = 0x1007e0c6;
  __chkesp();
  return;
}

