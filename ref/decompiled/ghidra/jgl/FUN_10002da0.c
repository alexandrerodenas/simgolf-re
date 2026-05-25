/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002da0 @ 0x10002DA0 */


void __thiscall FUN_10002da0(void *this,int param_1,int param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = (**(code **)(*(int *)this + 0xcc))();
  if (param_3 < *(int *)(iVar2 + 4)) {
    return;
  }
  iVar2 = (**(code **)(*(int *)this + 0xcc))();
  if (*(int *)(iVar2 + 0xc) <= param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  if ((param_4 & 0x80000000) == 0) {
    piVar4 = *(int **)((int)this + 0x7c);
    if (piVar4 == (int *)0x0) {
      if (DAT_10057d9c == 0) goto LAB_10002e42;
      piVar4 = *(int **)(DAT_10057d9c + 4);
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = (**(code **)(*(int *)this + 0xe4))();
      if (*(int *)(iVar2 + 4) == 0) {
        iVar2 = (**(code **)(*piVar4 + 0x18))();
      }
      else {
        if (*(int *)(iVar2 + 4) != 1) {
          return;
        }
        iVar2 = (**(code **)(*piVar4 + 0x1c))();
      }
      param_4 = (uint)*(ushort *)(iVar2 + (param_4 & 0xff) * 2);
    }
  }
LAB_10002e42:
  iVar2 = param_2;
  if (param_2 < param_1) {
    iVar2 = param_1;
    param_1 = param_2;
  }
  iVar3 = (**(code **)(*(int *)this + 0xcc))();
  if ((param_1 < *(int *)(iVar3 + 8)) &&
     (piVar4 = (int *)(**(code **)(*(int *)this + 0xcc))(), *piVar4 <= iVar2)) {
    piVar4 = (int *)(**(code **)(*(int *)this + 0xcc))();
    if (param_1 < *piVar4) {
      piVar4 = (int *)(**(code **)(*(int *)this + 0xcc))();
      param_1 = *piVar4;
    }
    iVar3 = (**(code **)(*(int *)this + 0xcc))();
    if (*(int *)(iVar3 + 8) <= iVar2) {
      iVar2 = (**(code **)(*(int *)this + 0xcc))();
      iVar2 = *(int *)(iVar2 + 8) + -1;
    }
    puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x1c))(param_1,param_3);
    if (puVar5 != (undefined4 *)0x0) {
      uVar7 = (iVar2 - param_1) + 1;
      if (0 < (int)uVar7) {
        uVar1 = (undefined2)param_4;
        for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar5 = CONCAT22(uVar1,uVar1);
          puVar5 = puVar5 + 1;
        }
        for (uVar7 = (uint)((uVar7 & 1) != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined2 *)puVar5 = uVar1;
          puVar5 = (undefined4 *)((int)puVar5 + 2);
        }
      }
      (**(code **)(*(int *)this + 0x24))(1);
    }
  }
  return;
}

