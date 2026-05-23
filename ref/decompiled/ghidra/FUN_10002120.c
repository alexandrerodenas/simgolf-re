/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002120 @ 0x10002120 */
/* Body size: 57 addresses */


undefined4 __thiscall FUN_10002120(void *this,int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 != 8) {
    return 0;
  }
  uVar2 = FUN_100050d0(this,*param_1,param_1[1],param_1[2],param_1[3],param_2);
  return uVar2;
}

