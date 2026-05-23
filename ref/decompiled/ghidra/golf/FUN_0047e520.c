/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e520 @ 0x0047E520 */
/* Body size: 86 addresses */


void FUN_0047e520(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    if (0 < DAT_0083ab94) {
      piVar2 = &DAT_0083a2d8;
      while ((int *)*piVar2 != param_1) {
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
        if (DAT_0083ab94 <= iVar3) {
          return;
        }
      }
      if (iVar3 < DAT_0083ab94) {
        DAT_0083ab94 = DAT_0083ab94 + -1;
        (**(code **)(*param_1 + 8))();
        if (iVar3 < DAT_0083ab94) {
          puVar1 = &DAT_0083a2d8 + iVar3;
          iVar3 = DAT_0083ab94 - iVar3;
          do {
            *puVar1 = puVar1[1];
            puVar1 = puVar1 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
  }
  return;
}

