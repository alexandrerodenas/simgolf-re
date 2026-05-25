/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001d90 @ 0x10001D90 */


undefined4 __thiscall FUN_10001d90(void *this,uint param_1,undefined1 param_2,undefined1 param_3)

{
  HDC hdc;
  
  hdc = (HDC)(**(code **)(*(int *)this + 0x28))();
  SetTextColor(hdc,(uint)CONCAT11(param_3,param_2) << 8 | param_1 & 0xff);
  (**(code **)(*(int *)this + 0x2c))(1);
  return 0;
}

