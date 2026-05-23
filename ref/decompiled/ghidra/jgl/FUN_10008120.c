/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10008120 @ 0x10008120 */
/* Body size: 392 addresses */


undefined2 * __thiscall
FUN_10008120(void *this,int *param_1,int param_2,undefined2 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)this + 0x20))();
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)((int)this + 0x10);
      if (param_4 != 0) {
        *(int *)((int)this + 0x10) = param_4;
      }
      if (*(int *)((int)this + 0x20) == 8) {
        piVar3 = (int *)(**(code **)(*param_1 + 0xe4))();
        if (*piVar3 != 8) {
          if (*piVar3 != 0x10) {
            *(undefined4 *)((int)this + 0x10) = uVar1;
            (**(code **)(*(int *)this + 0x24))(1);
            return (undefined2 *)0x17;
          }
          if ((*(byte *)((int)this + 0x18) & 1) != 0) {
            puVar4 = (undefined2 *)FUN_10033fe0(this,param_1,param_2,param_3);
            *(undefined4 *)((int)this + 0x10) = uVar1;
            (**(code **)(*(int *)this + 0x24))(1);
            return puVar4;
          }
          puVar4 = (undefined2 *)FUN_1000ad70(this,param_1,param_2,(int)param_3);
          *(undefined4 *)((int)this + 0x10) = uVar1;
          (**(code **)(*(int *)this + 0x24))(1);
          return puVar4;
        }
        if ((*(byte *)((int)this + 0x18) & 1) == 0) {
          puVar4 = (undefined2 *)FUN_10036900(this,param_1,param_2,(int)param_3);
          *(undefined4 *)((int)this + 0x10) = uVar1;
          (**(code **)(*(int *)this + 0x24))(1);
          return puVar4;
        }
      }
      else {
        if (*(int *)((int)this + 0x20) != 0x10) {
          *(undefined4 *)((int)this + 0x10) = uVar1;
          (**(code **)(*(int *)this + 0x24))(1);
          return (undefined2 *)0x17;
        }
        piVar3 = (int *)(**(code **)(*param_1 + 0xe4))();
        if ((*piVar3 != 8) && (*piVar3 != 0x10)) {
          *(undefined4 *)((int)this + 0x10) = uVar1;
          (**(code **)(*(int *)this + 0x24))(1);
          return (undefined2 *)0x17;
        }
        if ((*(byte *)((int)this + 0x18) & 1) == 0) {
          puVar4 = (undefined2 *)FUN_1000a190(this,param_1,param_2,(int)param_3);
          *(undefined4 *)((int)this + 0x10) = uVar1;
          (**(code **)(*(int *)this + 0x24))(1);
          return puVar4;
        }
      }
      *(undefined4 *)((int)this + 0x10) = uVar1;
      (**(code **)(*(int *)this + 0x24))(1);
      return param_3;
    }
  }
  return (undefined2 *)0x7;
}

