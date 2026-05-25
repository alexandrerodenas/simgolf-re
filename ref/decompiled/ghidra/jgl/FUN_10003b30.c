/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10003b30 @ 0x10003B30 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_10003b30(void *this,int param_1,int param_2,int param_3,uint param_4,int *param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = param_7;
  piVar5 = param_5;
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
  if ((param_4 == 0xffffffff) && (param_5 == (int *)0xffffffff)) {
    return;
  }
  param_5 = *(int **)((int)this + 0x7c);
  if (param_5 == (int *)0x0) {
    if (DAT_10057d9c == 0) goto LAB_10003c2b;
    param_5 = *(int **)(DAT_10057d9c + 4);
  }
  if (param_5 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)this + 0xe4))();
    if (*(int *)(iVar2 + 4) == 0) {
      if ((param_4 & 0x80000000) == 0) {
        iVar2 = (**(code **)(*param_5 + 0x18))();
        param_4 = (uint)*(ushort *)(iVar2 + (param_4 & 0xff) * 2);
      }
    }
    else {
      if (*(int *)(iVar2 + 4) != 1) {
        return;
      }
      if ((param_4 & 0x80000000) == 0) {
        iVar2 = (**(code **)(*param_5 + 0x18))();
        param_4 = (uint)*(ushort *)(iVar2 + (param_4 & 0xff) * 2);
      }
    }
    if (((uint)piVar5 & 0x80000000) == 0) {
      iVar2 = (**(code **)(*param_5 + 0x1c))();
      piVar5 = (int *)(uint)*(ushort *)(iVar2 + ((uint)piVar5 & 0xff) * 2);
    }
  }
LAB_10003c2b:
  piVar1 = (int *)(param_4 & 0xffff);
  param_5 = (int *)((uint)piVar5 & 0xffff);
  param_4 = (uint)piVar1;
  if (param_3 < param_2) {
    param_3 = param_2;
    param_2 = iVar3;
    param_7 = param_6;
    param_8 = (iVar6 - param_8) + param_6;
    param_6 = iVar6;
    param_4 = (uint)param_5;
    param_5 = piVar1;
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
    puVar4 = (undefined2 *)(**(code **)(*(int *)this + 0x14))(param_1,param_2);
    if (puVar4 != (undefined2 *)0x0) {
      iVar3 = (**(code **)(*(int *)this + 0xe0))();
      iVar6 = param_8 % (param_6 + param_7);
      if (iVar6 < param_6) {
        param_8 = iVar6 - param_6;
      }
      else {
        param_8 = (param_6 - iVar6) + param_7;
      }
      if (param_4 == 0xffffffff) {
        iVar6 = (param_3 - param_2) + 1;
        do {
          if (param_8 < 0) {
            param_8 = param_8 + 1;
            if (param_8 == 0) {
              param_8 = param_7;
            }
          }
          else {
            *puVar4 = param_5._0_2_;
            param_8 = param_8 + -1;
            if (param_8 == 0) {
              param_8 = -param_6;
            }
          }
          puVar4 = puVar4 + iVar3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        (**(code **)(*(int *)this + 0x24))(1);
        return;
      }
      if (param_5 == (int *)0xffffffff) {
        iVar6 = (param_3 - param_2) + 1;
        do {
          if (param_8 < 0) {
            *puVar4 = (undefined2)param_4;
            param_8 = param_8 + 1;
            if (param_8 == 0) {
              param_8 = param_7;
            }
          }
          else {
            param_8 = param_8 + -1;
            if (param_8 == 0) {
              param_8 = -param_6;
            }
          }
          puVar4 = (undefined2 *)((int)puVar4 + iVar3);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        (**(code **)(*(int *)this + 0x24))(1);
        return;
      }
      iVar6 = (param_3 - param_2) + 1;
      DAT_10057b34 = iVar6;
      do {
        if (param_8 < 0) {
          *puVar4 = (undefined2)param_4;
          param_8 = param_8 + 1;
          if (param_8 == 0) {
            param_8 = *(int *)(iVar6 + 0x20);
          }
        }
        else {
          *puVar4 = param_5._0_2_;
          param_8 = param_8 + -1;
          if (param_8 == 0) {
            param_8 = *(int *)(iVar6 + 0x1c);
          }
        }
        puVar4 = (undefined2 *)((int)puVar4 + iVar3);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      (**(code **)(*(int *)this + 0x24))(1);
    }
  }
  return;
}

