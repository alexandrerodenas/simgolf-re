/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10090920 @ 0x10090920 */
/* Body size: 1294 addresses */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_10090920(LPCSTR param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte local_3c;
  uint local_38;
  char local_34 [4];
  undefined4 local_30;
  uint local_2c;
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
      if (DAT_101289a8 != 0x8000) {
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
      puVar1 = (undefined4 *)FUN_100904d0();
      *puVar1 = 0x16;
      pDVar2 = FUN_100904e0();
      *pDVar2 = 0;
      return 0xffffffff;
    }
    local_38 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    local_c = 0;
    break;
  default:
    puVar1 = (undefined4 *)FUN_100904d0();
    *puVar1 = 0x16;
    pDVar2 = FUN_100904e0();
    *pDVar2 = 0;
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
  uVar5 = param_2 & 0x700;
  if (uVar5 < 0x401) {
    if (uVar5 != 0x400) {
      if (0x200 < uVar5) {
        if (uVar5 != 0x300) {
LAB_10090ae6:
          puVar1 = (undefined4 *)FUN_100904d0();
          *puVar1 = 0x16;
          pDVar2 = FUN_100904e0();
          *pDVar2 = 0;
          return 0xffffffff;
        }
        local_1c = 2;
        goto LAB_10090b04;
      }
      if (uVar5 == 0x200) goto LAB_10090ad4;
      if (uVar5 != 0) {
        if (uVar5 != 0x100) goto LAB_10090ae6;
        local_1c = 4;
        goto LAB_10090b04;
      }
    }
    local_1c = 3;
  }
  else {
    if (uVar5 != 0x500) {
      if (uVar5 == 0x600) {
LAB_10090ad4:
        local_1c = 5;
        goto LAB_10090b04;
      }
      if (uVar5 != 0x700) goto LAB_10090ae6;
    }
    local_1c = 1;
  }
LAB_10090b04:
  local_2c = 0x80;
  if ((param_2 & 0x100) != 0) {
    local_14 = param_4;
    local_30 = 0;
    if ((param_4 & ~DAT_10128750 & 0x80) == 0) {
      local_2c = 1;
    }
  }
  if ((param_2 & 0x40) != 0) {
    local_2c = local_2c | 0x4000000;
    local_38 = local_38 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    local_2c = local_2c | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      local_2c = local_2c | 0x10000000;
    }
  }
  else {
    local_2c = local_2c | 0x8000000;
  }
  local_18 = FUN_1008fe60();
  if (local_18 == 0xffffffff) {
    puVar1 = (undefined4 *)FUN_100904d0();
    *puVar1 = 0x18;
    pDVar2 = FUN_100904e0();
    *pDVar2 = 0;
    local_18 = 0xffffffff;
  }
  else {
    local_8 = CreateFileA(param_1,local_38,local_c,&local_28,local_1c,local_2c,(HANDLE)0x0);
    if (local_8 == (HANDLE)0xffffffff) {
      DVar3 = GetLastError();
      __dosmaperr(DVar3);
      __unlock_fhandle(local_18);
      local_18 = 0xffffffff;
    }
    else {
      local_10 = GetFileType(local_8);
      if (local_10 == 0) {
        CloseHandle(local_8);
        DVar3 = GetLastError();
        __dosmaperr(DVar3);
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
        *(byte *)((&DAT_10129e60)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) = local_3c | 1
        ;
        if ((((local_3c & 0x48) == 0) && (((int)(char)(local_3c | 1) & 0x80U) != 0)) &&
           ((param_2 & 2) != 0)) {
          DVar3 = FUN_100932f0(local_18,-1,2);
          if (DVar3 == 0xffffffff) {
            pDVar2 = FUN_100904e0();
            if (*pDVar2 != 0x83) {
              FUN_10085130(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
          }
          else {
            local_34[0] = '\0';
            iVar4 = FUN_1008dc80(local_18,local_34,1);
            if (((iVar4 == 0) && (local_34[0] == '\x1a')) &&
               (iVar4 = FUN_100957b0(local_18,DVar3), iVar4 == -1)) {
              FUN_10085130(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
            DVar3 = FUN_100932f0(local_18,0,0);
            if (DVar3 == 0xffffffff) {
              FUN_10085130(local_18);
              __unlock_fhandle(local_18);
              return 0xffffffff;
            }
          }
        }
        if (((local_3c & 0x48) == 0) && ((param_2 & 8) != 0)) {
          *(byte *)((&DAT_10129e60)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10129e60)[(int)local_18 >> 5] + 4 + (local_18 & 0x1f) * 0x24) | 0x20;
        }
        __unlock_fhandle(local_18);
      }
    }
  }
  return local_18;
}

