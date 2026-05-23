/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002160 @ 0x10002160 */
/* Body size: 99 addresses */


undefined4 __thiscall
FUN_10002160(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 == 8) {
    FUN_100051c0(this,param_1,param_2,param_3,param_4,(char)param_5);
  }
  else if (*piVar1 == 0x10) {
    FUN_10002870(this,param_1,param_2,param_3,param_4,param_5);
    return 0;
  }
  return 0;
}

