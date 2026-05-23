/* Ghidra decompiled: golf.exe */
/* Function: FUN_004326a0 @ 0x004326A0 */
/* Body size: 113 addresses */


int FUN_004326a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int local_4;
  
  local_4 = -1;
  iVar4 = 0;
  iVar2 = 0x1e;
  psVar3 = &DAT_004c7930;
  do {
    iVar1 = FUN_00467170(param_1 - *psVar3,param_2 - psVar3[1]);
    iVar1 = iVar1 * (iVar4 + 6);
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
      local_4 = iVar4;
    }
    psVar3 = psVar3 + 2;
    iVar4 = iVar4 + 1;
  } while (*psVar3 != -1);
  if (local_4 == 6) {
    local_4 = -1;
  }
  return local_4;
}

