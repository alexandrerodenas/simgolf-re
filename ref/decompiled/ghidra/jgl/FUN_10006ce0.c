/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10006ce0 @ 0x10006CE0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_10006ce0(void *this,int *param_1,int param_2,int param_3,int param_4,undefined2 *param_5,
            int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  RECT *lprcSrc2;
  BOOL BVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  RECT local_1c;
  int *local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x4c0) == 0) {
    return 7;
  }
  if (param_1 == (int *)0x0) {
    return 0x10;
  }
  if (param_2 < 0) {
    param_6 = param_6 + param_2;
    param_4 = param_4 - param_2;
    param_2 = 0;
  }
  if (param_3 < 0) {
    param_7 = param_7 + param_3;
    param_5 = (undefined2 *)((int)param_5 - param_3);
    param_3 = 0;
  }
  local_c = this;
  iVar2 = (**(code **)(*(int *)this + 0xd8))();
  if ((param_2 <= iVar2) && (iVar2 = (**(code **)(*(int *)this + 0xdc))(), param_3 <= iVar2)) {
    iVar2 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar2 < param_2 + param_6) {
      iVar2 = (**(code **)(*(int *)this + 0xd8))();
      param_6 = iVar2 - param_2;
    }
    iVar2 = (**(code **)(*(int *)this + 0xdc))();
    if (iVar2 < param_3 + param_7) {
      iVar2 = (**(code **)(*(int *)this + 0xdc))();
      param_7 = iVar2 - param_3;
    }
    local_1c.top = (LONG)param_5;
    local_1c.left = param_4;
    local_1c.bottom = (int)param_5 + param_7;
    local_1c.right = param_4 + param_6;
    lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar3 = IntersectRect(&local_1c,&local_1c,lprcSrc2);
    if (BVar3 != 0) {
      piVar8 = *(int **)((int)this + 0x7c);
      if (piVar8 == (int *)0x0) {
        piVar8 = *(int **)(DAT_10057d9c + 4);
      }
      if (piVar8 == (int *)0x0) {
        return 0x10;
      }
      if (param_1[10] == 0) {
        DAT_10057b74 = (**(code **)(*piVar8 + 0x18))();
      }
      else {
        if (param_1[10] != 1) {
          return 1;
        }
        DAT_10057b74 = (**(code **)(*piVar8 + 0x1c))();
      }
      iVar2 = param_2 + (local_1c.left - param_4);
      iVar10 = local_1c.top + (param_3 - (int)param_5);
      iVar9 = local_1c.bottom - local_1c.top;
      local_8 = param_1[0x10];
      iVar11 = local_1c.right - local_1c.left;
      DAT_10057b70 = *(int *)((int)this + 0x40);
      if (param_1 == this) {
        if (param_4 < iVar2) {
          if ((int)param_5 < iVar10) {
            puVar4 = (undefined2 *)(**(code **)(*param_1 + 0x1c))(local_1c.left,local_1c.top);
            if (puVar4 == (undefined2 *)0x0) {
              return 3;
            }
            pbVar5 = (byte *)(**(code **)(*(int *)this + 0x14))(iVar2,iVar10);
            iVar2 = DAT_10057b74;
            if (pbVar5 == (byte *)0x0) {
              (**(code **)(*param_1 + 0x24))(1);
              return 3;
            }
            DAT_10057b70 = DAT_10057b70 - iVar11;
            iVar10 = iVar11;
            DAT_10057b64 = iVar11;
            _DAT_10057b6c = iVar9;
            do {
              do {
                bVar1 = *pbVar5;
                pbVar5 = pbVar5 + 1;
                *puVar4 = *(undefined2 *)(iVar2 + (uint)bVar1 * 2);
                puVar4 = puVar4 + 1;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              pbVar5 = pbVar5 + DAT_10057b70;
              puVar4 = puVar4 + (local_8 - iVar11);
              _DAT_10057b6c = _DAT_10057b6c + -1;
              iVar10 = DAT_10057b64;
            } while (_DAT_10057b6c != 0);
          }
          else {
            puVar4 = (undefined2 *)
                     (**(code **)(*param_1 + 0x1c))(local_1c.left,local_1c.top + iVar9 + -1);
            if (puVar4 == (undefined2 *)0x0) {
              return 3;
            }
            pbVar5 = (byte *)(**(code **)(*(int *)this + 0x14))(iVar2,iVar10 + -1 + iVar9);
            iVar2 = DAT_10057b74;
            if (pbVar5 == (byte *)0x0) {
              (**(code **)(*param_1 + 0x24))(1);
              return 3;
            }
            DAT_10057b70 = DAT_10057b70 + iVar11;
            iVar10 = iVar11;
            DAT_10057b64 = iVar11;
            _DAT_10057b6c = iVar9;
            do {
              do {
                bVar1 = *pbVar5;
                pbVar5 = pbVar5 + 1;
                *puVar4 = *(undefined2 *)(iVar2 + (uint)bVar1 * 2);
                puVar4 = puVar4 + 1;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              pbVar5 = pbVar5 + -DAT_10057b70;
              puVar4 = puVar4 + -(local_8 + iVar11);
              _DAT_10057b6c = _DAT_10057b6c + -1;
              iVar10 = DAT_10057b64;
            } while (_DAT_10057b6c != 0);
          }
        }
        else if ((int)param_5 < iVar10) {
          if (iVar11 < 4) {
            param_5 = (undefined2 *)(**(code **)(*param_1 + 0x1c))(local_1c.left + -1 + iVar11);
            iVar7 = *(int *)this;
            iVar2 = iVar2 + -1;
          }
          else {
            param_5 = (undefined2 *)
                      (**(code **)(*param_1 + 0x1c))(local_1c.left + -4 + iVar11,local_1c.top);
            iVar7 = *(int *)this;
            iVar2 = iVar2 + -4;
          }
          pbVar5 = (byte *)(**(code **)(iVar7 + 0x14))(iVar2 + iVar11,iVar10);
          iVar2 = DAT_10057b74;
          if (param_5 == (undefined2 *)0x0) {
            return 3;
          }
          if (pbVar5 == (byte *)0x0) {
            (**(code **)(*param_1 + 0x24))(1);
            return 3;
          }
          DAT_10057b70 = DAT_10057b70 + iVar11;
          iVar10 = iVar11;
          DAT_10057b64 = iVar11;
          _DAT_10057b6c = iVar9;
          do {
            do {
              bVar1 = *pbVar5;
              pbVar5 = pbVar5 + 1;
              *param_5 = *(undefined2 *)(iVar2 + (uint)bVar1 * 2);
              param_5 = param_5 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            pbVar5 = pbVar5 + DAT_10057b70;
            param_5 = param_5 + local_8 + iVar11;
            _DAT_10057b6c = _DAT_10057b6c + -1;
            iVar10 = DAT_10057b64;
          } while (_DAT_10057b6c != 0);
        }
        else {
          if (iVar11 < 4) {
            param_5 = (undefined2 *)(**(code **)(*param_1 + 0x1c))(local_1c.left + -1 + iVar11);
            iVar7 = *(int *)this;
            iVar2 = iVar2 + -1;
          }
          else {
            param_5 = (undefined2 *)
                      (**(code **)(*param_1 + 0x1c))
                                (local_1c.left + -4 + iVar11,local_1c.top + iVar9 + -1);
            iVar7 = *(int *)this;
            iVar2 = iVar2 + -4;
          }
          puVar6 = (undefined1 *)(**(code **)(iVar7 + 0x14))(iVar2 + iVar11,iVar10 + -1 + iVar9);
          iVar2 = DAT_10057b74;
          if (param_5 == (undefined2 *)0x0) {
            return 3;
          }
          if (puVar6 == (undefined1 *)0x0) {
            (**(code **)(*param_1 + 0x24))(1);
            return 3;
          }
          local_8 = param_1[0x10];
          DAT_10057b70 = *(int *)((int)this + 0x40) - iVar11;
          iVar7 = 0;
          iVar10 = iVar11;
          DAT_10057b64 = iVar11;
          _DAT_10057b6c = iVar9;
          do {
            do {
              iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),*puVar6);
              puVar6 = puVar6 + 1;
              *param_5 = *(undefined2 *)(iVar2 + iVar7 * 2);
              param_5 = param_5 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            puVar6 = puVar6 + -DAT_10057b70;
            param_5 = (undefined2 *)((int)param_5 - (local_8 - iVar11));
            iVar7 = iVar7 + -1;
            iVar10 = DAT_10057b64;
          } while (iVar7 != 0);
        }
      }
      else {
        puVar4 = (undefined2 *)(**(code **)(*param_1 + 0x1c))(local_1c.left,local_1c.top);
        if (puVar4 == (undefined2 *)0x0) {
          return 3;
        }
        pbVar5 = (byte *)(**(code **)(*(int *)this + 0x14))(iVar2,iVar10);
        iVar2 = DAT_10057b74;
        if (pbVar5 == (byte *)0x0) {
          (**(code **)(*param_1 + 0x24))(1);
          return 3;
        }
        DAT_10057b70 = DAT_10057b70 - iVar11;
        iVar10 = iVar11;
        DAT_10057b64 = iVar11;
        _DAT_10057b6c = iVar9;
        do {
          do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            *puVar4 = *(undefined2 *)(iVar2 + (uint)bVar1 * 2);
            puVar4 = puVar4 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          pbVar5 = pbVar5 + DAT_10057b70;
          puVar4 = puVar4 + (local_8 - iVar11);
          _DAT_10057b6c = _DAT_10057b6c + -1;
          iVar10 = DAT_10057b64;
        } while (_DAT_10057b6c != 0);
      }
      (**(code **)(*local_c + 0x24))(1);
      (**(code **)(*param_1 + 0x24))(1);
    }
  }
  return 0;
}

