/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001e40 @ 0x10001E40 */
/* Body size: 159 addresses */


undefined4 __thiscall
FUN_10001e40(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 != 8) {
    return 0x17;
  }
  piVar1 = (int *)(**(code **)(*param_1 + 0xe4))();
  if (*piVar1 != 8) {
    if (*piVar1 != 0x10) {
      return 0x17;
    }
    uVar2 = FUN_10006a40(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  uVar2 = FUN_10007300(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

