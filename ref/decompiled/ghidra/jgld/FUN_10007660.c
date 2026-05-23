/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10007660 @ 0x10007660 */
/* Body size: 531 addresses */


void __fastcall FUN_10007660(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_54 [16];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aee69;
  local_10 = ExceptionList;
  puVar3 = local_54;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = &local_10;
  local_14 = param_1;
  thunk_FUN_10009690(param_1);
  local_8 = 0;
  thunk_FUN_100092e0((int)(local_14 + 9));
  *local_14 = &PTR_LAB_1011d0b0;
  local_14[2] = 0;
  local_14[0x20] = 0;
  local_14[0xe] = 0;
  local_14[0xf] = 0;
  local_14[0x10] = 0;
  *(undefined1 *)(local_14 + 0x1d) = 0;
  local_14[0x1f] = 0;
  local_14[299] = 0;
  local_14[300] = 0;
  local_14[0x12d] = 0;
  local_14[0x12e] = 0;
  local_14[0x12f] = 0;
  local_14[0x130] = 0;
  local_14[0x131] = 0;
  local_14[0x132] = 0;
  local_14[0x21] = 0x28;
  local_14[0x22] = 0;
  local_14[0x23] = 0;
  *(undefined2 *)(local_14 + 0x24) = 1;
  *(undefined2 *)((int)local_14 + 0x92) = 8;
  local_14[0x25] = 0;
  local_14[0x26] = 0;
  local_14[0x27] = 0;
  local_14[0x28] = 0;
  local_14[0x29] = 0x100;
  local_14[0x2a] = 0;
  _memset(local_14 + 0x15,0,0x10);
  InitializeCriticalSection((LPCRITICAL_SECTION)(local_14 + 3));
  __chkesp();
  if (DAT_10128420 == 0) {
    local_14[0x134] = 0x80007c1f;
  }
  else {
    uVar1 = thunk_FUN_1000a660();
    local_14[0x134] = uVar1;
  }
  ExceptionList = local_10;
  local_8 = 0x1000786f;
  __chkesp();
  return;
}

