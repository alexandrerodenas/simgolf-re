/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1001a6b0 @ 0x1001A6B0 */
/* Body size: 923 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_1001a6b0(void *this,int *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  RECT *lprcSrc2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 local_80 [16];
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  short *local_30;
  short *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar6 = local_80;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  if ((*(int *)((int)this + 0x14) != 0) && (param_1 != (int *)0x0)) {
    local_8 = this;
    if ((*(uint *)((int)this + 0x28) & 0x80000000) == 0) {
      local_34 = (int *)0x0;
      (**(code **)(*param_1 + 0xe8))();
      iVar3 = __chkesp();
      if (iVar3 == 0) {
        if (DAT_1012873c != 0) {
          local_34 = *(int **)(DAT_1012873c + 4);
        }
      }
      else {
        (**(code **)(*param_1 + 0xe8))();
        local_34 = (int *)__chkesp();
      }
      if (local_34 != (int *)0x0) {
        (**(code **)(*param_1 + 0xe4))();
        iVar3 = __chkesp();
        local_38 = *(int *)(iVar3 + 4);
        if (local_38 == 0) {
          (**(code **)(*local_34 + 0x18))();
          iVar3 = __chkesp();
          *(uint *)((int)local_8 + 0x28) =
               (uint)*(ushort *)(iVar3 + (uint)*(byte *)((int)local_8 + 0x28) * 2);
        }
        else {
          if (local_38 != 1) goto LAB_1001aa38;
          (**(code **)(*local_34 + 0x1c))();
          iVar3 = __chkesp();
          *(uint *)((int)local_8 + 0x28) =
               (uint)*(ushort *)(iVar3 + (uint)*(byte *)((int)local_8 + 0x28) * 2);
        }
      }
    }
    local_3c = FUN_1007f370(DAT_10122dc0);
    _DAT_10128518 = (float)local_3c / (float)DAT_10122dc8;
    local_40 = FUN_1007f370(DAT_10122dc4);
    _DAT_1012851c = (float)local_40 / (float)DAT_10122dc8;
    DAT_101284f8 = *(short *)((int)local_8 + 0x28);
    DAT_1012850c = *(int *)((int)local_8 + 0x2c);
    (**(code **)(*param_1 + 0xe0))();
    DAT_101284ec = __chkesp();
    local_30 = *(short **)((int)local_8 + 0x14);
    iVar3 = FUN_1007f370(DAT_10122dc0);
    iVar2 = FUN_1007f370(DAT_10122dc8);
    if (iVar3 == iVar2) {
      iVar3 = FUN_1007f370(DAT_10122dc4);
      iVar2 = FUN_1007f370(DAT_10122dc8);
      if (iVar3 == iVar2) {
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
          (**(code **)(*param_1 + 0x24))(1);
          __chkesp();
          goto LAB_1001aa38;
        }
        if ((-1 < DAT_10122dc0) && (-1 < DAT_10122dc4)) {
          local_30 = (short *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) * 2 +
                              (local_18.top - local_24) * DAT_1012850c * 2);
          (**(code **)(*param_1 + 0x20))();
          iVar3 = __chkesp();
          sVar1 = DAT_101284f8;
          local_2c = (short *)(iVar3 + local_18.left * 2 + local_18.top * DAT_101284ec * 2);
          _DAT_10128508 = local_18.bottom - local_18.top;
          DAT_101284f4 = local_18.right - local_18.left;
          iVar2 = DAT_1012850c - DAT_101284f4;
          DAT_101284d8 = iVar2 * 2;
          iVar4 = DAT_101284ec - DAT_101284f4;
          DAT_101284f0 = iVar4 * 2;
          iVar3 = DAT_101284f4;
          psVar5 = local_30;
          psVar7 = local_2c;
          do {
            do {
              if (*psVar5 != sVar1) {
                *psVar7 = *psVar5;
              }
              psVar5 = psVar5 + 1;
              psVar7 = psVar7 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            psVar5 = psVar5 + iVar2;
            psVar7 = psVar7 + iVar4;
            _DAT_10128508 = _DAT_10128508 + -1;
            iVar3 = DAT_101284f4;
          } while (_DAT_10128508 != 0);
        }
      }
    }
    (**(code **)(*param_1 + 0x24))(1);
    __chkesp();
  }
LAB_1001aa38:
  local_8 = (void *)0x1001aa45;
  __chkesp();
  return;
}

