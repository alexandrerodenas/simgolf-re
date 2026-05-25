/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478530 @ 0x00478530 */


int __thiscall
FUN_00478530(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_2 == (char *)0x0) {
    return param_4;
  }
  DAT_00839aa8 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  pcVar5 = param_2;
  do {
    param_2 = (char *)param_5;
    if (pcVar5 == (char *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      DAT_00839aa8 = 0;
      uVar3 = 0xffffffff;
      pcVar4 = pcVar5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar4 = (char *)FUN_00476ef0(pcVar5,&param_2,~uVar3 - 1);
      if (pcVar4 == (char *)0x0) {
        uVar3 = 0xffffffff;
        pcVar6 = pcVar5;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar2 = ~uVar3 - 1;
      }
      else {
        iVar2 = (int)pcVar4 - (int)pcVar5;
      }
      FUN_00477da0(pcVar5,param_3,param_4,param_5,iVar2);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    iVar2 = FUN_00477580();
    param_4 = param_4 + iVar2;
    pcVar5 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      return param_4;
    }
  } while( true );
}

