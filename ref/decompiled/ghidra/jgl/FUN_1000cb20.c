/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1000cb20 @ 0x1000CB20 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_1000cb20(void *this,int *param_1,byte *param_2,int param_3,int *param_4,byte param_5)

{
  byte bVar1;
  int iVar2;
  RECT *lprcSrc2;
  BOOL BVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  RECT local_1c;
  int local_c;
  int *local_8;
  
  if (((*(int *)((int)this + 0x14) != 0) && (param_1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x10))(), iVar2 != 0)) {
    if ((param_4 != (int *)0x0) && (iVar2 = (**(code **)(*param_4 + 0x10))(), iVar2 != 0)) {
      local_8 = *(int **)((int)this + 0x10);
      if (local_8 == (int *)0x0) {
        local_8 = *(int **)(DAT_10057d9c + 4);
      }
      if (local_8 != (int *)0x0) {
        _DAT_10057c44 =
             (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f))
             / (float)(int)DAT_10055104;
        local_c = (DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f);
        _DAT_10057c48 = (float)local_c / (float)(int)DAT_10055104;
        DAT_10057c34 = *(int *)((int)this + 0x2c);
        DAT_10057c14 = (**(code **)(*param_1 + 0xe0))();
        DAT_10057bf0 = (**(code **)(*param_4 + 0xe0))();
        DAT_10057c20 = param_5;
        iVar2 = (**(code **)(*param_1 + 0xe4))();
        if (*(int *)(iVar2 + 4) == 0) {
          DAT_10057c24 = (**(code **)(*local_8 + 0x18))();
        }
        else {
          if (*(int *)(iVar2 + 4) != 1) {
            return 1;
          }
          DAT_10057c24 = (**(code **)(*local_8 + 0x1c))();
        }
        iVar2 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
        if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar2) &&
           ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar2)) {
          local_1c.right = (LONG)(param_2 + *(int *)((int)this + 0x30));
          local_1c.bottom = *(int *)((int)this + 0x34) + param_3;
          local_1c.left = (LONG)param_2;
          local_1c.top = param_3;
          lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
          BVar3 = IntersectRect(&local_1c,&local_1c,lprcSrc2);
          if (BVar3 == 0) {
            (**(code **)(*param_4 + 0x24))(2);
            (**(code **)(*param_1 + 0x24))(1);
            return 0;
          }
          if ((int)DAT_100550fc < 0) {
            if ((int)DAT_10055100 < 0) {
              pbVar4 = (byte *)(local_1c.left +
                               *(int *)((int)this + 0x14) +
                               ((local_1c.top - param_3) * DAT_10057c34 - (int)param_2));
              iVar5 = (**(code **)(*param_1 + 0x20))();
              iVar2 = DAT_10057c24;
              bVar1 = DAT_10057c20;
              puVar7 = (undefined2 *)
                       (iVar5 + (int)(local_1c.left + DAT_10057c14 * local_1c.top) * 2);
              DAT_10057c30 = local_1c.bottom - local_1c.top;
              DAT_10057c1c = local_1c.right - local_1c.left;
              _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
              _DAT_10057bec = DAT_10057c14 - DAT_10057c1c;
              _DAT_10057c18 = _DAT_10057bec * 2;
              iVar5 = DAT_10057c1c;
              do {
                do {
                  if ((*pbVar4 < 0xfe) && (bVar1 <= *param_2)) {
                    *puVar7 = *(undefined2 *)(iVar2 + (uint)*pbVar4 * 2);
                  }
                  pbVar4 = pbVar4 + -1;
                  puVar7 = puVar7 + 1;
                  param_2 = param_2 + 2;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
                pbVar4 = pbVar4 + -_DAT_10057bf4;
                puVar7 = (undefined2 *)((int)puVar7 + _DAT_10057c18);
                param_2 = param_2 + _DAT_10057bec;
                DAT_10057c30 = DAT_10057c30 + -1;
                iVar5 = DAT_10057c1c;
              } while (DAT_10057c30 != 0);
            }
            else {
              pbVar4 = (byte *)(local_1c.left +
                               *(int *)((int)this + 0x14) +
                               ((local_1c.top - param_3) * DAT_10057c34 - (int)param_2));
              iVar5 = (**(code **)(*param_1 + 0x20))();
              iVar2 = DAT_10057c24;
              bVar1 = DAT_10057c20;
              puVar7 = (undefined2 *)
                       (iVar5 + (int)(local_1c.left + DAT_10057c14 * local_1c.top) * 2);
              DAT_10057c30 = local_1c.bottom - local_1c.top;
              DAT_10057c1c = local_1c.right - local_1c.left;
              _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
              _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
              _DAT_10057bec = DAT_10057bf0 - DAT_10057c1c;
              iVar5 = DAT_10057c1c;
              do {
                do {
                  if ((*pbVar4 < 0xfe) && (bVar1 <= *param_2)) {
                    *puVar7 = *(undefined2 *)(iVar2 + (uint)*pbVar4 * 2);
                  }
                  pbVar4 = pbVar4 + -1;
                  puVar7 = puVar7 + 1;
                  param_2 = param_2 + 2;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
                pbVar4 = pbVar4 + _DAT_10057bf4;
                puVar7 = (undefined2 *)((int)puVar7 + _DAT_10057c18);
                param_2 = param_2 + _DAT_10057bec;
                DAT_10057c30 = DAT_10057c30 + -1;
                iVar5 = DAT_10057c1c;
              } while (DAT_10057c30 != 0);
            }
          }
          else if ((int)DAT_10055100 < 0) {
            pbVar4 = (byte *)(local_1c.left +
                             *(int *)((int)this + 0x14) +
                             ((local_1c.top - param_3) * DAT_10057c34 - (int)param_2));
            iVar5 = (**(code **)(*param_1 + 0x20))();
            iVar2 = DAT_10057c24;
            bVar1 = DAT_10057c20;
            puVar7 = (undefined2 *)(iVar5 + (int)(local_1c.left + DAT_10057c14 * local_1c.top) * 2);
            DAT_10057c30 = local_1c.bottom - local_1c.top;
            DAT_10057c1c = local_1c.right - local_1c.left;
            _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
            _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
            _DAT_10057bec = DAT_10057bf0 - DAT_10057c1c;
            iVar5 = DAT_10057c1c;
            do {
              do {
                if ((*pbVar4 < 0xfe) && (bVar1 <= *param_2)) {
                  *puVar7 = *(undefined2 *)(iVar2 + (uint)*pbVar4 * 2);
                }
                pbVar4 = pbVar4 + 1;
                puVar7 = puVar7 + 1;
                param_2 = param_2 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              pbVar4 = pbVar4 + -_DAT_10057bf4;
              puVar7 = (undefined2 *)((int)puVar7 + _DAT_10057c18);
              param_2 = param_2 + _DAT_10057bec;
              DAT_10057c30 = DAT_10057c30 + -1;
              iVar5 = DAT_10057c1c;
            } while (DAT_10057c30 != 0);
          }
          else {
            pbVar4 = (byte *)(local_1c.left +
                             *(int *)((int)this + 0x14) +
                             ((local_1c.top - param_3) * DAT_10057c34 - (int)param_2));
            iVar2 = (**(code **)(*param_1 + 0x20))();
            puVar7 = (undefined2 *)(iVar2 + (int)(local_1c.left + DAT_10057c14 * local_1c.top) * 2);
            iVar5 = (**(code **)(*param_4 + 0x18))();
            iVar2 = DAT_10057c24;
            bVar1 = DAT_10057c20;
            DAT_10057c30 = local_1c.bottom - local_1c.top;
            DAT_10057c1c = local_1c.right - local_1c.left;
            _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
            pbVar6 = (byte *)(local_1c.left + DAT_10057bf0 * local_1c.top + iVar5);
            _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
            _DAT_10057bec = DAT_10057bf0 - DAT_10057c1c;
            iVar5 = DAT_10057c1c;
            do {
              do {
                if ((*pbVar4 < 0xfe) && (bVar1 <= *pbVar6)) {
                  *puVar7 = *(undefined2 *)(iVar2 + (uint)*pbVar4 * 2);
                }
                pbVar4 = pbVar4 + 1;
                puVar7 = puVar7 + 1;
                pbVar6 = pbVar6 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              pbVar4 = pbVar4 + _DAT_10057bf4;
              puVar7 = (undefined2 *)((int)puVar7 + _DAT_10057c18);
              pbVar6 = pbVar6 + _DAT_10057bec;
              DAT_10057c30 = DAT_10057c30 + -1;
              iVar5 = DAT_10057c1c;
            } while (DAT_10057c30 != 0);
          }
        }
        else {
          (**(code **)(*param_4 + 0x24))(2);
          (**(code **)(*param_1 + 0x24))(2);
        }
        (**(code **)(*param_1 + 0x24))(2);
        (**(code **)(*param_4 + 0x24))(2);
        return 0;
      }
      (**(code **)(*param_4 + 0x24))(2);
      (**(code **)(*param_1 + 0x24))(1);
      return 0x10;
    }
    (**(code **)(*param_1 + 0x24))(1);
  }
  return 3;
}

