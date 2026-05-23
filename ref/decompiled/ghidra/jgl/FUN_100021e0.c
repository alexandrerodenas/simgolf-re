/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100021e0 @ 0x100021E0 */
/* Body size: 139 addresses */


undefined4 __thiscall
FUN_100021e0(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6,
            int param_7,int param_8,int param_9)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 == 8) {
    FUN_10005860(this,param_1,param_2,param_3,param_4,param_5,(int)param_6,param_7,param_8,param_9);
  }
  else if (*piVar1 == 0x10) {
    FUN_10003070(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return 0;
  }
  return 0;
}

