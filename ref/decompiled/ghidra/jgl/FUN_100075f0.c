/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100075f0 @ 0x100075F0 */
/* Body size: 1333 addresses */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_100075f0(void *this,int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  RECT *lprcSrc2;
  BOOL BVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  RECT local_18;
  int *local_8;
  
  iVar1 = param_3;
  if (*(int *)((int)this + 0x4c0) == 0) {
    return 7;
  }
  if (param_1 == (int *)0x0) {
    return 0x10;
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
      iVar9 = param_3 + (local_18.top - param_5);
      uVar10 = local_18.right - local_18.left;
      iVar7 = local_18.bottom - local_18.top;
      if (param_1 == this) {
        if ((int)param_4 < iVar1) {
          if (param_5 < iVar9) {
            puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x14))(local_18.left,local_18.top);
            if (puVar3 == (undefined4 *)0x0) {
              return 3;
            }
            puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x14))(iVar1,iVar9);
            if (puVar4 == (undefined4 *)0x0) {
              (**(code **)(*param_1 + 0x24))(1);
              return 3;
            }
            iVar1 = param_1[0x10];
            iVar9 = *(int *)((int)this + 0x40);
            DAT_10057b84 = uVar10 & 3;
            uVar5 = uVar10 >> 2;
            do {
              for (; uVar6 = DAT_10057b84, uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar3 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar3 = puVar3 + 1;
              }
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar3 = (undefined4 *)((int)puVar3 + 1);
              }
              puVar4 = (undefined4 *)((int)puVar4 + (iVar9 - uVar10));
              puVar3 = (undefined4 *)((int)puVar3 + (iVar1 - uVar10));
              iVar7 = iVar7 + -1;
              uVar5 = uVar10 >> 2;
            } while (iVar7 != 0);
          }
          else {
            puVar3 = (undefined4 *)
                     (**(code **)(*param_1 + 0x14))(local_18.left,local_18.top + -1 + iVar7);
            if (puVar3 == (undefined4 *)0x0) {
              return 3;
            }
            puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x14))(iVar1,iVar9 + -1 + iVar7);
            if (puVar4 == (undefined4 *)0x0) {
              (**(code **)(*param_1 + 0x24))(1);
              return 3;
            }
            iVar1 = param_1[0x10];
            iVar9 = *(int *)((int)this + 0x40);
            DAT_10057b84 = uVar10 & 3;
            uVar5 = uVar10 >> 2;
            do {
              for (; uVar6 = DAT_10057b84, uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar3 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar3 = puVar3 + 1;
              }
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar3 = (undefined4 *)((int)puVar3 + 1);
              }
              puVar4 = (undefined4 *)((int)puVar4 - (iVar9 + uVar10));
              puVar3 = (undefined4 *)((int)puVar3 - (iVar1 + uVar10));
              iVar7 = iVar7 + -1;
              uVar5 = uVar10 >> 2;
            } while (iVar7 != 0);
          }
        }
        else if (param_5 < iVar9) {
          if ((int)uVar10 < 4) {
            param_4 = (undefined4 *)(**(code **)(*param_1 + 0x14))(local_18.left + (uVar10 - 1));
            iVar8 = *(int *)this;
            iVar1 = iVar1 + -1;
          }
          else {
            param_4 = (undefined4 *)
                      (**(code **)(*param_1 + 0x14))(local_18.left + (uVar10 - 4),local_18.top);
            iVar8 = *(int *)this;
            iVar1 = iVar1 + -4;
          }
          puVar3 = (undefined4 *)(**(code **)(iVar8 + 0x14))(iVar1 + uVar10,iVar9);
          if (param_4 == (undefined4 *)0x0) {
            return 3;
          }
          if (puVar3 == (undefined4 *)0x0) {
            (**(code **)(*param_1 + 0x24))(1);
            return 3;
          }
          iVar1 = param_1[0x10];
          iVar9 = *(int *)((int)this + 0x40);
          DAT_10057b84 = uVar10 & 3;
          uVar5 = uVar10 >> 2;
          do {
            for (; uVar6 = DAT_10057b84, uVar5 != 0; uVar5 = uVar5 - 1) {
              *param_4 = *puVar3;
              puVar3 = puVar3 + -1;
              param_4 = param_4 + -1;
            }
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)param_4 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + -1);
              param_4 = (undefined4 *)((int)param_4 + -1);
            }
            puVar3 = (undefined4 *)((int)puVar3 + iVar9 + uVar10);
            param_4 = (undefined4 *)((int)param_4 + iVar1 + uVar10);
            iVar7 = iVar7 + -1;
            uVar5 = uVar10 >> 2;
          } while (iVar7 != 0);
        }
        else {
          if ((int)uVar10 < 4) {
            param_4 = (undefined4 *)(**(code **)(*param_1 + 0x14))(local_18.left + (uVar10 - 1));
            iVar8 = *(int *)this;
            iVar1 = iVar1 + -1;
          }
          else {
            param_4 = (undefined4 *)
                      (**(code **)(*param_1 + 0x14))
                                (local_18.left + (uVar10 - 4),local_18.top + -1 + iVar7);
            iVar8 = *(int *)this;
            iVar1 = iVar1 + -4;
          }
          puVar3 = (undefined4 *)(**(code **)(iVar8 + 0x14))(iVar1 + uVar10,iVar9 + -1 + iVar7);
          if (param_4 == (undefined4 *)0x0) {
            return 3;
          }
          if (puVar3 == (undefined4 *)0x0) {
            (**(code **)(*param_1 + 0x24))(1);
            return 3;
          }
          iVar1 = param_1[0x10];
          iVar9 = *(int *)((int)this + 0x40);
          DAT_10057b84 = uVar10 & 3;
          uVar5 = uVar10 >> 2;
          do {
            for (; uVar6 = DAT_10057b84, uVar5 != 0; uVar5 = uVar5 - 1) {
              *param_4 = *puVar3;
              puVar3 = puVar3 + -1;
              param_4 = param_4 + -1;
            }
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)param_4 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + -1);
              param_4 = (undefined4 *)((int)param_4 + -1);
            }
            puVar3 = (undefined4 *)((int)puVar3 - (iVar9 - uVar10));
            param_4 = (undefined4 *)((int)param_4 - (iVar1 - uVar10));
            iVar7 = iVar7 + -1;
            uVar5 = uVar10 >> 2;
          } while (iVar7 != 0);
        }
      }
      else {
        puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x14))(local_18.left,local_18.top);
        if (puVar3 == (undefined4 *)0x0) {
          return 3;
        }
        puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x14))(iVar1,iVar9);
        if (puVar4 == (undefined4 *)0x0) {
          (**(code **)(*param_1 + 0x24))(1);
          return 3;
        }
        iVar1 = param_1[0x10];
        iVar9 = *(int *)((int)this + 0x40);
        DAT_10057b84 = uVar10 & 3;
        uVar5 = uVar10 >> 2;
        do {
          for (; uVar6 = DAT_10057b84, uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          puVar4 = (undefined4 *)((int)puVar4 + (iVar9 - uVar10));
          puVar3 = (undefined4 *)((int)puVar3 + (iVar1 - uVar10));
          iVar7 = iVar7 + -1;
          uVar5 = uVar10 >> 2;
        } while (iVar7 != 0);
      }
      (**(code **)(*local_8 + 0x24))(1);
      (**(code **)(*param_1 + 0x24))(1);
    }
  }
  return 0;
}

