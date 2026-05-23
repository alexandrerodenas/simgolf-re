/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10025900 @ 0x10025900 */
/* Body size: 983 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_10025900(void *this,int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  RECT *lprcSrc2;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  undefined4 local_80 [16];
  int local_40;
  int *local_3c;
  byte *local_38;
  byte *local_34;
  ushort *local_30;
  ushort *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar8 = local_80;
  for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0xcccccccc;
    puVar8 = puVar8 + 1;
  }
  if (*(int *)((int)this + 0x10) == 0) {
    local_3c = *(int **)(DAT_1012873c + 4);
  }
  else {
    local_3c = *(int **)((int)this + 0x10);
  }
  local_8 = this;
  if (local_3c == (int *)0x0) {
    (**(code **)(*param_2 + 0x24))(1);
    __chkesp();
  }
  else {
    DAT_1012857c = *(int *)((int)this + 0x2c);
    (**(code **)(*param_2 + 0xe0))();
    DAT_1012855c = __chkesp();
    local_34 = *(byte **)((int)local_8 + 0x14);
    (**(code **)(*param_2 + 0xe4))();
    iVar5 = __chkesp();
    local_40 = *(int *)(iVar5 + 4);
    if (local_40 == 0) {
      (**(code **)(*local_3c + 0x18))();
      DAT_1012856c = __chkesp();
    }
    else {
      if (local_40 != 1) {
        (**(code **)(*param_2 + 0x24))(1);
        __chkesp();
        goto LAB_10025cc4;
      }
      (**(code **)(*local_3c + 0x1c))();
      DAT_1012856c = __chkesp();
    }
    thunk_FUN_10008360(&local_18.left,param_4,param_5,*(int *)((int)local_8 + 0x30),
                       *(int *)((int)local_8 + 0x34));
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_2 + 0xcc))();
    lprcSrc2 = (RECT *)__chkesp();
    IntersectRect(&local_18,&local_18,lprcSrc2);
    iVar5 = __chkesp();
    if (iVar5 == 0) {
      (**(code **)(*param_2 + 0x24))(1);
      __chkesp();
    }
    else {
      local_34 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_1012857c);
      local_38 = (byte *)(*(int *)(param_1 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_1012857c);
      (**(code **)(*param_2 + 0x20))();
      iVar5 = __chkesp();
      local_2c = (ushort *)(iVar5 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
      (**(code **)(*param_3 + 0x20))();
      iVar4 = __chkesp();
      iVar5 = DAT_1012856c;
      local_30 = (ushort *)(iVar4 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
      DAT_10128578 = local_18.bottom - local_18.top;
      DAT_10128564 = local_18.right - local_18.left;
      _DAT_1012853c = DAT_1012857c - DAT_10128564;
      _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
      iVar4 = DAT_10128564;
      pbVar6 = local_38;
      pbVar7 = local_34;
      puVar9 = local_2c;
      do {
        do {
          if ((*pbVar7 != 0xff) && (*pbVar6 != 0xff)) {
            if (*pbVar6 == 0) {
              *local_30 = *(ushort *)(iVar5 + (uint)*pbVar7 * 2);
            }
            else {
              uVar2 = *(ushort *)(iVar5 + (uint)*pbVar7 * 2);
              uVar3 = *puVar9;
              bVar1 = *pbVar6;
              *local_30 = ((ushort)(((ushort)((ushort)((byte)(uVar3 >> 7) & 0xf8) * (ushort)bVar1)
                                    >> 8) + (uVar2 >> 7 & 0xf8)) >> 3) << 10 |
                          ((ushort)(((ushort)((uVar3 >> 2 & 0xf8) * (ushort)bVar1) >> 8) +
                                   (uVar2 >> 2 & 0xf8)) >> 3) << 5 |
                          (ushort)(((ushort)((uVar3 & 0x1f) * 8 * (ushort)bVar1) >> 8) +
                                  (uVar2 & 0x1f) * 8) >> 3;
            }
          }
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
          puVar9 = puVar9 + 1;
          local_30 = local_30 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pbVar7 = pbVar7 + _DAT_1012853c;
        pbVar6 = pbVar6 + _DAT_1012853c;
        puVar9 = (ushort *)((int)puVar9 + _DAT_10128560);
        local_30 = (ushort *)((int)local_30 + _DAT_10128560);
        DAT_10128578 = DAT_10128578 + -1;
        iVar4 = DAT_10128564;
      } while (DAT_10128578 != 0);
      (**(code **)(*param_2 + 0x24))(2);
      __chkesp();
    }
  }
LAB_10025cc4:
  local_18.bottom = 0x10025cd1;
  __chkesp();
  return;
}

