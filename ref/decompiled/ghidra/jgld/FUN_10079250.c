/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079250 @ 0x10079250 */


void __cdecl FUN_10079250(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_94 [16];
  undefined1 local_54 [76];
  undefined4 uStack_8;
  
  puVar2 = local_94;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10079100(param_1,(int)local_54,param_2);
  FUN_10079040(param_1,local_54);
  uStack_8 = 0x100792a2;
  __chkesp();
  return;
}

