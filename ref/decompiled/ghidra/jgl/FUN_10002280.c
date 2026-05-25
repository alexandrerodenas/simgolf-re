/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002280 @ 0x10002280 */


undefined4 __thiscall FUN_10002280(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 == 8) {
    FUN_100064b0(this,param_1,(short)param_2);
  }
  else if (*piVar1 == 0x10) {
    FUN_10003f20(this,param_1,param_2);
    return 0;
  }
  return 0;
}

