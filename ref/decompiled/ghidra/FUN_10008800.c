/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10008800 @ 0x10008800 */
/* Body size: 354 addresses */


int __thiscall
FUN_10008800(void *this,int *param_1,int param_2,ushort *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = *(undefined4 *)((int)this + 0x10);
  if (param_5 != 0) {
    *(int *)((int)this + 0x10) = param_5;
  }
  if (param_1 == (int *)0x0) {
    return 0x10;
  }
  iVar2 = (**(code **)(*(int *)this + 0x20))();
  if (iVar2 == 0) {
    return 7;
  }
  if (*(int *)((int)this + 0x20) == 8) {
    piVar3 = (int *)(**(code **)(*param_1 + 0xe4))();
    if (*piVar3 != 8) {
      if (*piVar3 != 0x10) {
        *(undefined4 *)((int)this + 0x10) = uVar1;
        (**(code **)(*(int *)this + 0x24))(1);
        return 0x17;
      }
      if ((*(byte *)((int)this + 0x18) & 1) != 0) {
        iVar2 = FUN_10034ce0(this,param_1,param_2,param_3,param_4);
        *(undefined4 *)((int)this + 0x10) = uVar1;
        (**(code **)(*(int *)this + 0x24))(1);
        return iVar2;
      }
      iVar2 = FUN_10012780(this,param_1,param_2,(int)param_3,param_4);
      *(undefined4 *)((int)this + 0x10) = uVar1;
      (**(code **)(*(int *)this + 0x24))(1);
      return iVar2;
    }
  }
  else {
    if (*(int *)((int)this + 0x20) != 0x10) {
      *(undefined4 *)((int)this + 0x10) = uVar1;
      (**(code **)(*(int *)this + 0x24))(1);
      return 0x17;
    }
    piVar3 = (int *)(**(code **)(*param_1 + 0xe4))();
    if ((*piVar3 != 8) && (*piVar3 != 0x10)) {
      *(undefined4 *)((int)this + 0x10) = uVar1;
      (**(code **)(*(int *)this + 0x24))(1);
      return 0x17;
    }
    if ((*(byte *)((int)this + 0x18) & 1) == 0) {
      iVar2 = FUN_1000a400(this,param_1,param_2,(int)param_3,param_4);
      *(undefined4 *)((int)this + 0x10) = uVar1;
      (**(code **)(*(int *)this + 0x24))(1);
      return iVar2;
    }
  }
  *(undefined4 *)((int)this + 0x10) = uVar1;
  (**(code **)(*(int *)this + 0x24))(1);
  return param_4;
}

