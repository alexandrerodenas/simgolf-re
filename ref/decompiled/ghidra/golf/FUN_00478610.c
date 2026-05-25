/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478610 @ 0x00478610 */


int __thiscall FUN_00478610(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  if (DAT_00839aa4 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    return DAT_00839aa0;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = DAT_0083ad44;
  }
  pcVar2 = param_2;
  if (*param_2 == '\0') {
    return DAT_00839aa0;
  }
  do {
    uVar4 = 0xffffffff;
    pcVar5 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_2 = (char *)(DAT_00839aa4 - DAT_00839aa8);
    pcVar2 = (char *)FUN_00476ef0(pcVar2,&param_2,~uVar4 - 1);
    if (pcVar2 == (char *)0x0) {
      iVar3 = FUN_00477250(&DAT_004c3f70);
      DAT_00839aa8 = DAT_00839aa8 + iVar3;
      return DAT_00839aa0;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    iVar3 = FUN_00477580();
    DAT_00839aa8 = 0;
    DAT_00839aa0 = DAT_00839aa0 + iVar3;
    if (*(int *)(param_1 + 0x18) != 0) {
      DAT_00839aa4 = DAT_00839aa4 - *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  } while( true );
}

