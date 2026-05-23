/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045c420 @ 0x0045C420 */
/* Body size: 53 addresses */


int FUN_0045c420(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar1 = 0;
  puVar2 = &DAT_00579540 + param_1 * 0x80;
  iVar3 = 5;
  do {
    if ((*puVar2 & 0xc000) == 0x4000) {
      iVar1 = iVar1 + 1;
    }
    if ((*puVar2 & 0xc000) == 0xc000) {
      iVar1 = iVar1 + -1;
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

