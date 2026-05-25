/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043d670 @ 0x0043D670 */


void FUN_0043d670(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((&DAT_005a9370)[param_1] != -1) {
    piVar1 = &DAT_0053f3e8 + param_1;
    piVar2 = (int *)(&DAT_005a5a2c + param_1 * 4);
    FUN_0043d520((&DAT_005a9370)[param_1],*piVar1 * *piVar2);
    iVar3 = 0;
    if (0 < *piVar1 * *piVar2) {
      do {
        FUN_00473ae0();
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar1 * *piVar2);
    }
    *piVar1 = 0;
    (&DAT_005a9370)[param_1] = 0xffffffff;
  }
  return;
}

