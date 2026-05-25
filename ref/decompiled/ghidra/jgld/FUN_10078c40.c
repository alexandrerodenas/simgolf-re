/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078c40 @ 0x10078C40 */


void __cdecl FUN_10078c40(int *param_1,undefined4 param_2,undefined4 param_3)

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
  if (param_1[0x14] == 0) {
    FUN_10078fe0(param_1,"Call to NULL read function");
  }
  else {
    (*(code *)param_1[0x14])(param_1,param_2,param_3);
    __chkesp();
  }
  uStack_8 = 0x10078c9f;
  __chkesp();
  return;
}

