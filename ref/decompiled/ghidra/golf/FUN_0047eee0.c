/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047eee0 @ 0x0047EEE0 */


undefined4 FUN_0047eee0(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + -1 + param_2);
  pcVar1 = PTR_DAT_004e42ec;
  while( true ) {
    if (param_2 < 1) {
      return 0;
    }
    if (*pcVar1 != *pcVar2) break;
    pcVar1 = pcVar1 + -1;
    pcVar2 = pcVar2 + -1;
    if (pcVar1 < &DAT_0083aba4) {
      pcVar1 = &DAT_0083abad;
    }
    param_2 = param_2 + -1;
  }
  return 1;
}

