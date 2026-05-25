/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001fc0 @ 0x10001FC0 */


undefined4 __thiscall
FUN_10001fc0(void *this,int *param_1,int param_2,int param_3,undefined4 *param_4,undefined2 *param_5
            ,int param_6,int param_7)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)((int)this + 0x24) != 8) {
    if (*(int *)((int)this + 0x24) != 0x10) {
      return 0x17;
    }
    uVar1 = FUN_10004990(this,param_1,param_2,param_3,param_4,(int)param_5,param_6,param_7);
    return uVar1;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0xe4))();
  if (*piVar2 == 8) {
    uVar1 = FUN_100075f0(this,param_1,param_2,param_3,param_4,(int)param_5,param_6,param_7);
    return uVar1;
  }
  if (*piVar2 != 0x10) {
    return 0x17;
  }
  uVar1 = FUN_10006ce0(this,param_1,param_2,param_3,(int)param_4,param_5,param_6,param_7);
  return uVar1;
}

