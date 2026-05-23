/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001f4a0 @ 0x1001F4A0 */
/* Body size: 426 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_1001f4a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058bd7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1002d450(param_1);
  local_4 = 0;
  thunk_FUN_1001d380(param_1 + 0x18);
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  local_4._0_1_ = 3;
  FUN_10042902(param_1 + 0x94,0x4c,0x10,&LAB_10002667);
  *param_1 = &PTR_LAB_1005b6a8;
  param_1[0x85] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x85] = 0x200;
  param_1[0x1c4] = 4;
  param_1[0x1c5] = 4;
  param_1[0x1ca] = 0;
  param_1[0x1c8] = 0;
  param_1[0x84] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1cc] = 0x7f;
  puVar2 = param_1 + 0x1d1;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_1002ad10(param_1,2);
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x1ce] = 0xffffffff;
  param_1[0x1cf] = 0;
  param_1[0x1c6] = 0x78;
  *(double *)(param_1 + 0x1ca) =
       (double)(_DAT_1005b69c / ((float)(uint)param_1[0x6f] * _DAT_1005b6a4 * _DAT_1005b6a0));
  uVar3 = __ftol();
  param_1[0x1d0] = 0;
  *(double *)(param_1 + 0x1c8) = (double)(uVar3 & 0xffffffff);
  ExceptionList = local_c;
  return param_1;
}

