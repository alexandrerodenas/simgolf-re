/* Ghidra decompiled: golf.exe */
/* Function: FUN_004782d0 @ 0x004782D0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004782d0(int param_1,char *param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int local_10;
  int local_c;
  undefined4 *local_8;
  int local_4;
  
  if ((param_2 == (char *)0x0) || (param_3 == (int *)0x0)) {
    return param_3[1];
  }
  DAT_00839aa8 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  iVar4 = *param_3;
  piVar1 = param_3 + 2;
  param_3 = (int *)param_3[1];
  local_10 = *piVar1 - iVar4;
  local_c = 0;
  local_8 = param_4;
  pcVar6 = param_2;
  param_2 = (char *)iVar4;
  do {
    if (param_4 != (undefined4 *)0x0) {
      local_c = local_c + 1;
      *local_8 = pcVar6;
      local_8 = local_8 + 1;
    }
    local_4 = local_10;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      _DAT_00839a5c = (int)param_2;
    }
    else {
      DAT_00839aa8 = 0;
      uVar5 = 0xffffffff;
      pcVar3 = pcVar6;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      pcVar3 = (char *)FUN_00476ef0(pcVar6,&local_4,~uVar5 - 1);
      if (pcVar3 == (char *)0x0) {
        uVar5 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        _DAT_00839a5c = FUN_00477c30(pcVar6,param_2,param_3,~uVar5 - 1);
        pcVar6 = pcVar3;
      }
      else {
        _DAT_00839a5c = FUN_00477c30(pcVar6,param_2,param_3,(int)pcVar3 - (int)pcVar6);
        pcVar6 = pcVar3;
      }
    }
    iVar4 = FUN_00477580();
    param_3 = (int *)((int)param_3 + iVar4);
    iVar4 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (iVar4 != 0) {
      local_10 = local_10 - iVar4;
      param_2 = (char *)((int)param_2 + iVar4);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (pcVar6 == (char *)0x0) {
      if (param_5 != (int *)0x0) {
        *param_5 = local_c;
      }
      return (int)param_3;
    }
  } while( true );
}

