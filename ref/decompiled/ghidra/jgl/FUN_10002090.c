/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002090 @ 0x10002090 */


undefined4 __thiscall FUN_10002090(void *this,int *param_1,short param_2,short param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0x10;
  }
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 != 8) {
    if (*piVar1 != 0x10) {
      return 0x17;
    }
    uVar2 = FUN_100027a0(this,*param_1,param_1[1],param_1[2] - *param_1,param_1[3] - param_1[1],
                         param_2,param_3);
    return uVar2;
  }
  uVar2 = FUN_10005000(this,*param_1,param_1[1],param_1[2] - *param_1,param_1[3] - param_1[1],
                       (char)param_2,(char)param_3);
  return uVar2;
}

