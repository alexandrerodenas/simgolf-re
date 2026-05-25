/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f530 @ 0x0042F530 */


void FUN_0042f530(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  FUN_0042f4b0(param_1,param_2,local_4,local_8);
  pbVar1 = &DAT_005619a0 + param_1 * 0x32 + param_2;
  *pbVar1 = 0;
  local_14 = 0;
  iVar5 = -1;
  do {
    iVar4 = *(int *)((int)&DAT_004c2898 + local_14) + param_2;
    iVar6 = *(int *)((int)&DAT_004c2878 + local_14) + param_1;
    iVar2 = FUN_0040bf60(iVar6,iVar4);
    if (iVar2 == 0) {
      iVar2 = FUN_0040bfe0(iVar6,iVar4,iVar5 + 6,0);
      iVar3 = FUN_0040bfe0(param_1,param_2,iVar5,0);
      if (iVar3 < iVar2) {
        *pbVar1 = *pbVar1 | '\x01' << ((char)iVar5 + 1U & 0x1f);
      }
      iVar2 = FUN_0040bfe0(iVar6,iVar4,iVar5 + 4,0);
      iVar4 = FUN_0040bfe0(param_1,param_2,iVar5 + 2,0);
      if (iVar4 < iVar2) {
        *pbVar1 = *pbVar1 | '\x01' << ((char)iVar5 + 1U & 0x1f);
      }
    }
    local_14 = local_14 + 8;
    iVar2 = iVar5 + 3;
    iVar5 = iVar5 + 2;
  } while (iVar2 < 8);
  return;
}

