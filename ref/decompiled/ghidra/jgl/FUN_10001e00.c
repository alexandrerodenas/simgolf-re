/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001e00 @ 0x10001E00 */
/* Body size: 50 addresses */


undefined4 __thiscall FUN_10001e00(void *this,int param_1,int param_2,LPCSTR param_3,int param_4)

{
  HDC hdc;
  
  hdc = (HDC)(**(code **)(*(int *)this + 0x28))();
  TextOutA(hdc,param_1,param_2,param_3,param_4);
  (**(code **)(*(int *)this + 0x2c))(1);
  return 0;
}

