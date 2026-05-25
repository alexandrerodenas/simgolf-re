/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046e710 @ 0x0046E710 */


void FUN_0046e710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00404970(param_1);
  iVar2 = FUN_00404970(param_2);
  iVar3 = FUN_00404970(param_3);
  iVar4 = FUN_00404970(param_4);
  iVar3 = iVar3 + iVar1;
  FUN_004049a0(PTR_DAT_004c1570,iVar1,iVar2,iVar3,iVar2,param_5);
  iVar4 = iVar4 + iVar2;
  FUN_004049a0(PTR_DAT_004c1570,iVar1,iVar4,iVar3,iVar4,param_5);
  FUN_004049a0(PTR_DAT_004c1570,iVar3,iVar2,iVar3,iVar4,param_5);
  FUN_004049a0(PTR_DAT_004c1570,iVar1,iVar2,iVar1,iVar4,param_5);
  return;
}

