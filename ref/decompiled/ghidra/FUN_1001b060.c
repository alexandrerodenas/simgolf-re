/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1001b060 @ 0x1001B060 */
/* Body size: 1055 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_1001b060(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  RECT *pRVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined4 local_78 [16];
  int local_38;
  int local_34;
  char *local_30;
  undefined2 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar6 = local_78;
  for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_1001b46c;
  local_8 = this;
  (**(code **)(*param_1 + 0x10))();
  iVar3 = __chkesp();
  if (iVar3 == 0) goto LAB_1001b46c;
  local_34 = FUN_1007f370(DAT_10122dc0);
  _DAT_10128518 = (float)local_34 / (float)DAT_10122dc8;
  local_38 = FUN_1007f370(DAT_10122dc4);
  _DAT_1012851c = (float)local_38 / (float)DAT_10122dc8;
  *(undefined4 *)((int)local_8 + 0x28) = 0xff;
  DAT_1012850c = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_101284ec = __chkesp();
  local_30 = *(char **)((int)local_8 + 0x14);
  DAT_101284fc = param_4;
  iVar3 = FUN_1007f370(DAT_10122dc0);
  iVar1 = FUN_1007f370(DAT_10122dc8);
  if (iVar3 == iVar1) {
    iVar3 = FUN_1007f370(DAT_10122dc4);
    iVar1 = FUN_1007f370(DAT_10122dc8);
    if (iVar3 != iVar1) goto LAB_1001b305;
    thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)((int)local_8 + 0x30),
                       *(int *)((int)local_8 + 0x34));
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar2 = (RECT *)__chkesp();
    IntersectRect(&local_18,&local_18,pRVar2);
    iVar3 = __chkesp();
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1001b46c;
    }
    if ((-1 < DAT_10122dc0) && (-1 < DAT_10122dc4)) {
      local_30 = (char *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) * 2 +
                         (local_18.top - local_24) * DAT_1012850c * 2);
      (**(code **)(*param_1 + 0x20))();
      iVar1 = __chkesp();
      iVar3 = DAT_101284fc;
      local_2c = (undefined2 *)(iVar1 + local_18.left * 2 + local_18.top * DAT_101284ec * 2);
      _DAT_10128508 = local_18.bottom - local_18.top;
      DAT_101284f4 = local_18.right - local_18.left;
      iVar4 = (DAT_1012850c - DAT_101284f4) * 2;
      DAT_101284f0 = (DAT_101284ec - DAT_101284f4) * 2;
      iVar1 = DAT_101284f4;
      pcVar5 = local_30;
      puVar7 = local_2c;
      DAT_101284d8 = iVar4;
      do {
        do {
          if (*pcVar5 != -1) {
            *puVar7 = *(undefined2 *)(CONCAT22(*(undefined2 *)pcVar5,*puVar7) + iVar3);
          }
          pcVar5 = pcVar5 + 2;
          puVar7 = puVar7 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        pcVar5 = pcVar5 + iVar4;
        puVar7 = (undefined2 *)((int)puVar7 + DAT_101284f0);
        _DAT_10128508 = _DAT_10128508 + -1;
        iVar1 = DAT_101284f4;
      } while (_DAT_10128508 != 0);
    }
  }
  else {
LAB_1001b305:
    lVar8 = __ftol();
    iVar3 = (int)lVar8;
    lVar8 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2,param_3,(int)lVar8,iVar3);
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar2 = (RECT *)__chkesp();
    iVar3 = thunk_FUN_10008590(&local_18,&local_18,pRVar2);
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1001b46c;
    }
    (**(code **)(*param_1 + 0x20))();
    iVar3 = __chkesp();
    local_2c = (undefined2 *)(iVar3 + local_18.left * 2 + local_18.top * DAT_101284ec * 2);
    (**(code **)(*param_1 + 0xe0))();
    DAT_101284ec = __chkesp();
    DAT_101284f4 = local_18.right - local_18.left;
    _DAT_10128508 = local_18.bottom - local_18.top;
    DAT_101284f0 = DAT_101284ec - DAT_101284f4;
    iVar3 = DAT_10122dc8 << 0x10;
    _DAT_10128514 = FUN_1007f370(DAT_10122dc0);
    _DAT_10128514 = iVar3 / _DAT_10128514;
    iVar3 = DAT_10122dc8 << 0x10;
    _DAT_101284dc = FUN_1007f370(DAT_10122dc4);
    _DAT_101284dc = iVar3 / _DAT_101284dc;
  }
  (**(code **)(*param_1 + 0x24))(1);
  __chkesp();
LAB_1001b46c:
  local_8 = (void *)0x1001b479;
  __chkesp();
  return;
}

