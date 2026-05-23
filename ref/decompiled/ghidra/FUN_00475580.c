/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475580 @ 0x00475580 */
/* Body size: 693 addresses */


undefined4 __thiscall FUN_00475580(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iStack_54;
  int local_4c;
  uint uStack_44;
  undefined2 uStack_3c;
  int iStack_3a;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined4 uStack_32;
  int local_2c [3];
  undefined2 local_20;
  ushort local_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  int iStack_18;
  
  iVar7 = 0;
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  }
  piVar9 = local_2c;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_2c[0] = 0x28;
  if (param_3 == (int *)0x0) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      local_2c[1] = 0;
    }
    else {
      local_2c[1] = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
    }
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      local_2c[2] = 0;
    }
    else {
      local_2c[2] = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
    }
  }
  else {
    local_2c[1] = param_3[2] - *param_3;
    local_2c[2] = param_3[3] - param_3[1];
  }
  local_20 = 1;
  local_1e = 0x18;
  local_1c = 0;
  uStack_1a = 0;
  iVar6 = FUN_004a614d(param_2,&DAT_004c7828);
  if (iVar6 != 0) {
    if (iStack_18 == 0) {
      iVar3 = (uint)local_1e * local_2c[1] + 7;
      uStack_44 = ((local_2c[2] ^ local_2c[2] >> 0x1f) - (local_2c[2] >> 0x1f)) *
                  ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3);
    }
    pvVar4 = operator_new(uStack_44);
    uVar8 = local_2c[2] >> 0x1f;
    if (param_3 == (int *)0x0) {
      param_2 = 0;
      iStack_54 = local_2c[1];
      iVar3 = (local_2c[2] ^ uVar8) - uVar8;
    }
    else {
      iVar7 = *param_3;
      param_2 = param_3[1];
      iStack_54 = iVar7 + local_2c[1];
      iVar3 = ((local_2c[2] ^ uVar8) - uVar8) + param_2;
    }
    iVar10 = 0;
    for (; param_2 < iVar3; param_2 = param_2 + 1) {
      for (; iVar7 < iStack_54; iVar7 = iVar7 + 1) {
        if (*(int **)(param_1 + 4) == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
        }
        uVar1 = *(ushort *)(local_4c + (iVar5 * param_2 + iVar7) * 2);
        *(char *)(iVar10 + (int)pvVar4) = (char)uVar1 << 3;
        uVar8 = (uint)uVar1;
        iVar5 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar5 == 1) {
          bVar2 = (byte)((int)uVar8 >> 3) & 0xfc;
        }
        else {
          bVar2 = (byte)((int)uVar8 >> 2) & 0xf8;
        }
        *(byte *)(iVar10 + 1 + (int)pvVar4) = bVar2;
        iVar5 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar5 == 1) {
          iVar5 = 8;
        }
        else {
          iVar5 = 7;
        }
        *(byte *)(iVar10 + 2 + (int)pvVar4) = (byte)((int)uVar8 >> iVar5) & 0xf8;
        iVar10 = iVar10 + 3;
      }
      if (param_3 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *param_3;
      }
    }
    FUN_00475410(pvVar4,local_2c);
    iStack_3a = uStack_44 + 0x36;
    uStack_3c = 0x4d42;
    uStack_36 = 0;
    uStack_34 = 0;
    uStack_32 = 0x36;
    uVar8 = FUN_004a6268(&uStack_3c,1,0xe,iVar6);
    if (((0xd < uVar8) && (uVar8 = FUN_004a6268(local_2c,1,0x28,iVar6), 0x27 < uVar8)) &&
       (uVar8 = FUN_004a6268(pvVar4,1,uStack_44,iVar6), uStack_44 <= uVar8)) {
      FUN_004a609f(iVar6);
      FUN_004a4ffc(pvVar4);
      return 0;
    }
    FUN_004a609f(iVar6);
    FUN_004a4ffc(pvVar4);
  }
  return 2;
}

