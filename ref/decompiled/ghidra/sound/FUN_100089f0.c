/* Ghidra decompiled: sound.dll */
/* Function: FUN_100089f0 @ 0x100089F0 */


undefined4 * __fastcall FUN_100089f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0xf] = 0;
  timeGetDevCaps((LPTIMECAPS)(param_1 + 0x11),8);
  param_1[6] = ((LPTIMECAPS)(param_1 + 0x11))->wPeriodMin;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = 1;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 10) = 1;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *param_1 = 0x1e;
  *(undefined2 *)((int)param_1 + 0x2a) = 2;
  param_1[0xb] = 0xac44;
  param_1[0xc] = 0x2b110;
  *(undefined2 *)(param_1 + 0xd) = 4;
  *(undefined2 *)((int)param_1 + 0x36) = 0x10;
  param_1[4] = 0x52b;
  puVar2 = &DAT_100b4990;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  return param_1;
}

