/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e580 @ 0x0047E580 */
/* Body size: 96 addresses */


void FUN_0047e580(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x9c) & 0x2000000) == 0)) {
    iVar1 = 0;
    if (0 < DAT_0083ab94) {
      piVar2 = &DAT_0083a2d8;
      while (*piVar2 != param_1) {
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
        if (DAT_0083ab94 <= iVar1) {
          FUN_0047e450();
          return;
        }
      }
      if (iVar1 < DAT_0083ab94) {
        if (0 < iVar1) {
          puVar3 = &DAT_0083a2d8 + iVar1;
          do {
            *puVar3 = puVar3[-1];
            puVar3 = puVar3 + -1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        DAT_0083a2d8 = param_1;
      }
    }
    FUN_0047e450();
  }
  return;
}

