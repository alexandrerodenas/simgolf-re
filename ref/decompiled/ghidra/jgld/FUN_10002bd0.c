/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10002bd0 @ 0x10002BD0 */


void __thiscall FUN_10002bd0(void *this,LPCSTR param_1,size_t param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [16];
  undefined4 local_10;
  IMAGE_RICH_HEADER *local_c;
  void *local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_3 == 0) {
    local_c = &DAT_10000080;
  }
  else {
    local_c = (IMAGE_RICH_HEADER *)0x8000080;
  }
  local_8 = this;
  thunk_FUN_10002e10((int)this);
  *(size_t *)((int)local_8 + 0x10) = param_2;
  CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,(DWORD)local_c,(HANDLE)0x0);
  uVar1 = __chkesp();
  *(undefined4 *)((int)local_8 + 8) = uVar1;
  if (*(int *)((int)local_8 + 8) == -1) {
    GetLastError();
    local_10 = __chkesp();
  }
  else {
    SetFilePointer(*(HANDLE *)((int)local_8 + 8),param_2,(PLONG)0x0,0);
    iVar2 = __chkesp();
    if (iVar2 == -1) {
      thunk_FUN_10002e10((int)local_8);
    }
    else {
      SetEndOfFile(*(HANDLE *)((int)local_8 + 8));
      __chkesp();
      SetFilePointer(*(HANDLE *)((int)local_8 + 8),0,(PLONG)0x0,0);
      iVar2 = __chkesp();
      if (iVar2 == -1) {
        thunk_FUN_10002e10((int)local_8);
      }
      else {
        CreateFileMappingA(*(HANDLE *)((int)local_8 + 8),(LPSECURITY_ATTRIBUTES)0x0,4,0,0,
                           (LPCSTR)0x0);
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
            _memset(*(void **)((int)local_8 + 4),0,param_2);
          }
        }
      }
    }
  }
  local_8 = (void *)0x10002d94;
  __chkesp();
  return;
}

