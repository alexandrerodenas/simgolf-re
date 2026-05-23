/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10003830 @ 0x10003830 */
/* Body size: 761 addresses */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_10003830(void *this,int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
            int param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = param_7;
  iVar6 = param_2;
  iVar1 = (**(code **)(*(int *)this + 0xcc))();
  if ((((*(int *)(iVar1 + 4) <= param_3) &&
       (iVar1 = (**(code **)(*(int *)this + 0xcc))(), param_3 < *(int *)(iVar1 + 0xc))) &&
      (param_1 != param_2)) && ((param_4 != 0xffffffff || (param_5 != 0xffffffff)))) {
    piVar2 = *(int **)((int)this + 0x7c);
    if ((piVar2 != (int *)0x0) ||
       ((DAT_10057d9c != 0 && (piVar2 = *(int **)(DAT_10057d9c + 4), piVar2 != (int *)0x0)))) {
      iVar1 = (**(code **)(*(int *)this + 0xe4))();
      if (*(int *)(iVar1 + 4) == 0) {
        if ((param_4 & 0x80000000) == 0) {
          iVar1 = (**(code **)(*piVar2 + 0x18))();
          param_4 = (uint)*(ushort *)(iVar1 + (param_4 & 0xff) * 2);
        }
      }
      else {
        if (*(int *)(iVar1 + 4) != 1) {
          return;
        }
        if ((param_4 & 0x80000000) == 0) {
          iVar1 = (**(code **)(*piVar2 + 0x18))();
          param_4 = (uint)*(ushort *)(iVar1 + (param_4 & 0xff) * 2);
        }
      }
      if ((param_5 & 0x80000000) == 0) {
        iVar1 = (**(code **)(*piVar2 + 0x1c))();
        param_5 = (uint)*(ushort *)(iVar1 + (param_5 & 0xff) * 2);
      }
    }
    uVar5 = param_4 & 0xffff;
    param_5 = param_5 & 0xffff;
    param_4 = uVar5;
    if (param_2 < param_1) {
      param_2 = param_1;
      param_1 = iVar6;
      iVar6 = param_7 - param_8;
      param_7 = param_6;
      param_8 = iVar6 + param_6;
      param_6 = iVar4;
      param_4 = param_5;
      param_5 = uVar5;
    }
    iVar6 = (**(code **)(*(int *)this + 0xcc))();
    if ((param_1 < *(int *)(iVar6 + 8)) &&
       (piVar2 = (int *)(**(code **)(*(int *)this + 0xcc))(), *piVar2 <= param_2)) {
      piVar2 = (int *)(**(code **)(*(int *)this + 0xcc))();
      if (param_1 < *piVar2) {
        piVar2 = (int *)(**(code **)(*(int *)this + 0xcc))();
        param_1 = *piVar2;
      }
      iVar6 = (**(code **)(*(int *)this + 0xcc))();
      if (*(int *)(iVar6 + 8) <= param_2) {
        iVar6 = (**(code **)(*(int *)this + 0xcc))();
        param_2 = *(int *)(iVar6 + 8) + -1;
      }
      puVar3 = (undefined2 *)(**(code **)(*(int *)this + 0x1c))(param_1,param_3);
      if (puVar3 != (undefined2 *)0x0) {
        iVar6 = param_8 % (param_6 + param_7);
        if (iVar6 < param_6) {
          param_8 = iVar6 - param_6;
        }
        else {
          param_8 = (param_6 - iVar6) + param_7;
        }
        iVar6 = -param_6;
        if (param_4 == 0xffffffff) {
          iVar4 = (param_2 - param_1) + 1;
          do {
            if (param_8 < 0) {
              param_8 = param_8 + 1;
              if (param_8 == 0) {
                param_8 = param_7;
              }
            }
            else {
              *puVar3 = (undefined2)param_5;
              param_8 = param_8 + -1;
              if (param_8 == 0) {
                param_8 = iVar6;
              }
            }
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          (**(code **)(*(int *)this + 0x24))(1);
          return;
        }
        if (param_5 == 0xffffffff) {
          iVar4 = (param_2 - param_1) + 1;
          do {
            if (param_8 < 0) {
              *puVar3 = (undefined2)param_4;
              param_8 = param_8 + 1;
              if (param_8 == 0) {
                param_8 = param_7;
              }
            }
            else {
              param_8 = param_8 + -1;
              if (param_8 == 0) {
                param_8 = iVar6;
              }
            }
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          (**(code **)(*(int *)this + 0x24))(1);
          return;
        }
        iVar4 = (param_2 - param_1) + 1;
        DAT_10057b34 = iVar4;
        do {
          if (param_8 < 0) {
            *puVar3 = (undefined2)param_4;
            param_8 = param_8 + 1;
            if (param_8 == 0) {
              param_8 = param_7;
            }
          }
          else {
            *puVar3 = (undefined2)param_5;
            param_8 = param_8 + -1;
            if (param_8 == 0) {
              param_8 = iVar6;
            }
          }
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        (**(code **)(*(int *)this + 0x24))(1);
      }
    }
  }
  return;
}

