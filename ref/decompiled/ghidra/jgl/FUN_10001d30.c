/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001d30 @ 0x10001D30 */


undefined4 __thiscall FUN_10001d30(void *this,int *param_1)

{
  HDC hdc;
  
  hdc = (HDC)(**(code **)(*(int *)this + 0x28))();
  SelectObject(hdc,*(HGDIOBJ *)(*param_1 + 0x18));
  (**(code **)(*(int *)this + 0x2c))(1);
  return 0;
}

