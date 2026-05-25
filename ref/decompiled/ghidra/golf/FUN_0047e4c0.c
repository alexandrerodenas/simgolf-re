/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e4c0 @ 0x0047E4C0 */


void FUN_0047e4c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x9c) & 0x2000000) != 0) {
      (&DAT_0083a2d8)[DAT_0083ab94] = param_1;
      DAT_0083ab94 = DAT_0083ab94 + 1;
      return;
    }
    if (0 < DAT_0083ab94) {
      puVar1 = &DAT_0083a2d8 + DAT_0083ab94;
      iVar2 = DAT_0083ab94;
      do {
        *puVar1 = puVar1[-1];
        puVar1 = puVar1 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    DAT_0083ab94 = DAT_0083ab94 + 1;
    DAT_0083a2d8 = param_1;
  }
  return;
}

