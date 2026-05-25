/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000da70 @ 0x1000DA70 */


void __thiscall FUN_1000da70(void *this,uint param_1)

{
  RECT *pRVar1;
  RECT *pRVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_5c [16];
  int local_1c;
  int *local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puVar5 = local_5c;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_8 = this;
  if ((param_1 & 0x80000000) == 0) {
    local_18 = (int *)0x0;
    if (*(int *)((int)this + 0x7c) == 0) {
      if (DAT_1012873c != 0) {
        local_18 = *(int **)(DAT_1012873c + 4);
      }
    }
    else {
      local_18 = *(int **)((int)this + 0x7c);
    }
    if (local_18 != (int *)0x0) {
      (**(code **)(*(int *)this + 0xe4))();
      iVar4 = __chkesp();
      local_1c = *(int *)(iVar4 + 4);
      if (local_1c == 0) {
        (**(code **)(*local_18 + 0x18))();
        iVar4 = __chkesp();
        param_1 = (uint)*(ushort *)(iVar4 + (param_1 & 0xff) * 2);
      }
      else {
        if (local_1c != 1) goto LAB_1000dc53;
        (**(code **)(*local_18 + 0x1c))();
        iVar4 = __chkesp();
        param_1 = (uint)*(ushort *)(iVar4 + (param_1 & 0xff) * 2);
      }
    }
  }
  (**(code **)(*local_8 + 0xd4))();
  pRVar1 = (RECT *)__chkesp();
  (**(code **)(*local_8 + 0xcc))();
  pRVar2 = (RECT *)__chkesp();
  iVar4 = thunk_FUN_100085f0(pRVar2,pRVar1);
  if (iVar4 == 0) {
    (**(code **)(*local_8 + 0xcc))(param_1);
    uVar3 = __chkesp();
    (**(code **)(*local_8 + 0x44))(uVar3);
    __chkesp();
  }
  else {
    (**(code **)(*local_8 + 0x20))();
    local_14 = (undefined4 *)__chkesp();
    (**(code **)(*local_8 + 0xd4))();
    iVar4 = __chkesp();
    local_c = *(int *)(iVar4 + 0xc);
    (**(code **)(*local_8 + 0xd4))();
    iVar4 = __chkesp();
    local_10 = *(int *)(iVar4 + 8);
    thunk_FUN_1000af30(local_14,(undefined2)param_1,local_10 * local_c);
    (**(code **)(*local_8 + 0x24))(1);
    __chkesp();
  }
LAB_1000dc53:
  local_8 = (int *)0x1000dc60;
  __chkesp();
  return;
}

