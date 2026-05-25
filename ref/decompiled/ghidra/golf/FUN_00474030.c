/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474030 @ 0x00474030 */


undefined4 __thiscall
FUN_00474030(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  int unaff_retaddr;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  puVar5 = &local_c;
  puVar4 = &local_8;
  (**(code **)(*DAT_0083ad50 + 0xa0))(&local_4,puVar4,&local_c);
  (**(code **)(*DAT_0083ad50 + 0x9c))(param_3,param_4,param_5);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x20) = (iVar1 * local_4) / param_5;
  *(int *)(param_1 + 0x24) = (iVar2 * unaff_retaddr) / param_5;
  uVar3 = FUN_004740f0(unaff_EBP,unaff_EBX,local_c,local_8,param_3);
  *(int *)(param_1 + 0x20) = iVar1;
  *(int *)(param_1 + 0x24) = iVar2;
  (**(code **)(*DAT_0083ad50 + 0x9c))(unaff_EDI,puVar5,puVar4);
  return uVar3;
}

