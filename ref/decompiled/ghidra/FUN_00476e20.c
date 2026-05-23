/* Ghidra decompiled: golf.exe */
/* Function: FUN_00476e20 @ 0x00476E20 */
/* Body size: 200 addresses */


int __thiscall FUN_00476e20(int param_1,char *param_2,int param_3,undefined4 *param_4,int *param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int local_8;
  undefined4 *local_4;
  
  pcVar2 = param_2;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  DAT_00839aa8 = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  local_8 = 0;
  param_2 = (char *)0x0;
  local_4 = param_4;
  iVar5 = param_3;
  do {
    if (param_4 != (undefined4 *)0x0) {
      param_2 = (char *)((int)param_2 + 1);
      *local_4 = pcVar2;
      local_4 = local_4 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar6 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    param_3 = iVar5;
    pcVar2 = (char *)FUN_00476ef0(pcVar2,&param_3,~uVar4 - 1);
    DAT_00839aa8 = 0;
    iVar3 = FUN_00477580();
    local_8 = local_8 + iVar3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar5 = iVar5 - *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (pcVar2 == (char *)0x0) {
      if (param_5 != (int *)0x0) {
        *param_5 = (int)param_2;
      }
      return local_8;
    }
  } while( true );
}

