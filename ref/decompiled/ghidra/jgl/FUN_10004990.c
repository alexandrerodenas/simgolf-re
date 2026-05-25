/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10004990 @ 0x10004990 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_10004990(void *this,int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  RECT *lprcSrc2;
  BOOL BVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  RECT local_18;
  int *local_8;
  
  iVar1 = param_3;
  if (param_1 == (int *)0x0) {
    return 3;
  }
  if (param_2 < 0) {
    param_6 = param_6 + param_2;
    param_4 = (undefined4 *)((int)param_4 - param_2);
    param_2 = 0;
  }
  if (param_3 < 0) {
    param_3 = 0;
    param_7 = param_7 + iVar1;
    param_5 = param_5 - iVar1;
  }
  local_8 = this;
  iVar1 = (**(code **)(*(int *)this + 0xd8))();
  if ((param_2 <= iVar1) && (iVar1 = (**(code **)(*(int *)this + 0xdc))(), param_3 <= iVar1)) {
    iVar1 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar1 < param_2 + param_6) {
      iVar1 = (**(code **)(*(int *)this + 0xd8))();
      param_6 = iVar1 - param_2;
    }
    iVar1 = (**(code **)(*(int *)this + 0xdc))();
    if (iVar1 < param_3 + param_7) {
      iVar1 = (**(code **)(*(int *)this + 0xdc))();
      param_7 = iVar1 - param_3;
    }
    local_18.left = (LONG)param_4;
    local_18.right = (int)param_4 + param_6;
    local_18.bottom = param_5 + param_7;
    local_18.top = param_5;
    lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar2 = IntersectRect(&local_18,&local_18,lprcSrc2);
    if (BVar2 != 0) {
      iVar1 = local_18.left + (param_2 - (int)param_4);
      iVar7 = param_3 + (local_18.top - param_5);
      uVar8 = local_18.right - local_18.left;
      iVar5 = local_18.bottom - local_18.top;
      if (param_1 == this) {
        if ((int)param_4 < iVar1) {
          if (param_5 < iVar7) {
            puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x1c))(local_18.left,local_18.top);
            if (puVar3 == (undefined4 *)0x0) {
              return 3;
            }
            puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x1c))(iVar1,iVar7);
            if (puVar4 == (undefined4 *)0x0) {
              (**(code **)(*param_1 + 0x24))(1);
              return 3;
            }
            iVar1 = param_1[0x10];
            iVar7 = *(int *)((int)this + 0x40);
            DAT_10057b44 = uVar8 & 1;
            uVar9 = uVar8 >> 1;
            do {
              for (; uVar10 = DAT_10057b44, uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar3 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar3 = puVar3 + 1;
              }
              for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined2 *)puVar3 = *(undefined2 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 2);
                puVar3 = (undefined4 *)((int)puVar3 + 2);
              }
              puVar4 = (undefined4 *)((int)puVar4 + (iVar7 - uVar8) * 2);
              puVar3 = (undefined4 *)((int)puVar3 + (iVar1 - uVar8) * 2);
              iVar5 = iVar5 + -1;
              uVar9 = uVar8 >> 1;
            } while (iVar5 != 0);
          }
          else {
            puVar3 = (undefined4 *)
                     (**(code **)(*param_1 + 0x1c))(local_18.left,local_18.top + -1 + iVar5);
            if (puVar3 == (undefined4 *)0x0) {
              return 3;
            }
            puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x1c))(iVar1,iVar7 + -1 + iVar5);
            if (puVar4 == (undefined4 *)0x0) {
              (**(code **)(*param_1 + 0x24))(1);
              return 3;
            }
            iVar1 = param_1[0x10];
            iVar7 = *(int *)((int)this + 0x40);
            DAT_10057b44 = uVar8 & 1;
            uVar9 = uVar8 >> 1;
            do {
              for (; uVar10 = DAT_10057b44, uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar3 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar3 = puVar3 + 1;
              }
              for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined2 *)puVar3 = *(undefined2 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 2);
                puVar3 = (undefined4 *)((int)puVar3 + 2);
              }
              puVar4 = (undefined4 *)((int)puVar4 + (iVar7 + uVar8) * -2);
              puVar3 = (undefined4 *)((int)puVar3 + (iVar1 + uVar8) * -2);
              iVar5 = iVar5 + -1;
              uVar9 = uVar8 >> 1;
            } while (iVar5 != 0);
          }
        }
        else if (param_5 < iVar7) {
          if ((int)uVar8 < 4) {
            param_4 = (undefined4 *)(**(code **)(*param_1 + 0x1c))(local_18.left + (uVar8 - 1));
            iVar6 = *(int *)this;
            iVar1 = iVar1 + -1;
          }
          else {
            param_4 = (undefined4 *)
                      (**(code **)(*param_1 + 0x1c))(local_18.left + (uVar8 - 2),local_18.top);
            iVar6 = *(int *)this;
            iVar1 = iVar1 + -2;
          }
          puVar3 = (undefined4 *)(**(code **)(iVar6 + 0x1c))(iVar1 + uVar8,iVar7);
          if (param_4 == (undefined4 *)0x0) {
            return 3;
          }
          if (puVar3 == (undefined4 *)0x0) {
            (**(code **)(*param_1 + 0x24))(1);
            return 3;
          }
          iVar7 = (param_1[0x10] + uVar8) * 2;
          iVar1 = (*(int *)((int)this + 0x40) + uVar8) * 2;
          uVar9 = uVar8 >> 1;
          DAT_10057b44 = uVar8 & 1;
          uVar8 = uVar9;
          if (DAT_10057b44 == 0) {
            do {
              for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                *param_4 = *puVar3;
                puVar3 = puVar3 + -1;
                param_4 = param_4 + -1;
              }
              puVar3 = (undefined4 *)((int)puVar3 + iVar1);
              param_4 = (undefined4 *)((int)param_4 + iVar7);
              iVar5 = iVar5 + -1;
              uVar8 = uVar9;
            } while (iVar5 != 0);
          }
          else {
            do {
              for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                *param_4 = *puVar3;
                puVar3 = puVar3 + -1;
                param_4 = param_4 + -1;
              }
              *(undefined2 *)((int)param_4 + 2) = *(undefined2 *)((int)puVar3 + 2);
              puVar3 = (undefined4 *)((int)puVar3 + iVar1);
              param_4 = (undefined4 *)((int)param_4 + iVar7);
              iVar5 = iVar5 + -1;
              uVar8 = uVar9;
            } while (iVar5 != 0);
          }
        }
        else {
          if ((int)uVar8 < 4) {
            param_4 = (undefined4 *)(**(code **)(*param_1 + 0x1c))(local_18.left + (uVar8 - 1));
            iVar6 = *(int *)this;
            iVar1 = iVar1 + -1;
          }
          else {
            param_4 = (undefined4 *)
                      (**(code **)(*param_1 + 0x1c))
                                (local_18.left + (uVar8 - 2),local_18.top + -1 + iVar5);
            iVar6 = *(int *)this;
            iVar1 = iVar1 + -2;
          }
          puVar3 = (undefined4 *)(**(code **)(iVar6 + 0x1c))(iVar1 + uVar8,iVar7 + -1 + iVar5);
          if (param_4 == (undefined4 *)0x0) {
            return 3;
          }
          if (puVar3 == (undefined4 *)0x0) {
            (**(code **)(*param_1 + 0x24))(1);
            return 3;
          }
          iVar1 = param_1[0x10];
          iVar7 = *(int *)((int)this + 0x40) - uVar8;
          uVar10 = uVar8 >> 1;
          DAT_10057b44 = uVar8 & 1;
          uVar9 = uVar10;
          if (DAT_10057b44 == 0) {
            do {
              for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                *param_4 = *puVar3;
                puVar3 = puVar3 + -1;
                param_4 = param_4 + -1;
              }
              puVar3 = (undefined4 *)((int)puVar3 + iVar7 * -2);
              param_4 = (undefined4 *)((int)param_4 + (iVar1 - uVar8) * -2);
              iVar5 = iVar5 + -1;
              uVar9 = uVar10;
            } while (iVar5 != 0);
          }
          else {
            do {
              for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                *param_4 = *puVar3;
                puVar3 = puVar3 + -1;
                param_4 = param_4 + -1;
              }
              *(undefined2 *)((int)param_4 + 2) = *(undefined2 *)((int)puVar3 + 2);
              puVar3 = (undefined4 *)((int)puVar3 + iVar7 * -2);
              param_4 = (undefined4 *)((int)param_4 + (iVar1 - uVar8) * -2);
              iVar5 = iVar5 + -1;
              uVar9 = uVar10;
            } while (iVar5 != 0);
          }
        }
      }
      else {
        puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x1c))(local_18.left,local_18.top);
        if (puVar3 == (undefined4 *)0x0) {
          return 3;
        }
        puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x1c))(iVar1,iVar7);
        if (puVar4 == (undefined4 *)0x0) {
          (**(code **)(*param_1 + 0x24))(1);
          return 3;
        }
        iVar1 = param_1[0x10];
        iVar7 = *(int *)((int)this + 0x40);
        DAT_10057b44 = uVar8 & 1;
        uVar9 = uVar8 >> 1;
        do {
          for (; uVar10 = DAT_10057b44, uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined2 *)puVar3 = *(undefined2 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 2);
            puVar3 = (undefined4 *)((int)puVar3 + 2);
          }
          puVar4 = (undefined4 *)((int)puVar4 + (iVar7 - uVar8) * 2);
          puVar3 = (undefined4 *)((int)puVar3 + (iVar1 - uVar8) * 2);
          iVar5 = iVar5 + -1;
          uVar9 = uVar8 >> 1;
        } while (iVar5 != 0);
      }
      (**(code **)(*local_8 + 0x24))(1);
      (**(code **)(*param_1 + 0x24))(1);
    }
  }
  return 0;
}

