/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000e8b0 @ 0x1000E8B0 */


void __thiscall FUN_1000e8b0(void *this,int *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  RECT *pRVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_a8 [16];
  int local_68;
  int local_64;
  int local_60;
  ushort *local_5c;
  RECT local_58;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puVar8 = local_a8;
  for (iVar6 = 0x29; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0xcccccccc;
    puVar8 = puVar8 + 1;
  }
  local_48 = 0;
  local_8 = this;
  if ((param_2 & 0x80000000) == 0) {
    local_c = (int *)0x0;
    if (*(int *)((int)this + 0x7c) == 0) {
      if (DAT_1012873c != 0) {
        local_c = *(int **)(DAT_1012873c + 4);
      }
    }
    else {
      local_c = *(int **)((int)this + 0x7c);
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*(int *)this + 0xe4))();
      iVar6 = __chkesp();
      local_60 = *(int *)(iVar6 + 4);
      if (local_60 == 0) {
        (**(code **)(*local_c + 0x18))();
        iVar6 = __chkesp();
        param_2 = (uint)*(ushort *)(iVar6 + (param_2 & 0xff) * 2);
      }
      else if (local_60 == 1) {
        (**(code **)(*local_c + 0x1c))();
        iVar6 = __chkesp();
        param_2 = (uint)*(ushort *)(iVar6 + (param_2 & 0xff) * 2);
      }
      else {
        local_48 = 0x18;
      }
    }
  }
  if (local_48 == 0) {
    if (param_1 == (int *)0x0) {
      (**(code **)(*local_8 + 0xd4))();
      piVar2 = (int *)__chkesp();
      local_58.left = *piVar2;
      local_58.top = piVar2[1];
      local_58.right = piVar2[2];
      local_58.bottom = piVar2[3];
    }
    else {
      local_58.left = *param_1;
      local_58.top = param_1[1];
      local_58.right = param_1[2];
      local_58.bottom = param_1[3];
    }
    (**(code **)(*local_8 + 0xcc))();
    pRVar3 = (RECT *)__chkesp();
    iVar6 = thunk_FUN_10008590(&local_58,&local_58,pRVar3);
    if (iVar6 != 0) {
      (**(code **)(*local_8 + 0x1c))(local_58.left,local_58.top);
      local_5c = (ushort *)__chkesp();
      if (local_5c != (ushort *)0x0) {
        local_28 = local_58.bottom - local_58.top;
        local_44 = local_58.right - local_58.left;
        if (param_3 < 0) {
          local_64 = 0;
        }
        else {
          if (param_3 < 0x65) {
            local_68 = param_3;
          }
          else {
            local_68 = 100;
          }
          local_64 = local_68;
        }
        iVar6 = (local_64 << 8) / 100;
        local_30 = 0x100 - iVar6;
        local_38 = thunk_FUN_1000e440();
        local_38 = local_38 & 0xff;
        local_3c = thunk_FUN_1000e4c0();
        local_3c = local_3c & 0xff;
        local_40 = thunk_FUN_1000e540(param_2 & 0xffff);
        local_40 = local_40 & 0xff;
        while (uVar7 = local_28 - 1, local_28 != 0) {
          local_34 = local_44;
          uVar4 = uVar7 & 0x80000001;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
          }
          if (uVar4 != 0) {
            local_5c = local_5c + 1;
            local_34 = local_44 + -1;
          }
          local_2c = (uint)(uVar4 != 0);
          local_28 = uVar7;
          for (; 0 < local_34; local_34 = local_34 + -2) {
            local_1c = thunk_FUN_1000e440();
            local_1c = local_1c & 0xff;
            local_20 = thunk_FUN_1000e4c0();
            local_20 = local_20 & 0xff;
            local_24 = thunk_FUN_1000e540((uint)*local_5c);
            local_24 = local_24 & 0xff;
            local_10 = ((int)(local_38 * local_30) >> 8) + ((int)(local_1c * iVar6) >> 8);
            local_14 = ((int)(local_3c * local_30) >> 8) + ((int)(local_20 * iVar6) >> 8);
            local_18 = ((int)(local_40 * local_30) >> 8) + ((int)(local_24 * iVar6) >> 8);
            uVar1 = thunk_FUN_1000a660();
            *local_5c = uVar1;
            local_5c = local_5c + 2;
          }
          (**(code **)(*local_8 + 0xe0))();
          iVar5 = __chkesp();
          local_5c = local_5c + ((iVar5 - local_44) - local_2c);
        }
        local_28 = uVar7;
        (**(code **)(*local_8 + 0x24))(1);
        __chkesp();
      }
    }
  }
  local_8 = (int *)0x1000ec74;
  __chkesp();
  return;
}

