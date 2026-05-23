/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478a90 @ 0x00478A90 */
/* Body size: 87 addresses */


void __thiscall
FUN_00478a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2b4) + 1;
  *(int *)(param_1 + 0x2b4) = iVar1;
  if (0x14 < iVar1) {
    MessageBoxA((HWND)0x0,s_Maximum_drop_down_spots_exceeded_004e428c,s_WARNING__004e4280,0);
    return;
  }
  FUN_004929b0(param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}

