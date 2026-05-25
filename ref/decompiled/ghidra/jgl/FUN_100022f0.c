/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100022f0 @ 0x100022F0 */


undefined4 __thiscall
FUN_100022f0(void *this,LPRECT param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 != 0x10) {
    return 0x17;
  }
  piVar1 = (int *)(**(code **)(*param_2 + 0xe4))();
  if (*piVar1 != 0x10) {
    return 0x17;
  }
  uVar2 = FUN_10004ef0(this,param_1,param_2,param_3,param_4);
  return uVar2;
}

