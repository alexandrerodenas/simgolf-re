/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4470 @ 0x004A4470 */
/* Body size: 57 addresses */


void __thiscall FUN_004a4470(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00492a90(param_2,param_3,&param_3,0);
  if ((iVar1 != -1) && (*(code **)(param_1 + -0x18) != (code *)0x0)) {
    (**(code **)(param_1 + -0x18))(param_3);
  }
  return;
}

