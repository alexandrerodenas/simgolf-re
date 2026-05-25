/* Ghidra decompiled: golf.exe */
/* Function: FUN_00848d02 @ 0x00848D02 */


int FUN_00848d02(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)*param_3;
  iVar2 = FUN_0084ad6d(param_4,param_3);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(code *)*puVar1)(param_1,iVar2);
    if (iVar3 == 0) {
      uVar4 = (*(code *)puVar1[0x1e])(iVar2);
      FUN_0084adc1(param_3,uVar4);
    }
    (*(code *)puVar1[0xc])(iVar2);
  }
  return iVar3;
}

