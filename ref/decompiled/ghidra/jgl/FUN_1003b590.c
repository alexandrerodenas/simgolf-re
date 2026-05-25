/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003b590 @ 0x1003B590 */


void __thiscall FUN_1003b590(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  (**(code **)(*(int *)this + 0x58))(iVar1,iVar2,param_1);
  return;
}

