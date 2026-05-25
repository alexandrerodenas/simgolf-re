/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1001ab40 @ 0x1001AB40 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_1001ab40(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  RECT *pRVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  longlong lVar9;
  undefined4 local_78 [16];
  int local_38;
  int local_34;
  ushort *local_30;
  ushort *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar7 = local_78;
  for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0xcccccccc;
    puVar7 = puVar7 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_1001af43;
  local_8 = this;
  local_34 = FUN_1007f370(DAT_10122dc0);
  _DAT_10128518 = (float)local_34 / (float)DAT_10122dc8;
  local_38 = FUN_1007f370(DAT_10122dc4);
  _DAT_1012851c = (float)local_38 / (float)DAT_10122dc8;
  DAT_101284f8 = (ushort)*(byte *)((int)local_8 + 0x28);
  DAT_1012850c = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_101284ec = __chkesp();
  local_30 = *(ushort **)((int)local_8 + 0x14);
  DAT_101284fc = param_4;
  iVar4 = FUN_1007f370(DAT_10122dc0);
  iVar2 = FUN_1007f370(DAT_10122dc8);
  if (iVar4 == iVar2) {
    iVar4 = FUN_1007f370(DAT_10122dc4);
    iVar2 = FUN_1007f370(DAT_10122dc8);
    if (iVar4 != iVar2) goto LAB_1001addc;
    thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)((int)local_8 + 0x30),
                       *(int *)((int)local_8 + 0x34));
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar3 = (RECT *)__chkesp();
    IntersectRect(&local_18,&local_18,pRVar3);
    iVar4 = __chkesp();
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1001af43;
    }
    if ((-1 < DAT_10122dc0) && (-1 < DAT_10122dc4)) {
      local_30 = (ushort *)
                 (*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) * 2 +
                 (local_18.top - local_24) * DAT_1012850c * 2);
      (**(code **)(*param_1 + 0x20))();
      iVar2 = __chkesp();
      iVar4 = DAT_101284fc;
      local_2c = (ushort *)(iVar2 + local_18.left * 2 + local_18.top * DAT_101284ec * 2);
      _DAT_10128508 = local_18.bottom - local_18.top;
      DAT_101284f4 = local_18.right - local_18.left;
      iVar5 = DAT_1012850c - DAT_101284f4;
      DAT_101284d8 = iVar5 * 2;
      DAT_101284f0 = (DAT_101284ec - DAT_101284f4) * 2;
      cVar1 = (char)DAT_101284f8;
      iVar2 = DAT_101284f4;
      puVar6 = local_30;
      puVar8 = local_2c;
      do {
        do {
          if ((char)*puVar6 != cVar1) {
            if ((char)*puVar6 == '\0') {
              *puVar8 = *(ushort *)(iVar4 + (uint)*puVar8 * 2);
            }
            else {
              *puVar8 = *puVar6;
            }
          }
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        puVar6 = puVar6 + iVar5;
        puVar8 = (ushort *)((int)puVar8 + DAT_101284f0);
        _DAT_10128508 = _DAT_10128508 + -1;
        iVar2 = DAT_101284f4;
      } while (_DAT_10128508 != 0);
    }
  }
  else {
LAB_1001addc:
    lVar9 = __ftol();
    iVar4 = (int)lVar9;
    lVar9 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2,param_3,(int)lVar9,iVar4);
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar3 = (RECT *)__chkesp();
    iVar4 = thunk_FUN_10008590(&local_18,&local_18,pRVar3);
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1001af43;
    }
    (**(code **)(*param_1 + 0x20))();
    iVar4 = __chkesp();
    local_2c = (ushort *)(iVar4 + local_18.left * 2 + local_18.top * DAT_101284ec * 2);
    (**(code **)(*param_1 + 0xe0))();
    DAT_101284ec = __chkesp();
    DAT_101284f4 = local_18.right - local_18.left;
    _DAT_10128508 = local_18.bottom - local_18.top;
    DAT_101284f0 = DAT_101284ec - DAT_101284f4;
    iVar4 = DAT_10122dc8 << 0x10;
    _DAT_10128514 = FUN_1007f370(DAT_10122dc0);
    _DAT_10128514 = iVar4 / _DAT_10128514;
    iVar4 = DAT_10122dc8 << 0x10;
    _DAT_101284dc = FUN_1007f370(DAT_10122dc4);
    _DAT_101284dc = iVar4 / _DAT_101284dc;
  }
  (**(code **)(*param_1 + 0x24))(1);
  __chkesp();
LAB_1001af43:
  local_8 = (void *)0x1001af50;
  __chkesp();
  return;
}

