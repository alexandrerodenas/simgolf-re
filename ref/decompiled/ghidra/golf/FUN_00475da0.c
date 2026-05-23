/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475da0 @ 0x00475DA0 */
/* Body size: 70 addresses */


undefined4 __thiscall
FUN_00475da0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return 7;
  }
  local_8 = param_4;
  local_10 = param_2;
  local_c = param_3;
  local_4 = param_3;
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x5c))(&local_10,param_6);
  return uVar1;
}

