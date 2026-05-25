/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478430 @ 0x00478430 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00478430(int param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((param_2 == (char *)0x0) || (param_5 == 0)) {
    return param_4;
  }
  DAT_00839aa8 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  pcVar5 = param_2;
  do {
    param_2 = (char *)param_5;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      _DAT_00839a5c = param_3;
    }
    else {
      DAT_00839aa8 = 0;
      uVar4 = 0xffffffff;
      pcVar2 = pcVar5;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = (char *)FUN_00476ef0(pcVar5,&param_2,~uVar4 - 1);
      if (pcVar2 == (char *)0x0) {
        uVar4 = 0xffffffff;
        pcVar6 = pcVar5;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        _DAT_00839a5c = FUN_00477c30(pcVar5,param_3,param_4,~uVar4 - 1);
        pcVar5 = pcVar2;
      }
      else {
        _DAT_00839a5c = FUN_00477c30(pcVar5,param_3,param_4,(int)pcVar2 - (int)pcVar5);
        pcVar5 = pcVar2;
      }
    }
    iVar3 = FUN_00477580();
    param_4 = param_4 + iVar3;
    iVar3 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (iVar3 != 0) {
      param_5 = param_5 - iVar3;
      param_3 = param_3 + iVar3;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (pcVar5 == (char *)0x0) {
      return param_4;
    }
  } while( true );
}

