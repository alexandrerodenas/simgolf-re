/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001bd90 @ 0x1001BD90 */


void __fastcall FUN_1001bd90(undefined4 *param_1)

{
  int iVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0x18;
  param_1[2] = 0x44444444;
  param_1[10] = 0;
  param_1[7] = 0xc;
  param_1[8] = 0x44444444;
  param_1[0x10] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0xb] = &PTR_LAB_1005b19c;
  param_1[0xc] = 0x6c727463;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xe] = 0x18;
  param_1[0xf] = 0x44444444;
  *param_1 = &PTR_LAB_1005b5c0;
  param_1[0xb] = &PTR_LAB_1005b59c;
  iVar1 = 0;
  do {
    *(char *)((int)param_1 + iVar1 + 0x5c) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x80);
  param_1[0x12] = 3;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x38] = 0;
  param_1[0xd] = 0xe4;
  param_1[0x16] = 0x44444444;
  param_1[0x15] = 0x8c;
  return;
}

