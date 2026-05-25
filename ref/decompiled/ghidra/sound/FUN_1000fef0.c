/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000fef0 @ 0x1000FEF0 */


undefined4 __fastcall FUN_1000fef0(byte *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  byte *pbVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  if (puVar1 == (undefined4 *)0x0) {
    return 0x14;
  }
  if ((*param_1 & 2) == 0) {
    pbVar4 = param_1 + 100;
    puVar3 = &DAT_1005d57c;
  }
  else {
    pbVar4 = param_1 + 0x68;
    puVar3 = &DAT_1005d58c;
  }
  iVar2 = (**(code **)*puVar1)(puVar1,puVar3,pbVar4);
  if (-1 < iVar2) {
    return 0;
  }
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  return 0xb;
}

