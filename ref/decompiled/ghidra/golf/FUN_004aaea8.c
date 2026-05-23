/* Ghidra decompiled: golf.exe */
/* Function: FUN_004aaea8 @ 0x004AAEA8 */
/* Body size: 58 addresses */


int * FUN_004aaea8(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  if (*param_2 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (param_2 + DAT_004e53bc * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_004e53bc * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

