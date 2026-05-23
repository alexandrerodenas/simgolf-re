/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068ae0 @ 0x10068AE0 */
/* Body size: 563 addresses */


void __thiscall
FUN_10068ae0(void *this,uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_154 [16];
  int local_114;
  undefined1 *local_110;
  uint local_10c [65];
  int *local_8;
  
  puVar3 = local_154;
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xc))();
  __chkesp();
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    sVar1 = _strlen((char *)param_1);
    iVar2 = thunk_FUN_10014a40(sVar1 + 1);
    local_8[8] = iVar2;
    if (local_8[8] != 0) {
      FUN_1007f760((uint *)local_8[8],param_1);
      sVar1 = _strlen((char *)local_8[8]);
      local_110 = (undefined1 *)(local_8[8] + sVar1 + -4);
      *local_110 = 0;
      FUN_1007f770((uint *)local_8[8],(uint *)&DAT_1011da88);
      GetCurrentDirectoryA(0x104,(LPSTR)local_10c);
      __chkesp();
      FUN_1007f770(local_10c,(uint *)&DAT_1011da84);
      FUN_1007f770(local_10c,param_1);
      CreateScalableFontResourceA(0,(LPCSTR)local_8[8],(LPCSTR)local_10c,(LPCSTR)0x0);
      iVar2 = __chkesp();
      if (iVar2 == 0) {
        GetLastError();
        local_114 = __chkesp();
        if ((local_114 != 0x50) && (local_114 != 0)) {
          thunk_FUN_10014a90((void *)local_8[8]);
          local_8[8] = 0;
          goto LAB_10068cfd;
        }
      }
      AddFontResourceA((LPCSTR)local_8[8]);
      iVar2 = __chkesp();
      if (iVar2 == 0) {
        GetLastError();
        __chkesp();
        thunk_FUN_10014a90((void *)local_8[8]);
        local_8[8] = 0;
      }
      else {
        PostMessageA((HWND)0xffff,0x1d,0,0);
        __chkesp();
        local_8[5] = local_8[5] | 1;
        (**(code **)(*local_8 + 8))(param_2,param_3,param_4);
        __chkesp();
      }
    }
  }
LAB_10068cfd:
  local_8 = (int *)0x10068d0d;
  __chkesp();
  return;
}

