/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10009a50 @ 0x10009A50 */


undefined4 __thiscall
FUN_10009a50(void *this,int *param_1,int *param_2,int *param_3,int param_4,ushort *param_5,
            int param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(**(code **)(*param_2 + 0xe4))();
  if (*piVar1 == 0x10) {
    iVar2 = (**(code **)(*(int *)this + 0x28))();
    if (iVar2 == 8) {
      iVar2 = (**(code **)(*param_1 + 0x28))();
      if (iVar2 == 8) {
        if (param_6 != 0) {
          *(int *)((int)this + 0x10) = param_6;
        }
        uVar3 = FUN_100109f0(this,(int)param_1,param_2,param_3,param_4,param_5);
        return uVar3;
      }
    }
  }
  return 0x17;
}

