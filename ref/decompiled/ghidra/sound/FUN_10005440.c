/* Ghidra decompiled: sound.dll */
/* Function: FUN_10005440 @ 0x10005440 */


void __fastcall FUN_10005440(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG local_40;
  char local_3c [4];
  undefined4 *local_38;
  undefined **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058573;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1001bc50(&local_34);
  local_34 = &PTR_LAB_1005b178;
  iVar3 = 0;
  local_4 = 0;
  mmioRead(*(HMMIO *)(param_1 + 0xa48),local_3c,4);
  mmioRead(*(HMMIO *)(param_1 + 0xa48),(HPSTR)&local_40,4);
  mmioRead(*(HMMIO *)(param_1 + 0xa48),(HPSTR)&local_24,local_40);
  if (local_18 == 3) {
    local_38 = operator_new(0xe4);
    local_4._0_1_ = 1;
    if (local_38 == (undefined4 *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = thunk_FUN_1001bd90(local_38);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar1 != 0) {
      iVar3 = iVar1 + 0x2c;
    }
    mmioRead(*(HMMIO *)(param_1 + 0xa48),(HPSTR)&local_40,4);
    mmioRead(*(HMMIO *)(param_1 + 0xa48),(HPSTR)(iVar1 + 0x20),local_40);
    mmioRead(*(HMMIO *)(param_1 + 0xa48),(HPSTR)&local_40,4);
    mmioRead(*(HMMIO *)(param_1 + 0xa48),(HPSTR)(iVar1 + 8),local_40);
    mmioRead(*(HMMIO *)(param_1 + 0xa48),(HPSTR)&local_40,4);
    mmioRead(*(HMMIO *)(param_1 + 0xa48),(HPSTR)(iVar1 + 0x58),local_40);
    *(undefined4 *)(iVar3 + 4) = local_30;
    *(undefined4 *)(iVar3 + 8) = local_2c;
    *(undefined4 *)(iVar3 + 0xc) = local_28;
    *(undefined4 *)(iVar3 + 0x10) = local_24;
    *(undefined4 *)(iVar3 + 0x14) = local_20;
    *(undefined2 *)(iVar3 + 0x18) = local_1c;
    *(int *)(iVar3 + 0x1c) = local_18;
    *(undefined4 *)(iVar3 + 0x20) = local_14;
    *(undefined4 *)(iVar3 + 0x24) = local_10;
    puVar2 = operator_new(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = iVar3;
    }
    if (*(int *)(param_1 + 0xa50) == 0) {
      *(undefined4 **)(param_1 + 0xa4c) = puVar2;
    }
    else {
      *(undefined4 **)(*(int *)(param_1 + 0xa50) + 4) = puVar2;
      *puVar2 = *(undefined4 *)(param_1 + 0xa50);
    }
    *(undefined4 **)(param_1 + 0xa50) = puVar2;
    *(int *)(param_1 + 0xa58) = *(int *)(param_1 + 0xa58) + 1;
  }
  ExceptionList = local_c;
  return;
}

