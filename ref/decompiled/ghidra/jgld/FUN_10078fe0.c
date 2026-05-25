/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078fe0 @ 0x10078FE0 */


void __cdecl FUN_10078fe0(int *param_1,undefined4 param_2)

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
  if (param_1[0x10] != 0) {
    (*(code *)param_1[0x10])(param_1,param_2);
    __chkesp();
  }
  FUN_100792b0(param_1);
  uStack_8 = 0x10079038;
  __chkesp();
  return;
}

