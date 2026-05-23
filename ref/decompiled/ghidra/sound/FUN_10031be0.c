/* Ghidra decompiled: sound.dll */
/* Function: FUN_10031be0 @ 0x10031BE0 */
/* Body size: 492 addresses */


undefined4 * __fastcall FUN_10031be0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_100591d7;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10042902(param_1 + 0x8e,0x110,0x10,thunk_FUN_10037c40);
  param_1[0x4ce] = 0;
  param_1[0x4cf] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  param_1[0x4d2] = 0;
  param_1[0x4d3] = 0;
  param_1[0x4d4] = 0;
  param_1[0x4d5] = 0;
  *param_1 = 0;
  puVar1 = param_1 + 3;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_c = 2;
  param_1[0x17] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x78] = 0;
  param_1[0x84] = 0;
  param_1[0x7c] = 0;
  param_1[0x80] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  param_1[0x76] = 0x10000;
  param_1[0x79] = 0x3ff00000;
  param_1[0x82] = 0x10000;
  param_1[0x85] = 0x3ff00000;
  param_1[0x7a] = 0x10000;
  param_1[0x7d] = 0x3ff00000;
  param_1[0x87] = 0x10000;
  param_1[0x7e] = 0x10000;
  param_1[0x81] = 0x3ff00000;
  param_1[0x86] = 0x10000;
  param_1[0x70] = 1000;
  thunk_FUN_10035460(param_1,1000);
  param_1[0x88] = 0x10000;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[2] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4da] = 0;
  param_1[0x4db] = 0;
  puVar1 = param_1 + 0x19;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  param_1[0x4e0] = 0;
  param_1[0x4dc] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0;
  param_1[0x4d6] = 0;
  param_1[0x4e3] = 0x3ff00000;
  param_1[0x4d7] = 0;
  puVar1 = param_1 + 0xc0;
  iVar2 = 0x10;
  do {
    *puVar1 = param_1 + 0x8c;
    puVar1 = puVar1 + 0x44;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x4e6] = 0;
  param_1[0x4e4] = 0;
  param_1[0x4e5] = 0;
  param_1[0x4e7] = 0;
  param_1[0x4e8] = 0;
  param_1[0x4e9] = 0;
  ExceptionList = local_14;
  return param_1;
}

