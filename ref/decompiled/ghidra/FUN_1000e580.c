/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000e580 @ 0x1000E580 */
/* Body size: 653 addresses */


void __thiscall FUN_1000e580(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  RECT *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_78 [16];
  int local_38;
  undefined2 *local_34;
  RECT local_30;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  puVar6 = local_78;
  for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  local_20 = 0;
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
      iVar4 = __chkesp();
      local_38 = *(int *)(iVar4 + 4);
      if (local_38 == 0) {
        (**(code **)(*local_c + 0x18))();
        iVar4 = __chkesp();
        param_2 = (uint)*(ushort *)(iVar4 + (param_2 & 0xff) * 2);
      }
      else if (local_38 == 1) {
        (**(code **)(*local_c + 0x1c))();
        iVar4 = __chkesp();
        param_2 = (uint)*(ushort *)(iVar4 + (param_2 & 0xff) * 2);
      }
      else {
        local_20 = 0x18;
      }
    }
  }
  if (local_20 == 0) {
    if (param_1 == (int *)0x0) {
      (**(code **)(*local_8 + 0xd4))();
      piVar1 = (int *)__chkesp();
      local_30.left = *piVar1;
      local_30.top = piVar1[1];
      local_30.right = piVar1[2];
      local_30.bottom = piVar1[3];
    }
    else {
      local_30.left = *param_1;
      local_30.top = param_1[1];
      local_30.right = param_1[2];
      local_30.bottom = param_1[3];
    }
    (**(code **)(*local_8 + 0xcc))();
    pRVar2 = (RECT *)__chkesp();
    iVar4 = thunk_FUN_10008590(&local_30,&local_30,pRVar2);
    if (iVar4 != 0) {
      (**(code **)(*local_8 + 0x1c))(local_30.left,local_30.top);
      local_34 = (undefined2 *)__chkesp();
      if (local_34 != (undefined2 *)0x0) {
        local_10 = local_30.bottom - local_30.top;
        local_1c = local_30.right - local_30.left;
        while (uVar3 = local_10 - 1, local_10 != 0) {
          local_18 = local_1c;
          uVar5 = uVar3 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          if (uVar5 != 0) {
            local_34 = local_34 + 1;
            local_18 = local_1c + -1;
          }
          local_14 = (uint)(uVar5 != 0);
          for (; 0 < local_18; local_18 = local_18 + -2) {
            *local_34 = (undefined2)param_2;
            local_34 = local_34 + 2;
          }
          local_10 = uVar3;
          (**(code **)(*local_8 + 0xe0))();
          iVar4 = __chkesp();
          local_34 = local_34 + ((iVar4 - local_1c) - local_14);
        }
        local_10 = uVar3;
        (**(code **)(*local_8 + 0x24))(1);
        __chkesp();
      }
    }
  }
  local_8 = (int *)0x1000e807;
  __chkesp();
  return;
}

