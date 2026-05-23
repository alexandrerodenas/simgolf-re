/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006e00 @ 0x10006E00 */
/* Body size: 132 addresses */


undefined4 * __fastcall FUN_10006e00(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  param_1[5] = 0;
  param_1[3] = 0x4000;
  pvVar1 = operator_new(0x20000);
  param_1[1] = pvVar1;
  param_1[2] = param_1[2] & 0xfffffffe;
  param_1[6] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 7) = 1;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 2;
  param_1[8] = 0x5622;
  param_1[9] = 0x15888;
  *(undefined2 *)(param_1 + 10) = 4;
  *(undefined2 *)((int)param_1 + 0x2a) = 0x10;
  return param_1;
}

