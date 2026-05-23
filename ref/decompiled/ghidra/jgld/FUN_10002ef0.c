/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10002ef0 @ 0x10002EF0 */
/* Body size: 274 addresses */


void __thiscall FUN_10002ef0(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  if (param_1 < *(uint *)((int)this + 4)) {
    thunk_FUN_10002e10((int)this);
  }
  else {
    local_c = param_1 - *(int *)((int)this + 4);
    if (*(int *)((int)this + 4) != 0) {
      UnmapViewOfFile(*(LPCVOID *)((int)this + 4));
      __chkesp();
      *(undefined4 *)((int)local_8 + 4) = 0;
    }
    if (*(int *)((int)local_8 + 0xc) != 0) {
      CloseHandle(*(HANDLE *)((int)local_8 + 0xc));
      __chkesp();
      *(undefined4 *)((int)local_8 + 0xc) = 0;
    }
    SetFilePointer(*(HANDLE *)((int)local_8 + 8),local_c,(PLONG)0x0,0);
    iVar1 = __chkesp();
    if (iVar1 == -1) {
      thunk_FUN_10002e10((int)local_8);
    }
    else {
      SetEndOfFile(*(HANDLE *)((int)local_8 + 8));
      __chkesp();
      if (*(int *)((int)local_8 + 8) != 0) {
        CloseHandle(*(HANDLE *)((int)local_8 + 8));
        __chkesp();
        *(undefined4 *)((int)local_8 + 8) = 0;
      }
    }
  }
  local_8 = (void *)0x10002ffc;
  __chkesp();
  return;
}

