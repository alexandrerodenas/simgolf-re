/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484c80 @ 0x00484C80 */


int __thiscall FUN_00484c80(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = param_1 + 0x10;
  if ((param_1[0x10] != 0) || (iVar3 = FUN_004840e0(piVar1,param_2,1), iVar3 == 0)) {
    uVar4 = (uint)((*(byte *)(param_1 + 0x16) & 1) != 0);
    iVar3 = (**(code **)(*param_1 + 0x58))();
    if (iVar3 != 0) {
      uVar4 = uVar4 | 2;
    }
    uVar2 = param_1[0x16];
    if ((uVar2 & 8) != 0) {
      uVar4 = uVar4 | 0x40;
    }
    if ((uVar2 & 0x10) != 0) {
      uVar4 = uVar4 | 0x80;
    }
    if ((uVar2 & 0x40) != 0) {
      uVar4 = uVar4 | 0x400;
    }
    if ((uVar2 & 2) != 0) {
      uVar4 = uVar4 | 4;
    }
    (**(code **)(*(int *)*piVar1 + 0x6c))(uVar4);
    if ((*(byte *)(param_1 + 0x16) & 2) == 0) {
      iVar3 = FUN_004842f0(param_2);
      if (iVar3 != 0) {
        FUN_00484110(*piVar1);
        *piVar1 = 0;
        return iVar3;
      }
      iVar3 = (**(code **)(*(int *)*piVar1 + 200))();
      param_1[0x19] = iVar3;
      (**(code **)(*(int *)*piVar1 + 0x40))(param_1[1]);
      (**(code **)(*(int *)*piVar1 + 0x9c))(param_1[0x17]);
      (**(code **)(*(int *)*piVar1 + 0x44))(param_1[2]);
    }
    iVar3 = 0;
  }
  return iVar3;
}

