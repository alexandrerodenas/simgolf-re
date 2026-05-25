/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10011c40 @ 0x10011C40 */


void __thiscall FUN_10011c40(void *this,undefined2 param_1)

{
  undefined4 uVar1;
  RECT *pRVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 local_54 [16];
  undefined4 *local_14;
  uint local_10;
  int local_c;
  int *local_8;
  
  puVar4 = local_54;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xd4))();
  uVar1 = __chkesp();
  uVar5 = (undefined2)uVar1;
  uVar6 = (undefined2)((uint)uVar1 >> 0x10);
  (**(code **)(*local_8 + 0xcc))();
  pRVar2 = (RECT *)__chkesp();
  iVar3 = thunk_FUN_100085f0(pRVar2,(RECT *)CONCAT22(uVar6,uVar5));
  if (iVar3 == 0) {
    (**(code **)(*local_8 + 0xcc))(param_1);
    uVar1 = __chkesp();
    (**(code **)(*local_8 + 0x44))((short)uVar1);
    __chkesp();
  }
  else {
    (**(code **)(*local_8 + 0x18))();
    local_14 = (undefined4 *)__chkesp();
    (**(code **)(*local_8 + 0xd4))();
    iVar3 = __chkesp();
    local_c = *(int *)(iVar3 + 0xc);
    (**(code **)(*local_8 + 0xd4))();
    iVar3 = __chkesp();
    local_10 = *(uint *)(iVar3 + 8);
    puVar4 = local_14;
    for (iVar3 = ((local_10 >> 2) + (uint)((local_10 & 3) != 0)) * local_c; iVar3 != 0;
        iVar3 = iVar3 + -1) {
      *puVar4 = CONCAT22(CONCAT11((undefined1)param_1,(undefined1)param_1),
                         CONCAT11((undefined1)param_1,(undefined1)param_1));
      puVar4 = puVar4 + 1;
    }
    (**(code **)(*local_8 + 0x24))(1);
    __chkesp();
  }
  local_10 = 0x10011d77;
  __chkesp();
  return;
}

