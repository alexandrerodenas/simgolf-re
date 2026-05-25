/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100061b0 @ 0x100061B0 */


void __thiscall
FUN_100061b0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_7;
  iVar6 = param_5;
  iVar3 = param_2;
  piVar1 = (int *)(**(code **)(*(int *)this + 0xcc))();
  if ((((*piVar1 <= param_1) &&
       (iVar2 = (**(code **)(*(int *)this + 0xcc))(), param_1 < *(int *)(iVar2 + 8))) &&
      (param_2 != param_3)) && ((param_4 != -1 || (param_5 != -1)))) {
    if (param_3 < param_2) {
      param_2 = param_3;
      param_5 = param_4;
      param_4 = iVar6;
      iVar6 = param_7 - param_8;
      param_3 = iVar3;
      param_7 = param_6;
      param_8 = iVar6 + param_6;
      param_6 = iVar5;
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
      puVar4 = (undefined1 *)(**(code **)(*(int *)this + 0x14))(param_1,param_2);
      if (puVar4 != (undefined1 *)0x0) {
        iVar3 = (**(code **)(*(int *)this + 0xe0))();
        iVar6 = param_8 % (param_6 + param_7);
        if (iVar6 < param_6) {
          param_8 = iVar6 - param_6;
        }
        else {
          param_8 = (param_6 - iVar6) + param_7;
        }
        iVar6 = -param_6;
        if (param_4 == -1) {
          iVar5 = (param_3 - param_2) + 1;
          do {
            if (param_8 < 0) {
              param_8 = param_8 + 1;
              if (param_8 == 0) {
                param_8 = param_7;
              }
            }
            else {
              *puVar4 = (undefined1)param_5;
              param_8 = param_8 + -1;
              if (param_8 == 0) {
                param_8 = iVar6;
              }
            }
            puVar4 = puVar4 + iVar3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          (**(code **)(*(int *)this + 0x24))(1);
          return;
        }
        if (param_5 == -1) {
          iVar5 = (param_3 - param_2) + 1;
          do {
            if (param_8 < 0) {
              *puVar4 = (undefined1)param_4;
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
            puVar4 = puVar4 + iVar3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          (**(code **)(*(int *)this + 0x24))(1);
          return;
        }
        iVar5 = (param_3 - param_2) + 1;
        do {
          if (param_8 < 0) {
            *puVar4 = (undefined1)param_4;
            param_8 = param_8 + 1;
            if (param_8 == 0) {
              param_8 = param_7;
            }
          }
          else {
            *puVar4 = (undefined1)param_5;
            param_8 = param_8 + -1;
            if (param_8 == 0) {
              param_8 = iVar6;
            }
          }
          puVar4 = puVar4 + iVar3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        (**(code **)(*(int *)this + 0x24))(1);
      }
    }
  }
  return;
}

