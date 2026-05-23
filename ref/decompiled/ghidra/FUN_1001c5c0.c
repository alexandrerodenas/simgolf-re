/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c5c0 @ 0x1001C5C0 */
/* Body size: 164 addresses */


int * __fastcall FUN_1001c5c0(int *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10058ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[5] = -1;
  param_1[8] = -1;
  param_1[9] = -1;
  param_1[1] = 0x6c727463;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[3] = 0x18;
  param_1[4] = 0x44444444;
  param_1[10] = 0;
  local_4 = 0;
  *param_1 = (int)&PTR_LAB_1005b5f0;
  param_1[0xb] = 0;
  param_1[0xf] = 4;
  pvVar1 = operator_new(4);
  param_1[0xb] = (int)pvVar1;
  (**(code **)(*param_1 + 0x14))();
  param_1[0xc] = 0;
  param_1[7] = 5;
  param_1[2] = 0x40;
  param_1[0xd] = 8;
  param_1[0xe] = 0x44444444;
  ExceptionList = local_c;
  return param_1;
}

