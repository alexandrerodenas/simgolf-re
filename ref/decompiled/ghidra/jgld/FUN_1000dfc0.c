/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000dfc0 @ 0x1000DFC0 */
/* Body size: 914 addresses */


void __thiscall FUN_1000dfc0(void *this,int *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  RECT *pRVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_a4 [16];
  int local_64;
  int local_60;
  int local_5c;
  ushort *local_58;
  RECT local_54;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puVar6 = local_a4;
  for (iVar5 = 0x28; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  local_44 = 0;
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
      iVar5 = __chkesp();
      local_5c = *(int *)(iVar5 + 4);
      if (local_5c == 0) {
        (**(code **)(*local_c + 0x18))();
        iVar5 = __chkesp();
        param_2 = (uint)*(ushort *)(iVar5 + (param_2 & 0xff) * 2);
      }
      else if (local_5c == 1) {
        (**(code **)(*local_c + 0x1c))();
        iVar5 = __chkesp();
        param_2 = (uint)*(ushort *)(iVar5 + (param_2 & 0xff) * 2);
      }
      else {
        local_44 = 0x18;
      }
    }
  }
  if (local_44 == 0) {
    if (param_1 == (int *)0x0) {
      (**(code **)(*local_8 + 0xd4))();
      piVar2 = (int *)__chkesp();
      local_54.left = *piVar2;
      local_54.top = piVar2[1];
      local_54.right = piVar2[2];
      local_54.bottom = piVar2[3];
    }
    else {
      local_54.left = *param_1;
      local_54.top = param_1[1];
      local_54.right = param_1[2];
      local_54.bottom = param_1[3];
    }
    (**(code **)(*local_8 + 0xcc))();
    pRVar3 = (RECT *)__chkesp();
    iVar5 = thunk_FUN_10008590(&local_54,&local_54,pRVar3);
    if (iVar5 != 0) {
      (**(code **)(*local_8 + 0x1c))(local_54.left,local_54.top);
      local_58 = (ushort *)__chkesp();
      if (local_58 != (ushort *)0x0) {
        local_28 = local_54.bottom - local_54.top;
        local_40 = local_54.right - local_54.left;
        if (param_3 < 0) {
          local_60 = 0;
        }
        else {
          if (param_3 < 0x65) {
            local_64 = param_3;
          }
          else {
            local_64 = 100;
          }
          local_60 = local_64;
        }
        iVar5 = (local_60 << 8) / 100;
        local_2c = 0x100 - iVar5;
        local_34 = thunk_FUN_1000e440();
        local_34 = local_34 & 0xff;
        local_38 = thunk_FUN_1000e4c0();
        local_38 = local_38 & 0xff;
        local_3c = thunk_FUN_1000e540(param_2 & 0xffff);
        local_3c = local_3c & 0xff;
        while (local_28 != 0) {
          local_28 = local_28 + -1;
          for (local_30 = local_40; 0 < local_30; local_30 = local_30 + -1) {
            local_1c = thunk_FUN_1000e440();
            local_1c = local_1c & 0xff;
            local_20 = thunk_FUN_1000e4c0();
            local_20 = local_20 & 0xff;
            local_24 = thunk_FUN_1000e540((uint)*local_58);
            local_24 = local_24 & 0xff;
            local_10 = ((int)(local_34 * local_2c) >> 8) + ((int)(local_1c * iVar5) >> 8);
            local_14 = ((int)(local_38 * local_2c) >> 8) + ((int)(local_20 * iVar5) >> 8);
            local_18 = ((int)(local_3c * local_2c) >> 8) + ((int)(local_24 * iVar5) >> 8);
            uVar1 = thunk_FUN_1000a660();
            *local_58 = uVar1;
            local_58 = local_58 + 1;
          }
          (**(code **)(*local_8 + 0xe0))();
          iVar4 = __chkesp();
          local_58 = local_58 + (iVar4 - local_40);
        }
        local_28 = local_28 + -1;
        (**(code **)(*local_8 + 0x24))(1);
        __chkesp();
      }
    }
  }
  local_8 = (int *)0x1000e34c;
  __chkesp();
  return;
}

