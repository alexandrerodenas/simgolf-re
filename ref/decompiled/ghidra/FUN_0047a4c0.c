/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047a4c0 @ 0x0047A4C0 */
/* Body size: 1589 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_0047a4c0(int *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,uint param_7
            ,int param_8,int *param_9,int *param_10)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7c72;
  *unaff_FS_OFFSET = &local_c;
  FUN_00479f30();
  if (param_10 != (int *)0x0) {
    param_1[0x60] = *param_10;
    param_1[0x61] = param_10[1];
    param_1[0x62] = param_10[2];
  }
  param_1[0x88] = param_1[0x88] | 2;
  pvVar3 = operator_new(0x2b8);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00474ae0();
  }
  param_1[0x47] = iVar4;
  local_4 = 0xffffffff;
  if (iVar4 == 0) {
    iVar4 = 4;
    goto LAB_0047aae0;
  }
  pvVar3 = operator_new(0x2b8);
  local_4 = 1;
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00474ae0();
  }
  local_4 = 0xffffffff;
  param_1[0x48] = iVar4;
  if (iVar4 == 0) {
    iVar4 = 4;
    goto LAB_0047aae0;
  }
  pvVar3 = operator_new(0x2b8);
  local_4 = 2;
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00474ae0();
  }
  local_4 = 0xffffffff;
  param_1[0x49] = iVar4;
  if (iVar4 == 0) {
    iVar4 = 4;
    goto LAB_0047aae0;
  }
  pvVar3 = operator_new(0x2b8);
  local_4 = 3;
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00474ae0();
  }
  local_4 = 0xffffffff;
  param_1[0x4a] = iVar4;
  if (iVar4 == 0) {
    iVar4 = 4;
    goto LAB_0047aae0;
  }
  if (((param_7 & 0xf0000000) != 0) && (iVar4 = (**(code **)(*param_1 + 0x11c))(), iVar4 == 0)) {
    iVar4 = 3;
    goto LAB_0047aae0;
  }
  if ((param_7 & 0x80000) != 0) {
    param_7 = param_7 | 0x20;
  }
  if (param_2 < 0) {
    if (param_8 == 0) {
      if (DAT_0083ad50 == (int *)0x0) {
        param_2 = param_2 - param_4;
      }
      else {
        iVar4 = (**(code **)(*DAT_0083ad50 + 0xa8))();
        param_2 = param_2 + (iVar4 - param_4);
      }
    }
    else {
      param_2 = param_2 + ((*(int *)(param_8 + 0x1b4) - *(int *)(param_8 + 0x1ac)) - param_4);
    }
  }
  if (param_3 < 0) {
    if (param_8 != 0) {
      param_3 = param_3 + ((*(int *)(param_8 + 0x1b8) - *(int *)(param_8 + 0x1b0)) - param_5);
      goto LAB_0047a6f5;
    }
    if (DAT_0083ad50 == (int *)0x0) {
      param_3 = param_3 - param_5;
    }
    else {
      iVar4 = (**(code **)(*DAT_0083ad50 + 0xac))();
      param_3 = param_3 + (iVar4 - param_5);
    }
LAB_0047a6f9:
    if (DAT_0083aa9c != 0) {
      param_8 = DAT_0083aa9c;
    }
  }
  else {
LAB_0047a6f5:
    if (param_8 == 0) goto LAB_0047a6f9;
  }
  param_1[0x27] = param_7;
  param_1[0x4c] = param_8;
  param_1[0x57] = (int)param_9;
  if (((param_6 != (char *)0x0) && (*param_6 != '\0')) && ((param_7 & 0x400080) == 0)) {
    param_1[0x27] = param_7 | 0x10;
  }
  if (param_8 == 0) {
    if (DAT_0083ab94 == 0x80) {
      FUN_00479f30();
      MessageBoxA((HWND)0x0,s_Too_many_parents_004e42f0,s_Increase__define_MAX_PARENTS_004e4304,0);
      FUN_004a5108(4);
    }
    FUN_0047e4c0(param_1);
  }
  else {
    FUN_0047e5f0(param_1);
  }
  uVar2 = param_1[0x27];
  if (((uVar2 & 0x80) == 0) && ((uVar2 & 0x1d) != 0)) {
    param_1[0x28] = param_1[0x28] | 2;
  }
  else {
    param_1[0x28] = param_1[0x28] & 0xfffffffd;
    param_1[0x27] = uVar2 & 0xfffffbee;
  }
  if (((param_1[0x27] & 0x800U) == 0) && ((*(byte *)(param_1 + 0x28) & 2) != 0)) {
    piVar6 = param_1 + 0x6f;
    piVar1 = param_1 + 0x6b;
    *piVar6 = param_2;
    param_1[0x70] = param_3;
    param_1[0x71] = param_2 + param_4;
    param_1[0x72] = param_3 + param_5;
    *piVar1 = *piVar6;
    param_1[0x6c] = param_1[0x70];
    param_1[0x6d] = param_1[0x71];
    param_1[0x6e] = param_1[0x72];
    FUN_0047cce0(piVar1);
    iVar4 = param_1[0x70];
    *piVar1 = *piVar1 + -*piVar6;
    iVar5 = param_1[0x6d] + -*piVar6;
LAB_0047a89d:
    param_1[0x6d] = iVar5;
    param_1[0x6c] = param_1[0x6c] + -iVar4;
    param_1[0x6e] = param_1[0x6e] + -iVar4;
  }
  else {
    piVar6 = param_1 + 0x6b;
    *piVar6 = param_2;
    param_1[0x6c] = param_3;
    param_1[0x6d] = param_2 + param_4;
    param_1[0x6e] = param_3 + param_5;
    if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
      piVar1 = param_1 + 0x6f;
      *piVar1 = *piVar6;
      param_1[0x70] = param_1[0x6c];
      param_1[0x71] = param_1[0x6d];
      param_1[0x72] = param_1[0x6e];
      FUN_0047cc10(piVar1);
      iVar4 = param_1[0x70];
      *piVar6 = *piVar6 + -*piVar1;
      iVar5 = param_1[0x6d] + -*piVar1;
      goto LAB_0047a89d;
    }
  }
  piVar6 = param_1 + 0x6b;
  param_1[0x73] = *piVar6;
  param_1[0x74] = param_1[0x6c];
  param_1[0x75] = param_1[0x6d];
  param_1[0x76] = param_1[0x6e];
  FUN_0047b8f0(param_6);
  (**(code **)(*param_1 + 0x130))();
  if ((param_9 != (int *)0x0) && (iVar4 = (**(code **)(*param_9 + 0x16c))(param_1), iVar4 != 0)) {
    FUN_00479f30();
    goto LAB_0047aae0;
  }
  uVar2 = param_1[0x27];
  if ((uVar2 & 0x10) == 0) {
    if ((uVar2 & 0x20) == 0) {
      iVar4 = param_1[0x61];
      goto LAB_0047a928;
    }
  }
  else {
    iVar4 = param_1[0x60];
LAB_0047a928:
    param_1[0x7b] = iVar4;
  }
  if ((uVar2 & 0x400) == 0) {
    param_1[0x7c] = 0;
  }
  else {
    param_1[0x7c] = param_1[0x61];
  }
  if ((uVar2 & 4) != 0) {
    if ((uVar2 & 0x40) != 0) {
      iVar4 = (**(code **)(*param_1 + 0x18))();
      param_1[0x9c] = iVar4;
    }
    if (param_1[0x9c] == 0) {
      pvVar3 = operator_new(0x13b4);
      local_4 = 4;
      if (pvVar3 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00496030();
      }
      local_4 = 0xffffffff;
      param_1[0x9c] = iVar4;
      if (iVar4 == 0) {
        iVar4 = 4;
        goto LAB_0047aae0;
      }
      iVar4 = param_1[0x6d];
      if ((*(byte *)(param_1 + 0x27) & 8) == 0) {
        iVar5 = *piVar6;
      }
      else {
        iVar4 = iVar4 - *piVar6;
        iVar5 = DAT_0083ff10;
      }
      FUN_00496740(0,param_1[0x6e] - DAT_0083ff10,iVar4 - iVar5,param_1,0xfffffffe);
      (**(code **)(*(int *)param_1[0x9c] + 4))(0);
    }
  }
  if ((param_1[0x27] & 8U) != 0) {
    if ((param_1[0x27] & 0x40U) != 0) {
      iVar4 = (**(code **)(*param_1 + 0x18))();
      param_1[0x9b] = iVar4;
    }
    if (param_1[0x9b] == 0) {
      pvVar3 = operator_new(0x13b4);
      local_4 = 5;
      if (pvVar3 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00496030();
      }
      local_4 = 0xffffffff;
      param_1[0x9b] = iVar4;
      if (iVar4 == 0) {
        iVar4 = 4;
        goto LAB_0047aae0;
      }
      iVar4 = param_1[0x6e];
      if ((*(byte *)(param_1 + 0x27) & 4) == 0) {
        iVar5 = param_1[0x6c];
      }
      else {
        iVar4 = iVar4 - param_1[0x6c];
        iVar5 = DAT_0083ff10;
      }
      FUN_00496710(param_1[0x6d] - DAT_0083ff10,0,iVar4 - iVar5,param_1,0xffffffff);
      (**(code **)(*(int *)param_1[0x9b] + 4))(0);
    }
  }
  FUN_0047d510();
  _DAT_0083ab2c = param_1;
  if ((param_1[0x27] & 0x100000U) != 0) {
    FUN_0047abe0(param_8);
  }
  param_1[0x28] = param_1[0x28] | 4;
  iVar4 = 0;
LAB_0047aae0:
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}

