/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002ef0 @ 0x10002EF0 */


void __thiscall FUN_10002ef0(void *this,int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar3 = param_3;
  piVar1 = (int *)(**(code **)(*(int *)this + 0xcc))();
  if (param_1 < *piVar1) {
    return;
  }
  iVar2 = (**(code **)(*(int *)this + 0xcc))();
  if (*(int *)(iVar2 + 8) <= param_1) {
    return;
  }
  if (param_2 == param_3) {
    return;
  }
  if ((param_4 & 0x80000000) == 0) {
    piVar1 = *(int **)((int)this + 0x7c);
    if (piVar1 == (int *)0x0) {
      if (DAT_10057d9c == 0) goto LAB_10002f8f;
      piVar1 = *(int **)(DAT_10057d9c + 4);
    }
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*(int *)this + 0xe4))();
      if (*(int *)(iVar2 + 4) == 0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))();
      }
      else {
        if (*(int *)(iVar2 + 4) != 1) {
          return;
        }
        iVar2 = (**(code **)(*piVar1 + 0x1c))();
      }
      param_4 = (uint)*(ushort *)(iVar2 + (param_4 & 0xff) * 2);
    }
  }
LAB_10002f8f:
  if (param_3 < param_2) {
    param_3 = param_2;
    param_2 = iVar3;
  }
  iVar3 = (**(code **)(*(int *)this + 0xcc))();
  if ((param_2 < *(int *)(iVar3 + 0xc)) &&
     (iVar3 = (**(code **)(*(int *)this + 0xcc))(), *(int *)(iVar3 + 4) <= param_3)) {
    iVar3 = (**(code **)(*(int *)this + 0xcc))();
    if (param_2 < *(int *)(iVar3 + 4)) {
      iVar3 = (**(code **)(*(int *)this + 0xcc))();
      param_2 = *(int *)(iVar3 + 4);
    }
    iVar3 = (**(code **)(*(int *)this + 0xcc))();
    if (*(int *)(iVar3 + 0xc) <= param_3) {
      iVar3 = (**(code **)(*(int *)this + 0xcc))();
      param_3 = *(int *)(iVar3 + 0xc) + -1;
    }
    puVar4 = (undefined2 *)(**(code **)(*(int *)this + 0x1c))(param_1,param_2);
    if (puVar4 != (undefined2 *)0x0) {
      iVar3 = (**(code **)(*(int *)this + 0xe0))();
      iVar2 = (param_3 - param_2) + 1;
      do {
        *puVar4 = (undefined2)param_4;
        puVar4 = puVar4 + iVar3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      (**(code **)(*(int *)this + 0x24))(1);
    }
  }
  return;
}

