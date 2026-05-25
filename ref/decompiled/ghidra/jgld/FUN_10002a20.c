/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10002a20 @ 0x10002A20 */


void __thiscall FUN_10002a20(void *this,LPCSTR param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_54 [16];
  undefined4 local_14;
  LPCSTR local_10;
  IMAGE_RICH_HEADER *local_c;
  void *local_8;
  
  puVar3 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_2 == 0) {
    local_c = &DAT_10000080;
  }
  else {
    local_c = (IMAGE_RICH_HEADER *)0x8000080;
  }
  local_8 = this;
  thunk_FUN_10002e10((int)this);
  local_10 = param_1;
  CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,(DWORD)local_c,(HANDLE)0x0);
  uVar1 = __chkesp();
  *(undefined4 *)((int)local_8 + 8) = uVar1;
  if (*(int *)((int)local_8 + 8) == -1) {
    GetLastError();
    local_14 = __chkesp();
  }
  else {
    CreateFileMappingA(*(HANDLE *)((int)local_8 + 8),(LPSECURITY_ATTRIBUTES)0x0,4,0,0,(LPCSTR)0x0);
    uVar1 = __chkesp();
    *(undefined4 *)((int)local_8 + 0xc) = uVar1;
    if (*(int *)((int)local_8 + 0xc) == 0) {
      thunk_FUN_10002e10((int)local_8);
    }
    else {
      MapViewOfFile(*(HANDLE *)((int)local_8 + 0xc),0xf001f,0,0,0);
      uVar1 = __chkesp();
      *(undefined4 *)((int)local_8 + 4) = uVar1;
      if (*(int *)((int)local_8 + 4) == 0) {
        thunk_FUN_10002e10((int)local_8);
      }
      else {
        GetFileSize(*(HANDLE *)((int)local_8 + 8),(LPDWORD)0x0);
        uVar1 = __chkesp();
        *(undefined4 *)((int)local_8 + 0x10) = uVar1;
      }
    }
  }
  local_8 = (void *)0x10002b72;
  __chkesp();
  return;
}

