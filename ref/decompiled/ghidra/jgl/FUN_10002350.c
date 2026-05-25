/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002350 @ 0x10002350 */


undefined4 __thiscall FUN_10002350(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 != 0x10) {
    return 0x17;
  }
  uVar2 = FUN_10004080(this,param_1,param_2);
  return uVar2;
}

