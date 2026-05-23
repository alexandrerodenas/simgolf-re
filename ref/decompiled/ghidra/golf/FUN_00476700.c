/* Ghidra decompiled: golf.exe */
/* Function: FUN_00476700 @ 0x00476700 */
/* Body size: 80 addresses */


void __thiscall
FUN_00476700(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(param_1 + 0x5c);
  iVar2 = *piVar1;
  uVar3 = *(undefined4 *)(param_1 + 0x60);
  uVar4 = *(undefined4 *)(param_1 + 100);
  if ((param_2 != 0) && (*(int *)(param_2 + 4) != 0)) {
    *piVar1 = param_2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN_00477fc0(param_3,param_4,param_5,param_6);
  *piVar1 = iVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar4;
  return;
}

