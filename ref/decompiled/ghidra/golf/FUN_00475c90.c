/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475c90 @ 0x00475C90 */


undefined4 __thiscall
FUN_00475c90(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_2 == 0) {
    return 0x10;
  }
  if ((*(int **)(param_1 + 4) != (int *)0x0) && (*(int *)(param_2 + 4) != 0)) {
    local_10 = param_3;
    local_8 = param_3 + param_5;
    local_c = param_4;
    local_4 = param_4 + param_6;
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x40))(*(int *)(param_2 + 4),&local_10,&local_10)
    ;
    return uVar1;
  }
  return 7;
}

