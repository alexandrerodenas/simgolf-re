/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e750 @ 0x1001E750 */


undefined4 * __fastcall FUN_1001e750(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_1001bca0(param_1);
  *param_1 = &PTR_LAB_1005b68c;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar2 = param_1 + 0x16;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x12] = 0x10;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xf7;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x116] = 0;
  return param_1;
}

