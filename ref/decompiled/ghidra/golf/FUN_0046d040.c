/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046d040 @ 0x0046D040 */
/* Body size: 128 addresses */


void FUN_0046d040(void)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  
  puVar1 = &DAT_005794d9;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x100;
  } while ((int)puVar1 < 0x582cd9);
  DAT_0056a51c = 0;
  DAT_0059ae7c = 0;
  cVar3 = '\x12';
  pcVar5 = &DAT_00577f40;
  do {
    if (*pcVar5 != '\0') {
      iVar4 = 2;
      do {
        iVar2 = FUN_00421bc0(1);
        (&DAT_005794d9)[iVar2 * 0x100] = cVar3;
        (&DAT_00579576)[iVar2 * 0x80] = (short)DAT_0056a51c;
        DAT_0056a51c = DAT_0056a51c + 1;
        iVar4 = iVar4 + -1;
        (&DAT_0057955a)[iVar2 * 0x80] = (ushort)iVar2 ^ 1;
      } while (iVar4 != 0);
    }
    pcVar5 = pcVar5 + -0x208;
    cVar3 = cVar3 + -1;
  } while (0x575aaf < (int)pcVar5);
  return;
}

