/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009cc70 @ 0x1009CC70 */


void __cdecl FUN_1009cc70(int *param_1,int param_2,int *param_3)

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
  if (param_1[0xd] != 0) {
    *param_3 = param_1[0xe];
  }
  if ((*param_1 == 4) || (*param_1 == 5)) {
    (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[3]);
    __chkesp();
  }
  if (*param_1 == 6) {
    FUN_100a00e0(param_1[3],param_2);
    FUN_1009f250(param_1[2],param_2);
    FUN_1009f250(param_1[1],param_2);
  }
  *param_1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = param_1[9];
  param_1[0xb] = param_1[0xc];
  if (param_1[0xd] != 0) {
    (*(code *)param_1[0xd])(0,0,0);
    iVar1 = __chkesp();
    param_1[0xe] = iVar1;
    *(int *)(param_2 + 0x30) = param_1[0xe];
  }
  uStack_8 = 0x1009cd82;
  __chkesp();
  return;
}

