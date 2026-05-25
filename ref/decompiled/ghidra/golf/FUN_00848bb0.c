/* Ghidra decompiled: golf.exe */
/* Function: FUN_00848bb0 @ 0x00848BB0 */


bool FUN_00848bb0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_3[1];
  uVar2 = FUN_0084aa1e(0x2a);
  uVar2 = FUN_00848d02(param_2,param_1,param_3,uVar2);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  return *(int *)(*param_3 + 0x78) != 0;
}

