/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100266b0 @ 0x100266B0 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_100266b0(LPCSTR param_1,uint param_2,undefined4 param_3,uint param_4)

{
  DWORD *pDVar1;
  DWORD DVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  bool bVar6;
  byte local_3c;
  uint local_38;
  char local_34 [4];
  undefined4 local_30;
  void *local_2c;
  _SECURITY_ATTRIBUTES local_28;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  DWORD local_10;
  DWORD local_c;
  HANDLE local_8;
  
  local_28.nLength = 0xc;
  local_28.lpSecurityDescriptor = (LPVOID)0x0;
  bVar6 = (param_2 & 0x80) == 0;
  if (bVar6) {
    local_3c = 0;
  }
  else {
    local_3c = 0x10;
  }
  local_28.bInheritHandle = (BOOL)bVar6;
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x4000) == 0) {
      if (DAT_101109c0 != 0x8000) {
        local_3c = local_3c | 0x80;
      }
    }
    else {
      local_3c = local_3c | 0x80;
    }
  }
  uVar5 = param_2 & 3;
  if (uVar5 == 0) {
    local_38 = 0x80000000;
  }
  else if (uVar5 == 1) {
    local_38 = 0x40000000;
  }
  else {
    if (uVar5 != 2) {
      pDVar1 = FUN_100243f0();
      *pDVar1 = 0x16;
      pDVar1 = FUN_10024400();
      *pDVar1 = 0;
      return 0xffffffff;
    }
    local_38 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    local_c = 0;
    break;
  default:
    pDVar1 = FUN_100243f0();
    *pDVar1 = 0x16;
    pDVar1 = FUN_10024400();
    *pDVar1 = 0;
    return 0xffffffff;
  case 0x20:
    local_c = 1;
    break;
  case 0x30:
    local_c = 2;
    break;
  case 0x40:
    local_c = 3;
  }
  pvVar4 = (void *)(param_2 & 0x700);
  if (pvVar4 < (void *)0x401) {
    if (pvVar4 != (void *)0x400) {
      if ((void *)0x200 < pvVar4) {
        if (pvVar4 != (void *)0x300) {
LAB_10026876:
          pDVar1 = FUN_100243f0();
          *pDVar1 = 0x16;
          pDVar1 = FUN_10024400();
          *pDVar1 = 0;
          return 0xffffffff;
        }
        local_1c = 2;
        goto LAB_10026894;
      }
      if (pvVar4 == (void *)0x200) goto LAB_10026864;
      if (pvVar4 != (void *)0x0) {
        if (pvVar4 != (void *)0x100) goto LAB_10026876;
        local_1c = 4;
        goto LAB_10026894;
      }
    }
    local_1c = 3;
  }
  else {
    if (pvVar4 != (void *)0x500) {
      if (pvVar4 == (void *)0x600) {
LAB_10026864:
        local_1c = 5;
        goto LAB_10026894;
      }
      if (pvVar4 != (void *)0x700) goto LAB_10026876;
    }
    local_1c = 1;
  }
LAB_10026894:
  local_2c = (void *)0x80;
  if ((param_2 & 0x100) != 0) {
    local_14 = param_4;
    local_30 = 0;
    pvVar4 = (void *)~DAT_10110810;
    if ((param_4 & (uint)pvVar4 & 0x80) == 0) {
      local_2c = (void *)0x1;
    }
  }
  if ((param_2 & 0x40) != 0) {
    pvVar4 = (void *)((uint)local_2c | 0x4000000);
    local_38 = local_38 | 0x10000;
    local_2c = pvVar4;
  }
  if ((param_2 & 0x1000) != 0) {
    pvVar4 = (void *)((uint)local_2c | 0x100);
    local_2c = pvVar4;
  }
  if ((param_2 & 0x20) == 0) {
    pvVar4 = (void *)(param_2 & 0x10);
    if (pvVar4 != (void *)0x0) {
      local_2c = (void *)((uint)local_2c | 0x10000000);
    }
  }
  else {
    local_2c = (void *)((uint)local_2c | 0x8000000);
  }
  local_18 = FUN_10025da0(pvVar4);
  if (local_18 == 0xffffffff) {
    pDVar1 = FUN_100243f0();
    *pDVar1 = 0x18;
    pDVar1 = FUN_10024400();
    *pDVar1 = 0;
    local_18 = 0xffffffff;
  }
  else {
    local_8 = CreateFileA(param_1,local_38,local_c,&local_28,local_1c,(DWORD)local_2c,(HANDLE)0x0);
    if (local_8 == (HANDLE)0xffffffff) {
      DVar2 = GetLastError();
      __dosmaperr(DVar2);
      __unlock_fhandle(local_18);
      local_18 = 0xffffffff;
    }
    else {
      local_10 = GetFileType(local_8);
      if (local_10 == 0) {
        CloseHandle(local_8);
        DVar2 = GetLastError();
        __dosmaperr(DVar2);
        __unlock_fhandle(local_18);
        local_18 = 0xffffffff;
      }
      else {
        if (local_10 == 2) {
          local_3c = local_3c | 0x40;
        }
        else if (local_10 == 3) {
          local_3c = local_3c | 8;
        }
        __set_osfhnd(local_18,(intptr_t)local_8);
        *(byte *)((&DAT_10110e20)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) = local_3c | 1
        ;
        if ((((local_3c & 0x48) == 0) && (((int)(char)(local_3c | 1) & 0x80U) != 0)) &&
           ((param_2 & 2) != 0)) {
          DVar2 = FUN_100265b0(local_18,-1,2);
          if (DVar2 == 0xffffffff) {
            pDVar1 = FUN_10024400();
            if (*pDVar1 != 0x83) {
              FUN_1001e9c0(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
          }
          else {
            local_34[0] = '\0';
            iVar3 = FUN_1001f0c0(local_18,local_34,1);
            if (((iVar3 == 0) && (local_34[0] == '\x1a')) &&
               (iVar3 = FUN_1002a7b0(local_18,DVar2), iVar3 == -1)) {
              FUN_1001e9c0(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
            DVar2 = FUN_100265b0(local_18,0,0);
            if (DVar2 == 0xffffffff) {
              FUN_1001e9c0(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
          }
        }
        if (((local_3c & 0x48) == 0) && ((param_2 & 8) != 0)) {
          *(byte *)((&DAT_10110e20)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10110e20)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) | 0x20;
        }
        __unlock_fhandle(local_18);
      }
    }
  }
  return local_18;
}

