/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30003900 @ 0x30003900 */


void FUN_30003900(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  iVar1 = radmalloc(DAT_30041b80 + uVar2);
  DAT_30041b80 = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 + uVar2;
    uVar2 = 0;
    if (DAT_30041b84 != 0) {
      do {
        *(int *)(&DAT_3004187c)[uVar2] = iVar1;
        iVar1 = iVar1 + (&DAT_3004167c)[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_30041b84);
    }
  }
  DAT_30041b84 = 0;
  return;
}

