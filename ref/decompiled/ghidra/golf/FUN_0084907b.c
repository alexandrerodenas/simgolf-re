/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084907b @ 0x0084907B */


undefined4 FUN_0084907b(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14;
  int local_10 [2];
  uint local_8;
  
  FUN_00848fd3(param_1,&local_18,local_10);
  iVar1 = *(int *)(local_18 + 0x3c) + param_1 + 0x18 + (uint)*(ushort *)(local_10[0] + 0x14);
  local_8 = (uint)*(ushort *)(local_10[0] + 6);
  local_14 = iVar1 + local_8 * 0x28;
  uVar2 = FUN_00849138(param_2,iVar1,local_14);
  return uVar2;
}

