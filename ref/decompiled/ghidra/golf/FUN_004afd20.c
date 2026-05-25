/* Ghidra decompiled: golf.exe */
/* Function: FUN_004afd20 @ 0x004AFD20 */


void FUN_004afd20(int param_1)

{
  FUN_004afbf0(param_1,0xee);
  FUN_004afc10(param_1,0xe);
  FUN_004afbb0(param_1,0x41);
  FUN_004afbb0(param_1,100);
  FUN_004afbb0(param_1,0x6f);
  FUN_004afbb0(param_1,0x62);
  FUN_004afbb0(param_1,0x65);
  FUN_004afc10(param_1,100);
  FUN_004afc10(param_1,0);
  FUN_004afc10(param_1,0);
  if (*(int *)(param_1 + 0x38) == 3) {
    FUN_004afbb0(param_1,1);
    return;
  }
  if (*(int *)(param_1 + 0x38) != 5) {
    FUN_004afbb0(param_1,0);
    return;
  }
  FUN_004afbb0(param_1,2);
  return;
}

