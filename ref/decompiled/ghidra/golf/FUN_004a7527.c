/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a7527 @ 0x004A7527 */


void FUN_004a7527(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_004a71d2((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_004e521c < 2) {
        uVar4 = (byte)PTR_DAT_004e5010[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_004aaad1((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_004e5220;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

