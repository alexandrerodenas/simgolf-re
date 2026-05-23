/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000dcf0 @ 0x1000DCF0 */
/* Body size: 566 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000dcf0(void *this,int *param_1,uint param_2)

{
  RECT *pRVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_6c [16];
  int local_2c;
  int *local_28;
  undefined4 *local_24;
  RECT local_20;
  uint local_10;
  int local_c;
  int *local_8;
  
  puVar3 = local_6c;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_24 = (undefined4 *)0x0;
  local_8 = this;
  if (param_1 == (int *)0x0) {
    thunk_FUN_1000da70(this,param_2);
  }
  else {
    if ((param_2 & 0x80000000) == 0) {
      local_28 = (int *)0x0;
      if (*(int *)((int)this + 0x7c) == 0) {
        if (DAT_1012873c != 0) {
          local_28 = *(int **)(DAT_1012873c + 4);
        }
      }
      else {
        local_28 = *(int **)((int)this + 0x7c);
      }
      if (local_28 != (int *)0x0) {
        (**(code **)(*(int *)this + 0xe4))();
        iVar2 = __chkesp();
        local_2c = *(int *)(iVar2 + 4);
        if (local_2c == 0) {
          (**(code **)(*local_28 + 0x18))();
          iVar2 = __chkesp();
          param_2 = (uint)*(ushort *)(iVar2 + (param_2 & 0xff) * 2);
        }
        else {
          if (local_2c != 1) goto LAB_1000df13;
          (**(code **)(*local_28 + 0x1c))();
          iVar2 = __chkesp();
          param_2 = (uint)*(ushort *)(iVar2 + (param_2 & 0xff) * 2);
        }
      }
    }
    local_20.left = *param_1;
    local_20.top = param_1[1];
    local_20.right = param_1[2];
    local_20.bottom = param_1[3];
    (**(code **)(*local_8 + 0xcc))();
    pRVar1 = (RECT *)__chkesp();
    iVar2 = thunk_FUN_10008590(&local_20,&local_20,pRVar1);
    if (iVar2 != 0) {
      (**(code **)(*local_8 + 0x1c))(local_20.left,local_20.top);
      local_24 = (undefined4 *)__chkesp();
      if (local_24 != (undefined4 *)0x0) {
        local_c = local_20.bottom - local_20.top;
        local_10 = local_20.right - local_20.left;
        (**(code **)(*local_8 + 0xe0))();
        iVar2 = __chkesp();
        _DAT_10128458 = (iVar2 - local_10) * 2;
        while (local_c != 0) {
          local_c = local_c + -1;
          thunk_FUN_1000af30(local_24,(undefined2)param_2,local_10);
          (**(code **)(*local_8 + 0xe0))();
          iVar2 = __chkesp();
          local_24 = (undefined4 *)((int)local_24 + iVar2 * 2);
        }
        local_c = local_c + -1;
        (**(code **)(*local_8 + 0x24))(1);
        __chkesp();
      }
    }
  }
LAB_1000df13:
  local_8 = (int *)0x1000df20;
  __chkesp();
  return;
}

