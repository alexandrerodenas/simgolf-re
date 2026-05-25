/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038650 @ 0x10038650 */


undefined4 * __fastcall FUN_10038650(undefined4 *param_1)

{
  UINT UVar1;
  
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_LAB_1005c604;
  param_1[1] = 0;
  UVar1 = waveInGetNumDevs();
  param_1[0xe] = UVar1;
  param_1[0x10] = 0;
  waveInGetDevCapsA(0xffffffff,(LPWAVEINCAPSA)(param_1 + 2),0x30);
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x12) = 1;
  *(undefined2 *)((int)param_1 + 0x4a) = 1;
  param_1[0x11] = 0;
  param_1[0x13] = 8000;
  param_1[0x14] = 16000;
  *(undefined2 *)(param_1 + 0x15) = 2;
  *(undefined2 *)((int)param_1 + 0x56) = 0x10;
  return param_1;
}

