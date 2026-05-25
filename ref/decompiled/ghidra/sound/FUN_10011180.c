/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011180 @ 0x10011180 */


undefined4 * __fastcall FUN_10011180(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_1000eef0(param_1 + 0x1c);
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x52] = 0;
  param_1[0x62] = 0x7f;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  param_1[0x58] = 2;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  puVar2 = param_1 + 3;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x51] = 0;
  return param_1;
}

