/* Ghidra decompiled: golf.exe */
/* Function: FUN_00438260 @ 0x00438260 */


int FUN_00438260(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  local_8 = 0x28;
  local_4 = -1;
  psVar4 = &DAT_004c7b38;
  do {
    if ((int)psVar4 < 0x4c7b58) {
      sVar1 = psVar4[1];
      iVar2 = (param_1 - *psVar4) / 3;
    }
    else {
      sVar1 = psVar4[1];
      iVar2 = param_1 - *psVar4;
    }
    iVar2 = FUN_00467170(iVar2,param_2 - sVar1);
    if (iVar2 < local_8) {
      local_8 = iVar2;
      local_4 = iVar3;
    }
    psVar4 = psVar4 + 2;
    iVar3 = iVar3 + 1;
  } while (*psVar4 != 0);
  return local_4;
}

