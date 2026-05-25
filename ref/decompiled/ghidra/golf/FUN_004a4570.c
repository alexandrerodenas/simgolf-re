/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4570 @ 0x004A4570 */


void __thiscall FUN_004a4570(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00492a90(param_2,param_3,&param_3,0);
  if ((iVar1 != -1) && (*(code **)(param_1 + -8) != (code *)0x0)) {
    (**(code **)(param_1 + -8))(param_3);
  }
  return;
}

