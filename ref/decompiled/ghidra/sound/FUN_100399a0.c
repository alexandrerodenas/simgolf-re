/* Ghidra decompiled: sound.dll */
/* Function: FUN_100399a0 @ 0x100399A0 */
/* Body size: 307 addresses */


void __thiscall FUN_100399a0(void *this,uint *param_1)

{
  undefined4 *puVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100593ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = thunk_FUN_100326a0((void *)((int)this + 0x70),param_1);
  if ((((puVar1 == (undefined4 *)0x0) && (iVar2 = *(int *)((int)this + 0x1438), 1 < iVar2)) &&
      (iVar2 < 3)) && (iVar3 = 1, 1 < iVar2)) {
    puVar1 = (undefined4 *)((int)this + 0x1440);
    do {
      this_00 = operator_new(0x1450);
      local_4 = 0;
      if (this_00 == (int *)0x0) {
        this_00 = (int *)0x0;
      }
      else {
        thunk_FUN_1002b4e0(this_00);
        local_4._0_1_ = 1;
        thunk_FUN_10031be0(this_00 + 0x1c);
        *this_00 = (int)&PTR_LAB_1005c7e8;
        this_00[0x509] = 0;
        local_4 = CONCAT31(local_4._1_3_,2);
        this_00[0x50a] = 0;
        this_00[0x508] = 0;
        this_00[0x50b] = 0;
        this_00[0x50e] = 1;
        this_00[0x50f] = 0;
        this_00[0x510] = 0;
        this_00[0x511] = 0;
        this_00[0x512] = 0;
        this_00[0x50c] = 0;
        this_00[0x50d] = 0;
        thunk_FUN_1002ad10(this_00,1);
      }
      local_4 = 0xffffffff;
      iVar2 = (**(code **)(*this_00 + 0x10))(param_1);
      if (iVar2 != 0) {
        ExceptionList = local_c;
        return;
      }
      *puVar1 = this_00;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar3 < *(int *)((int)this + 0x1438));
  }
  ExceptionList = local_c;
  return;
}

