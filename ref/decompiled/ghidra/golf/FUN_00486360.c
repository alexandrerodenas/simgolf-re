/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486360 @ 0x00486360 */
/* Body size: 122 addresses */


void __thiscall
FUN_00486360(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00486330(param_4,param_2,param_3);
  iVar2 = *(int *)(param_2 + iVar1 * 4);
  iVar2 = FUN_00477280(iVar2,(*(int *)(param_1 + 0x574) - iVar2) + param_4);
  *param_5 = iVar2;
  iVar2 = FUN_00477580();
  *param_6 = iVar2 * (iVar1 - *(int *)(param_1 + 0x57c));
  iVar2 = *(int *)(param_1 + 0x59c) + *(int *)(param_1 + 0x598);
  *param_5 = *param_5 + iVar2;
  *param_6 = *param_6 + iVar2;
  return;
}

