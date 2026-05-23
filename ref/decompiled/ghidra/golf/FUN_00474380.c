/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474380 @ 0x00474380 */
/* Body size: 187 addresses */


undefined4 __thiscall
FUN_00474380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(*DAT_0083ad50 + 0xa0))(&local_4,puVar4,&local_c);
  (**(code **)(*DAT_0083ad50 + 0x9c))(param_3,param_4,param_5);
  *(int *)(param_1 + 0x20) = (local_4 * *(int *)(param_1 + 0x20)) / param_5;
  *(int *)(param_1 + 0x24) = (*(int *)(param_1 + 0x24) * unaff_retaddr) / param_5;
  uVar3 = FUN_00474440(unaff_EBP,unaff_EBX,local_c,local_8,param_3,param_4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  (**(code **)(*DAT_0083ad50 + 0x9c))(unaff_EDI,puVar5,puVar4);
  return uVar3;
}

