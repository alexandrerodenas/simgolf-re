/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10005f80 @ 0x10005F80 */
/* Body size: 554 addresses */


void __thiscall
FUN_10005f80(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar1 = param_7;
  iVar6 = param_5;
  iVar3 = param_1;
  iVar2 = (**(code **)(*(int *)this + 0xcc))();
  if ((((*(int *)(iVar2 + 4) <= param_3) &&
       (iVar2 = (**(code **)(*(int *)this + 0xcc))(), param_3 < *(int *)(iVar2 + 0xc))) &&
      (param_1 != param_2)) && ((param_4 != -1 || (param_5 != -1)))) {
    if (param_2 < param_1) {
      param_1 = param_2;
      param_5 = param_4;
      param_4 = iVar6;
      iVar6 = param_7 - param_8;
      param_2 = iVar3;
      param_7 = param_6;
      param_8 = iVar6 + param_6;
      param_6 = iVar1;
    }
    iVar3 = (**(code **)(*(int *)this + 0xcc))();
    if ((param_1 < *(int *)(iVar3 + 8)) &&
       (piVar4 = (int *)(**(code **)(*(int *)this + 0xcc))(), *piVar4 <= param_2)) {
      piVar4 = (int *)(**(code **)(*(int *)this + 0xcc))();
      if (param_1 < *piVar4) {
        piVar4 = (int *)(**(code **)(*(int *)this + 0xcc))();
        param_1 = *piVar4;
      }
      iVar3 = (**(code **)(*(int *)this + 0xcc))();
      if (*(int *)(iVar3 + 8) <= param_2) {
        iVar3 = (**(code **)(*(int *)this + 0xcc))();
        param_2 = *(int *)(iVar3 + 8) + -1;
      }
      puVar5 = (undefined1 *)(**(code **)(*(int *)this + 0x14))(param_1,param_3);
      if (puVar5 != (undefined1 *)0x0) {
        iVar3 = param_8 % (param_6 + param_7);
        if (iVar3 < param_6) {
          param_8 = iVar3 - param_6;
        }
        else {
          param_8 = (param_6 - iVar3) + param_7;
        }
        iVar3 = -param_6;
        if (param_4 == -1) {
          iVar6 = (param_2 - param_1) + 1;
          do {
            if (param_8 < 0) {
              param_8 = param_8 + 1;
              if (param_8 == 0) {
                param_8 = param_7;
              }
            }
            else {
              *puVar5 = (undefined1)param_5;
              param_8 = param_8 + -1;
              if (param_8 == 0) {
                param_8 = iVar3;
              }
            }
            puVar5 = puVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          (**(code **)(*(int *)this + 0x24))(1);
          return;
        }
        if (param_5 == -1) {
          iVar6 = (param_2 - param_1) + 1;
          do {
            if (param_8 < 0) {
              *puVar5 = (undefined1)param_4;
              param_8 = param_8 + 1;
              if (param_8 == 0) {
                param_8 = param_7;
              }
            }
            else {
              param_8 = param_8 + -1;
              if (param_8 == 0) {
                param_8 = iVar3;
              }
            }
            puVar5 = puVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          (**(code **)(*(int *)this + 0x24))(1);
          return;
        }
        iVar6 = (param_2 - param_1) + 1;
        do {
          if (param_8 < 0) {
            *puVar5 = (undefined1)param_4;
            param_8 = param_8 + 1;
            if (param_8 == 0) {
              param_8 = param_7;
            }
          }
          else {
            *puVar5 = (undefined1)param_5;
            param_8 = param_8 + -1;
            if (param_8 == 0) {
              param_8 = iVar3;
            }
          }
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        (**(code **)(*(int *)this + 0x24))(1);
      }
    }
  }
  return;
}

