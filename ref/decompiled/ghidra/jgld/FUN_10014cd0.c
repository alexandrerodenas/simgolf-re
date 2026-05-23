/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10014cd0 @ 0x10014CD0 */
/* Body size: 209 addresses */


void __thiscall FUN_10014cd0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_10014c70(this);
  *local_8 = &PTR_LAB_1011d380;
  local_8[3] = param_1;
  local_8[2] = 0;
  local_8[4] = 0;
  local_8[5] = 0;
  local_8[6] = 0;
  local_8[7] = 0;
  local_8[8] = 0;
  local_8[9] = 0;
  local_8[10] = 0xff;
  local_8[0xb] = 0;
  local_8[0xc] = 0;
  local_8[0xd] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 0xe));
  __chkesp();
  local_8 = (undefined4 *)0x10014d9b;
  __chkesp();
  return;
}

