/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001dd0 @ 0x10001DD0 */


undefined4 __thiscall FUN_10001dd0(void *this,uint param_1)

{
  HDC hdc;
  
  hdc = (HDC)(**(code **)(*(int *)this + 0x28))();
  SetTextColor(hdc,param_1 & 0xffff | 0x10ff0000);
  (**(code **)(*(int *)this + 0x2c))(1);
  return 0;
}

