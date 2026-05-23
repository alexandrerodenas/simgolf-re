/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484c20 @ 0x00484C20 */
/* Body size: 90 addresses */


int __thiscall FUN_00484c20(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x10] != 0) {
    return 0xc;
  }
  iVar1 = FUN_004840e0(param_1 + 0x10,param_2,1);
  if (iVar1 == 0) {
    iVar1 = *(int *)param_1[0x10];
    uVar2 = (**(code **)(*param_1 + 0x70))();
    (**(code **)(iVar1 + 0x6c))(uVar2);
    (**(code **)(*param_1 + 0x7c))();
    return 0;
  }
  return iVar1;
}

