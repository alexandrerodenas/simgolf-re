/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478970 @ 0x00478970 */


int __fastcall FUN_00478970(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if ((char)DAT_00839658 != '\0') {
    uVar3 = 0xffffffff;
    pcVar4 = (char *)&DAT_00839658;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00477c30(&DAT_00839658,DAT_00839a9c,DAT_00839aa0,~uVar3 - 1);
    iVar2 = FUN_00477580();
    DAT_00839aa0 = DAT_00839aa0 + iVar2;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  DAT_00839658._0_1_ = 0;
  DAT_00839aa4 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return DAT_00839aa0;
}

