/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100023b0 @ 0x100023B0 */
/* Body size: 74 addresses */


undefined4 __thiscall FUN_100023b0(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 == 8) {
    uVar2 = FUN_100065a0(this,param_1,(char)param_2);
    return uVar2;
  }
  if (*piVar1 != 0x10) {
    return 0x17;
  }
  uVar2 = FUN_10004420(this,param_1,param_2);
  return uVar2;
}

