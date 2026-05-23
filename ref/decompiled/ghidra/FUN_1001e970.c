/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1001e970 @ 0x1001E970 */
/* Body size: 1911 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_1001e970(void *this,int *param_1,int param_2,int param_3,int *param_4,byte param_5)

{
  byte bVar1;
  int iVar2;
  RECT *lprcSrc2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 local_84 [16];
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  byte *local_34;
  byte *local_30;
  undefined2 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar6 = local_84;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_1001f0d1;
  local_8 = this;
  (**(code **)(*param_1 + 0x10))();
  iVar3 = __chkesp();
  if (iVar3 == 0) goto LAB_1001f0d1;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 0x10))();
    iVar3 = __chkesp();
    if (iVar3 != 0) {
      if (*(int *)((int)local_8 + 0x10) == 0) {
        local_38 = *(int **)(DAT_1012873c + 4);
      }
      else {
        local_38 = *(int **)((int)local_8 + 0x10);
      }
      if (local_38 == (int *)0x0) {
        (**(code **)(*param_4 + 0x24))(2);
        __chkesp();
        (**(code **)(*param_1 + 0x24))(1);
        __chkesp();
        goto LAB_1001f0d1;
      }
      local_3c = FUN_1007f370(DAT_10122dc0);
      _DAT_1012858c = (float)local_3c / (float)DAT_10122dc8;
      local_40 = FUN_1007f370(DAT_10122dc4);
      _DAT_10128590 = (float)local_40 / (float)DAT_10122dc8;
      DAT_1012857c = *(int *)((int)local_8 + 0x2c);
      (**(code **)(*param_1 + 0xe0))();
      DAT_1012855c = __chkesp();
      (**(code **)(*param_4 + 0xe0))();
      DAT_10128538 = __chkesp();
      local_30 = *(byte **)((int)local_8 + 0x14);
      DAT_10128568 = param_5;
      (**(code **)(*param_1 + 0xe4))();
      iVar3 = __chkesp();
      local_44 = *(int *)(iVar3 + 4);
      if (local_44 == 0) {
        (**(code **)(*local_38 + 0x18))();
        DAT_1012856c = __chkesp();
      }
      else {
        if (local_44 != 1) goto LAB_1001f0d1;
        (**(code **)(*local_38 + 0x1c))();
        DAT_1012856c = __chkesp();
      }
      iVar3 = FUN_1007f370(DAT_10122dc0);
      iVar2 = FUN_1007f370(DAT_10122dc8);
      if (iVar3 == iVar2) {
        iVar3 = FUN_1007f370(DAT_10122dc4);
        iVar2 = FUN_1007f370(DAT_10122dc8);
        if (iVar3 != iVar2) goto LAB_1001f077;
        thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)((int)local_8 + 0x30),
                           *(int *)((int)local_8 + 0x34));
        local_28 = local_18.left;
        local_24 = local_18.top;
        local_20 = local_18.right;
        local_1c = local_18.bottom;
        (**(code **)(*param_1 + 0xcc))();
        lprcSrc2 = (RECT *)__chkesp();
        IntersectRect(&local_18,&local_18,lprcSrc2);
        iVar3 = __chkesp();
        if (iVar3 == 0) {
          (**(code **)(*param_4 + 0x24))(2);
          __chkesp();
          (**(code **)(*param_1 + 0x24))(1);
          __chkesp();
          goto LAB_1001f0d1;
        }
        if (DAT_10122dc0 < 0) {
          if (DAT_10122dc4 < 0) {
            local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                               (local_18.top - local_24) * DAT_1012857c);
            (**(code **)(*param_1 + 0x20))();
            iVar2 = __chkesp();
            iVar3 = DAT_1012856c;
            bVar1 = DAT_10128568;
            local_2c = (undefined2 *)(iVar2 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
            DAT_10128578 = local_18.bottom - local_18.top;
            DAT_10128564 = local_18.right - local_18.left;
            _DAT_1012853c = DAT_1012857c - DAT_10128564;
            _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
            _DAT_10128534 = DAT_1012855c - DAT_10128564;
            pbVar4 = local_34;
            iVar2 = DAT_10128564;
            pbVar5 = local_30;
            puVar7 = local_2c;
            do {
              do {
                if ((*pbVar5 < 0xfe) && (bVar1 <= *pbVar4)) {
                  *puVar7 = *(undefined2 *)(iVar3 + (uint)*pbVar5 * 2);
                }
                pbVar5 = pbVar5 + -1;
                puVar7 = puVar7 + 1;
                pbVar4 = pbVar4 + 2;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              pbVar5 = pbVar5 + -_DAT_1012853c;
              puVar7 = (undefined2 *)((int)puVar7 + _DAT_10128560);
              pbVar4 = pbVar4 + _DAT_10128534;
              DAT_10128578 = DAT_10128578 + -1;
              iVar2 = DAT_10128564;
            } while (DAT_10128578 != 0);
          }
          else {
            local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                               (local_18.top - local_24) * DAT_1012857c);
            (**(code **)(*param_1 + 0x20))();
            iVar2 = __chkesp();
            iVar3 = DAT_1012856c;
            bVar1 = DAT_10128568;
            local_2c = (undefined2 *)(iVar2 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
            DAT_10128578 = local_18.bottom - local_18.top;
            DAT_10128564 = local_18.right - local_18.left;
            _DAT_1012853c = DAT_1012857c + DAT_10128564;
            _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
            _DAT_10128534 = DAT_10128538 - DAT_10128564;
            pbVar4 = local_34;
            iVar2 = DAT_10128564;
            pbVar5 = local_30;
            puVar7 = local_2c;
            do {
              do {
                if ((*pbVar5 < 0xfe) && (bVar1 <= *pbVar4)) {
                  *puVar7 = *(undefined2 *)(iVar3 + (uint)*pbVar5 * 2);
                }
                pbVar5 = pbVar5 + -1;
                puVar7 = puVar7 + 1;
                pbVar4 = pbVar4 + 2;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              pbVar5 = pbVar5 + _DAT_1012853c;
              puVar7 = (undefined2 *)((int)puVar7 + _DAT_10128560);
              pbVar4 = pbVar4 + _DAT_10128534;
              DAT_10128578 = DAT_10128578 + -1;
              iVar2 = DAT_10128564;
            } while (DAT_10128578 != 0);
          }
        }
        else if (DAT_10122dc4 < 0) {
          local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                             (local_18.top - local_24) * DAT_1012857c);
          (**(code **)(*param_1 + 0x20))();
          iVar2 = __chkesp();
          iVar3 = DAT_1012856c;
          bVar1 = DAT_10128568;
          local_2c = (undefined2 *)(iVar2 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
          DAT_10128578 = local_18.bottom - local_18.top;
          DAT_10128564 = local_18.right - local_18.left;
          _DAT_1012853c = DAT_1012857c + DAT_10128564;
          _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
          _DAT_10128534 = DAT_10128538 - DAT_10128564;
          pbVar4 = local_34;
          iVar2 = DAT_10128564;
          pbVar5 = local_30;
          puVar7 = local_2c;
          do {
            do {
              if ((*pbVar5 < 0xfe) && (bVar1 <= *pbVar4)) {
                *puVar7 = *(undefined2 *)(iVar3 + (uint)*pbVar5 * 2);
              }
              pbVar5 = pbVar5 + 1;
              puVar7 = puVar7 + 1;
              pbVar4 = pbVar4 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            pbVar5 = pbVar5 + -_DAT_1012853c;
            puVar7 = (undefined2 *)((int)puVar7 + _DAT_10128560);
            pbVar4 = pbVar4 + _DAT_10128534;
            DAT_10128578 = DAT_10128578 + -1;
            iVar2 = DAT_10128564;
          } while (DAT_10128578 != 0);
        }
        else {
          local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                             (local_18.top - local_24) * DAT_1012857c);
          (**(code **)(*param_1 + 0x20))();
          iVar3 = __chkesp();
          local_2c = (undefined2 *)(iVar3 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
          (**(code **)(*param_4 + 0x18))();
          iVar2 = __chkesp();
          iVar3 = DAT_1012856c;
          bVar1 = DAT_10128568;
          local_34 = (byte *)(iVar2 + local_18.left + local_18.top * DAT_10128538);
          DAT_10128578 = local_18.bottom - local_18.top;
          DAT_10128564 = local_18.right - local_18.left;
          _DAT_1012853c = DAT_1012857c - DAT_10128564;
          _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
          _DAT_10128534 = DAT_10128538 - DAT_10128564;
          pbVar4 = local_34;
          iVar2 = DAT_10128564;
          pbVar5 = local_30;
          puVar7 = local_2c;
          do {
            do {
              if ((*pbVar5 < 0xfe) && (bVar1 <= *pbVar4)) {
                *puVar7 = *(undefined2 *)(iVar3 + (uint)*pbVar5 * 2);
              }
              pbVar5 = pbVar5 + 1;
              puVar7 = puVar7 + 1;
              pbVar4 = pbVar4 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            pbVar5 = pbVar5 + _DAT_1012853c;
            puVar7 = (undefined2 *)((int)puVar7 + _DAT_10128560);
            pbVar4 = pbVar4 + _DAT_10128534;
            DAT_10128578 = DAT_10128578 + -1;
            iVar2 = DAT_10128564;
          } while (DAT_10128578 != 0);
        }
      }
      else {
LAB_1001f077:
        (**(code **)(*param_4 + 0x24))(2);
        __chkesp();
        (**(code **)(*param_1 + 0x24))(2);
        __chkesp();
      }
      (**(code **)(*param_1 + 0x24))(2);
      __chkesp();
      (**(code **)(*param_4 + 0x24))(2);
      __chkesp();
      goto LAB_1001f0d1;
    }
  }
  (**(code **)(*param_1 + 0x24))(1);
  __chkesp();
LAB_1001f0d1:
  local_8 = (void *)0x1001f0e1;
  __chkesp();
  return;
}

