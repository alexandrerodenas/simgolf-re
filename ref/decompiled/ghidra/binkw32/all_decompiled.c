/* === _RADSetMemory@8 @ 0x30001000 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _RADSetMemory@8 @ 0x30001000 */



void _RADSetMemory_8(undefined4 param_1,undefined4 param_2)

{
                    /* 0x1000  54  _RADSetMemory@8 */
  DAT_30041418 = param_1;
  DAT_3004141c = param_2;
  return;
}



/* === radmalloc @ 0x30001020 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: radmalloc @ 0x30001020 */



/* __stdcall radmalloc,4 */

int radmalloc(uint param_1)

{
  void *pvVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  
                    /* 0x1020  81  _radmalloc@4 */
  if ((param_1 == 0) || (param_1 == 0xffffffff)) {
LAB_3000108f:
    iVar2 = 0;
  }
  else {
    if (DAT_30041418 == (code *)0x0) {
LAB_3000104a:
      pvVar1 = _malloc(param_1 + 0x40);
      if (pvVar1 == (void *)0x0) goto LAB_3000108f;
      cVar4 = '\0';
    }
    else {
      pvVar1 = (void *)(*DAT_30041418)(param_1 + 0x40);
      if (pvVar1 == (void *)0x0) goto LAB_3000104a;
      if (pvVar1 == (void *)0xffffffff) goto LAB_3000108f;
      cVar4 = '\x03';
    }
    bVar3 = 0x40 - ((byte)pvVar1 & 0x1f);
    param_1 = (uint)bVar3;
    iVar2 = (int)pvVar1 + param_1;
    *(byte *)(iVar2 + -1) = bVar3;
    *(char *)(iVar2 + -2) = cVar4;
    if (cVar4 == '\x03') {
      *(undefined4 *)(iVar2 + -8) = DAT_3004141c;
      return iVar2;
    }
  }
  return iVar2;
}



/* === radfree @ 0x300010a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: radfree @ 0x300010A0 */



/* __stdcall radfree,4 */

void radfree(int param_1)

{
                    /* 0x10a0  80  _radfree@4 */
  if (param_1 != 0) {
    if (*(char *)(param_1 + -2) == '\x03') {
      (**(code **)(param_1 + -8))(param_1 - (uint)*(byte *)(param_1 + -1));
      return;
    }
    FUN_3002b909((undefined *)(param_1 - (uint)*(byte *)(param_1 + -1)));
  }
  return;
}



/* === FUN_300010d0 @ 0x300010d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300010d0 @ 0x300010D0 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_300010d0(HMODULE param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  CHAR local_100 [128];
  CHAR local_80 [128];
  
  if (param_2 != 1) {
    return 1;
  }
  _DAT_3004f3e8 = param_1;
  GetModuleFileNameA(param_1,local_100,0x7f);
  uVar4 = 0xffffffff;
  pcVar5 = local_100;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  do {
    uVar2 = uVar4;
    if ((uVar2 - 1 == 0) || (local_100[uVar2 - 1] == '\\')) break;
    uVar4 = uVar2 - 1;
  } while (local_100[uVar2 - 1] != ':');
  local_100[uVar2 - 1] = '\0';
  GetWindowsDirectoryA(local_80,0x7f);
  iVar3 = __strcmpi(local_100,local_80);
  if (iVar3 != 0) {
    GetSystemDirectoryA(local_80,0x7f);
    iVar3 = __strcmpi(local_100,local_80);
    if (iVar3 != 0) {
      return 1;
    }
  }
  MessageBoxA((HWND)0x0,
              "The BinkW32.DLL file is incorrectly installed in the Windows or Windows system directory."
              ,"Bink Error",0x10);
  return 0;
}



/* === _BinkBufferSetDirectDraw@8 @ 0x300011b0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferSetDirectDraw@8 @ 0x300011B0 */



undefined4 _BinkBufferSetDirectDraw_8(int param_1,int param_2)

{
                    /* 0x11b0  9  _BinkBufferSetDirectDraw@8 */
  if ((param_1 != 0) && (param_2 != 0)) {
    DAT_30041638 = param_1;
    DAT_3004163c = param_2;
    DAT_30041634 = 0x8000000;
    FUN_30001200();
    return 1;
  }
  DAT_30041638 = 0;
  DAT_3004163c = 0;
  DAT_30041634 = 0;
  return 1;
}



/* === FUN_30001200 @ 0x30001200 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30001200 @ 0x30001200 */



void FUN_30001200(void)

{
  HDC hdc;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_EBX;
  uint unaff_ESI;
  uint *puVar5;
  undefined4 *puVar6;
  uint uStack_158;
  uint local_13c [79];
  
  puVar5 = local_13c;
  for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_13c[0] = 0x13c;
  (**(code **)(*DAT_30041638 + 0x2c))(DAT_30041638,local_13c,0);
  if ((local_13c[1] & 0x800000) != 0) {
    DAT_3004165c = DAT_3004165c | 0xc0000000;
  }
  if ((local_13c[1] & 0x1000000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x80000000;
  }
  if ((local_13c[1] & 0x80000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x30000000;
  }
  if ((local_13c[1] & 0x100000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x20000000;
  }
  if ((local_13c[1] & 0x2000000) != 0) {
    DAT_3004165c = DAT_3004165c | 0xc000000;
  }
  if ((local_13c[1] & 0x4000000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x8000000;
  }
  if ((local_13c[1] & 0x200000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x3000000;
  }
  if ((local_13c[1] & 0x400000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x2000000;
  }
  if ((local_13c[1] & 0x4000) != 0) {
    DAT_30041660 = DAT_30041660 | 0xc0000000;
  }
  if ((local_13c[1] & 0x8000) != 0) {
    DAT_30041660 = DAT_30041660 | 0x80000000;
  }
  if ((local_13c[1] & 0x400) != 0) {
    DAT_30041660 = DAT_30041660 | 0x30000000;
  }
  if ((local_13c[1] & 0x800) != 0) {
    DAT_30041660 = DAT_30041660 | 0x20000000;
  }
  if ((local_13c[1] & 0x10000) != 0) {
    DAT_30041660 = DAT_30041660 | 0xc000000;
  }
  if ((local_13c[1] & 0x20000) != 0) {
    DAT_30041660 = DAT_30041660 | 0x8000000;
  }
  if ((local_13c[1] & 0x1000) != 0) {
    DAT_30041660 = DAT_30041660 | 0x3000000;
  }
  if ((local_13c[1] & 0x2000) != 0) {
    DAT_30041660 = DAT_30041660 | 0x2000000;
  }
  puVar6 = (undefined4 *)&stack0xfffffe98;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  (**(code **)(*DAT_3004163c + 0x54))(DAT_3004163c,&stack0xfffffe98);
  DAT_3004164c = unaff_ESI >> 3;
  DAT_30041528 = GetSystemMetrics(0);
  DAT_30041524 = GetSystemMetrics(1);
  hdc = GetDC((HWND)0x0);
  iVar4 = GetDeviceCaps(hdc,0xe);
  iVar1 = GetDeviceCaps(hdc,0xc);
  DAT_30041650 = iVar4 * iVar1;
  ReleaseDC((HWND)0x0,hdc);
  if (DAT_30041650 == 8) {
    DAT_3004152c = 0xfd;
    return;
  }
  uVar2 = FUN_300013f0(1,uStack_158);
  uVar3 = FUN_300013f0(1,unaff_EBX);
  DAT_3004152c = uVar2 + uVar3;
  return;
}



/* === FUN_300013f0 @ 0x300013f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300013f0 @ 0x300013F0 */



uint __cdecl FUN_300013f0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 1;
  uVar3 = 1;
  uVar1 = 0;
  iVar4 = 0x20;
  do {
    if ((param_2 & uVar2) != 0) {
      if ((param_1 & uVar3) != 0) {
        uVar1 = uVar1 | uVar2;
      }
      uVar3 = uVar3 << 1;
    }
    uVar2 = uVar2 << 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar1;
}



/* === _BinkIsSoftwareCursor@8 @ 0x300014a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkIsSoftwareCursor@8 @ 0x300014A0 */



uint _BinkIsSoftwareCursor_8(HCURSOR param_1)

{
  int iVar1;
  HMODULE hInstance;
  HWND hWnd;
  int iVar2;
  HDC pHVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int unaff_ESI;
  int unaff_EDI;
  int *piVar7;
  undefined1 *color;
  uint uVar8;
  int y;
  HCURSOR hCursor;
  HINSTANCE hInstance_00;
  LONG LStack_e4;
  WNDCLASSA WStack_cc;
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  int iStack_94;
  int local_88 [4];
  undefined4 uStack_78;
  undefined4 uStack_6c;
  int iStack_64;
  int iStack_50;
  tagMSG tStack_38;
  HCURSOR pHStack_14;
  
                    /* 0x14a0  31  _BinkIsSoftwareCursor@8 */
  LStack_e4 = 0x300014b2;
  iVar1 = GetSystemMetrics(0x13);
  if (iVar1 != 0) {
    piVar7 = local_88;
    for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    LStack_e4 = 1;
    hInstance_00 = (HINSTANCE)0x0;
    local_88[0] = 0x6c;
    local_88[1] = 1;
    tStack_38.pt.y = 0x200;
    hCursor = param_1;
    iVar1 = (**(code **)(param_1->unused + 100))(param_1,0,local_88);
    while (iVar1 == -0x7789fe3e) {
      iVar1 = (**(code **)(param_1->unused + 0x6c))(param_1);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = (**(code **)(param_1->unused + 100))(param_1,0,auStack_a0,1,0);
    }
    if (iVar1 == 0) {
      (**(code **)(param_1->unused + 0x80))(param_1,uStack_78);
      WStack_cc.hCursor = pHStack_14;
      if (((DAT_3004166c == pHStack_14) && (DAT_30041670 == local_88[2])) &&
         (DAT_30041674 == iStack_50)) {
        return DAT_30041420;
      }
      hInstance = GetModuleHandleA((LPCSTR)0x0);
      WStack_cc.style = 0x200;
      WStack_cc.lpfnWndProc = (WNDPROC)&LAB_30001420;
      WStack_cc.cbClsExtra = 0;
      WStack_cc.cbWndExtra = 0;
      WStack_cc.hIcon = (HICON)0x0;
      WStack_cc.hbrBackground = (HBRUSH)0x0;
      WStack_cc.lpszMenuName = (LPCSTR)0x0;
      WStack_cc.lpszClassName = "MouseTypeWind";
      WStack_cc.hInstance = hInstance;
      RegisterClassA(&WStack_cc);
      GetCursorPos((LPPOINT)&stack0xffffff24);
      hWnd = CreateWindowExA(8,"MouseTypeWind","",0x90000000,unaff_EDI + -0x10,unaff_ESI + -0x10,
                             0x20,0x20,(HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
      PeekMessageA(&tStack_38,(HWND)0x0,0,0,0);
      LStack_e4 = unaff_EDI;
      ScreenToClient(hWnd,(LPPOINT)&LStack_e4);
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        iVar2 = ShowCursor(0);
      } while (-1 < iVar2);
      pHVar3 = GetDC(hWnd);
      GetPixel(pHVar3,LStack_e4,unaff_ESI);
      ReleaseDC(hWnd,pHVar3);
      SetCursor(pHStack_14);
      do {
        iVar1 = iVar1 + -1;
        iVar2 = ShowCursor(1);
      } while (iVar2 < 0);
      SetCursor(pHStack_14);
      y = 0;
      iVar2 = 1;
      color = auStack_a4;
      (**(code **)(param_1->unused + 100))(param_1,0);
      *(char *)((int)WStack_cc.lpszClassName * (int)hInstance_00 +
               iStack_94 + ((uint)((int)hCursor * iStack_64) >> 3)) = (y != 0) + -1;
      (**(code **)(param_1->unused + 0x80))(param_1,iStack_94);
      do {
        iVar6 = iVar1;
        iVar1 = iVar6 + 1;
        iVar4 = ShowCursor(0);
      } while (-1 < iVar4);
      pHVar3 = GetDC(hWnd);
      puVar5 = (undefined1 *)GetPixel(pHVar3,iVar2,y);
      if (color != puVar5) {
        SetPixel(pHVar3,iVar2,y,(COLORREF)color);
      }
      uVar8 = (uint)(color == puVar5);
      ReleaseDC(hWnd,pHVar3);
      DestroyWindow(hWnd);
      UnregisterClassA("MouseTypeWind",hInstance_00);
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          iVar1 = 1 - (iVar6 + 2);
          do {
            ShowCursor(0);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      else {
        do {
          ShowCursor(1);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      SetCursor(hCursor);
      DAT_30041674 = uStack_6c;
      DAT_3004166c = (HCURSOR)tStack_38.wParam;
      DAT_30041670 = uStack_9c;
      DAT_30041420 = uVar8;
      return uVar8;
    }
  }
  return 0;
}



/* === _BinkCheckCursor@20 @ 0x300017d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkCheckCursor@20 @ 0x300017D0 */



int _BinkCheckCursor_20(HWND param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  tagPOINT local_10;
  tagPOINT local_8;
  
                    /* 0x17d0  15  _BinkCheckCursor@20 */
  iVar2 = 0;
  if (DAT_30041678 == 0) {
    DAT_30041678 = GetSystemMetrics(0xd);
    DAT_30041630 = GetSystemMetrics(0xe);
  }
  local_10.x = param_2;
  local_10.y = param_3;
  if (param_1 != (HWND)0x0) {
    ClientToScreen(param_1,&local_10);
  }
  GetCursorPos(&local_8);
  if ((((local_10.x < DAT_30041678 + local_8.x) && (local_8.x < local_10.x + param_4)) &&
      (local_10.y < DAT_30041630 + local_8.y)) && (local_8.y < local_10.y + param_5)) {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = ShowCursor(0);
    } while (-1 < iVar1);
  }
  return iVar2;
}



/* === _BinkRestoreCursor@4 @ 0x30001880 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkRestoreCursor@4 @ 0x30001880 */



void _BinkRestoreCursor_4(int param_1)

{
  for (; param_1 != 0; param_1 = param_1 + -1) {
    ShowCursor(1);
  }
  return;
}



/* === _BinkBufferSetResolution@12 @ 0x300018b0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferSetResolution@12 @ 0x300018B0 */



void _BinkBufferSetResolution_12(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x18b0  12  _BinkBufferSetResolution@12 */
  DAT_30041640 = param_1;
  DAT_30041644 = param_2;
  DAT_30041648 = param_3;
  return;
}



/* === _BinkBufferCheckWinPos@12 @ 0x300018d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferCheckWinPos@12 @ 0x300018D0 */



void _BinkBufferCheckWinPos_12(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x18d0  2  _BinkBufferCheckWinPos@12 */
  if (param_1 != (int *)0x0) {
    if (param_2 != (int *)0x0) {
      iVar1 = *param_2 + param_1[7];
      if (param_1[0x20] != 0) {
        if (DAT_30041528 < *param_1 + iVar1) {
          iVar1 = DAT_30041528 - *param_1;
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
      }
      if (DAT_3004164c == 4) {
        uVar2 = iVar1 + 1U & 0xfffffffe;
      }
      else if (DAT_3004164c == 3) {
        uVar2 = iVar1 + 7U & 0xfffffff8;
      }
      else {
        uVar2 = iVar1 + 3U & 0xfffffffc;
      }
      *param_2 = uVar2 - param_1[7];
    }
    if (param_3 != (int *)0x0) {
      iVar1 = param_1[8] + *param_3;
      if (param_1[0x20] != 0) {
        if (DAT_30041524 < param_1[1] + iVar1) {
          iVar1 = DAT_30041524 - param_1[1];
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
      }
      *param_3 = iVar1 - param_1[8];
    }
  }
  return;
}



/* === _BinkBufferSetOffset@12 @ 0x30001980 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferSetOffset@12 @ 0x30001980 */



undefined4 _BinkBufferSetOffset_12(int *param_1,int param_2,int param_3)

{
  tagPOINT local_8;
  
                    /* 0x1980  11  _BinkBufferSetOffset@12 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_8.y = 0;
  local_8.x = 0;
  ClientToScreen((HWND)param_1[0x18],&local_8);
  param_1[0x14] = local_8.x + param_2;
  param_1[0x16] = param_2;
  param_1[0x15] = local_8.y + param_3;
  param_1[0x17] = param_3;
  param_1[4] = param_1[4] | 0x80000000;
  FUN_30001a00(param_1,0);
  return 1;
}



/* === FUN_30001a00 @ 0x30001a00 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30001a00 @ 0x30001A00 */



void __cdecl FUN_30001a00(int *param_1,int param_2)

{
  BOOL BVar1;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38 [8];
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[0x19] != 0) {
    BVar1 = IsWindowVisible((HWND)param_1[0x18]);
    if (BVar1 != 0) {
      local_50 = *param_1;
      local_4c = param_1[1];
      local_40 = param_1[0x14];
      local_58 = 0;
      local_54 = 0;
      local_48 = local_40;
      if (local_40 < 1) {
        local_58 = -local_40;
        local_48 = 0;
      }
      local_3c = param_1[0x15];
      local_44 = local_3c;
      if (local_3c < 1) {
        local_44 = 0;
        local_54 = -local_3c;
      }
      local_40 = param_1[0xf] + local_40;
      local_3c = param_1[0x10] + local_3c;
      if (DAT_30041528 < local_40) {
        local_50 = local_50 + (DAT_30041528 - local_40);
        local_40 = DAT_30041528;
      }
      if (DAT_30041524 < local_3c) {
        local_4c = local_4c + (DAT_30041524 - local_3c);
        local_3c = DAT_30041524;
      }
      if ((((local_58 <= local_50) && (local_54 <= local_4c)) && (local_48 <= local_40)) &&
         (local_44 <= local_3c)) {
        if (param_2 == 1) {
          param_1[0x1b] = 0;
        }
        else if (param_2 == 2) {
          param_1[0x1b] = 1;
        }
        local_18 = DAT_3004152c;
        local_14 = DAT_3004152c;
        local_38[0] = 0x38;
        (**(code **)(*(int *)param_1[0x12] + 0x84))
                  ((int *)param_1[0x12],&local_58,DAT_3004163c,&local_48,
                   (-(uint)(param_1[0x1b] != 0) & 0x3e00) + 0x200 | 0x800,local_38);
        return;
      }
    }
    (**(code **)(*(int *)param_1[0x12] + 0x84))((int *)param_1[0x12],0,DAT_3004163c,0,0x200,0);
  }
  return;
}



/* === _BinkBufferOpen@16 @ 0x30001b70 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferOpen@16 @ 0x30001B70 */



uint * _BinkBufferOpen_16(HWND param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  int *piVar2;
  HCURSOR pHVar3;
  int iVar4;
  HDC hdc;
  uint *puVar5;
  int iVar6;
  HCURSOR pHVar7;
  uint uVar8;
  uint uVar9;
  BITMAPINFO *pBVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  uint *puVar14;
  uint uVar15;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_38;
  HDC local_34;
  BITMAPINFO *local_30;
  uint local_28;
  uint local_24;
  uint local_20;
  HBITMAP local_1c;
  void *local_18;
  HGDIOBJ local_14;
  tagRECT tStack_10;
  
                    /* 0x1b70  8  _BinkBufferOpen@16 */
  uVar9 = param_4 & 0xff000000;
  uVar8 = 0;
  pHVar7 = (HCURSOR)0x0;
  local_24 = 0;
  local_38 = 0;
  local_44 = 0;
  local_20 = 0;
  local_50 = 0;
  local_30 = (BITMAPINFO *)0x0;
  local_34 = (HDC)0x0;
  local_18 = (void *)0x0;
  local_1c = (HBITMAP)0x0;
  local_14 = (HGDIOBJ)0x0;
  local_40 = 0;
  local_48 = 0;
  local_28 = 0;
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  local_54 = param_4 & 0x1f;
  if (local_54 == 2) {
    iVar4 = FUN_30002680(param_1,param_4 >> 0x17 & 1);
    if (iVar4 == 0) {
      local_40 = 1;
      FUN_30002400();
    }
    else {
      local_48 = 1;
    }
  }
  else {
    local_40 = 1;
    FUN_30002400();
    if (DAT_30041638 != (int *)0x0) {
      local_4c = local_54;
      if (local_54 != 0) goto LAB_30001dc3;
      local_4c = 1;
      goto LAB_30001dc3;
    }
    if (local_54 != 0) {
      pcVar12 = "DirectDraw is not available";
      puVar11 = &DAT_30041530;
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        puVar11 = puVar11 + 1;
      }
      FUN_30002650();
      return (uint *)0x0;
    }
  }
LAB_30001c71:
  if ((local_48 == 0) &&
     (((DAT_30041638 == (int *)0x0 || (DAT_3004164c == 0)) &&
      (iVar4 = FUN_30002680(param_1,param_4 >> 0x17 & 1), iVar4 != 0)))) {
    local_48 = 1;
  }
  if (1 < (int)DAT_3004164c) {
    hdc = GetDC(param_1);
    local_34 = CreateCompatibleDC(hdc);
    ReleaseDC(param_1,hdc);
    if ((local_34 != (HDC)0x0) &&
       (local_30 = (BITMAPINFO *)radmalloc(0x428), local_30 != (BITMAPINFO *)0x0)) {
      pBVar10 = local_30;
      for (iVar4 = 0x10a; iVar4 != 0; iVar4 = iVar4 + -1) {
        (pBVar10->bmiHeader).biSize = 0;
        pBVar10 = (BITMAPINFO *)&(pBVar10->bmiHeader).biWidth;
      }
      (local_30->bmiHeader).biSize = 0x28;
      uVar8 = (DAT_3004164c * param_2 + 0x1f & 0xffffffe0) / DAT_3004164c;
      (local_30->bmiHeader).biHeight = -param_3;
      (local_30->bmiHeader).biPlanes = 1;
      (local_30->bmiHeader).biWidth = uVar8;
      (local_30->bmiHeader).biBitCount = (short)DAT_3004164c * 8;
      (local_30->bmiHeader).biCompression = -(uint)(DAT_3004164c != 3) & 3;
      uVar8 = FUN_30002cc0(hdc,local_30->bmiColors);
      local_1c = CreateDIBSection(local_34,local_30,0,&local_18,(HANDLE)0x0,0);
      if (local_1c != (HBITMAP)0x0) {
        local_14 = SelectObject(local_34,local_1c);
        param_4 = (local_30->bmiHeader).biWidth * DAT_3004164c + 3 & 0xfffffffc;
        local_54 = 2;
        uVar8 = uVar8 | -(uint)(uVar9 != 0) & 0x8000000;
        local_50 = 0xff000000;
LAB_3000221c:
        puVar5 = (uint *)radmalloc(0xa4);
        puVar14 = puVar5;
        for (iVar4 = 0x29; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        puVar5[1] = param_3;
        *puVar5 = param_2;
        puVar5[0xe] = local_50;
        puVar5[4] = uVar8;
        puVar5[0x12] = (uint)pHVar7;
        puVar5[0x13] = local_28;
        puVar5[0x1c] = local_24;
        puVar5[0x19] = local_38;
        puVar5[0x1a] = local_44;
        puVar5[0x1f] = local_54;
        puVar5[0x20] = local_20;
        puVar5[0x18] = (uint)param_1;
        puVar5[9] = DAT_30041528;
        puVar5[10] = DAT_30041524;
        puVar5[0xb] = DAT_30041650;
        puVar5[0x23] = (uint)local_1c;
        puVar5[0x25] = param_4;
        puVar5[0x24] = (uint)local_18;
        puVar5[0x28] = (uint)local_14;
        puVar5[0x26] = (uint)local_30;
        puVar5[0x27] = (uint)local_34;
        puVar5[0x21] = local_40;
        puVar5[0x22] = local_48;
        GetWindowRect(param_1,&tStack_10);
        puVar5[2] = tStack_10.right - tStack_10.left;
        puVar5[3] = tStack_10.bottom - tStack_10.top;
        puVar5[7] = tStack_10.left;
        puVar5[8] = tStack_10.top;
        tStack_10.left = 0;
        tStack_10.top = 0;
        ClientToScreen(param_1,(LPPOINT)&tStack_10);
        puVar5[7] = tStack_10.left - puVar5[7];
        puVar5[8] = tStack_10.top - puVar5[8];
        GetClientRect(param_1,&tStack_10);
        puVar5[0xc] = puVar5[2] - tStack_10.right;
        puVar5[0xd] = puVar5[3] - tStack_10.bottom;
        puVar5[2] = puVar5[0xc] + *puVar5;
        puVar5[3] = (puVar5[3] - tStack_10.bottom) + puVar5[1];
        _BinkBufferSetOffset_12((int *)puVar5,0,0);
        _BinkBufferSetScale_12(puVar5,*puVar5,puVar5[1]);
        piVar2 = (int *)puVar5[0x13];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x20))(piVar2,0,param_1);
        }
        return puVar5;
      }
      DeleteDC(local_34);
      radfree((int)local_30);
    }
  }
  if (local_54 == 0) {
    local_4c = 3;
LAB_30001dc3:
    iVar4 = local_4c - 1;
LAB_30001dca:
    switch(iVar4) {
    case 0:
      if ((uVar9 == 0) &&
         (uVar8 = _BinkDDSurfaceType_4(&DAT_3004163c->unused), pHVar3 = DAT_3004163c, uVar8 != 0)) {
        if (uVar8 == 0xffffffff) {
LAB_30001f0f:
          pcVar12 = "Video mode not supported.";
          puVar11 = &DAT_30041530;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = *(undefined2 *)pcVar12;
        }
        else {
          uVar8 = uVar8 | 0x4000000;
          local_20 = 1;
          GetClassLongA(param_1,-0xc);
          local_24 = _BinkIsSoftwareCursor_8(pHVar3);
          pHVar7 = pHVar3;
          local_54 = local_4c;
        }
      }
      break;
    case 2:
      if (((DAT_3004165c & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_300028e0((int *)0x32315659,param_2,param_3), pHVar7 != (HCURSOR)0x0)
         ) {
        local_38 = 1;
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        uVar8 = uVar8 | 0x4000000;
        local_50 = DAT_3004165c;
        local_54 = local_4c;
      }
      break;
    case 3:
      if (((DAT_3004165c & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_300028e0((int *)0x32595559,param_2,param_3), pHVar7 != (HCURSOR)0x0)
         ) {
        local_38 = 1;
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        uVar8 = uVar8 | 0x4000000;
        local_50 = DAT_3004165c;
        local_54 = local_4c;
      }
      break;
    case 4:
      if (((DAT_3004165c & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_300028e0((int *)0x59565955,param_2,param_3), pHVar7 != (HCURSOR)0x0)
         ) {
        local_38 = 1;
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        uVar8 = uVar8 | 0x4000000;
        local_50 = DAT_3004165c;
        local_54 = local_4c;
      }
      break;
    case 5:
      if (((DAT_30041660 & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_30002bc0(0x32315659,param_2,param_3), pHVar7 != (HCURSOR)0x0)) {
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        uVar8 = uVar8 | -(uint)(uVar9 != 0) & 0x8000000;
        local_50 = DAT_30041660;
LAB_30002006:
        local_44 = 1;
        DAT_30041660 = local_50;
        local_54 = local_4c;
      }
      break;
    case 6:
      if (((DAT_30041660 & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_30002bc0(0x32595559,param_2,param_3), pHVar7 != (HCURSOR)0x0)) {
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
LAB_30001feb:
        uVar8 = uVar8 | -(uint)(uVar9 != 0) & 0x8000000;
        local_50 = DAT_30041660;
        goto LAB_30002006;
      }
      break;
    case 7:
      if (((DAT_30041660 & uVar9) == uVar9) &&
         (pHVar7 = (HCURSOR)FUN_30002bc0(0x59565955,param_2,param_3), pHVar7 != (HCURSOR)0x0)) {
        uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
        local_50 = DAT_30041660;
        uVar8 = uVar8 | -(uint)(uVar9 != 0) & 0x8000000;
        goto LAB_30002006;
      }
      break;
    case 8:
      if ((DAT_30041660 & uVar9) == uVar9) {
        uVar15 = 0;
LAB_300020d7:
        pHVar7 = (HCURSOR)FUN_30002bc0(uVar15,param_2,param_3);
        if (pHVar7 != (HCURSOR)0x0) {
          uVar8 = _BinkDDSurfaceType_4((int *)pHVar7);
          if (uVar8 != 0) {
            if (uVar8 == 0xffffffff) {
              (**(code **)(pHVar7->unused + 8))(pHVar7);
              pHVar7 = (HCURSOR)0x0;
              goto LAB_30001f0f;
            }
            goto LAB_30001feb;
          }
          (**(code **)(pHVar7->unused + 8))(pHVar7);
          pHVar7 = (HCURSOR)0x0;
        }
      }
      break;
    case 9:
      if ((DAT_30041660 & uVar9) == uVar9) {
        uVar15 = 1;
        goto LAB_300020d7;
      }
    }
    if (local_54 != 0) {
      if (pHVar7 != (HCURSOR)0x0) {
        (**(code **)(*DAT_30041638 + 0x10))(DAT_30041638,0,&local_28,0);
        goto LAB_3000221c;
      }
      if ((char)DAT_30041530 == '\0') goto LAB_30002125;
      goto joined_r0x30002163;
    }
    local_4c = local_4c + 1;
    iVar4 = iVar4 + 1;
    DAT_30041530._0_1_ = '\0';
    if (iVar4 != 1) goto code_r0x30002038;
    goto LAB_30001c71;
  }
  pcVar12 = "256 color mode not supported.";
  if (1 < (int)DAT_3004164c) {
    pcVar12 = "Unable to create DIBSection.";
  }
  uVar8 = 0xffffffff;
  do {
    pcVar13 = pcVar12;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar12 = pcVar13 + -uVar8;
  pcVar13 = (char *)&DAT_30041530;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
joined_r0x30002163:
  if (local_40 != 0) {
    FUN_30002650();
  }
  if (local_48 == 0) {
    return (uint *)0x0;
  }
  FUN_300028b0();
  return (uint *)0x0;
code_r0x30002038:
  if (9 < iVar4) {
LAB_30002125:
    if ((DAT_30041650 == 0) || (pcVar12 = "256 color mode not supported.", 8 < (int)DAT_30041650)) {
      pcVar12 = "No capable blitting style available.";
    }
    uVar8 = 0xffffffff;
    goto code_r0x30002142;
  }
  goto LAB_30001dca;
  while( true ) {
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
    if (cVar1 == '\0') break;
code_r0x30002142:
    pcVar13 = pcVar12;
    if (uVar8 == 0) break;
  }
  uVar8 = ~uVar8;
  pcVar12 = pcVar13 + -uVar8;
  pcVar13 = (char *)&DAT_30041530;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
  goto joined_r0x30002163;
}



/* === FUN_30002400 @ 0x30002400 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002400 @ 0x30002400 */



void FUN_30002400(void)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  int *piVar4;
  int aiStack_84 [2];
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  HWND pHStack_14;
  HWND pHStack_8;
  int iStack_4;
  
  if (DAT_30041634 != 0) {
LAB_300025e1:
    DAT_30041634 = DAT_30041634 + 1;
    return;
  }
  if (DAT_30041658 == 0) {
    uStack_78 = 0x30002420;
    FUN_300025f0();
  }
  if (DAT_30041658 < 0x20) {
    return;
  }
  uStack_78 = 0;
  puStack_7c = &DAT_30041638;
  aiStack_84[1] = 0;
  aiStack_84[0] = 0x3000243c;
  iVar1 = (*DAT_30041654)();
  if (iVar1 != 0) {
    return;
  }
  if ((iStack_4 != 0) && (((DAT_30041640 == 0 || (DAT_30041644 == 0)) || (DAT_30041648 == 0)))) {
    iStack_4 = 0;
  }
  aiStack_84[0] = (-(uint)(iStack_4 != 0) & 9) + 8;
  iVar2 = (**(code **)(*DAT_30041638 + 0x50))(DAT_30041638,pHStack_8);
  iVar1 = DAT_30041648;
  if (iVar2 == 0) {
    do {
      do {
        if (iStack_4 == 0) goto LAB_30002573;
        if (iVar1 == 1) {
          if (DAT_30041648 == 0x10) {
LAB_300024b6:
            DAT_30041648 = 0x20;
          }
          else {
            if (DAT_30041648 == 0x20) {
LAB_300024ff:
              DAT_30041648 = 0x18;
              goto LAB_30002509;
            }
            DAT_30041648 = 0x10;
          }
        }
        else {
          if (iVar1 == 2) {
            if (DAT_30041648 == 0x20) {
              DAT_30041648 = 0x18;
              goto LAB_3000250b;
            }
            if (DAT_30041648 != 0x18) goto LAB_300024b6;
            DAT_30041648 = 0x10;
          }
          else if (iVar1 == 3) {
            if (DAT_30041648 == 0x20) goto LAB_300024ff;
            goto LAB_300024b6;
          }
LAB_30002509:
          iVar1 = 0;
        }
LAB_3000250b:
        iVar2 = (**(code **)(*DAT_30041638 + 0x54))
                          (DAT_30041638,DAT_30041640,DAT_30041644,DAT_30041648);
        iStack_4 = iVar1;
      } while (iVar2 != 0);
      hdc = GetDC(pHStack_8);
      iVar2 = GetDeviceCaps(hdc,0xe);
      iVar3 = GetDeviceCaps(hdc,0xc);
      DAT_30041650 = iVar2 * iVar3;
      ReleaseDC(pHStack_14,hdc);
      pHStack_8 = pHStack_14;
    } while (DAT_30041650 != DAT_30041648);
LAB_30002573:
    DAT_30041648 = 0;
    DAT_30041644 = 0;
    DAT_30041640 = 0;
    piVar4 = aiStack_84;
    for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    aiStack_84[0] = 0x6c;
    aiStack_84[1] = 1;
    iVar1 = (**(code **)(*DAT_30041638 + 0x18))(DAT_30041638,aiStack_84,&DAT_3004163c,0);
    if (iVar1 == 0) {
      FUN_30001200();
      goto LAB_300025e1;
    }
  }
  (**(code **)(*DAT_30041638 + 8))(DAT_30041638);
  return;
}



/* === FUN_300025f0 @ 0x300025f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300025f0 @ 0x300025F0 */



void FUN_300025f0(void)

{
  UINT uMode;
  
  uMode = SetErrorMode(0x8000);
  DAT_30041658 = LoadLibraryA("DDRAW.DLL");
  SetErrorMode(uMode);
  if ((HMODULE)0x1f < DAT_30041658) {
    DAT_30041654 = GetProcAddress(DAT_30041658,"DirectDrawCreate");
    if (DAT_30041654 != (FARPROC)0x0) {
      return;
    }
    FreeLibrary(DAT_30041658);
  }
  DAT_30041658 = (HMODULE)0x1;
  return;
}



/* === FUN_30002650 @ 0x30002650 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002650 @ 0x30002650 */



void FUN_30002650(void)

{
  DAT_30041634 = DAT_30041634 + -1;
  if (DAT_30041634 == 0) {
    (**(code **)(*DAT_3004163c + 8))(DAT_3004163c);
    (**(code **)(*DAT_30041638 + 8))(DAT_30041638);
    DAT_30041638 = (int *)0x0;
    DAT_3004163c = (int *)0x0;
  }
  return;
}



/* === FUN_30002680 @ 0x30002680 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002680 @ 0x30002680 */



undefined4 __cdecl FUN_30002680(HWND param_1,int param_2)

{
  int iVar1;
  HDC pHVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  int local_98;
  undefined1 local_94 [36];
  undefined2 local_70;
  undefined4 local_6c;
  int local_2c;
  int local_28;
  int local_24;
  
  if (DAT_30041634 != 0) {
    return 0;
  }
  pcVar4 = GetDeviceCaps_exref;
  if ((((param_2 != 0) && (DAT_30041640 != 0)) && (DAT_30041644 != 0)) &&
     (pcVar5 = ChangeDisplaySettingsA_exref, iVar3 = DAT_30041648, DAT_30041648 != 0)) {
    do {
      if (iVar3 == 1) {
        if (DAT_30041648 == 0x10) {
LAB_300026f8:
          DAT_30041648 = 0x20;
        }
        else {
          if (DAT_30041648 == 0x20) {
LAB_30002741:
            DAT_30041648 = 0x18;
            goto LAB_3000274b;
          }
          DAT_30041648 = 0x10;
        }
      }
      else {
        if (iVar3 == 2) {
          if (DAT_30041648 == 0x20) {
            DAT_30041648 = 0x18;
            goto LAB_3000274d;
          }
          if (DAT_30041648 != 0x18) goto LAB_300026f8;
          DAT_30041648 = 0x10;
        }
        else if (iVar3 == 3) {
          if (DAT_30041648 == 0x20) goto LAB_30002741;
          goto LAB_300026f8;
        }
LAB_3000274b:
        iVar3 = 0;
      }
LAB_3000274d:
      local_6c = 0x1c0000;
      local_70 = 0x94;
      local_28 = DAT_30041640;
      local_24 = DAT_30041644;
      local_2c = DAT_30041648;
      iVar1 = (*pcVar5)(local_94,4);
      if (iVar1 == 0) {
        DAT_30041664 = 1;
        pHVar2 = GetDC(param_1);
        (*pcVar4)(pHVar2,0xe);
        iVar1 = (*pcVar4)(pHVar2,0xc);
        DAT_30041650 = local_98 * iVar1;
        ReleaseDC(param_1,pHVar2);
        pcVar5 = ChangeDisplaySettingsA_exref;
        pcVar4 = GetDeviceCaps_exref;
        if (DAT_30041650 == DAT_30041648) goto LAB_3000282e;
        ChangeDisplaySettingsA((DEVMODEA *)0x0,4);
        pcVar4 = GetDeviceCaps_exref;
      }
    } while (iVar3 != 0);
    local_6c = 0x180000;
    local_70 = 0x94;
    local_28 = DAT_30041640;
    local_24 = DAT_30041644;
    iVar3 = (*pcVar5)(local_94,4);
    if (iVar3 == 0) {
      DAT_30041664 = 1;
    }
LAB_3000282e:
    DAT_30041648 = 0;
    DAT_30041644 = 0;
    DAT_30041640 = 0;
  }
  DAT_30041528 = GetSystemMetrics(0);
  DAT_30041524 = GetSystemMetrics(1);
  pHVar2 = GetDC(param_1);
  iVar3 = (*pcVar4)(pHVar2,0xe);
  iVar1 = (*pcVar4)(pHVar2,0xc);
  DAT_30041650 = iVar3 * iVar1;
  ReleaseDC(param_1,pHVar2);
  DAT_3004164c = (int)(DAT_30041650 + (DAT_30041650 >> 0x1f & 7U)) >> 3;
  DAT_30041668 = DAT_30041668 + 1;
  return 1;
}



/* === FUN_300028b0 @ 0x300028b0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300028b0 @ 0x300028B0 */



void FUN_300028b0(void)

{
  DAT_30041668 = DAT_30041668 + -1;
  if ((DAT_30041668 == 0) && (DAT_30041664 != 0)) {
    DAT_30041664 = 0;
    ChangeDisplaySettingsA((DEVMODEA *)0x0,4);
  }
  return;
}



/* === FUN_300028e0 @ 0x300028e0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300028e0 @ 0x300028E0 */



undefined4 __cdecl FUN_300028e0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 **ppuVar4;
  uint *puStack_7c;
  undefined4 uStack_78;
  undefined4 *local_6c [2];
  uint local_64;
  uint local_60;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  uint uStack_14;
  int *piStack_8;
  undefined4 local_4;
  
  uVar2 = param_3;
  uVar1 = param_2;
  uStack_78 = 0;
  ppuVar4 = local_6c;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar4 = (undefined4 *)0x0;
    ppuVar4 = ppuVar4 + 1;
  }
  puStack_7c = &param_2;
  local_1c = param_1;
  local_6c[0] = (undefined4 *)0x6c;
  local_6c[1] = (undefined4 *)0x1007;
  local_4 = 0x4080;
  local_60 = param_2;
  local_64 = param_3;
  local_24 = 0x20;
  local_20 = 4;
  iVar3 = (**(code **)(*DAT_30041638 + 0x18))(DAT_30041638);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = (**(code **)(*piStack_8 + 100))(piStack_8,0,&puStack_7c,1,0);
  if (iVar3 != 0) {
    (**(code **)(*local_1c + 8))(local_1c);
    return 0;
  }
  FUN_300029d0(local_6c[0],uStack_14,(uint)local_6c,uVar1,uVar2);
  (**(code **)(*local_1c + 0x80))(local_1c,local_6c[0]);
  return local_24;
}



/* === FUN_300029d0 @ 0x300029d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300029d0 @ 0x300029D0 */



void __cdecl FUN_300029d0(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_4;
  switch(param_2 & 0xf) {
  case 0:
    uVar3 = DAT_3004164c * param_4;
    if (param_5 != 0) {
      do {
        puVar4 = param_1;
        for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + param_3);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
      return;
    }
    break;
  case 1:
  case 3:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    uVar3 = DAT_3004164c * param_4;
    if (param_5 != 0) {
      do {
        puVar4 = param_1;
        for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + param_3);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
      return;
    }
    break;
  case 0xd:
    for (; param_5 != 0; param_5 = param_5 - 1) {
      puVar4 = param_1;
      for (uVar3 = param_4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0x80008000;
        puVar4 = puVar4 + 1;
      }
      for (uVar3 = param_4 & 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined2 *)puVar4 = 0x8000;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
      param_1 = (undefined4 *)((int)param_1 + param_3);
    }
    break;
  case 0xe:
    if (param_5 != 0) {
      do {
        puVar4 = param_1;
        for (uVar3 = param_4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0x800080;
          puVar4 = puVar4 + 1;
        }
        for (uVar3 = param_4 & 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined2 *)puVar4 = 0x80;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
        }
        param_1 = (undefined4 *)((int)param_1 + param_3);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
      return;
    }
    break;
  case 0xf:
    if (param_5 != 0) {
      param_4 = param_5;
      do {
        puVar4 = param_1;
        for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = 0x10101010;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = 0x10;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + param_3);
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    param_5 = param_5 >> 1;
    for (uVar1 = param_5; uVar1 != 0; uVar1 = uVar1 - 1) {
      puVar4 = param_1;
      for (uVar2 = uVar3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0x80808080;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = uVar3 >> 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = 0x80;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + (param_3 >> 1));
    }
    if (param_5 != 0) {
      do {
        puVar4 = param_1;
        for (uVar1 = uVar3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = 0x80808080;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = uVar3 >> 1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = 0x80;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + (param_3 >> 1));
        param_5 = param_5 - 1;
      } while (param_5 != 0);
      return;
    }
  }
  return;
}



/* === FUN_30002bc0 @ 0x30002bc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002bc0 @ 0x30002BC0 */



undefined4 __cdecl FUN_30002bc0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 **ppuVar4;
  uint *puStack_7c;
  undefined4 uStack_78;
  undefined4 *local_6c [2];
  uint local_64;
  uint local_60;
  undefined4 uStack_28;
  undefined4 local_24;
  int *local_20;
  uint local_1c;
  uint uStack_14;
  int *piStack_c;
  uint local_4;
  
  uVar2 = param_3;
  uVar1 = param_2;
  ppuVar4 = local_6c;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar4 = (undefined4 *)0x0;
    ppuVar4 = ppuVar4 + 1;
  }
  local_4 = (-(uint)(param_1 != 1) & 0x3800) + 0x800 | 0x40;
  local_6c[0] = (undefined4 *)0x6c;
  local_6c[1] = (undefined4 *)0x7;
  local_60 = param_2;
  local_64 = param_3;
  if (0x10 < param_1) {
    local_6c[1] = (undefined4 *)0x1007;
    local_24 = 0x20;
    local_20 = (int *)0x4;
    local_1c = param_1;
  }
  uStack_78 = 0;
  puStack_7c = &param_1;
  iVar3 = (**(code **)(*DAT_30041638 + 0x18))(DAT_30041638);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = (**(code **)(*piStack_c + 100))(piStack_c,0,&puStack_7c,1,0);
  if (iVar3 != 0) {
    (**(code **)(*local_20 + 8))(local_20);
    return 0;
  }
  FUN_300029d0(local_6c[0],uStack_14,(uint)local_6c,uVar1,uVar2);
  (**(code **)(*local_20 + 0x80))(local_20,local_6c[0]);
  return uStack_28;
}



/* === FUN_30002cc0 @ 0x30002cc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002cc0 @ 0x30002CC0 */



int __cdecl FUN_30002cc0(HDC param_1,undefined4 *param_2)

{
  HBITMAP hbm;
  int iVar1;
  tagBITMAPINFO *ptVar2;
  tagBITMAPINFO local_428 [24];
  
  if (2 < DAT_3004164c) {
    *param_2 = 0xff0000;
    param_2[1] = 0xff00;
    param_2[2] = 0xff;
    return ((DAT_3004164c != 3) - 1 & 0xfffffffe) + 3;
  }
  ptVar2 = local_428;
  for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
    (ptVar2->bmiHeader).biSize = 0;
    ptVar2 = (tagBITMAPINFO *)&(ptVar2->bmiHeader).biWidth;
  }
  local_428[0].bmiHeader.biSize = 0x28;
  hbm = CreateCompatibleBitmap(param_1,1,1);
  if (hbm != (HBITMAP)0x0) {
    GetDIBits(param_1,hbm,0,1,(LPVOID)0x0,local_428,0);
    GetDIBits(param_1,hbm,0,1,(LPVOID)0x0,local_428,0);
    DeleteObject(hbm);
    if ((local_428[0].bmiHeader.biCompression == 3) &&
       (local_428[0].bmiColors[0] == (RGBQUAD)0xf800)) {
      *param_2 = 0xf800;
      param_2[1] = 0x7e0;
      param_2[2] = 0x1f;
      return 10;
    }
  }
  *param_2 = 0x7c00;
  param_2[1] = 0x3e0;
  param_2[2] = 0x1f;
  return 9;
}



/* === _BinkBufferClose@4 @ 0x30002dd0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferClose@4 @ 0x30002DD0 */



void _BinkBufferClose_4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x2dd0  4  _BinkBufferClose@4 */
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_1[0x19] == 0) {
      if (param_1[0x1a] != 0) {
        (**(code **)(*(int *)param_1[0x12] + 8))((int *)param_1[0x12]);
      }
    }
    else {
      (**(code **)(*(int *)param_1[0x12] + 0x84))((int *)param_1[0x12],0,DAT_3004163c,0,0x200,0);
      (**(code **)(*(int *)param_1[0x12] + 8))((int *)param_1[0x12]);
    }
    if ((HDC)param_1[0x27] != (HDC)0x0) {
      SelectObject((HDC)param_1[0x27],(HGDIOBJ)param_1[0x28]);
      DeleteObject((HGDIOBJ)param_1[0x23]);
      DeleteDC((HDC)param_1[0x27]);
      radfree(param_1[0x26]);
    }
    if (param_1[0x21] != 0) {
      FUN_30002650();
    }
    if (param_1[0x22] != 0) {
      FUN_300028b0();
    }
    piVar2 = param_1;
    for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    radfree((int)param_1);
  }
  return;
}



/* === _BinkBufferLock@4 @ 0x30002ea0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferLock@4 @ 0x30002EA0 */



undefined4 _BinkBufferLock_4(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  undefined4 local_6c [4];
  int iStack_5c;
  
                    /* 0x2ea0  7  _BinkBufferLock@4 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_1[0x12] == 0) {
    if (param_1[0x23] != 0) {
      param_1[5] = param_1[0x24];
      param_1[6] = param_1[0x25];
    }
    return 1;
  }
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[0] = 0x6c;
  if (param_1[0x1c] != 0) {
    iVar1 = _BinkCheckCursor_20((HWND)0x0,param_1[0x14],param_1[0x15],*param_1,param_1[1]);
    param_1[0x1d] = iVar1;
  }
  iVar1 = (**(code **)(*(int *)param_1[0x12] + 100))((int *)param_1[0x12]);
  while (iVar1 != 0) {
    param_1[4] = param_1[4] | 0x80000000;
    iVar1 = (**(code **)(*(int *)param_1[0x12] + 0x6c))((int *)param_1[0x12]);
    if (iVar1 != 0) {
      if (param_1[0x1c] != 0) {
        _BinkRestoreCursor_4(param_1[0x1d]);
      }
      return 0;
    }
    iVar1 = (**(code **)(*(int *)param_1[0x12] + 100))((int *)param_1[0x12],0,&stack0xffffff7c,1,0);
  }
  param_1[0x1e] = iStack_5c;
  if ((param_1[0x19] == 0) && (param_1[0x1a] == 0)) {
    param_1[5] = param_1[0x15] * unaff_ESI + iStack_5c + param_1[0x14] * DAT_3004164c;
    param_1[6] = unaff_ESI;
    return 1;
  }
  param_1[5] = iStack_5c;
  param_1[6] = unaff_ESI;
  return 1;
}



/* === _BinkBufferUnlock@4 @ 0x30002fe0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferUnlock@4 @ 0x30002FE0 */



undefined4 _BinkBufferUnlock_4(int *param_1)

{
  int *piVar1;
  
                    /* 0x2fe0  14  _BinkBufferUnlock@4 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)param_1[0x12];
  if (piVar1 == (int *)0x0) {
    if (param_1[0x23] != 0) {
      param_1[5] = 0;
      param_1[6] = 0;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x80))(piVar1,param_1[0x1e]);
    if (param_1[0x1c] != 0) {
      _BinkRestoreCursor_4(param_1[0x1d]);
    }
    param_1[5] = 0;
    param_1[6] = 0;
    FUN_30001a00(param_1,2);
  }
  param_1[4] = param_1[4] & 0x7fffffff;
  return 1;
}



/* === _BinkBufferBlit@12 @ 0x30003050 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferBlit@12 @ 0x30003050 */



void _BinkBufferBlit_12(uint *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint hDest;
  uint xSrc;
  uint hSrc;
  uint uVar3;
  uint *puVar4;
  undefined4 local_98 [20];
  undefined4 local_48;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  HDC local_c;
  uint local_8;
  
                    /* 0x3050  1  _BinkBufferBlit@12 */
  puVar2 = param_1;
  uVar3 = 0;
  if ((param_1 != (uint *)0x0) && (param_3 != 0)) {
    if (param_1[0x19] != 0) {
      (**(code **)(*DAT_3004163c + 0x70))(DAT_3004163c,param_1[0x13]);
      local_48 = DAT_3004152c;
      local_98[0] = 100;
      if (param_2 != 0) goto LAB_300030c2;
      local_1c = param_1[0x14];
      local_18 = param_1[0x15];
      local_14 = param_1[0xf] + local_1c;
      local_10 = param_1[0x10] + local_18;
      param_3 = 0;
      while( true ) {
        (**(code **)(*DAT_3004163c + 0x14))(DAT_3004163c,&local_1c,0,&local_1c,0x1000400,local_98);
        uVar3 = uVar3 + 1;
        if (param_3 <= uVar3) break;
LAB_300030c2:
        piVar1 = (int *)(uVar3 * 0x10 + param_2);
        local_1c = param_1[0x14] + *piVar1;
        local_18 = piVar1[1] + param_1[0x15];
        local_14 = piVar1[2] + local_1c;
        local_10 = piVar1[3] + local_18;
      }
      (**(code **)(*DAT_3004163c + 0x70))(DAT_3004163c,0);
      return;
    }
    if (param_1[0x1a] != 0) {
      (**(code **)(*DAT_3004163c + 0x70))(DAT_3004163c,param_1[0x13]);
      if (param_2 != 0) goto LAB_30003183;
      local_34 = param_1[0x14];
      local_30 = param_1[0x15];
      local_2c = param_1[0xf] + local_34;
      local_28 = param_1[0x10] + local_30;
      local_14 = *param_1;
      local_10 = param_1[1];
      local_18 = 0;
      local_1c = 0;
      param_3 = 0;
      while( true ) {
        (**(code **)(*DAT_3004163c + 0x14))
                  (DAT_3004163c,&local_34,param_1[0x12],&local_1c,0x1000000,0);
        uVar3 = uVar3 + 1;
        if (param_3 <= uVar3) break;
LAB_30003183:
        puVar2 = (uint *)(uVar3 * 0x10 + param_2);
        local_34 = param_1[0x14] +
                   (int)(((ulonglong)*puVar2 * (ulonglong)param_1[0xf]) / (ulonglong)*param_1);
        local_30 = param_1[0x15] +
                   (int)(((ulonglong)puVar2[1] * (ulonglong)param_1[0x10]) / (ulonglong)param_1[1]);
        local_8 = param_1[0x10];
        local_2c = (int)(((ulonglong)puVar2[2] * (ulonglong)param_1[0xf]) / (ulonglong)*param_1) +
                   local_34;
        local_c = (HDC)puVar2[3];
        local_28 = (int)((ZEXT48(local_c) * (ulonglong)local_8) / (ulonglong)param_1[1]) + local_30;
        local_18 = puVar2[1];
        local_1c = *puVar2;
        local_14 = puVar2[2] + local_1c;
        local_10 = puVar2[3] + local_18;
      }
      (**(code **)(*DAT_3004163c + 0x70))(DAT_3004163c,0);
      return;
    }
    if (param_1[0x23] != 0) {
      local_c = GetDC((HWND)param_1[0x18]);
      SetStretchBltMode(local_c,3);
      param_1 = (uint *)0x0;
      if (param_2 != 0) goto LAB_300032d7;
      local_2c = puVar2[0xf];
      local_30 = puVar2[0x17];
      local_14 = *puVar2;
      uVar3 = puVar2[0x16];
      xSrc = 0;
      hDest = puVar2[0x10];
      hSrc = puVar2[1];
      local_18 = 0;
      param_3 = 0;
      param_1 = (uint *)0x0;
      while( true ) {
        StretchBlt(local_c,uVar3,local_30,local_2c,hDest,(HDC)puVar2[0x27],xSrc,local_18,local_14,
                   hSrc,0xcc0020);
        param_1 = (uint *)((int)param_1 + 1);
        if (param_3 <= param_1) break;
LAB_300032d7:
        puVar4 = (uint *)((int)param_1 * 0x10 + param_2);
        uVar3 = puVar2[0x16] +
                (int)(((ulonglong)*puVar4 * (ulonglong)puVar2[0xf]) / (ulonglong)*puVar2);
        local_30 = puVar2[0x17] +
                   (int)(((ulonglong)puVar4[1] * (ulonglong)puVar2[0x10]) / (ulonglong)puVar2[1]);
        local_2c = (uint)(((ulonglong)puVar4[2] * (ulonglong)puVar2[0xf]) / (ulonglong)*puVar2);
        local_20 = puVar2[1];
        local_24 = puVar2[0x10];
        local_8 = puVar4[3];
        hDest = (uint)(((ulonglong)local_8 * (ulonglong)local_24) / (ulonglong)local_20);
        local_18 = puVar4[1];
        xSrc = *puVar4;
        local_14 = puVar4[2];
        hSrc = puVar4[3];
      }
      ReleaseDC((HWND)puVar2[0x18],local_c);
    }
  }
  return;
}



/* === _BinkBufferSetScale@12 @ 0x300033d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferSetScale@12 @ 0x300033D0 */



bool _BinkBufferSetScale_12(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool local_4;
  
                    /* 0x33d0  13  _BinkBufferSetScale@12 */
  if (param_1 != (uint *)0x0) {
    if (param_2 == 0) {
      param_2 = DAT_30041528;
    }
    if (param_3 == 0) {
      param_3 = DAT_30041524;
    }
    uVar1 = *param_1;
    uVar2 = 0;
    if (param_2 != uVar1) {
      if (param_2 % uVar1 == 0) {
        uVar2 = 0x80000000;
      }
      else if (param_2 != uVar1) {
        if (uVar1 % param_2 == 0) {
          uVar2 = 0x20000000;
        }
        else if (uVar1 < param_2) {
          uVar2 = 0x40000000;
        }
        else if (param_2 < uVar1) {
          uVar2 = 0x10000000;
        }
      }
    }
    bVar3 = (param_1[0xe] & uVar2) == uVar2;
    if (bVar3) {
      param_1[0xf] = param_2;
    }
    uVar1 = param_1[1];
    uVar2 = 0;
    if (param_3 != uVar1) {
      if (param_2 % uVar1 == 0) {
        uVar2 = 0x8000000;
      }
      else if (param_3 != uVar1) {
        if (uVar1 % param_3 == 0) {
          uVar2 = 0x2000000;
        }
        else if (uVar1 < param_3) {
          uVar2 = 0x4000000;
        }
        else if (param_3 < uVar1) {
          uVar2 = 0x1000000;
        }
      }
    }
    local_4 = (param_1[0xe] & uVar2) == uVar2;
    if (local_4) {
      param_1[0x10] = param_3;
    }
    local_4 = local_4 && bVar3;
    param_1[2] = param_1[0xf] + param_1[0xc];
    param_1[3] = param_1[0x10] + param_1[0xd];
    return local_4;
  }
  return false;
}



/* === _BinkBufferSetHWND@8 @ 0x300034e0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferSetHWND@8 @ 0x300034E0 */



undefined4 _BinkBufferSetHWND_8(void)

{
                    /* 0x34e0  10  _BinkBufferSetHWND@8 */
  return 0;
}



/* === _BinkBufferGetDescription@4 @ 0x300034f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferGetDescription@4 @ 0x300034F0 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * _BinkBufferGetDescription_4(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
                    /* 0x34f0  5  _BinkBufferGetDescription@4 */
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 1:
    pcVar2 = "DirectDraw primary surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
    *(char *)((int)puVar4 + 2) = pcVar2[2];
    return &DAT_30041424;
  case 2:
    DAT_30041424 = s_DIB_Section_300332dc._0_4_;
    _DAT_30041428 = s_DIB_Section_300332dc._4_4_;
    _DAT_3004142c = s_DIB_Section_300332dc._8_4_;
    break;
  case 3:
    pcVar2 = "DirectDraw YV12 overlay";
    puVar4 = &DAT_30041424;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    return &DAT_30041424;
  case 4:
    pcVar2 = "DirectDraw YUY2 overlay";
    puVar4 = &DAT_30041424;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    return &DAT_30041424;
  case 5:
    pcVar2 = "DirectDraw UYVY overlay";
    puVar4 = &DAT_30041424;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    return &DAT_30041424;
  case 6:
    pcVar2 = "DirectDraw YV12 off-screen surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
    *(char *)((int)puVar4 + 2) = pcVar2[2];
    return &DAT_30041424;
  case 7:
    pcVar2 = "DirectDraw YUY2 off-screen surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
    *(char *)((int)puVar4 + 2) = pcVar2[2];
    return &DAT_30041424;
  case 8:
    pcVar2 = "DirectDraw UYVY off-screen surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
    *(char *)((int)puVar4 + 2) = pcVar2[2];
    return &DAT_30041424;
  case 9:
    pcVar2 = "DirectDraw RGB off-screen video surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    return &DAT_30041424;
  case 10:
    pcVar2 = "DirectDraw RGB off-screen system surface";
    pcVar3 = (char *)&DAT_30041424;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    *pcVar3 = *pcVar2;
    return &DAT_30041424;
  }
  return &DAT_30041424;
}



/* === _BinkBufferGetError@0 @ 0x30003670 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferGetError@0 @ 0x30003670 */



undefined4 * _BinkBufferGetError_0(void)

{
                    /* 0x3670  6  _BinkBufferGetError@0 */
  return &DAT_30041530;
}



/* === _BinkBufferClear@8 @ 0x30003680 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferClear@8 @ 0x30003680 */



undefined4 _BinkBufferClear_8(uint *param_1)

{
  int iVar1;
  
                    /* 0x3680  3  _BinkBufferClear@8 */
  iVar1 = _BinkBufferLock_4((int *)param_1);
  if (iVar1 != 0) {
    FUN_300029d0((undefined4 *)param_1[5],param_1[4],param_1[6],*param_1,param_1[1]);
    _BinkBufferUnlock_4((int *)param_1);
    return 1;
  }
  return 0;
}



/* === _BinkDDSurfaceType@4 @ 0x300036d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkDDSurfaceType@4 @ 0x300036D0 */



int _BinkDDSurfaceType_4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_20 [4];
  int iStack_10;
  int iStack_c;
  
                    /* 0x36d0  19  _BinkDDSurfaceType@4 */
  if (param_1 == (int *)0x0) {
    return -1;
  }
  piVar2 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_20[0] = 0x20;
  (**(code **)(*param_1 + 0x54))(param_1,local_20);
  if (local_20[0] == 0x59565955) {
    return 0xe;
  }
  if (local_20[0] == 0x32315659) {
    return 0xf;
  }
  if (local_20[0] == 0x32595559) {
    return 0xd;
  }
  if (local_20[1] == 8) {
    return 0;
  }
  if (local_20[1] == 0x18) {
    return (local_20[2] != 0xff0000) + 1;
  }
  if (local_20[1] == 0x20) {
    if (iStack_c != 0) {
      return (local_20[2] != 0xff0000) + 5;
    }
    return (local_20[2] != 0xff0000) + 3;
  }
  if (((local_20[2] == 0xf800) && (local_20[3] == 0x7e0)) && (iStack_10 == 0x1f)) {
    return 10;
  }
  if (iStack_c == 0x8000) {
    if (local_20[2] == 0x7c00) {
      if (local_20[3] != 0x3e0) {
        return -1;
      }
      if (iStack_10 != 0x1f) {
        return -1;
      }
      return 8;
    }
  }
  else if (local_20[2] == 0x7c00) {
    if ((local_20[3] == 0x3e0) && (iStack_10 == 0x1f)) {
      return 9;
    }
    goto LAB_30003869;
  }
  if (local_20[2] == 0xfc00) {
    if (local_20[3] == 0x3e0) {
      if (iStack_10 == 0x1f) {
        return 0xb;
      }
    }
    else if ((local_20[3] == 0x3f0) && (iStack_10 == 0xf)) {
      return 0xc;
    }
  }
LAB_30003869:
  if ((((iStack_c == 0xf000) && (local_20[2] == 0xf00)) && (local_20[3] == 0xf0)) &&
     (iStack_10 == 0xf)) {
    return 7;
  }
  return -1;
}



/* === FUN_300038a0 @ 0x300038a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300038a0 @ 0x300038A0 */



void FUN_300038a0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + 0xfU & 0xfffffff0) +
          (((DAT_30041b80 >> 5) - (param_2 + 0xfU >> 5 & 0x1f)) + 1 & 0x1f) * 0x20;
  DAT_30041b80 = DAT_30041b80 + iVar1;
  (&DAT_3004167c)[DAT_30041b84] = iVar1;
  (&DAT_3004187c)[DAT_30041b84] = param_1;
  DAT_30041b84 = DAT_30041b84 + 1;
  return;
}



/* === FUN_30003900 @ 0x30003900 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30003900 @ 0x30003900 */



void FUN_30003900(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  iVar1 = radmalloc(DAT_30041b80 + uVar2);
  DAT_30041b80 = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 + uVar2;
    uVar2 = 0;
    if (DAT_30041b84 != 0) {
      do {
        *(int *)(&DAT_3004187c)[uVar2] = iVar1;
        iVar1 = iVar1 + (&DAT_3004167c)[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_30041b84);
    }
  }
  DAT_30041b84 = 0;
  return;
}



/* === _BinkSetError@4 @ 0x30003960 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetError@4 @ 0x30003960 */



void _BinkSetError_4(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
                    /* 0x3960  42  _BinkSetError@4 */
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = &DAT_30041a80;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return;
}



/* === _BinkGetError@0 @ 0x30003990 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetError@0 @ 0x30003990 */



undefined1 * _BinkGetError_0(void)

{
                    /* 0x3990  21  _BinkGetError@0 */
  return &DAT_30041a80;
}



/* === _BinkSetSoundSystem@8 @ 0x300039a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetSoundSystem@8 @ 0x300039A0 */



bool _BinkSetSoundSystem_8(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  
                    /* 0x39a0  49  _BinkSetSoundSystem@8 */
  if (param_1 == (undefined *)0x0) {
    return false;
  }
  if (DAT_30041b88 != (code *)0x0) {
    if (DAT_30041b88 == (code *)param_1) goto LAB_300039ca;
    if (DAT_30041b90 != 0) {
      return false;
    }
  }
  DAT_30041b88 = (code *)param_1;
LAB_300039ca:
  iVar1 = (*DAT_30041b88)(param_2);
  if (iVar1 != 0) {
    DAT_30041b8c = iVar1;
  }
  return DAT_30041b8c != 0;
}



/* === _BinkSetFrameRate@8 @ 0x300039f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetFrameRate@8 @ 0x300039F0 */



void _BinkSetFrameRate_8(undefined4 param_1,undefined4 param_2)

{
                    /* 0x39f0  43  _BinkSetFrameRate@8 */
  DAT_3003a030 = param_1;
  DAT_30041a7c = param_2;
  return;
}



/* === _BinkSetIOSize@4 @ 0x30003a10 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetIOSize@4 @ 0x30003A10 */



void _BinkSetIOSize_4(undefined4 param_1)

{
                    /* 0x3a10  45  _BinkSetIOSize@4 */
  DAT_3003a034 = param_1;
  return;
}



/* === _BinkSetIO@4 @ 0x30003a20 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetIO@4 @ 0x30003A20 */



void _BinkSetIO_4(undefined4 param_1)

{
                    /* 0x3a20  44  _BinkSetIO@4 */
  DAT_30041b94 = param_1;
  return;
}



/* === _BinkSetSimulate@4 @ 0x30003a30 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetSimulate@4 @ 0x30003A30 */



void _BinkSetSimulate_4(undefined4 param_1)

{
                    /* 0x3a30  47  _BinkSetSimulate@4 */
  DAT_3003a038 = param_1;
  return;
}



/* === _BinkSetSoundTrack@4 @ 0x30003a40 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetSoundTrack@4 @ 0x30003A40 */



void _BinkSetSoundTrack_4(undefined4 param_1)

{
                    /* 0x3a40  50  _BinkSetSoundTrack@4 */
  DAT_3003a03c = param_1;
  return;
}



/* === _BinkOpen@8 @ 0x30003a50 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkOpen@8 @ 0x30003A50 */



int * _BinkOpen_8(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  int *piVar10;
  undefined8 uVar11;
  int local_3e0 [5];
  int local_3cc;
  uint local_3c8;
  uint local_3c0;
  uint local_3bc;
  undefined4 local_3b8;
  int local_324;
  uint local_314;
  int local_310;
  uint local_30c;
  uint local_308;
  undefined1 local_304 [4];
  uint local_300;
  uint local_2fc;
  undefined4 local_2f8;
  int local_2f4;
  int local_2f0;
  undefined1 local_2d4 [4];
  code *local_2d0 [5];
  code *local_2bc;
  int local_1fc;
  int local_1f8;
  undefined1 local_1f0 [4];
  undefined1 local_1ec [4];
  undefined1 local_1e8 [80];
  undefined4 local_198;
  int local_194;
  uint local_190;
  uint local_188;
  int local_184;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [264];
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  piVar2 = local_3e0;
                    /* 0x3a50  34  _BinkOpen@8 */
  for (iVar7 = 0xe9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  uVar11 = _RADTimerRead_0();
  local_198 = (undefined4)uVar11;
  local_10 = param_2 & 0x4000000;
  DAT_30041a80 = '\0';
  if (local_10 == 0) {
    pcVar9 = FUN_3000b750;
    if (((param_2 & 0x2000000) != 0) && (DAT_30041b94 != (code *)0x0)) {
      pcVar9 = DAT_30041b94;
    }
    DAT_30041b94 = (code *)0x0;
    iVar7 = (*pcVar9)(local_2d0,param_1,param_2);
    if (iVar7 == 0) {
      if (DAT_30041a80 == '\0') {
        _BinkSetError_4("Error opening file.");
      }
      return (int *)0x0;
    }
    (*local_2d0[0])(local_2d0,0,local_3c,0x2c);
  }
  else {
    piVar2 = param_1;
    piVar8 = local_3c;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar8 = piVar8 + 1;
    }
  }
  if ((((local_3c[0] != 0x664b4942) && (local_3c[0] != 0x674b4942)) && (local_3c[0] != 0x684b4942))
     && (local_3c[0] != 0x694b4942)) {
    _BinkSetError_4("Not a Bink file.");
    goto LAB_30004208;
  }
  if (local_3c[2] == 0) {
    _BinkSetError_4("The file doesn\'t contain any compressed frames yet.");
    goto LAB_30004208;
  }
  uVar1 = (local_28 + 1U >> 1) + 7;
  local_30c = uVar1 & 0xfffffff8;
  local_308 = (local_24 + 1U >> 1) + 7 & 0xfffffff8;
  local_314 = local_30c * 2;
  local_310 = local_308 * 2;
  local_300 = (uVar1 & 0x7ffffff8) >> 3;
  local_3c0 = param_2 & 0x8fffffff;
  local_3e0[0] = local_28;
  local_3e0[1] = local_24;
  local_1fc = local_28;
  local_1f8 = local_24;
  local_3bc = local_18;
  if ((local_18 & 0x100000) == 0) {
    local_3c0 = param_2 & 0x8fefffff;
  }
  local_3c0 = local_18 & 0x20000 | local_3c0;
  uVar1 = param_2 & 0x70000000;
  if (uVar1 != 0x70000000) {
    if (uVar1 == 0) {
      uVar1 = local_18 & 0x70000000;
    }
    local_3c0 = local_3c0 | uVar1;
    if (uVar1 < 0x30000001) {
      if (uVar1 == 0x30000000) {
        local_3e0[0] = local_28 * 2;
      }
      else if ((uVar1 == 0x10000000) || (uVar1 == 0x20000000)) goto LAB_30003c3d;
    }
    else if ((uVar1 == 0x40000000) || (uVar1 == 0x50000000)) {
      local_3e0[0] = local_28 * 2;
LAB_30003c3d:
      local_3e0[1] = local_24 * 2;
    }
  }
  if ((local_3c[0] == 0x664b4942) || (local_3c[0] == 0x674b4942)) {
    local_3c0 = local_3c0 | 0x18000;
  }
  else if (local_3c[0] == 0x684b4942) {
    local_3c0 = local_3c0 | 0x8000;
  }
  local_3e0[2] = local_3c[2];
  local_2f4 = local_2c;
  if (((param_2 & 0x1000) == 0) || (DAT_3003a030 == -1)) {
    local_3cc = local_20;
    local_3c8 = local_1c;
  }
  else {
    local_3cc = DAT_3003a030;
    local_3c8 = DAT_30041a7c;
    DAT_3003a030 = -1;
  }
  local_3b8 = local_3c[1];
  local_2f0 = local_14;
  local_2f8 = local_3c[3];
  local_194 = local_20;
  local_188 = ((local_1c >> 1) + local_20) / local_1c;
  local_2fc = local_300 * local_310 >> 4;
  local_190 = local_1c;
  if (local_188 == 0) {
    local_188 = 1;
  }
  local_184 = local_188 * 4 + -4;
  FUN_300038a0(local_304,local_2fc + 0x10);
  FUN_300038a0(local_180,local_188 * 4);
  FUN_300038a0(local_17c,local_188 * 4);
  FUN_300038a0(local_178,local_188 * 4);
  FUN_300038a0(local_174,local_188 * 4);
  FUN_300038a0(local_170,local_188 * 4);
  FUN_300038a0(local_16c,local_188 * 4);
  FUN_300038a0(local_168,local_188 * 4);
  FUN_30008830(&local_60,local_314);
  FUN_300038a0(&local_60,local_60);
  FUN_300038a0(&local_5c,local_5c);
  FUN_300038a0(&local_58,local_58);
  FUN_300038a0(&local_54,local_54);
  FUN_300038a0(&local_50,local_50);
  FUN_300038a0(&local_4c,local_4c);
  FUN_300038a0(&local_48,local_48);
  FUN_300038a0(&local_44,local_44);
  FUN_300038a0(&local_40,local_40);
  if (local_10 == 0) {
    FUN_300038a0(local_2d4,local_2f4 * 4 + 4);
    FUN_300038a0(local_1f0,local_2f0 * 4);
    FUN_300038a0(local_1ec,local_2f0 * 4);
    FUN_300038a0(local_1e8,local_2f0 * 4);
  }
  piVar2 = (int *)FUN_30004620((int)local_3e0,0x3a4);
  if (piVar2 != (int *)0x0) {
    piVar8 = local_3e0;
    piVar10 = piVar2;
    for (iVar7 = 0xe9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar10 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    }
    piVar2[0x4a] = (int)piVar2;
    *(undefined4 *)piVar2[0x99] = 0;
    *(undefined4 *)piVar2[0x9a] = 0;
    *(undefined4 *)piVar2[0x9b] = 0;
    *(undefined4 *)piVar2[0x9c] = 0;
    *(undefined4 *)piVar2[0x9d] = 0;
    *(undefined4 *)piVar2[0x9e] = 0;
    if (local_10 == 0) {
      piVar8 = piVar2 + 0x44;
      (*(code *)*piVar8)(piVar8,0xffffffff,piVar2[0x7c],piVar2[0x3c] << 2);
      (*(code *)*piVar8)(piVar8,0xffffffff,piVar2[0x7d],piVar2[0x3c] << 2);
      (*(code *)*piVar8)(piVar8,0xffffffff,piVar2[0x7e],piVar2[0x3c] << 2);
      (*(code *)*piVar8)(piVar8,0xffffffff,piVar2[0x43],piVar2[0x3b] * 4 + 4);
    }
    else {
      piVar2[0x7c] = (int)(param_1 + 0xb);
      piVar2[0x7d] = (int)(param_1 + piVar2[0x3c] + 0xb);
      piVar2[0x7e] = (int)(param_1 + piVar2[0x3c] * 2 + 0xb);
      piVar2[0x43] = (int)(param_1 + piVar2[0x3c] * 3 + 0xb);
    }
    uVar1 = FUN_30004a50(piVar2[2],(byte *)piVar2[0x43],piVar2[0x96],piVar2 + 0x3e,&local_8);
    piVar2[0x3d] = uVar1;
    if ((piVar2[8] & 0x100000U) == 0) {
LAB_30004078:
      if (local_8 == 0) {
        FUN_300038a0(piVar2 + 0x30,piVar2[0x34] * piVar2[0x33] + piVar2[0x36] * piVar2[0x35] * 2);
      }
    }
    else {
      FUN_300038a0(piVar2 + 0x31,piVar2[0x33] * piVar2[0x34]);
      if (local_8 == 0) {
        FUN_300038a0(piVar2 + 0x32,piVar2[0x33] * piVar2[0x34]);
        goto LAB_30004078;
      }
    }
    iVar7 = FUN_30004620((int)piVar2,piVar2[0x34] * piVar2[0x33] + piVar2[0x36] * piVar2[0x35] * 2);
    piVar2[0x2f] = iVar7;
    if (iVar7 != 0) {
      if (local_8 != 0) {
        piVar2[0x30] = iVar7;
        piVar2[0x32] = piVar2[0x31];
      }
      if (((param_2 & 0x1000000) == 0) || (DAT_3003a034 == -1)) {
        piVar2[0x78] = piVar2[0x3d];
      }
      else {
        piVar2[0x78] = DAT_3003a034;
        DAT_3003a034 = -1;
      }
      if (((param_2 & 0x400000) == 0) || (DAT_3003a038 == 0xffffffff)) {
        local_c = 0;
      }
      else {
        local_c = DAT_3003a038;
        DAT_3003a038 = 0xffffffff;
      }
      uVar1 = local_c;
      if (local_10 != 0) {
        piVar2[0x42] = (*(uint *)piVar2[0x43] & 0xfffffffe) + (int)param_1;
LAB_300042be:
        *(undefined1 *)(piVar2[0x39] + piVar2[0x37]) = 0;
        piVar2[3] = -1;
        if (piVar2[5] == 0) {
          piVar2[0x86] = 2000;
        }
        else {
          local_c = piVar2[6];
          local_10 = 2000;
          piVar2[0x86] = (int)(((ulonglong)local_c * 2000) / (ulonglong)(uint)piVar2[5]);
        }
        piVar2[0x8d] = 1;
        FUN_30004650(piVar2,1);
        uVar11 = _RADTimerRead_0();
        piVar2[0x92] = (int)uVar11 - piVar2[0x92];
        if ((piVar2[0x42] == 0) && ((param_2 & 0x200000) == 0)) {
          iVar7 = (*(code *)piVar2[0x48])(piVar2 + 0x44);
          while (iVar7 != 0) {
            iVar7 = (*(code *)piVar2[0x48])(piVar2 + 0x44);
          }
        }
        iVar7 = piVar2[0x3c];
        if (iVar7 == 0) {
          piVar2[0x7b] = -1;
        }
        else if ((piVar2[8] & 0x4000U) == 0) {
          piVar2[0x7b] = 0;
        }
        else if (DAT_3003a03c == -1) {
          piVar2[0x7b] = -1;
        }
        else {
          iVar3 = 0;
          if (0 < iVar7) {
            piVar8 = (int *)piVar2[0x7e];
            do {
              if (*piVar8 == DAT_3003a03c) break;
              iVar3 = iVar3 + 1;
              piVar8 = piVar8 + 1;
            } while (iVar3 < iVar7);
          }
          if (iVar7 <= iVar3) {
            iVar3 = -1;
          }
          piVar2[0x7b] = iVar3;
        }
        DAT_3003a03c = 0xffffffff;
        if (piVar2[0x7b] != -1) {
          uVar1 = *(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4);
          if (((uVar1 & 0x80000000) != 0) && (DAT_30041b8c != (code *)0x0)) {
            local_c = uVar1 & 0xffff;
            uVar1 = local_c;
            if ((local_3cc != 0) && (local_3c8 != 0)) {
              uVar1 = (uint)(((ulonglong)local_c * (ulonglong)(local_190 * local_3cc)) /
                            (ulonglong)(local_194 * local_3c8));
            }
            uVar4 = *(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4);
            iVar7 = (*DAT_30041b8c)(piVar2 + 0xaa,uVar1,(uVar4 >> 0x1e & 1) * 8 + 8,
                                    (uVar4 >> 0x1d & 1) + 1,piVar2[8],piVar2);
            if (iVar7 != 0) {
              DAT_30041b90 = DAT_30041b90 + 1;
              piVar2[0xa9] = (uint)((*(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4) >> 0x1b & 8) == 0);
              piVar2[0x8c] = 1;
              uVar4 = *(int *)(piVar2[0x7c] + piVar2[0x7b] * 4) + 0xffU & 0xffffff00;
              piVar2[0xa1] = uVar4;
              iVar7 = radmalloc(uVar4);
              piVar2[0xa2] = iVar7;
              piVar2[0xa4] = iVar7;
              piVar2[0xa5] = iVar7;
              piVar2[0xa3] = piVar2[0xa1] + iVar7;
              local_c = ((*(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4) >> 0x1d & 1) + 1) * uVar1 * 2;
              uVar1 = (uint)(((ulonglong)local_c * (ulonglong)(0x2ee - piVar2[0xb5])) / 1000) &
                      0xfffffffc;
              piVar2[0xde] = uVar1;
              if ((uint)piVar2[0xa1] < uVar1) {
                piVar2[0xde] = piVar2[0xa1];
              }
              uVar1 = *(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4);
              puVar5 = FUN_3001ba10(uVar1 & 0xffff,(uVar1 >> 0x1d & 1) + 1,1);
              piVar2[0xa6] = (int)puVar5;
              piVar2[0xa7] = 0;
              piVar2[0xdd] = piVar2[2] - (uint)(piVar2[0x93] * 3) / (uint)(piVar2[0x94] << 2);
            }
          }
          if (piVar2[0x8c] == 0) {
            piVar2[0x7b] = -1;
          }
        }
        if (piVar2[0xb6] == 0) {
          piVar2[0xb6] = 0x10000;
        }
        if ((((piVar2[8] & 0x8000000U) == 0) && (piVar2[0x42] == 0)) || (piVar2[0x7b] != -1)) {
          piVar2[0x95] = 1;
          puVar6 = FUN_3001c100(FUN_30004af0,piVar2,0);
          piVar2[0x40] = (int)puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            piVar2[0x95] = 0;
            _BinkClose_4(piVar2);
            return (int *)0x0;
          }
        }
        return piVar2;
      }
      piVar8 = piVar2 + 0x44;
      uVar4 = (*(code *)piVar2[0x46])(piVar8,piVar2[0x78]);
      piVar2[0x78] = uVar4;
      if ((uint)(piVar2[10] * 9) / 10 <= uVar4) {
        param_2 = param_2 | 0x2000;
        piVar2[8] = piVar2[8] | 0x2000;
      }
      if ((param_2 & 0x2000) == 0) {
        FUN_300038a0(piVar2 + 0x41,piVar2[0x3a]);
        iVar7 = FUN_30004620((int)piVar2,piVar2[0x78]);
        piVar2[0x77] = iVar7;
        if (iVar7 == 0) {
          piVar2[0x78] = 0;
        }
        (*(code *)piVar2[0x47])(piVar8,piVar2[0x77],piVar2[0x78],piVar2[10] + 8,uVar1);
        goto LAB_300042be;
      }
      iVar3 = (piVar2[10] - (*(uint *)piVar2[0x43] & 0xfffffffe)) + 8;
      iVar7 = FUN_30004620((int)piVar2,iVar3);
      piVar2[0x42] = iVar7;
      if (iVar7 != 0) {
        (*(code *)piVar2[0x47])(piVar8,0,0,piVar2[10] + 8,local_c);
        (*(code *)piVar2[0x45])(piVar8,0,*(uint *)piVar2[0x43] & 0xfffffffe,piVar2[0x42],iVar3);
        (*(code *)piVar2[0x49])(piVar8);
        piVar2[0x50] = 0;
        goto LAB_300042be;
      }
      radfree(local_324);
    }
    radfree((int)piVar2);
  }
  _BinkSetError_4("Out of memory.");
LAB_30004208:
  if ((param_2 & 0x4000000) == 0) {
    (*local_2bc)(local_2d0);
  }
  return (int *)0x0;
}



/* === FUN_30004620 @ 0x30004620 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004620 @ 0x30004620 */



void __cdecl FUN_30004620(int param_1,int param_2)

{
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + DAT_30041b80 + param_2;
  FUN_30003900(param_2);
  return;
}



/* === FUN_30004650 @ 0x30004650 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004650 @ 0x30004650 */



void __cdecl FUN_30004650(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    param_2 = param_2 + -1;
  }
  if (param_1[0x7b] != -1) {
    FUN_30004710(param_1);
  }
  param_1[4] = param_1[3];
  if (param_2 == 0) {
    if (param_1[0x8c] != 0) {
      _BinkSetSoundOnOff_8((int)param_1,0);
      _BinkSetSoundOnOff_8((int)param_1,1);
    }
    param_1[0x84] = 0;
  }
  if (param_1[0x42] == 0) {
    uVar1 = *(uint *)(param_1[0x43] + param_2 * 4);
    (*(code *)param_1[0x45])
              (param_1 + 0x44,param_2,uVar1 & 0xfffffffe,param_1[0x41],
               (*(uint *)(param_1[0x43] + 4 + param_2 * 4) & 0xfffffffe) - (uVar1 & 0xfffffffe));
  }
  else {
    param_1[0x41] =
         ((((uint *)param_1[0x43])[param_2] & 0xfffffffe) - (*(uint *)param_1[0x43] & 0xfffffffe)) +
         param_1[0x42];
  }
  if (param_1[0x7b] != -1) {
    FUN_30004710(param_1);
  }
  param_1[3] = param_2 + 1;
  return;
}



/* === FUN_30004710 @ 0x30004710 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004710 @ 0x30004710 */



void FUN_30004710(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  uint local_8;
  
  piVar2 = param_1;
  piVar5 = param_1 + 0xaa;
  if (param_1[0xaa] != 0) {
    piVar1 = param_1 + 0xa8;
    LOCK();
    *(char *)piVar1 = (char)*piVar1 + '\x01';
    UNLOCK();
    if (*piVar1 == 1) {
      param_1 = piVar1;
      iVar3 = (*(code *)*piVar5)(piVar5);
      while (iVar3 != 0) {
        if (((uint)piVar2[0xa7] <= (uint)piVar2[0xb2]) &&
           ((piVar2[3] <= piVar2[0xdd] || (piVar2[0xa7] == 0)))) break;
        if (piVar2[0xb3] != 0) {
          piVar2[0xb3] = 0;
          if ((1 < (uint)piVar2[3]) && (piVar2[3] <= piVar2[0xdd])) {
            uVar8 = _RADTimerRead_0();
            if ((uint)piVar2[0xdf] < (uint)uVar8) {
              piVar2[0xdc] = piVar2[0xdc] + 1;
              FUN_30004970((int)piVar2);
              piVar2[0x84] = 0;
              piVar2[0xdf] = (uint)uVar8 + 0x2ee;
            }
          }
        }
        iVar3 = (*(code *)piVar2[0xab])(piVar2 + 0xaa,&param_1,&local_8);
        if (iVar3 != 0) {
          iVar3 = piVar2[0xa9];
          if (iVar3 != 0) {
            local_8 = local_8 * 2;
          }
          uVar4 = piVar2[0xa7];
          if (uVar4 < local_8) {
            local_8 = uVar4;
          }
          piVar5 = (int *)piVar2[0xa5];
          uVar6 = piVar2[0xa3] - (int)piVar5;
          piVar2[0xa7] = uVar4 - local_8;
          if (uVar6 < local_8) {
            if (uVar6 != 0) {
              if (iVar3 == 0) {
                piVar7 = param_1;
                for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *piVar7 = *piVar5;
                  piVar5 = piVar5 + 1;
                  piVar7 = piVar7 + 1;
                }
                for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *(char *)piVar7 = (char)*piVar5;
                  piVar5 = (int *)((int)piVar5 + 1);
                  piVar7 = (int *)((int)piVar7 + 1);
                }
                param_1 = (int *)((int)param_1 + uVar6);
              }
              else {
                param_1 = (int *)FUN_30004940((char *)param_1,(undefined2 *)piVar5,uVar6);
              }
            }
            if (piVar2[0xa9] == 0) {
              piVar5 = (int *)piVar2[0xa2];
              piVar7 = param_1;
              for (uVar4 = local_8 - uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *piVar7 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar7 = piVar7 + 1;
              }
              for (uVar4 = local_8 - uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(char *)piVar7 = (char)*piVar5;
                piVar5 = (int *)((int)piVar5 + 1);
                piVar7 = (int *)((int)piVar7 + 1);
              }
              iVar3 = piVar2[0xa2] - uVar6;
            }
            else {
              FUN_30004940((char *)param_1,(undefined2 *)piVar2[0xa2],local_8 - uVar6);
              iVar3 = piVar2[0xa2] - uVar6;
            }
          }
          else {
            if (iVar3 == 0) {
              piVar7 = param_1;
              for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *piVar7 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar7 = piVar7 + 1;
              }
              for (uVar4 = local_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(char *)piVar7 = (char)*piVar5;
                piVar5 = (int *)((int)piVar5 + 1);
                piVar7 = (int *)((int)piVar7 + 1);
              }
            }
            else {
              FUN_30004940((char *)param_1,(undefined2 *)piVar5,local_8);
            }
            iVar3 = piVar2[0xa5];
          }
          piVar2[0xa5] = iVar3 + local_8;
          if (piVar2[0xa9] != 0) {
            local_8 = local_8 >> 1;
          }
          (*(code *)piVar2[0xac])(piVar2 + 0xaa,local_8);
        }
        iVar3 = (*(code *)piVar2[0xaa])(piVar2 + 0xaa);
      }
    }
    LOCK();
    *(char *)piVar1 = (char)*piVar1 + -1;
    UNLOCK();
  }
  return;
}



/* === FUN_30004940 @ 0x30004940 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004940 @ 0x30004940 */



void __cdecl FUN_30004940(char *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
  for (uVar2 = param_3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = (char)((ushort)uVar1 >> 8) + -0x80;
    param_1 = param_1 + 1;
  }
  return;
}



/* === FUN_30004970 @ 0x30004970 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004970 @ 0x30004970 */



uint __cdecl FUN_30004970(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (*(uint *)(param_1 + 0x378) <= *(uint *)(param_1 + 0x29c)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x2e4);
  iVar2 = *(int *)(param_1 + 0x2e0);
  iVar3 = *(int *)(param_1 + 0x2dc);
  uVar6 = *(uint *)(param_1 + 0x378) - *(uint *)(param_1 + 0x29c);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x294) - uVar6);
  puVar8 = *(undefined4 **)(param_1 + 0x288);
  *(undefined4 **)(param_1 + 0x294) = puVar4;
  if (puVar4 < puVar8) {
    uVar7 = (int)puVar8 - (int)puVar4;
    *(undefined1 **)(param_1 + 0x294) = (undefined1 *)(*(int *)(param_1 + 0x284) + (int)puVar4);
    for (uVar5 = uVar6 - uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar6 - uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar8 = *(undefined4 **)(param_1 + 0x294);
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  else {
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *(uint *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + uVar6;
  return (uVar6 * 1000) / ((uint)(iVar1 * iVar2 * iVar3) >> 3);
}



/* === FUN_30004a50 @ 0x30004a50 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004a50 @ 0x30004A50 */



uint __cdecl FUN_30004a50(uint param_1,byte *param_2,uint param_3,int *param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int local_c;
  undefined4 local_8;
  
  iVar2 = 0;
  uVar1 = 0;
  local_c = 0;
  local_8 = 1;
  if (0 < (int)(param_1 - param_3)) {
    pbVar4 = param_2 + param_3 * 4;
    pbVar3 = param_2;
    do {
      if (uVar1 < (uint)(*(int *)pbVar4 - *(int *)pbVar3)) {
        uVar1 = *(int *)pbVar4 - *(int *)pbVar3;
        local_c = iVar2;
      }
      iVar2 = iVar2 + 1;
      pbVar4 = pbVar4 + 4;
      pbVar3 = pbVar3 + 4;
    } while (iVar2 < (int)(param_1 - param_3));
    if (uVar1 != 0) goto LAB_30004ab4;
  }
  uVar1 = (uint)(((ulonglong)(uint)(*(int *)(param_2 + param_1 * 4) - *(int *)param_2) *
                 (ulonglong)param_3) / (ulonglong)param_1);
LAB_30004ab4:
  iVar2 = 0;
  if (0 < (int)param_1) {
    do {
      if ((*param_2 & 1) == 0) {
        local_8 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 4;
    } while (iVar2 < (int)param_1);
  }
  *param_5 = local_8;
  *param_4 = local_c;
  return uVar1;
}



/* === FUN_30004af0 @ 0x30004af0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004af0 @ 0x30004AF0 */



void FUN_30004af0(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  DWORD dwMilliseconds;
  
  uVar1 = 0;
  if (param_1[0x95] != 1) {
    param_1[0x95] = 2;
    return;
  }
  do {
    if (((param_1[8] & 0x8000000U) == 0) && (param_1[0x42] == 0)) {
      (*(code *)param_1[0x48])(param_1 + 0x44);
      if (0x32 < (uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U)) {
        dwMilliseconds = 5;
        goto LAB_30004b52;
      }
    }
    else {
      dwMilliseconds = 10;
LAB_30004b52:
      Sleep(dwMilliseconds);
    }
    uVar2 = _RADTimerRead_0();
    if ((uVar1 < (uint)uVar2) && (uVar1 = (uint)uVar2 + 10, param_1[0x7b] != -1)) {
      FUN_30004710(param_1);
    }
    if (param_1[0x95] != 1) {
      param_1[0x95] = 2;
      return;
    }
  } while( true );
}



/* === _BinkCopyToBuffer@28 @ 0x30004ba0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkCopyToBuffer@28 @ 0x30004BA0 */



undefined4
_BinkCopyToBuffer_28
          (int *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,uint param_7
          )

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined4 local_10;
  
                    /* 0x4ba0  18  _BinkCopyToBuffer@28 */
  local_10 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  param_1[0x4e] = 1;
  uVar8 = param_7 | param_1[8] & 0x70030000U;
  uVar4 = param_7 & 0xf;
  _YUV_init_4(uVar4);
  if ((int)param_3 < 0) {
    param_2 = param_2 - ((param_4 - param_6) + -1) * param_3;
    param_6 = 0;
  }
  if ((((param_1[0x7b] != -1) && (FUN_30004710(param_1), param_1[0x7b] != -1)) && (param_1[5] != 0))
     && (param_1[0x3f] == 0)) {
    FUN_30005710((int)param_1);
    uVar10 = _RADTimerRead_0();
    uVar5 = (uint)(((((ulonglong)(uint)(param_1[0x80] * 1000 + param_1[0x85] * -1000) *
                     (ulonglong)(uint)param_1[6]) / (ulonglong)(uint)param_1[5] & 0xffffffff) *
                   (ulonglong)(uint)param_1[0xb6]) / 0x10000);
    uVar7 = (int)uVar10 - param_1[0x84];
    if ((uVar7 < uVar5) || (uVar7 - uVar5 <= (uint)param_1[0x86])) {
      param_1[0xda] = 0;
    }
    else {
      if (((param_7 & 0x80000) == 0) && ((param_1[8] & 0x80000U) == 0)) {
        param_1[0xda] = 1;
        param_1[0xdb] = param_1[0xdb] + 1;
        if ((param_1[0x42] == 0) &&
           (((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 10 && (param_1[0x3f] == 0)))
           ) {
          param_1[0x4e] = 0;
          if ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x28) {
            do {
              if (param_1[0x7b] != -1) {
                FUN_30004710(param_1);
              }
              iVar6 = (*(code *)param_1[0x48])(param_1 + 0x44);
            } while ((iVar6 != 0) &&
                    ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x28));
          }
          if (param_1[0xb3] != 0) {
            param_1[0xb3] = 0;
            if ((1 < (uint)param_1[3]) && (param_1[3] <= param_1[0xdd])) {
              _BinkSetSoundOnOff_8((int)param_1,0);
              piVar1 = param_1 + 0xa8;
              LOCK();
              *(char *)piVar1 = (char)*piVar1 + '\x01';
              UNLOCK();
              if ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x5a) {
                do {
                  iVar6 = (*(code *)param_1[0x48])(param_1 + 0x44);
                  if (iVar6 == 0) break;
                } while ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x5a);
              }
              iVar6 = *piVar1;
              while (iVar6 != 1) {
                Sleep(0);
                iVar6 = *piVar1;
              }
              param_1[0xdc] = param_1[0xdc] + 1;
              FUN_30004970((int)param_1);
              param_1[0x84] = 0;
              LOCK();
              *(char *)piVar1 = (char)*piVar1 + -1;
              UNLOCK();
              _BinkSetSoundOnOff_8((int)param_1,1);
            }
          }
          param_1[0x4e] = 1;
        }
        param_1[0x4e] = 0;
        return 1;
      }
      local_10 = 1;
    }
  }
  if (((((param_1[8] & 0x8000000U) == 0) && (param_1[0x42] == 0)) && (param_1[0x4c] == 0)) &&
     ((uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U) < 0x4b)) {
    Sleep(0);
  }
  param_1[0x9f] = uVar8;
  if ((param_7 & 0x80000000) == 0) {
    pbVar3 = (byte *)param_1[0x37];
    uVar5 = 0xffffffff;
    pbVar9 = pbVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
    if ((uint)param_1[0x39] <= ~uVar5 - 1) goto switchD_30004f66_switchD;
    switch(uVar4) {
    case 1:
      _YUV_blit_24bpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 2:
      _YUV_blit_24rbpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 3:
      goto switchD_30005288_caseD_3;
    case 4:
      goto switchD_30005288_caseD_4;
    case 5:
      if (param_1[0x31] != 0) {
        _YUV_blit_32abpp_mask_52
                  (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],
                   param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
        break;
      }
switchD_30005288_caseD_3:
      _YUV_blit_32bpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 6:
      if (param_1[0x31] != 0) {
        _YUV_blit_32rabpp_mask_52
                  (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],
                   param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
        break;
      }
switchD_30005288_caseD_4:
      _YUV_blit_32rbpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 7:
      if (param_1[0x31] != 0) {
        _YUV_blit_16a4bpp_mask_52
                  (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],
                   param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
        break;
      }
    case 9:
    case 10:
    case 0xb:
    case 0xc:
switchD_30005288_caseD_9:
      _YUV_blit_16bpp_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 8:
      if (param_1[0x31] != 0) {
        _YUV_blit_16a1bpp_mask_52
                  (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],
                   param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
        break;
      }
      goto switchD_30005288_caseD_9;
    case 0xd:
      _YUV_blit_YUY2_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 0xe:
      _YUV_blit_UYVY_mask_48
                (param_2,param_5,param_6,param_3,pbVar3,param_1[0x38],param_1[param_1[0x2e] + 0x2f],
                 param_1[0x79],param_1[0x7a],(byte *)param_1[0x33],param_1[0x34],uVar8);
      break;
    case 0xf:
      goto switchD_30004f66_caseD_f;
    }
    goto switchD_30004f66_default;
  }
switchD_30004f66_switchD:
  switch(uVar4) {
  case 1:
    _YUV_blit_24bpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                       param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 2:
    _YUV_blit_24rbpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                        param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 3:
    goto switchD_30004f66_caseD_3;
  case 4:
    goto switchD_30004f66_caseD_4;
  case 5:
    if (param_1[0x31] != 0) {
      _YUV_blit_32abpp_52(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                          param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],
                          param_1[param_1[0x2e] + 0x31],uVar8);
      break;
    }
switchD_30004f66_caseD_3:
    _YUV_blit_32bpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                       param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 6:
    if (param_1[0x31] != 0) {
      _YUV_blit_32rabpp_52
                (param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,param_1[0x79],
                 param_1[0x7a],param_1[0x33],param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
      break;
    }
switchD_30004f66_caseD_4:
    _YUV_blit_32rbpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                        param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 7:
    if (param_1[0x31] != 0) {
      _YUV_blit_16a4bpp_52
                (param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,param_1[0x79],
                 param_1[0x7a],param_1[0x33],param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
      break;
    }
  case 9:
  case 10:
  case 0xb:
  case 0xc:
switchD_30004f66_caseD_9:
    _YUV_blit_16bpp_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                       param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 8:
    if (param_1[0x31] != 0) {
      _YUV_blit_16a1bpp_52
                (param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,param_1[0x79],
                 param_1[0x7a],param_1[0x33],param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar8);
      break;
    }
    goto switchD_30004f66_caseD_9;
  case 0xd:
    _YUV_blit_YUY2_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                      param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 0xe:
    _YUV_blit_UYVY_48(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],0,0,
                      param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
    break;
  case 0xf:
switchD_30004f66_caseD_f:
    _YUV_blit_YV12_52(param_2,param_5,param_6,param_3,param_4,param_1[param_1[0x2e] + 0x2f],0,0,
                      param_1[0x79],param_1[0x7a],param_1[0x33],param_1[0x34],uVar8);
  }
switchD_30004f66_default:
  if (param_1[0x7b] != -1) {
    FUN_30004710(param_1);
  }
  param_1[0x4e] = 0;
  return local_10;
}



/* === FUN_30005710 @ 0x30005710 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30005710 @ 0x30005710 */



void __cdecl FUN_30005710(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x210) == 0) {
    uVar1 = _RADTimerRead_0();
    *(int *)(param_1 + 0x210) = (int)uVar1;
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x200) + -1;
  }
  return;
}



/* === _BinkDoFrame@4 @ 0x30005740 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkDoFrame@4 @ 0x30005740 */



undefined4 _BinkDoFrame_4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 uVar11;
  int local_18;
  undefined4 *local_c;
  uint *local_8;
  
                    /* 0x5740  20  _BinkDoFrame@4 */
  piVar2 = param_1;
  if ((param_1 != (int *)0x0) && (param_1[0xa0] != param_1[3])) {
    param_1[0x4e] = 1;
    uVar11 = _RADTimerRead_0();
    piVar2[0x82] = (int)uVar11;
    FUN_3002ba10((undefined4 *)piVar2[0x98] + 1,(undefined4 *)piVar2[0x98],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9a] + 1,(undefined4 *)piVar2[0x9a],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x99] + 1,(undefined4 *)piVar2[0x99],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9b] + 1,(undefined4 *)piVar2[0x9b],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9c] + 1,(undefined4 *)piVar2[0x9c],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9d] + 1,(undefined4 *)piVar2[0x9d],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9e] + 1,(undefined4 *)piVar2[0x9e],piVar2[0x97]);
    *(int *)piVar2[0x98] = piVar2[0x82];
    *(int *)piVar2[0x9a] = piVar2[0x8f];
    *(int *)piVar2[0x99] = piVar2[0x90];
    *(int *)piVar2[0x9b] = piVar2[0x91];
    *(int *)piVar2[0x9c] = piVar2[0x50];
    *(int *)piVar2[0x9d] = piVar2[0x51];
    *(int *)piVar2[0x9e] = piVar2[0x52];
    if (piVar2[0x81] == 0) {
      local_c = (undefined4 *)piVar2[0x94];
      param_1 = (int *)piVar2[0x93];
      local_8 = (uint *)0x3e8;
      *(int *)(piVar2[0x98] + 4) = piVar2[0x82] - (int)((ZEXT48(local_c) * 1000) / ZEXT48(param_1));
      piVar2[0x81] = piVar2[0x82];
      piVar2[0x52] = 0;
      piVar2[0x51] = 0;
    }
    else if (piVar2[0x7b] != -1) {
      FUN_30004710(piVar2);
    }
    puVar9 = (uint *)piVar2[0x41];
    piVar2[0x87] = piVar2[0x82];
    if (piVar2[0x4b] != 0) {
      piVar2[7] = 1;
    }
    if (piVar2[7] != 0) {
      return 1;
    }
    local_18 = 0;
    if (0 < piVar2[0x3c]) {
      do {
        uVar5 = *puVar9;
        if ((local_18 == piVar2[0x7b]) && (uVar5 != 0)) {
          piVar6 = (int *)puVar9[1];
          local_8 = puVar9 + 2;
          piVar10 = piVar2 + 0xa8;
          LOCK();
          *(char *)piVar10 = (char)*piVar10 + '\x01';
          UNLOCK();
          iVar1 = *piVar10;
          while (iVar1 != 1) {
            Sleep(0);
            iVar1 = *piVar10;
          }
          while ((piVar6 != (int *)0x0 &&
                 (piVar10 = (int *)(piVar2[0xa1] - piVar2[0xa7]), piVar10 != (int *)0x0))) {
            FUN_3001bb30((int *)piVar2[0xa6],(int *)&local_c,(int *)&param_1,(int)local_8,
                         (int *)&local_8);
            if (piVar6 < param_1) {
              param_1 = piVar6;
            }
            piVar6 = (int *)((int)piVar6 - (int)param_1);
            if (piVar10 < param_1) {
              param_1 = piVar10;
            }
            piVar2[0xa7] = piVar2[0xa7] + (int)param_1;
            puVar8 = (undefined4 *)piVar2[0xa4];
            piVar10 = (int *)(piVar2[0xa3] - (int)puVar8);
            if (piVar10 < param_1) {
              if (piVar10 != (int *)0x0) {
                puVar7 = local_c;
                for (uVar4 = (uint)piVar10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
                for (uVar4 = (uint)piVar10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
                  puVar7 = (undefined4 *)((int)puVar7 + 1);
                  puVar8 = (undefined4 *)((int)puVar8 + 1);
                }
                param_1 = (int *)((int)param_1 - (int)piVar10);
                local_c = (undefined4 *)((int)local_c + (int)piVar10);
              }
              puVar8 = local_c;
              puVar7 = (undefined4 *)piVar2[0xa2];
              for (uVar4 = (uint)param_1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar7 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar7 = puVar7 + 1;
              }
              for (uVar4 = (uint)param_1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                puVar7 = (undefined4 *)((int)puVar7 + 1);
              }
              piVar3 = (int *)piVar2[0xa2];
              piVar10 = param_1;
            }
            else {
              puVar7 = local_c;
              for (uVar4 = (uint)param_1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              for (uVar4 = (uint)param_1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                puVar8 = (undefined4 *)((int)puVar8 + 1);
              }
              piVar10 = (int *)piVar2[0xa4];
              piVar3 = param_1;
            }
            piVar2[0xa4] = (int)piVar10 + (int)piVar3;
          }
          LOCK();
          *(char *)(piVar2 + 0xa8) = (char)piVar2[0xa8] + -1;
          UNLOCK();
        }
        puVar9 = (uint *)((int)(puVar9 + 1) + uVar5);
        local_18 = local_18 + 1;
      } while (local_18 < piVar2[0x3c]);
    }
    uVar11 = _RADTimerRead_0();
    param_1 = (int *)uVar11;
    if (piVar2[0x8d] != 0) {
      if (piVar2[0xda] == 0) {
        uVar4 = ((uint)piVar2[0x34] >> 4) * ((uint)piVar2[0x33] >> 4);
        puVar8 = (undefined4 *)piVar2[0x37];
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      if (((((piVar2[8] & 0x8000000U) == 0) && (piVar2[0x42] == 0)) && (piVar2[0x4c] == 0)) &&
         ((uint)((piVar2[0x56] + 1) * 100) / (piVar2[0x55] + 1U) < 0x4b)) {
        Sleep(0);
      }
      uVar5 = piVar2[0x2e];
      FUN_30008930((uint *)piVar2[(uVar5 ^ 1) + 0x2f],(uint *)piVar2[uVar5 + 0x2f],
                   (uint *)piVar2[(uVar5 ^ 1) + 0x31],(uint *)piVar2[uVar5 + 0x31],piVar2[0x37],
                   piVar2[0x79],piVar2[0x7a],piVar2[0x33],piVar2[0x34],puVar9,
                   *(uint *)(piVar2[0x43] + -4 + piVar2[3] * 4) & 1,(uint *)(piVar2 + 0xe0),
                   piVar2[8],piVar2[9]);
      piVar2[0x2e] = piVar2[0x2e] ^ 1;
    }
    piVar10 = param_1;
    if (piVar2[0x7b] != -1) {
      FUN_30004710(piVar2);
    }
    piVar2[0x2d] = -1;
    piVar2[0x80] = piVar2[0x80] + 1;
    FUN_30005710((int)piVar2);
    uVar11 = _RADTimerRead_0();
    piVar2[0x90] = (int)piVar10 + (piVar2[0x90] - piVar2[0x82]);
    piVar2[0x83] = (int)uVar11;
    piVar2[0x8f] = piVar2[0x8f] + ((int)uVar11 - (int)piVar10);
    piVar2[0xa0] = piVar2[3];
    piVar2[4] = piVar2[3];
    piVar2[0x4e] = 0;
  }
  return 0;
}



/* === _BinkNextFrame@4 @ 0x30005c40 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkNextFrame@4 @ 0x30005C40 */



void _BinkNextFrame_4(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* 0x5c40  33  _BinkNextFrame@4 */
  if (param_1 != (int *)0x0) {
    param_1[0x4e] = 1;
    uVar2 = _RADTimerRead_0();
    FUN_30005c90((int)param_1,(int)uVar2);
    if ((uint)param_1[3] < (uint)param_1[2]) {
      iVar1 = param_1[3] + 1;
    }
    else {
      iVar1 = 1;
    }
    FUN_30004650(param_1,iVar1);
    param_1[0x4e] = 0;
  }
  return;
}



/* === FUN_30005c90 @ 0x30005c90 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30005c90 @ 0x30005C90 */



void __cdecl FUN_30005c90(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20c) != 0) {
    *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + (param_2 - *(int *)(param_1 + 0x20c));
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  return;
}



/* === _BinkGetKeyFrame@12 @ 0x30005cc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetKeyFrame@12 @ 0x30005CC0 */



uint _BinkGetKeyFrame_12(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
                    /* 0x5cc0  22  _BinkGetKeyFrame@12 */
  if (param_1 == 0) {
    return 0;
  }
  if (((param_3 & 0x80) != 0) ||
     ((*(byte *)(*(int *)(param_1 + 0x10c) + -4 + param_2 * 4) & 1) == 0)) {
    uVar4 = param_3 & 0x7f;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        if (param_2 < *(uint *)(param_1 + 8)) {
          puVar2 = (uint *)(*(int *)(param_1 + 0x10c) + param_2 * 4);
          do {
            uVar4 = *puVar2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
            if ((uVar4 & 1) != 0) {
              return param_2;
            }
          } while (param_2 < *(uint *)(param_1 + 8));
        }
      }
      else if (uVar4 == 2) {
        iVar5 = param_2 - 2;
        do {
          for (; iVar5 < 0; iVar5 = iVar5 + -1) {
            if (*(uint *)(param_1 + 8) <= param_2) {
              return 0;
            }
            iVar1 = param_2 * 4;
            param_2 = param_2 + 1;
            if ((*(uint *)(*(int *)(param_1 + 0x10c) + iVar1) & 1) != 0) {
              return param_2;
            }
LAB_30005d39:
          }
          if ((*(byte *)(*(int *)(param_1 + 0x10c) + iVar5 * 4) & 1) != 0) {
            return iVar5 + 1;
          }
          if (*(uint *)(param_1 + 8) <= param_2) goto LAB_30005d39;
          iVar1 = param_2 * 4;
          param_2 = param_2 + 1;
          if ((*(uint *)(*(int *)(param_1 + 0x10c) + iVar1) & 1) != 0) {
            return param_2;
          }
          iVar5 = iVar5 + -1;
        } while( true );
      }
      return 0;
    }
    iVar5 = param_2 - 2;
    if (0 < iVar5) {
      pbVar3 = (byte *)(*(int *)(param_1 + 0x10c) + iVar5 * 4);
      do {
        if ((*pbVar3 & 1) != 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar3 + -4;
      } while (0 < iVar5);
    }
    param_2 = iVar5 + 1;
  }
  return param_2;
}



/* === _BinkGoto@12 @ 0x30005da0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGoto@12 @ 0x30005DA0 */



void _BinkGoto_12(int *param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
                    /* 0x5da0  30  _BinkGoto@12 */
  if (param_1 != (int *)0x0) {
    param_1[0x4e] = 1;
    if ((uint)param_1[2] < param_2) {
      param_2 = param_1[2];
    }
    if ((param_3 & 1) == 0) {
      if (param_1[3] != param_2) {
        uVar1 = _BinkGetKeyFrame_12((int)param_1,param_2,0);
        if ((((uint)param_1[3] <= param_2) && (uVar1 <= (uint)param_1[3])) ||
           (FUN_30004650(param_1,uVar1), uVar1 != param_2)) {
          _BinkPause_8(param_1,1);
          if (param_1[3] != param_1[0xa0]) {
            _BinkDoFrame_4(param_1);
          }
          _BinkNextFrame_4(param_1);
          uVar1 = param_1[3];
          while (uVar1 != param_2) {
            _BinkDoFrame_4(param_1);
            _BinkNextFrame_4(param_1);
            uVar1 = param_1[3];
          }
          _BinkPause_8(param_1,0);
          param_1[0x4e] = 0;
          return;
        }
      }
    }
    else {
      FUN_30004650(param_1,param_2);
    }
    param_1[0x4e] = 0;
  }
  return;
}



/* === _BinkClose@4 @ 0x30005e60 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkClose@4 @ 0x30005E60 */



void _BinkClose_4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x5e60  16  _BinkClose@4 */
  if (param_1 == (int *)0x0) {
    return;
  }
  _BinkPause_8(param_1,1);
  if (param_1[0x95] == 1) {
    param_1[0x95] = 0;
    iVar1 = param_1[0x95];
    while (iVar1 == 0) {
      Sleep(0);
      iVar1 = param_1[0x95];
    }
  }
  if (param_1[0x40] != 0) {
    FUN_3001c180(param_1[0x40]);
  }
  if (param_1[0x7b] != -1) {
    (*(code *)param_1[0xb1])(param_1 + 0xaa);
    FUN_3001c0f0(param_1[0xa6]);
  }
  iVar1 = param_1[0x42];
  if (iVar1 == 0) {
    (*(code *)param_1[0x49])(param_1 + 0x44);
    iVar1 = param_1[0x77];
  }
  else if ((param_1[8] & 0x4000000U) != 0) goto LAB_30005f07;
  radfree(iVar1);
LAB_30005f07:
  if (param_1[0xa2] != 0) {
    radfree(param_1[0xa2]);
  }
  if (param_1[0x2f] != 0) {
    radfree(param_1[0x2f]);
  }
  piVar2 = param_1;
  for (iVar1 = 0xe9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  radfree((int)param_1);
  return;
}



/* === _BinkWait@4 @ 0x30005f40 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkWait@4 @ 0x30005F40 */



undefined4 _BinkWait_4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
                    /* 0x5f40  53  _BinkWait@4 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (((param_1[0x80] == 0) && (param_1[0x3f] == 0)) || (param_1[7] != 0)) {
    return 0;
  }
  iVar3 = param_1[0x84];
  if (iVar3 == 0) {
    FUN_30005710((int)param_1);
    iVar3 = param_1[0x84];
  }
  if (param_1[0x7b] != -1) {
    FUN_30004710(param_1);
  }
  uVar4 = _RADTimerRead_0();
  iVar1 = (int)uVar4;
  FUN_30005c90((int)param_1,iVar1);
  FUN_300060d0((int)param_1,iVar1);
  if ((param_1[0x3f] == 0) && ((param_1[0x7b] == -1 || (param_1[0x8c] != 0)))) {
    if (param_1[5] == 0) {
      return 0;
    }
    iVar2 = (int)(((((ulonglong)(uint)(param_1[0x80] * 1000 + param_1[0x85] * -1000) *
                    (ulonglong)(uint)param_1[6]) / (ulonglong)(uint)param_1[5] & 0xffffffff) *
                  (ulonglong)(uint)param_1[0xb6]) / 0x10000);
    if (iVar2 <= iVar1 - iVar3) {
      if ((param_1[0x86] < (iVar1 - iVar3) - iVar2) && (param_1[0x7b] == -1)) {
        param_1[0x84] = iVar1;
        param_1[0x85] = param_1[0x80] + -1;
      }
      return 0;
    }
  }
  if (param_1[0x42] == 0) {
    iVar3 = (*(code *)param_1[0x48])(param_1 + 0x44);
    if ((iVar3 != 0) && ((param_1[8] & 0x8000000U) == 0)) {
      Sleep(0);
    }
  }
  return 1;
}



/* === FUN_300060d0 @ 0x300060d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300060d0 @ 0x300060D0 */



void __cdecl FUN_300060d0(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x21c) != 0) {
    uVar1 = param_2 - *(int *)(param_1 + 0x21c);
    *(undefined4 *)(param_1 + 0x21c) = 0;
    if (*(uint *)(param_1 + 0x220) < uVar1) {
      *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x220);
      *(uint *)(param_1 + 0x220) = uVar1;
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x224);
      *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0xc);
      return;
    }
    if (*(uint *)(param_1 + 0x228) < uVar1) {
      *(uint *)(param_1 + 0x228) = uVar1;
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return;
}



/* === _BinkPause@8 @ 0x30006140 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkPause@8 @ 0x30006140 */



int _BinkPause_8(int *param_1,int param_2)

{
  undefined8 uVar1;
  
                    /* 0x6140  39  _BinkPause@8 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = _RADTimerRead_0();
  FUN_30005c90((int)param_1,(int)uVar1);
  FUN_300060d0((int)param_1,(int)uVar1);
  if ((param_2 == 0) && (param_1[0x3f] != 0)) {
    param_1[0x84] = 0;
  }
  param_1[0x3f] = param_2;
  if (param_1[0x7b] != -1) {
    (*(code *)param_1[0xaf])(param_1 + 0xaa,param_2);
  }
  param_1[0xda] = 0;
  if ((param_1[0x80] != 0) && (param_1[0x7b] != -1)) {
    FUN_30004710(param_1);
  }
  return param_1[0x3f];
}



/* === _BinkGetSummary@8 @ 0x300061d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetSummary@8 @ 0x300061D0 */



void _BinkGetSummary_8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
                    /* 0x61d0  25  _BinkGetSummary@8 */
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar4 = _RADTimerRead_0();
    FUN_30005c90((int)param_1,(int)uVar4);
    FUN_300060d0((int)param_1,(int)uVar4);
    puVar2 = param_2;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_2[5] = param_1[5];
    param_2[6] = param_1[6];
    param_2[0xb] = param_1[0xdb];
    param_2[0xc] = param_1[0xdc];
    param_2[3] = param_1[0x93];
    param_2[4] = param_1[0x94];
    param_2[8] = param_1[2];
    param_2[9] = param_1[0x80];
    uVar4 = _RADTimerRead_0();
    param_2[2] = (int)uVar4 - param_1[0x81];
    param_2[7] = param_1[0x92];
    param_2[0x10] = param_1[0x90];
    param_2[0xf] = param_1[0x8f];
    param_2[0xd] = param_1[0x91];
    param_2[0x1a] = param_2[0x1a] + param_1[0x8e];
    param_2[0x1b] = param_1[0x78];
    param_2[0x13] = (int)(((ulonglong)(uint)param_1[0x4d] * 1000) / (ulonglong)(param_1[0x4f] + 1));
    param_2[0xe] = param_1[0x50];
    param_2[0x11] = param_1[0x51];
    param_2[0x12] = param_1[0x52];
    uVar3 = param_1[10] - (*(uint *)param_1[0x43] & 0xfffffffe);
    param_2[0x18] =
         (int)(((ulonglong)uVar3 * (ulonglong)(uint)param_1[0x93]) /
              (ulonglong)(uint)(param_1[0x94] * param_1[2]));
    param_2[0x19] = uVar3 / (uint)param_1[2];
    param_2[0x1d] = param_1[0x3d];
    param_2[0x1e] = param_1[0x3e] + 1;
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[0x14] = param_1[0x88];
    param_2[0x15] = param_1[0x8a];
    param_2[0x16] = param_1[0x89];
    param_2[0x17] = param_1[0x8b];
    param_2[0x1b] = param_1[0x53];
    param_2[0x1c] = param_1[0x54];
  }
  return;
}



/* === _BinkGetRealtime@12 @ 0x30006380 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetRealtime@12 @ 0x30006380 */



void _BinkGetRealtime_12(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* 0x6380  23  _BinkGetRealtime@12 */
  uVar2 = _RADTimerRead_0();
  FUN_30005c90(param_1,(int)uVar2);
  FUN_300060d0(param_1,(int)uVar2);
  if ((param_3 == 0) || (*(uint *)(param_1 + 600) <= param_3)) {
    param_3 = *(int *)(param_1 + 600) - 1;
  }
  if ((*(uint *)(param_1 + 0xc) < param_3) && (param_3 = *(uint *)(param_1 + 0xc) - 1, param_3 == 0)
     ) {
    param_3 = 1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x14);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x154);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x158);
  param_2[0xd] = (int)(((ulonglong)
                        (uint)(*(int *)(*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0xc) * 4) -
                              *(int *)(*(int *)(param_1 + 0x10c) +
                                      (*(int *)(param_1 + 0xc) - param_3) * 4)) *
                       (ulonglong)*(uint *)(param_1 + 0x24c)) /
                      (ulonglong)(*(int *)(param_1 + 0x250) * param_3));
  param_2[3] = param_3;
  iVar1 = **(int **)(param_1 + 0x260) - (*(int **)(param_1 + 0x260))[param_3];
  param_2[4] = iVar1;
  if (iVar1 == 0) {
    param_2[4] = 1;
  }
  param_2[5] = **(int **)(param_1 + 0x268) - (*(int **)(param_1 + 0x268))[param_3];
  param_2[6] = **(int **)(param_1 + 0x264) - (*(int **)(param_1 + 0x264))[param_3];
  param_2[10] = **(int **)(param_1 + 0x26c) - (*(int **)(param_1 + 0x26c))[param_3];
  param_2[7] = **(int **)(param_1 + 0x270) - (*(int **)(param_1 + 0x270))[param_3];
  param_2[8] = **(int **)(param_1 + 0x274) - (*(int **)(param_1 + 0x274))[param_3];
  param_2[9] = **(int **)(param_1 + 0x278) - (*(int **)(param_1 + 0x278))[param_3];
  return;
}



/* === _BinkGetRects@8 @ 0x300064b0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetRects@8 @ 0x300064B0 */



uint _BinkGetRects_8(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int local_1ac;
  uint *local_1a8;
  int local_1a4;
  uint local_1a0 [32];
  int local_120 [8];
  uint local_100 [32];
  uint local_80 [32];
  
                    /* 0x64b0  24  _BinkGetRects@8 */
  if ((param_2 & 0x4000000) != 0) {
    return 0;
  }
  if ((((param_2 & 0x80000) == 0) && ((param_1[8] & 0x80000) == 0)) && (param_1[0xda] != 0)) {
    return 0;
  }
  if (param_1[0x2d] == 0xffffffff) {
    local_1a0[2] = param_1[0x33];
    local_1a0[3] = param_1[0x34];
    local_1a0[1] = 0;
    local_1a0[0] = 0;
    uVar1 = FUN_30006830((int *)(param_1 + 0xd),param_1[0x37],param_1[0x38],(int *)local_1a0);
    param_1[0x2d] = uVar1;
    if (((param_2 & 0x8000000) == 0) && (uVar1 != 0)) {
      local_1a0[0] = param_1[0xd];
      local_1a0[1] = param_1[0xe];
      local_1a0[2] = param_1[0xf];
      local_1a0[3] = param_1[0x10];
      local_120[0] = FUN_30006990((int *)local_80,(int *)local_100,(int *)local_1a0,param_1[0x37],
                                  param_1[0x38]);
      while( true ) {
        uVar1 = param_1[0x2d];
        iVar8 = -1;
        iVar5 = 0;
        iVar2 = 0;
        if ((int)uVar1 < 1) break;
        piVar7 = local_120;
        do {
          if (iVar5 < *piVar7) {
            iVar5 = *piVar7;
            iVar8 = iVar2;
          }
          iVar2 = iVar2 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar2 < (int)uVar1);
        if (iVar8 == -1) break;
        local_1a0[iVar8 * 4] = local_80[iVar8 * 4];
        local_1a0[iVar8 * 4 + 1] = local_80[iVar8 * 4 + 1];
        uVar6 = local_80[iVar8 * 4 + 3];
        local_1a0[iVar8 * 4 + 2] = local_80[iVar8 * 4 + 2];
        local_1a0[iVar8 * 4 + 3] = uVar6;
        local_1a0[uVar1 * 4] = local_100[iVar8 * 4];
        local_1a0[uVar1 * 4 + 1] = local_100[iVar8 * 4 + 1];
        uVar6 = local_100[iVar8 * 4 + 3];
        local_1a0[uVar1 * 4 + 2] = local_100[iVar8 * 4 + 2];
        local_1a0[uVar1 * 4 + 3] = uVar6;
        param_1[0x2d] = uVar1 + 1;
        if (uVar1 + 1 == 8) break;
        iVar5 = FUN_30006990((int *)(local_80 + iVar8 * 4),(int *)(local_100 + iVar8 * 4),
                             (int *)(local_1a0 + iVar8 * 4),param_1[0x37],param_1[0x38]);
        uVar1 = param_1[0x38];
        uVar6 = param_1[0x37];
        local_120[iVar8] = iVar5;
        iVar8 = param_1[0x2d] - 1;
        iVar5 = FUN_30006990((int *)(local_80 + iVar8 * 4),(int *)(local_100 + iVar8 * 4),
                             (int *)(local_1a0 + iVar8 * 4),uVar6,uVar1);
        local_120[iVar8] = iVar5;
      }
    }
    uVar1 = param_1[0x2d];
    local_1ac = 0;
    if (0 < (int)uVar1) {
      local_1a8 = param_1 + 0xd;
      do {
        iVar5 = 0;
        uVar6 = 0x7fff0000;
        if (0 < (int)uVar1) {
          puVar4 = local_1a0;
          do {
            uVar3 = puVar4[1] * 0x10000 + *puVar4;
            if (uVar3 < uVar6) {
              uVar6 = uVar3;
              local_1a4 = iVar5;
            }
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 4;
          } while (iVar5 < (int)uVar1);
        }
        uVar1 = param_1[0x9f] & 0x70000000;
        if (uVar1 < 0x30000001) {
          if (uVar1 == 0x30000000) {
            local_1a0[local_1a4 * 4] = local_1a0[local_1a4 * 4] << 1;
            puVar4 = local_1a0 + local_1a4 * 4 + 2;
LAB_3000677b:
            *puVar4 = *puVar4 << 1;
          }
          else if ((uVar1 == 0x10000000) || (uVar1 == 0x20000000)) {
            iVar5 = local_1a4 << 4;
            goto LAB_3000676d;
          }
        }
        else if ((uVar1 == 0x40000000) || (uVar1 == 0x50000000)) {
          iVar5 = local_1a4 * 0x10;
          local_1a0[local_1a4 * 4] = local_1a0[local_1a4 * 4] << 1;
          local_1a0[local_1a4 * 4 + 2] = local_1a0[local_1a4 * 4 + 2] << 1;
LAB_3000676d:
          *(int *)((int)local_1a0 + iVar5 + 4) = *(int *)((int)local_1a0 + iVar5 + 4) << 1;
          puVar4 = (uint *)((int)local_1a0 + iVar5 + 0xc);
          goto LAB_3000677b;
        }
        uVar1 = local_1a0[local_1a4 * 4 + 2] + local_1a0[local_1a4 * 4];
        if (*param_1 < uVar1) {
          local_1a0[local_1a4 * 4 + 2] = (*param_1 - uVar1) + local_1a0[local_1a4 * 4 + 2];
        }
        uVar1 = local_1a0[local_1a4 * 4 + 3] + local_1a0[local_1a4 * 4 + 1];
        if (param_1[1] < uVar1) {
          local_1a0[local_1a4 * 4 + 3] = (param_1[1] - uVar1) + local_1a0[local_1a4 * 4 + 3];
        }
        *local_1a8 = local_1a0[local_1a4 * 4];
        local_1a8[1] = local_1a0[local_1a4 * 4 + 1];
        uVar1 = local_1a0[local_1a4 * 4 + 3];
        local_1a8[2] = local_1a0[local_1a4 * 4 + 2];
        local_1a8[3] = uVar1;
        local_1a0[local_1a4 * 4] = 0;
        local_1a0[local_1a4 * 4 + 1] = 0x7fffffff;
        uVar1 = param_1[0x2d];
        local_1ac = local_1ac + 1;
        local_1a8 = local_1a8 + 4;
      } while (local_1ac < (int)uVar1);
    }
  }
  return param_1[0x2d];
}



/* === FUN_30006830 @ 0x30006830 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30006830 @ 0x30006830 */



undefined4 __cdecl FUN_30006830(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  iVar4 = ((int)(*param_4 + (*param_4 >> 0x1f & 0xfU)) >> 4) +
          param_2 + ((int)(param_4[1] + (param_4[1] >> 0x1f & 0xfU)) >> 4) * param_3;
  iVar2 = (int)(param_4[3] + (param_4[3] >> 0x1f & 0xfU)) >> 4;
  iVar1 = (int)(param_4[2] + (param_4[2] >> 0x1f & 0xfU)) >> 4;
  iVar3 = 0;
  iVar6 = iVar4;
  if (0 < iVar2) {
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          if (*(char *)(iVar5 + iVar6) != '\0') {
            iVar4 = iVar4 + iVar3 * param_3;
            iVar2 = iVar2 - iVar3;
            param_1[1] = param_4[1] + iVar3 * 0x10;
            iVar6 = param_4[3] + iVar3 * -0x10;
            param_1[3] = iVar6;
            if (iVar6 < 2) goto LAB_3000690b;
            iVar6 = (iVar2 + -1) * param_3 + iVar4;
            iVar3 = 0;
            if (0 < iVar2) goto LAB_300068de;
            goto LAB_300068f6;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      iVar6 = iVar6 + param_3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return 0;
LAB_300068de:
  do {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        if (*(char *)(iVar5 + iVar6) != '\0') goto LAB_300068f6;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    iVar6 = iVar6 - param_3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar2);
LAB_300068f6:
  iVar2 = iVar2 - iVar3;
  param_1[3] = param_1[3] + iVar3 * -0x10;
LAB_3000690b:
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = 0;
      pcVar7 = (char *)(iVar6 + iVar4);
      if (0 < iVar2) {
        do {
          if (*pcVar7 != '\0') goto LAB_3000692f;
          pcVar7 = pcVar7 + param_3;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
LAB_3000692f:
  *param_1 = *param_4 + iVar6 * 0x10;
  iVar5 = param_4[2] + iVar6 * -0x10;
  param_1[2] = iVar5;
  iVar3 = iVar1 - iVar6;
  if (1 < iVar5) {
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar5 = 0;
      pcVar7 = (char *)(iVar3 + iVar4 + iVar6);
      if (0 < iVar2) {
        do {
          if (*pcVar7 != '\0') goto LAB_30006970;
          pcVar7 = pcVar7 + param_3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
    }
LAB_30006970:
    param_1[2] = param_1[2] + ((iVar3 - (iVar1 - iVar6)) + 1) * 0x10;
  }
  return 1;
}



/* === FUN_30006990 @ 0x30006990 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30006990 @ 0x30006990 */



int __cdecl FUN_30006990(int *param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_3[2] < 0x20) {
    iVar2 = 0;
  }
  else {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_24 = param_3[3];
    uVar3 = param_3[2] / 2 + 0xfU & 0xfffffff0;
    local_28 = uVar3;
    FUN_30006830(param_1,param_4,param_5,&local_30);
    local_2c = param_3[1];
    local_24 = param_3[3];
    local_30 = *param_3 + uVar3;
    local_28 = param_3[2] - uVar3;
    FUN_30006830(param_2,param_4,param_5,&local_30);
    iVar2 = (param_3[3] * param_3[2] - param_1[3] * param_1[2]) - param_2[3] * param_2[2];
  }
  if (0x1f < param_3[3]) {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    uVar3 = param_3[3] / 2 + 0xfU & 0xfffffff0;
    local_24 = uVar3;
    FUN_30006830(&local_20,param_4,param_5,&local_30);
    local_30 = *param_3;
    local_28 = param_3[2];
    local_2c = param_3[1] + uVar3;
    local_24 = param_3[3] - uVar3;
    FUN_30006830(&local_10,param_4,param_5,&local_30);
    iVar1 = (param_3[3] * param_3[2] - local_4 * local_8) - local_14 * local_18;
    if (iVar2 < iVar1) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = local_18;
      param_1[3] = local_14;
      *param_2 = local_10;
      param_2[1] = local_c;
      param_2[2] = local_8;
      param_2[3] = local_4;
      return iVar1;
    }
  }
  return iVar2;
}



/* === _BinkService@4 @ 0x30006b40 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkService@4 @ 0x30006B40 */



void _BinkService_4(int *param_1)

{
                    /* 0x6b40  41  _BinkService@4 */
  if (param_1[0x7b] != -1) {
    FUN_30004710(param_1);
  }
  return;
}



/* === _BinkSetVolume@8 @ 0x30006b60 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetVolume@8 @ 0x30006B60 */



void _BinkSetVolume_8(int param_1,undefined4 param_2)

{
                    /* 0x6b60  52  _BinkSetVolume@8 */
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1ec) != -1)) &&
     (*(code **)(param_1 + 0x2b4) != (code *)0x0)) {
    (**(code **)(param_1 + 0x2b4))(param_1 + 0x2a8,param_2);
  }
  return;
}



/* === _BinkSetPan@8 @ 0x30006b90 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetPan@8 @ 0x30006B90 */



void _BinkSetPan_8(int param_1,undefined4 param_2)

{
                    /* 0x6b90  46  _BinkSetPan@8 */
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1ec) != -1)) &&
     (*(code **)(param_1 + 0x2b8) != (code *)0x0)) {
    (**(code **)(param_1 + 0x2b8))(param_1 + 0x2a8,param_2);
  }
  return;
}



/* === _BinkLogoAddress@0 @ 0x30006bc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkLogoAddress@0 @ 0x30006BC0 */



undefined * _BinkLogoAddress_0(void)

{
                    /* 0x6bc0  32  _BinkLogoAddress@0 */
  return &DAT_3003a040;
}



/* === _BinkGetTrackType@8 @ 0x30006bd0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetTrackType@8 @ 0x30006BD0 */



undefined4 _BinkGetTrackType_8(int param_1,int param_2)

{
                    /* 0x6bd0  29  _BinkGetTrackType@8 */
  if (param_1 != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 500) + param_2 * 4);
  }
  return 0;
}



/* === _BinkGetTrackMaxSize@8 @ 0x30006bf0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetTrackMaxSize@8 @ 0x30006BF0 */



undefined4 _BinkGetTrackMaxSize_8(int param_1,int param_2)

{
                    /* 0x6bf0  28  _BinkGetTrackMaxSize@8 */
  if (param_1 != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1f0) + param_2 * 4);
  }
  return 0;
}



/* === _BinkGetTrackID@8 @ 0x30006c10 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetTrackID@8 @ 0x30006C10 */



undefined4 _BinkGetTrackID_8(int param_1,int param_2)

{
                    /* 0x6c10  27  _BinkGetTrackID@8 */
  if (param_1 != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1f8) + param_2 * 4);
  }
  return 0;
}



/* === _BinkOpenTrack@8 @ 0x30006c30 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkOpenTrack@8 @ 0x30006C30 */



uint * _BinkOpenTrack_8(uint param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
                    /* 0x6c30  37  _BinkOpenTrack@8 */
  if (((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0xf0))) &&
     (uVar3 = *(uint *)(*(int *)(param_1 + 500) + param_2 * 4), (uVar3 & 0x80000000) != 0)) {
    puVar1 = FUN_3001ba10(uVar3 & 0xffff,(uVar3 >> 0x1d & 1) + 1,1);
    if (puVar1 != (uint *)0x0) {
      puVar2 = (uint *)radmalloc(0x1c);
      if (puVar2 != (uint *)0x0) {
        puVar5 = puVar2;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        puVar2[4] = param_1;
        puVar2[5] = (uint)puVar1;
        *puVar2 = *(uint *)(*(int *)(param_1 + 500) + param_2 * 4) & 0xffff;
        puVar2[1] = (*(uint *)(*(int *)(param_1 + 500) + param_2 * 4) >> 0x1b & 8) + 8;
        puVar2[2] = (*(uint *)(*(int *)(param_1 + 500) + param_2 * 4) >> 0x1d & 1) + 1;
        uVar3 = *(int *)(*(int *)(param_1 + 0x1f0) + param_2 * 4) + 3U & 0xfffffffc;
        puVar2[3] = uVar3;
        if (puVar2[1] == 8) {
          puVar2[3] = uVar3 >> 1;
        }
        puVar2[6] = param_2;
        return puVar2;
      }
      FUN_3001c0f0((int)puVar1);
    }
  }
  return (uint *)0x0;
}



/* === _BinkCloseTrack@4 @ 0x30006d10 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkCloseTrack@4 @ 0x30006D10 */



void _BinkCloseTrack_4(int param_1)

{
                    /* 0x6d10  17  _BinkCloseTrack@4 */
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_3001c0f0(*(int *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    radfree(param_1);
  }
  return;
}



/* === _BinkGetTrackData@8 @ 0x30006d40 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetTrackData@8 @ 0x30006D40 */



char * _BinkGetTrackData_8(int param_1,char *param_2)

{
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int *local_c;
  char *local_8;
  char *local_4;
  
                    /* 0x6d40  26  _BinkGetTrackData@8 */
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    local_c = *(int **)(iVar2 + 0x104);
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + 0xf0)) {
      do {
        if ((iVar4 == *(int *)(param_1 + 0x18)) && (*local_c != 0)) {
          pcVar8 = (char *)local_c[1];
          local_c = local_c + 2;
          local_8 = (char *)0x0;
          pcVar7 = param_2;
          while (pcVar8 != (char *)0x0) {
            FUN_3001bb30(*(int **)(param_1 + 0x14),(int *)&local_4,(int *)&param_2,(int)local_c,
                         (int *)&local_c);
            if (pcVar8 < param_2) {
              param_2 = pcVar8;
            }
            pcVar8 = pcVar8 + -(int)param_2;
            if (*(int *)(param_1 + 4) == 0x10) {
              pcVar3 = local_4;
              pcVar6 = pcVar7;
              for (uVar5 = (uint)param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
                pcVar3 = pcVar3 + 4;
                pcVar6 = pcVar6 + 4;
              }
              for (uVar5 = (uint)param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar6 = *pcVar3;
                pcVar3 = pcVar3 + 1;
                pcVar6 = pcVar6 + 1;
              }
            }
            else {
              param_2 = (char *)((uint)param_2 >> 1);
              pcVar9 = (char *)0x0;
              pcVar3 = pcVar7;
              pcVar6 = local_4;
              if (param_2 != (char *)0x0) {
                do {
                  uVar1 = *(undefined2 *)pcVar6;
                  pcVar6 = pcVar6 + 2;
                  *pcVar3 = (char)((ushort)uVar1 >> 8) + -0x80;
                  pcVar3 = pcVar3 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (pcVar9 < param_2);
              }
            }
            local_8 = local_8 + (int)param_2;
            pcVar7 = pcVar7 + (int)param_2;
          }
          return local_8;
        }
        local_c = (int *)((int)(local_c + 1) + *local_c);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 0xf0));
    }
  }
  return (char *)0x0;
}



/* === _BinkSetVideoOnOff@8 @ 0x30006e60 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetVideoOnOff@8 @ 0x30006E60 */



void _BinkSetVideoOnOff_8(int param_1,undefined4 param_2)

{
                    /* 0x6e60  51  _BinkSetVideoOnOff@8 */
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x234) = param_2;
  }
  return;
}



/* === _BinkSetSoundOnOff@8 @ 0x30006e80 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetSoundOnOff@8 @ 0x30006E80 */



int _BinkSetSoundOnOff_8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x6e80  48  _BinkSetSoundOnOff@8 */
  iVar3 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1ec) != -1)) &&
     (*(code **)(param_1 + 0x2c0) != (code *)0x0)) {
    iVar3 = (**(code **)(param_1 + 0x2c0))(param_1 + 0x2a8,param_2);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x230) != 0) {
        piVar1 = (int *)(param_1 + 0x2a0);
        LOCK();
        *(char *)piVar1 = *(char *)piVar1 + '\x01';
        UNLOCK();
        iVar3 = *piVar1;
        while (iVar3 != 1) {
          Sleep(0);
          iVar3 = *piVar1;
        }
        *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x288);
        *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x288);
        *(undefined4 *)(param_1 + 0x29c) = 0;
        *(undefined4 *)(param_1 + 0x230) = 0;
        LOCK();
        *(char *)piVar1 = *(char *)piVar1 + -1;
        UNLOCK();
        return 0;
      }
    }
    else if (*(int *)(param_1 + 0x230) == 0) {
      piVar1 = (int *)(param_1 + 0x2a0);
      LOCK();
      *(char *)piVar1 = *(char *)piVar1 + '\x01';
      UNLOCK();
      iVar2 = *piVar1;
      while (iVar2 != 1) {
        Sleep(0);
        iVar2 = *piVar1;
      }
      if ((*(int *)(param_1 + 0xc) != 1) && (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0xec))) {
        uVar5 = *(uint *)(param_1 + 0x378);
        *(uint *)(param_1 + 0x29c) = uVar5;
        puVar6 = *(undefined4 **)(param_1 + 0x288);
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x29c) + *(int *)(param_1 + 0x288);
        *(int *)(param_1 + 0x294) = *(int *)(param_1 + 0x288);
      }
      *(undefined4 *)(param_1 + 0x230) = 1;
      *(undefined4 *)(param_1 + 0x210) = 0;
      LOCK();
      *(char *)piVar1 = *(char *)piVar1 + -1;
      UNLOCK();
    }
  }
  return iVar3;
}



/* === _BinkOpenWaveOut@4 @ 0x30006fd0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkOpenWaveOut@4 @ 0x30006FD0 */



undefined1 * _BinkOpenWaveOut_4(void)

{
                    /* 0x6fd0  38  _BinkOpenWaveOut@4 */
  return &LAB_30006fe0;
}



/* === FUN_30007090 @ 0x30007090 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007090 @ 0x30007090 */



undefined4 __cdecl FUN_30007090(int param_1)

{
  LPHWAVEOUT phwo;
  byte bVar1;
  int iVar2;
  int iVar3;
  MMRESULT MVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  WAVEFORMATEX local_14;
  
  uVar8 = ((uint)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x3c)) >>
          3) * 1000;
  uVar5 = uVar8 / 16000 + 0x1f & 0xffffffe0;
  *(uint *)(param_1 + 0x60) = uVar5;
  *(uint *)(param_1 + 0x5c) = uVar8 / 2000 + 0x1f & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  iVar2 = radmalloc((uVar5 + 0x24) * 0x10);
  *(int *)(param_1 + 0x6c) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar7 = 0;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * 0x10 + iVar2;
  iVar2 = 0;
  do {
    *(int *)(*(int *)(param_1 + 0x68) + iVar7 * 4) = iVar2 + 0x40 + *(int *)(param_1 + 0x68);
    puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x68) + iVar7 * 4);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    iVar3 = iVar7 * *(int *)(param_1 + 0x60);
    iVar6 = iVar7 * 4;
    iVar2 = iVar2 + 0x20;
    iVar7 = iVar7 + 1;
    **(int **)(*(int *)(param_1 + 0x68) + iVar6) = iVar3 + *(int *)(param_1 + 0x6c);
  } while (iVar2 < 0x200);
  bVar1 = -(*(int *)(param_1 + 0x38) != 0x10);
  puVar10 = *(uint **)(param_1 + 0x6c);
  for (iVar2 = (*(uint *)(param_1 + 0x60) & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1)) & 0x80808080;
    puVar10 = puVar10 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)puVar10 = bVar1 & 0x80;
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  iVar2 = *(int *)(param_1 + 0x34);
  local_14.nChannels = (WORD)*(byte *)(param_1 + 0x3c);
  local_14.wBitsPerSample = *(ushort *)(param_1 + 0x38);
  local_14.nSamplesPerSec._0_2_ = (undefined2)iVar2;
  local_14.nSamplesPerSec._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
  local_14.nAvgBytesPerSec = (uint)(local_14.wBitsPerSample >> 3) * (uint)local_14.nChannels * iVar2
  ;
  local_14.nBlockAlign = (local_14.wBitsPerSample >> 3) * local_14.nChannels;
  phwo = (LPHWAVEOUT)(param_1 + 100);
  local_14.wFormatTag = 1;
  *phwo = (HWAVEOUT)0x0;
  MVar4 = waveOutOpen(phwo,0xffffffff,&local_14,0,0,0);
  if (MVar4 != 0) {
    radfree(*(int *)(param_1 + 0x6c));
    return 0;
  }
  iVar2 = 0;
  do {
    *(undefined4 *)(*(int *)(iVar2 + *(int *)(param_1 + 0x68)) + 4) =
         *(undefined4 *)(param_1 + 0x60);
    waveOutPrepareHeader(*phwo,*(LPWAVEHDR *)(iVar2 + *(int *)(param_1 + 0x68)),0x20);
    iVar7 = *(int *)(iVar2 + *(int *)(param_1 + 0x68));
    iVar2 = iVar2 + 4;
    *(uint *)(iVar7 + 0x10) = *(uint *)(iVar7 + 0x10) | 1;
  } while (iVar2 < 0x40);
  return 1;
}



/* === FUN_30007310 @ 0x30007310 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007310 @ 0x30007310 */



undefined4 FUN_30007310(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x50) == -1) {
    return 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x50);
  uVar1 = *(int *)(param_1 + 0x58) + param_2;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(uint *)(param_1 + 0x58) = uVar1;
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(uint *)(param_1 + 0x5c) <= uVar1) {
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x48) = 1;
      if (-1 < *(int *)(param_1 + 0x54)) {
        do {
          FUN_30007390(param_1,iVar2,*(undefined4 *)(param_1 + 0x60));
          iVar2 = iVar2 + 1;
        } while (iVar2 <= *(int *)(param_1 + 0x54));
        return 1;
      }
    }
  }
  else {
    FUN_30007390(param_1,*(int *)(param_1 + 0x54),param_2);
  }
  return 1;
}



/* === FUN_30007390 @ 0x30007390 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007390 @ 0x30007390 */



void __cdecl FUN_30007390(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 100) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x68) + param_2 * 4) + 4) = param_3;
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x68) + param_2 * 4) + 0x10);
    *puVar1 = *puVar1 & 0xfffffffe;
    if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
      waveOutWrite(*(HWAVEOUT *)(param_1 + 100),
                   *(LPWAVEHDR *)(*(int *)(param_1 + 0x68) + param_2 * 4),0x20);
    }
  }
  return;
}



/* === FUN_300073d0 @ 0x300073d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300073d0 @ 0x300073D0 */



void FUN_300073d0(int param_1,int param_2)

{
  if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  *(int *)(param_1 + 0x40) = (int)(((ulonglong)(param_2 + 1) * 0x7fff) / 0x10000);
  FUN_30007420(param_1);
  return;
}



/* === FUN_30007420 @ 0x30007420 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007420 @ 0x30007420 */



void __cdecl FUN_30007420(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if ((int)uVar1 < 0x8000) {
    uVar3 = *(uint *)(param_1 + 0x40);
    iVar2 = (int)(((ulonglong)uVar3 * (ulonglong)uVar1) / 0x7fff);
  }
  else {
    uVar3 = (uint)(((ulonglong)*(uint *)(param_1 + 0x40) * (ulonglong)(0x10000 - uVar1)) / 0x8001);
    iVar2 = *(int *)(param_1 + 0x40);
  }
  if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
    waveOutSetVolume(*(HWAVEOUT *)(param_1 + 100),iVar2 << 0x10 | uVar3);
  }
  return;
}



/* === FUN_30007530 @ 0x30007530 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007530 @ 0x30007530 */



void __cdecl FUN_30007530(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
    waveOutReset(*(HWAVEOUT *)(param_1 + 100));
    iVar2 = 0;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x68) + iVar2) + 4) =
           *(undefined4 *)(param_1 + 0x60);
      waveOutUnprepareHeader
                (*(HWAVEOUT *)(param_1 + 100),*(LPWAVEHDR *)(*(int *)(param_1 + 0x68) + iVar2),0x20)
      ;
      iVar1 = *(int *)(*(int *)(param_1 + 0x68) + iVar2);
      iVar2 = iVar2 + 4;
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 1;
    } while (iVar2 < 0x40);
    waveOutClose(*(HWAVEOUT *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    radfree(*(int *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}



/* === FUN_300075f0 @ 0x300075f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300075f0 @ 0x300075F0 */



void __cdecl FUN_300075f0(int param_1)

{
  if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
    waveOutPause(*(HWAVEOUT *)(param_1 + 100));
  }
  return;
}



/* === FUN_30007610 @ 0x30007610 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007610 @ 0x30007610 */



void __cdecl FUN_30007610(int param_1)

{
  if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
    waveOutRestart(*(HWAVEOUT *)(param_1 + 100));
  }
  return;
}



/* === FUN_30007640 @ 0x30007640 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007640 @ 0x30007640 */



void FUN_30007640(void)

{
  DWORD DVar1;
  HMODULE pHVar2;
  HWND hWnd;
  HMODULE pHVar3;
  uint uVar4;
  DWORD local_4;
  
  DVar1 = GetCurrentProcessId();
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (DAT_30041b98 == (HWND)0x0) {
    for (hWnd = GetTopWindow((HWND)0x0); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      GetWindowThreadProcessId(hWnd,&local_4);
      if (local_4 == DVar1) {
        pHVar3 = (HMODULE)GetWindowLongA(hWnd,-6);
        if ((pHVar3 == pHVar2) && (uVar4 = GetWindowLongA(hWnd,-0x10), (uVar4 & 0x40000000) == 0)) {
          DAT_30041b98 = hWnd;
        }
        if (DAT_30041b98 == (HWND)0x0) {
          DAT_30041b98 = hWnd;
        }
      }
    }
    if (DAT_30041b98 == (HWND)0x0) {
      DAT_30041b98 = GetActiveWindow();
    }
  }
  return;
}



/* === _BinkOpenDirectSound@4 @ 0x300076f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkOpenDirectSound@4 @ 0x300076F0 */



undefined * _BinkOpenDirectSound_4(int param_1)

{
  int iVar1;
  UINT uMode;
  
                    /* 0x76f0  35  _BinkOpenDirectSound@4 */
  if (DAT_3003da40 != -1) {
    if (DAT_3003da40 == param_1) goto LAB_30007718;
    if (DAT_30041ba0 != 0) {
      return (undefined *)0x0;
    }
  }
  DAT_3003da40 = param_1;
LAB_30007718:
  if (DAT_3003da40 == 0) {
    DAT_30041b9c = 1;
    if (DAT_30041ba8 == (FARPROC)0x0) {
      if (DAT_30041ba4 == (HMODULE)0x0) {
        uMode = SetErrorMode(0x8000);
        DAT_30041ba4 = LoadLibraryA("DSOUND.DLL");
        SetErrorMode(uMode);
      }
      if ((HMODULE)0x1f < DAT_30041ba4) {
        DAT_30041ba8 = GetProcAddress(DAT_30041ba4,"DirectSoundCreate");
      }
      if (DAT_30041ba8 == (FARPROC)0x0) {
        return (undefined *)0x0;
      }
    }
  }
  else {
    DAT_30041b9c = 0;
    DAT_30041ba4 = (HMODULE)0x0;
  }
  iVar1 = FUN_300077c0();
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  FUN_30007880();
  return FUN_300078b0;
}



/* === FUN_300077c0 @ 0x300077c0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300077c0 @ 0x300077C0 */



undefined4 FUN_300077c0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint unaff_EDI;
  undefined4 uVar4;
  undefined4 local_60 [24];
  
  DAT_30041bb8 = (code *)((int)DAT_30041bb8 + 1);
  if (DAT_30041bb8 == (code *)0x1) {
    if (DAT_30041b9c != 0) {
      if (DAT_30041ba8 == (code *)0x0) {
        DAT_30041bb8 = DAT_30041ba8;
        return 0;
      }
      iVar1 = (*DAT_30041ba8)(0,&DAT_3003da40,0);
      if (iVar1 < 0) {
        DAT_30041bb8 = (code *)((int)DAT_30041bb8 + -1);
        return 0;
      }
      iVar1 = *DAT_3003da40;
      uVar4 = 2;
      uVar2 = FUN_30007640();
      iVar1 = (**(code **)(iVar1 + 0x18))(DAT_3003da40,uVar2,uVar4);
      DAT_30041bac = (uint)(-1 < iVar1);
    }
    puVar3 = (undefined4 *)&stack0xffffff9c;
    for (iVar1 = 0x18; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
    }
    DAT_30041bb4 = 0;
    local_60[0] = 0x60;
    iVar1 = (**(code **)(*DAT_3003da40 + 0x10))(DAT_3003da40,local_60);
    if (iVar1 == 0) {
      DAT_30041bb4 = unaff_EDI >> 5 & 1;
    }
  }
  return 1;
}



/* === FUN_30007880 @ 0x30007880 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007880 @ 0x30007880 */



void FUN_30007880(void)

{
  DAT_30041bb8 = DAT_30041bb8 + -1;
  if ((((DAT_30041bb8 == 0) && (DAT_30041b9c != 0)) && (DAT_3003da40 != (int *)0x0)) &&
     (DAT_3003da40 != (int *)0xffffffff)) {
    (**(code **)(*DAT_3003da40 + 8))(DAT_3003da40);
    DAT_3003da40 = (int *)0xffffffff;
  }
  return;
}



/* === FUN_300078b0 @ 0x300078b0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300078b0 @ 0x300078B0 */



undefined4 FUN_300078b0(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined2 local_18;
  ushort local_16;
  int iStack_14;
  uint local_10;
  short local_c;
  ushort local_a;
  undefined2 uStack_8;
  
  puVar5 = param_1;
  for (iVar3 = 0x30; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar3 = FUN_300077c0();
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0xe] = param_3;
  uVar2 = *(ushort *)(param_1 + 0xe);
  param_1[0x15] = param_3;
  param_1[0x16] = param_4;
  param_1[0xf] = param_4;
  local_16 = (ushort)param_4 & 0xff;
  _local_a = CONCAT22(uStack_8,uVar2);
  local_c = (uVar2 >> 3) * ((ushort)param_4 & 0xff);
  local_10 = (uint)(uVar2 >> 3) * (param_4 & 0xff) * param_2;
  param_1[9] = 0;
  param_1[0x14] = param_2;
  param_1[0xd] = param_2;
  local_18 = 1;
  if (DAT_30041bac != 0) {
    local_34 = 0;
    local_3c = 1;
    local_40 = 0x14;
    local_38 = 0;
    local_30 = 0;
    iStack_14 = param_2;
    iVar3 = (**(code **)(*DAT_3003da40 + 0xc))(DAT_3003da40,&local_40,&DAT_30041bb0,0);
    param_2 = iStack_14;
    if (iVar3 == 0) {
      (**(code **)(*DAT_30041bb0 + 0x38))(DAT_30041bb0,&local_18);
      (**(code **)(*DAT_30041bb0 + 0x30))(DAT_30041bb0,0,0,1);
      param_2 = iStack_14;
    }
    DAT_30041bac = 0;
  }
  uVar4 = (((-(uint)(DAT_30041bb4 != 0) & 0x4b) + 100) * local_10) / 1000;
  param_1[0x12] = 4;
  param_1[0x13] = 1;
  if (1 < uVar4) {
    do {
      iVar3 = param_1[0x13];
      param_1[0x13] = iVar3 * 2;
    } while (iVar3 * 2 < (int)uVar4);
  }
  param_1[0x11] = param_1[0x13] * 4;
  local_24 = param_1[0x11];
  param_1[0xb] = (int)(((ulonglong)(uint)(param_1[0x13] * 3) * 1000) / (ulonglong)local_10);
  local_2c = 0x14;
  local_20 = 0;
  local_1c = &local_18;
  piVar1 = param_1 + 0x10;
  local_28 = 0x180e0;
  iStack_14 = param_2;
  iVar3 = (**(code **)(*DAT_3003da40 + 0xc))(DAT_3003da40,&local_2c,piVar1,0);
  if (iVar3 < 0) {
    return 0;
  }
  param_1[8] = param_1[0x13];
  if (param_1[0xe] == 8) {
    param_1[8] = param_1[0x13] * 2;
  }
  param_1[0x17] = 0x7fff;
  param_1[0x18] = 0x7fff;
  FUN_30007af0(piVar1);
  FUN_30007bc0(piVar1);
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[10] = 1;
  *param_1 = &LAB_30007c70;
  param_1[1] = FUN_30007f30;
  param_1[2] = FUN_30007f80;
  param_1[3] = &LAB_30008000;
  param_1[4] = &LAB_30008030;
  param_1[5] = &LAB_300080e0;
  param_1[6] = &LAB_30008060;
  param_1[7] = &LAB_30008150;
  return 1;
}



/* === FUN_30007af0 @ 0x30007af0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007af0 @ 0x30007AF0 */



void FUN_30007af0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar3 = param_1[7];
  if (0x7fff < iVar3) {
    iVar3 = 0x7fff;
  }
  if (param_1[8] < 0x10001) {
    iVar2 = param_1[8] * 0x7f + 0x8000;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffffU)) >> 0x10;
    if (0x40 < iVar2) {
      iVar2 = -(int)*(short *)(&PTR_LAB_3003dc40 + -iVar2);
      goto LAB_30007b6e;
    }
    if (iVar2 < 0x40) {
      iVar2 = (int)(&DAT_3003da44)[iVar2 * 2];
      goto LAB_30007b6e;
    }
  }
  else {
    iVar2 = -(int)DAT_3003da44;
LAB_30007b6e:
    if ((iVar2 < -0x18) || (0x18 < iVar2)) goto LAB_30007b7a;
  }
  iVar2 = 0;
LAB_30007b7a:
  (**(code **)(*piVar1 + 0x44))(piVar1,param_1[4]);
  (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,iVar2);
  (**(code **)(*(int *)*param_1 + 0x3c))
            ((int *)*param_1,(int)(&DAT_3003da44)[(iVar3 * 0x7f) / 0x7fff]);
  return;
}



/* === FUN_30007bc0 @ 0x30007bc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007bc0 @ 0x30007BC0 */



void __cdecl FUN_30007bc0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined4 **ppuVar8;
  undefined1 *puVar9;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  puVar2 = param_1;
  while( true ) {
    puVar9 = local_8;
    ppuVar8 = &param_1;
    puVar7 = local_c;
    puVar6 = (uint *)puVar2[1];
    iVar3 = (**(code **)(*(int *)*puVar2 + 0x2c))
                      ((int *)*puVar2,0,puVar6,puVar7,ppuVar8,local_4,puVar9,0);
    if (iVar3 != -0x7787ff6a) break;
    Sleep(10);
    (**(code **)(*(int *)*puVar2 + 0x50))((int *)*puVar2);
  }
  if ((iVar3 == 0) && (puVar9 == (undefined1 *)puVar2[1])) {
    bVar1 = -(puVar2[5] != 0x10);
    puVar5 = puVar6;
    for (uVar4 = (uint)puVar9 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1)) & 0x80808080;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = (uint)puVar9 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar5 = bVar1 & 0x80;
      puVar5 = (uint *)((int)puVar5 + 1);
    }
    (**(code **)(*(int *)*puVar2 + 0x4c))((int *)*puVar2,puVar6,puVar9,ppuVar8,puVar7);
  }
  return;
}



/* === FUN_30007e50 @ 0x30007e50 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007e50 @ 0x30007E50 */



void __cdecl FUN_30007e50(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (**(code **)(*(int *)*param_1 + 0x2c))
                      ((int *)*param_1,param_1[3] * param_2,param_1[3],param_1 + 0xf,param_1 + 0xe,
                       param_1 + 0x11,param_1 + 0x10,0);
    if (iVar1 != -0x7787ff6a) break;
    Sleep(10);
    (**(code **)(*(int *)*param_1 + 0x50))((int *)*param_1);
  }
  return;
}



/* === FUN_30007ea0 @ 0x30007ea0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007ea0 @ 0x30007EA0 */



void __cdecl FUN_30007ea0(undefined4 *param_1)

{
  (**(code **)(*(int *)*param_1 + 0x4c))
            ((int *)*param_1,param_1[0xf],param_1[0xe],param_1[0x11],param_1[0x10]);
  return;
}



/* === FUN_30007ec0 @ 0x30007ec0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007ec0 @ 0x30007EC0 */



void __cdecl FUN_30007ec0(undefined4 *param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (**(code **)(*(int *)*param_1 + 0x30))((int *)*param_1,0,0,1);
    if (iVar1 != -0x7787ff6a) break;
    Sleep(10);
    (**(code **)(*(int *)*param_1 + 0x50))((int *)*param_1);
  }
  param_1[0xd] = 0;
  return;
}



/* === FUN_30007f00 @ 0x30007f00 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007f00 @ 0x30007F00 */



uint __cdecl FUN_30007f00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint unaff_ESI;
  undefined1 local_4 [4];
  
  puVar1 = param_1;
  iVar2 = (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1,&param_1,local_4);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  return unaff_ESI / (uint)puVar1[3];
}



/* === FUN_30007f30 @ 0x30007f30 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007f30 @ 0x30007F30 */



undefined4 FUN_30007f30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((*(int *)(param_1 + 0x70) != -1) && (*(int *)(param_1 + 0x7c) == 0)) {
    FUN_30007e50((undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x70));
    *param_2 = *(undefined4 *)(param_1 + 0x7c);
    *param_3 = *(undefined4 *)(param_1 + 0x78);
    return 1;
  }
  return 0;
}



/* === FUN_30007f80 @ 0x30007f80 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007f80 @ 0x30007F80 */



undefined4 FUN_30007f80(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((*(int *)(param_1 + 0x70) != -1) && (*(int *)(param_1 + 0x7c) != 0)) {
    uVar2 = *(int *)(param_1 + 0x78) - param_2;
    bVar1 = -(*(int *)(param_1 + 0x54) != 0x10);
    puVar4 = (uint *)(param_2 + *(int *)(param_1 + 0x7c));
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1)) & 0x80808080;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(byte *)puVar4 = bVar1 & 0x80;
      puVar4 = (uint *)((int)puVar4 + 1);
    }
    FUN_30007ea0((undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    return 1;
  }
  return 0;
}



/* === FUN_30008130 @ 0x30008130 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008130 @ 0x30008130 */



void __cdecl FUN_30008130(undefined4 *param_1)

{
  (**(code **)(*(int *)*param_1 + 0x48))((int *)*param_1);
  param_1[0xd] = 1;
  return;
}



/* === _BinkOpenMiles@4 @ 0x30008180 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkOpenMiles@4 @ 0x30008180 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * _BinkOpenMiles_4(int param_1)

{
  UINT uMode;
  
                    /* 0x8180  36  _BinkOpenMiles@4 */
  if (param_1 == 0) {
    return (undefined1 *)0x0;
  }
  if (DAT_3003db44 != -1) {
    if (DAT_3003db44 == param_1) goto LAB_300081ad;
    if (DAT_30041c18 != 0) {
      return (undefined1 *)0x0;
    }
  }
  DAT_3003db44 = param_1;
LAB_300081ad:
  if (DAT_30041c1c == (FARPROC)0x0) {
    if (DAT_30041c14 == (HMODULE)0x0) {
      uMode = SetErrorMode(0x8000);
      DAT_30041c14 = LoadLibraryA("MSS32.DLL");
      SetErrorMode(uMode);
    }
    if ((HMODULE)0x1f < DAT_30041c14) {
      DAT_30041c1c = GetProcAddress(DAT_30041c14,"_AIL_minimum_sample_buffer_size@12");
      DAT_30041c08 = GetProcAddress(DAT_30041c14,"_AIL_allocate_sample_handle@4");
      DAT_30041be0 = GetProcAddress(DAT_30041c14,"_AIL_init_sample@4");
      DAT_30041bec = GetProcAddress(DAT_30041c14,"_AIL_stop_sample@4");
      DAT_30041c04 = GetProcAddress(DAT_30041c14,"_AIL_resume_sample@4");
      DAT_30041bdc = GetProcAddress(DAT_30041c14,"_AIL_set_sample_type@12");
      DAT_30041be8 = GetProcAddress(DAT_30041c14,"_AIL_set_sample_playback_rate@8");
      DAT_30041bfc = GetProcAddress(DAT_30041c14,"_AIL_set_sample_user_data@12");
      DAT_30041be4 = GetProcAddress(DAT_30041c14,"_AIL_set_sample_volume@8");
      DAT_30041c10 = GetProcAddress(DAT_30041c14,"_AIL_set_sample_pan@8");
      _DAT_30041bf8 = GetProcAddress(DAT_30041c14,"_AIL_serve@0");
      DAT_30041bd4 = GetProcAddress(DAT_30041c14,"_AIL_sample_buffer_ready@4");
      DAT_30041bd8 = GetProcAddress(DAT_30041c14,"_AIL_load_sample_buffer@16");
      _DAT_30041c0c = GetProcAddress(DAT_30041c14,"_AIL_end_sample@4");
      DAT_30041bf4 = GetProcAddress(DAT_30041c14,"_AIL_release_sample_handle@4");
      _DAT_30041bf0 = GetProcAddress(DAT_30041c14,"_AIL_sample_status@4");
      DAT_30041bbc = GetProcAddress(DAT_30041c14,"_AIL_sample_buffer_info@20");
      DAT_30041c00 = GetProcAddress(DAT_30041c14,"_AIL_mem_alloc_lock@4");
      DAT_30041bc8 = GetProcAddress(DAT_30041c14,"_AIL_mem_free_lock@4");
      _DAT_30041bc4 = GetProcAddress(DAT_30041c14,"_AIL_get_preference@4");
      DAT_30041bfc = GetProcAddress(DAT_30041c14,"_AIL_set_sample_user_data@12");
      DAT_30041bcc = GetProcAddress(DAT_30041c14,"_AIL_sample_user_data@8");
      DAT_30041bd0 = GetProcAddress(DAT_30041c14,"_AIL_register_EOB_callback@8");
      DAT_30041bbc = GetProcAddress(DAT_30041c14,"_AIL_sample_buffer_info@20");
      DAT_30041bc0 = GetProcAddress(DAT_30041c14,"_AIL_digital_latency@4");
      if (DAT_30041bc0 == (FARPROC)0x0) {
        DAT_30041bc0 = (FARPROC)&LAB_30008820;
      }
    }
    if (DAT_30041c1c == (FARPROC)0x0) {
      return (undefined1 *)0x0;
    }
  }
  return &LAB_300083f0;
}



/* === FUN_30008530 @ 0x30008530 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008530 @ 0x30008530 */



bool FUN_30008530(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) == -1) {
    uVar1 = (*DAT_30041bd4)(*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
  }
  if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x58) == 0)) {
    iVar2 = (*DAT_30041bbc)(*(undefined4 *)(param_1 + 0x48),0,0,0,0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
  }
  return *(int *)(param_1 + 0x4c) != -1;
}



/* === FUN_300085c0 @ 0x300085c0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300085c0 @ 0x300085C0 */



undefined4 FUN_300085c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == -1) {
    return 0;
  }
  (*DAT_30041bd8)(*(undefined4 *)(param_1 + 0x48),iVar1,*(undefined4 *)(param_1 + 0x40 + iVar1 * 4),
                  param_2);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  return 1;
}



/* === FUN_30008600 @ 0x30008600 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008600 @ 0x30008600 */



void FUN_30008600(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (0x7fff < (int)param_2) {
    param_2 = 0x7fff;
  }
  uVar1 = (undefined4)(((ulonglong)param_2 * 0x7f) / 0x7fff);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  (*DAT_30041be4)(*(undefined4 *)(param_1 + 0x48),uVar1);
  return;
}



/* === FUN_30008650 @ 0x30008650 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008650 @ 0x30008650 */



void FUN_30008650(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(((ulonglong)param_2 * 0x7f) / 0x10000);
  if (0x7f < uVar1) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x60) = uVar1;
  (*DAT_30041c10)(*(undefined4 *)(param_1 + 0x48),uVar1);
  return;
}



/* === FUN_300086a0 @ 0x300086a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300086a0 @ 0x300086A0 */



void __cdecl FUN_300086a0(int param_1)

{
  byte bVar1;
  
  (*DAT_30041be0)(*(undefined4 *)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x38) == 0x10) {
    bVar1 = ((*(int *)(param_1 + 0x3c) != 2) - 1U & 2) + 1;
  }
  else {
    bVar1 = (*(int *)(param_1 + 0x3c) != 2) - 1U & 2;
  }
  (*DAT_30041bdc)(*(undefined4 *)(param_1 + 0x48),bVar1,*(int *)(param_1 + 0x38) == 0x10);
  (*DAT_30041be8)(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x34));
  (*DAT_30041be4)(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x5c));
  (*DAT_30041c10)(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  (*DAT_30041bfc)(*(undefined4 *)(param_1 + 0x48),0,*(undefined4 *)(param_1 + 0x54));
  (*DAT_30041bd0)(*(undefined4 *)(param_1 + 0x48),&LAB_30008740);
  return;
}



/* === FUN_300087c0 @ 0x300087c0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300087c0 @ 0x300087C0 */



int FUN_300087c0(int param_1,int param_2)

{
  if (param_2 == 1) {
    (*DAT_30041bec)(*(undefined4 *)(param_1 + 0x48));
    return 1;
  }
  (*DAT_30041c04)(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x58) = 1;
  return param_2;
}



/* === FUN_30008800 @ 0x30008800 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008800 @ 0x30008800 */



void FUN_30008800(int param_1)

{
  (*DAT_30041bc8)(*(undefined4 *)(param_1 + 0x40));
  (*DAT_30041bf4)(*(undefined4 *)(param_1 + 0x48));
  return;
}



/* === FUN_30008830 @ 0x30008830 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008830 @ 0x30008830 */



void FUN_30008830(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_300088f0(0x200,param_2,4,1);
  *param_1 = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2 >> 1,4,1);
  param_1[1] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,8,0x40);
  param_1[2] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,8,8);
  param_1[3] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,5,1);
  param_1[4] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,5,1);
  param_1[5] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,0xb,1);
  param_1[6] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,0xb,1);
  param_1[7] = uVar1;
  uVar1 = FUN_300088f0(0x200,param_2,4,0x30);
  param_1[8] = uVar1;
  return;
}



/* === FUN_300088f0 @ 0x300088f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300088f0 @ 0x300088F0 */



uint __cdecl FUN_300088f0(int param_1,uint param_2,uint param_3,int param_4)

{
  if (param_3 < 9) {
    param_3 = 8;
  }
  else if (param_3 < 0x10) {
    param_3 = 0x10;
  }
  return ((param_2 >> 3) * param_3 * param_4 >> 3) + 3 + (param_1 * param_3 >> 3) & 0xfffffffc;
}



/* === FUN_30008930 @ 0x30008930 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008930 @ 0x30008930 */



void FUN_30008930(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,uint *param_10,undefined4 param_11,
                 uint *param_12,uint param_13,uint param_14)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_14 & 0x100000) != 0) {
    if ((param_13 & 0x100000) == 0) {
      param_10 = (uint *)((int)param_10 + *param_10);
    }
    else {
      FUN_30008ab0(param_3,param_4,param_6 + 7U & 0xfffffff8,param_7 + 7U & 0xfffffff8,param_8,
                   param_10 + 1,param_11,param_5,1,param_12,param_13);
      param_10 = (uint *)((int)param_10 + *param_10);
    }
  }
  if ((param_13 & 0x8000) == 0) {
    param_10 = param_10 + 1;
  }
  puVar1 = FUN_30008ab0(param_1,param_2,param_6 + 7U & 0xfffffff8,param_7 + 7U & 0xfffffff8,param_8,
                        param_10,param_11,param_5,1,param_12,param_13);
  if ((param_13 & 0x8000) == 0) {
    puVar1 = (uint *)((param_10[-1] - 4) + (int)param_10);
  }
  if ((param_13 & 0x20000) == 0) {
    puVar3 = (uint *)((int)param_2 + param_8 * param_9);
    puVar5 = (uint *)((int)param_1 + param_8 * param_9);
    uVar6 = (param_6 + 1U >> 1) + 7 & 0xfffffff8;
    uVar4 = param_8 >> 1;
    uVar7 = (param_7 + 1U >> 1) + 7 & 0xfffffff8;
    puVar1 = FUN_30008ab0(puVar5,puVar3,uVar6,uVar7,uVar4,puVar1,param_11,param_5,2,param_12,
                          param_13);
    iVar2 = uVar4 * (param_9 >> 1);
    FUN_30008ab0((uint *)(iVar2 + (int)puVar5),(uint *)(iVar2 + (int)puVar3),uVar6,uVar7,uVar4,
                 puVar1,param_11,param_5,2,param_12,param_13);
  }
  return;
}



/* === FUN_30008ab0 @ 0x30008ab0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008ab0 @ 0x30008AB0 */



/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * __cdecl
FUN_30008ab0(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint *param_6,
            undefined4 param_7,int param_8,uint param_9,uint *param_10,uint param_11)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  byte *pbVar21;
  undefined1 local_430 [388];
  short local_2ac [64];
  short *local_22c [12];
  undefined1 *local_1fc [12];
  undefined1 *local_1cc [12];
  uint local_19c;
  uint local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  short *local_15c [12];
  char *local_12c [12];
  char *local_fc [12];
  byte *local_cc [12];
  int local_9c;
  byte *local_98 [12];
  int local_68;
  code *local_64;
  int local_60;
  uint *local_5c [12];
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_9c = param_5 * 8 - param_3;
  local_18 = param_1;
  local_1c = param_2;
  local_8 = 0;
  local_c = 0;
  local_64 = (code *)&LAB_3000a740;
  local_60 = (int)((ulonglong)param_5 / (0x10 / (ulonglong)param_9));
  local_10 = param_6;
  local_14 = param_6;
  if ((param_11 & 0x8000) == 0) {
    local_64 = FUN_3000aa30;
  }
  FUN_30009e30(*param_10,local_1fc,0x200,param_3,4,1,0);
  FUN_30009e30(param_10[1],local_1cc,0x200,param_3 >> 1,4,1,0);
  FUN_30009e30(param_10[2],local_5c,0x200,param_3,8,0x40,0);
  FUN_30009e30(param_10[3],local_98,0x200,param_3,8,8,0);
  FUN_30009e30(param_10[4],local_fc,0x200,param_3,5,1,1);
  FUN_30009e30(param_10[5],local_12c,0x200,param_3,5,1,1);
  FUN_30009e30(param_10[6],local_15c,0x200,param_3,0xb,1,0);
  FUN_30009e30(param_10[7],local_22c,0x200,param_3,0xb,1,1);
  FUN_30009e30(param_10[8],local_cc,0x200,param_3,4,0x30,0);
  FUN_30009ee0((int)local_1fc,(int *)&local_14);
  FUN_30009ee0((int)local_1cc,(int *)&local_14);
  FUN_3000a440((int)local_5c,(int *)&local_14,local_430);
  FUN_30009ee0((int)local_98,(int *)&local_14);
  FUN_30009ee0((int)local_fc,(int *)&local_14);
  FUN_30009ee0((int)local_12c,(int *)&local_14);
  FUN_30009ee0((int)local_cc,(int *)&local_14);
  local_2c = 0;
  if (param_4 != 0) {
    do {
      uVar16 = local_2c;
      param_2 = (uint *)0x0;
      FUN_3000a4a0((int *)local_1fc,(int *)&local_14);
      FUN_3000a4a0((int *)local_1cc,(int *)&local_14);
      (*local_64)(local_5c,&local_14,local_430);
      FUN_3000af10((int *)local_98,(int *)&local_14);
      FUN_3000b110((int *)local_fc,(int *)&local_14);
      FUN_3000b110((int *)local_12c,(int *)&local_14);
      FUN_3000b370((int *)local_15c,(int *)&local_14);
      FUN_3000b370((int *)local_22c,(int *)&local_14);
      FUN_3000ad10((int *)local_cc,(int *)&local_14);
      uVar13 = local_c;
      pbVar21 = local_98[0];
      puVar19 = local_5c[0];
      for (local_28 = param_3; local_c = uVar13, local_28 != 0; local_28 = local_28 - 8) {
        uVar4 = *local_1fc[0];
        local_1fc[0] = local_1fc[0] + 1;
        bVar14 = (byte)local_8;
        switch(uVar4) {
        case 0:
          uVar13 = local_1c[1];
          uVar6 = *(undefined4 *)((int)local_1c + param_5);
          uVar7 = *(undefined4 *)((int)local_1c + param_5 + 4);
          puVar2 = (undefined4 *)((int)local_1c + param_5 * 2);
          *local_18 = *local_1c;
          local_18[1] = uVar13;
          *(undefined4 *)((int)local_18 + param_5) = uVar6;
          *(undefined4 *)((int)local_18 + param_5 + 4) = uVar7;
          pcVar1 = (char *)((int)local_18 + param_5 * 2);
          uVar6 = puVar2[1];
          uVar7 = *(undefined4 *)((int)puVar2 + param_5);
          uVar8 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar3 = (undefined4 *)((int)puVar2 + param_5 * 2);
          *(undefined4 *)pcVar1 = *puVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          pcVar1 = pcVar1 + param_5 * 2;
          uVar6 = puVar3[1];
          uVar7 = *(undefined4 *)((int)puVar3 + param_5);
          uVar8 = *(undefined4 *)((int)puVar3 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar3 + param_5 * 2);
          *(undefined4 *)pcVar1 = *puVar3;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          pcVar1 = pcVar1 + param_5 * 2;
          uVar6 = puVar2[1];
          uVar7 = *(undefined4 *)((int)puVar2 + param_5);
          uVar8 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          *(undefined4 *)pcVar1 = *puVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 1:
          if ((uVar16 & 8) == 0) {
            uVar4 = *local_1cc[0];
            local_1cc[0] = local_1cc[0] + 1;
            switch(uVar4) {
            case 3:
              if (local_8 < 4) {
                uVar13 = *local_14 << (bVar14 & 0x1f) | uVar13;
                local_c = *local_14 >> (4 - bVar14 & 0x1f);
                local_8 = local_8 + 0x1c;
                local_14 = local_14 + 1;
              }
              else {
                local_c = uVar13 >> 4;
                local_8 = local_8 - 4;
              }
              iVar12 = (uVar13 & 0xf) * 0x40;
              iVar18 = 0;
              do {
                if (local_8 == 0) {
                  uVar13 = *local_14;
                  local_14 = local_14 + 1;
                  local_8 = 0x1f;
                }
                else {
                  local_8 = local_8 - 1;
                  uVar13 = local_c;
                }
                local_c = uVar13 >> 1;
                if ((uVar13 & 1) == 0) {
                  bVar14 = *local_cc[0];
                  local_cc[0] = local_cc[0] + 1;
                  for (iVar15 = bVar14 + 1; iVar15 != 0; iVar15 = iVar15 + -1) {
                    iVar11 = iVar18 + iVar12;
                    uVar13 = *puVar19;
                    iVar18 = iVar18 + 1;
                    puVar19 = (uint *)((int)puVar19 + 1);
                    local_5c[0] = puVar19;
                    *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033708)[iVar11]) = (char)uVar13;
                  }
                }
                else {
                  uVar13 = *puVar19;
                  puVar19 = (uint *)((int)puVar19 + 1);
                  bVar14 = *local_cc[0];
                  local_cc[0] = local_cc[0] + 1;
                  local_5c[0] = puVar19;
                  for (iVar15 = bVar14 + 1; iVar15 != 0; iVar15 = iVar15 + -1) {
                    iVar11 = iVar18 + iVar12;
                    iVar18 = iVar18 + 1;
                    *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033708)[iVar11]) = (char)uVar13;
                  }
                }
              } while (iVar18 < 0x3f);
              if (iVar18 == 0x3f) {
                uVar13 = *puVar19;
                puVar19 = (uint *)((int)puVar19 + 1);
                local_5c[0] = puVar19;
                *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033747)[iVar12]) = (char)uVar13;
              }
              param_1 = &local_198;
              param_11 = 8;
              puVar20 = local_18;
              do {
                param_6 = (uint *)((int)puVar20 + param_5);
                uVar5 = (ushort)param_1[-1];
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                *puVar20 = uVar13;
                *param_6 = uVar13;
                uVar5 = *(ushort *)((int)param_1 + -2);
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[1] = uVar13;
                param_6[1] = uVar13;
                uVar5 = (ushort)*param_1;
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[2] = uVar13;
                param_6[2] = uVar13;
                uVar5 = *(ushort *)((int)param_1 + 2);
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[3] = uVar13;
                param_1 = param_1 + 2;
                param_6[3] = uVar13;
                puVar20 = (uint *)((int)param_6 + param_5);
                param_11 = param_11 - 1;
              } while (param_11 != 0);
              break;
            case 5:
              local_2ac[0] = *local_15c[0];
              local_15c[0] = local_15c[0] + 1;
              FUN_3001ce50((int)local_2ac,(int *)&local_14);
              if (local_8 < 4) {
                uVar13 = *local_14 << ((byte)local_8 & 0x1f) | local_c;
                local_c = *local_14 >> (4 - (byte)local_8 & 0x1f);
                local_8 = local_8 + 0x1c;
                local_14 = local_14 + 1;
              }
              else {
                local_8 = local_8 - 4;
                uVar13 = local_c;
                local_c = local_c >> 4;
              }
              FUN_3001c590((int)local_18,param_5,local_2ac,uVar13 & 0xf);
              puVar19 = local_5c[0];
              pbVar21 = local_98[0];
              break;
            case 6:
              local_5c[0] = (uint *)((int)puVar19 + 1);
              param_1 = (uint *)0x7;
              uVar9 = CONCAT11((char)*puVar19,(char)*puVar19);
              uVar13 = CONCAT22(uVar9,uVar9);
              puVar19 = (uint *)((int)local_18 + param_5);
              *local_18 = uVar13;
              local_18[1] = uVar13;
              local_18[2] = uVar13;
              local_18[3] = uVar13;
              do {
                puVar20 = (uint *)((int)puVar19 + param_5);
                *puVar19 = uVar13;
                puVar19[1] = uVar13;
                puVar19[2] = uVar13;
                puVar19[3] = uVar13;
                puVar19 = (uint *)((int)puVar20 + param_5);
                *puVar20 = uVar13;
                puVar20[1] = uVar13;
                puVar20[2] = uVar13;
                puVar20[3] = uVar13;
                param_1 = (uint *)((int)param_1 + -1);
              } while (param_1 != (uint *)0x0);
              *puVar19 = uVar13;
              puVar19[1] = uVar13;
              puVar19[2] = uVar13;
              puVar19[3] = uVar13;
              puVar19 = local_5c[0];
              break;
            case 8:
              local_5c[0] = (uint *)((int)puVar19 + 2);
              uVar9 = CONCAT11((char)*puVar19,(char)*puVar19);
              local_68 = 8;
              uVar10 = CONCAT11(*(undefined1 *)((int)puVar19 + 1),*(undefined1 *)((int)puVar19 + 1))
              ;
              uVar16 = CONCAT22(uVar9,uVar9);
              uVar13 = CONCAT22(uVar10,uVar10);
              param_1 = local_18;
              do {
                param_10 = (uint *)((int)param_1 + param_5);
                bVar14 = *pbVar21;
                pbVar21 = pbVar21 + 1;
                iVar18 = (bVar14 & 3) * 4;
                uVar17 = *(uint *)(&DAT_30033f8c + iVar18) & uVar16 |
                         *(uint *)(&DAT_30033f7c + iVar18) & uVar13;
                *param_1 = uVar17;
                *param_10 = uVar17;
                iVar18 = (bVar14 >> 2 & 3) * 4;
                uVar17 = *(uint *)(&DAT_30033f8c + iVar18) & uVar16 |
                         *(uint *)(&DAT_30033f7c + iVar18) & uVar13;
                param_1[1] = uVar17;
                param_10[1] = uVar17;
                local_20 = (bVar14 >> 4 & 3) * 4;
                local_24 = *(uint *)(&DAT_30033f8c + local_20) & uVar16;
                uVar17 = local_24 | *(uint *)(&DAT_30033f7c + local_20) & uVar13;
                iVar18 = (uint)(bVar14 >> 6) * 4;
                param_1[2] = uVar17;
                param_10[2] = uVar17;
                uVar17 = *(uint *)(&DAT_30033f8c + iVar18) & uVar16 |
                         *(uint *)(&DAT_30033f7c + iVar18) & uVar13;
                param_1[3] = uVar17;
                param_1 = (uint *)((int)param_10 + param_5);
                local_68 = local_68 + -1;
                param_10[3] = uVar17;
              } while (local_68 != 0);
              local_68 = 0;
              puVar19 = local_5c[0];
              local_98[0] = pbVar21;
              break;
            case 9:
              param_1 = (uint *)0x8;
              puVar20 = local_18;
              do {
                uVar5 = (ushort)*puVar19;
                local_5c[0] = puVar19 + 2;
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                *puVar20 = uVar13;
                *(uint *)((int)puVar20 + param_5) = uVar13;
                uVar5 = *(ushort *)((int)puVar19 + 2);
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[1] = uVar13;
                *(uint *)((int)puVar20 + param_5 + 4) = uVar13;
                uVar5 = (ushort)puVar19[1];
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[2] = uVar13;
                *(uint *)((int)puVar20 + param_5 + 8) = uVar13;
                uVar5 = *(ushort *)((int)puVar19 + 6);
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[3] = uVar13;
                *(uint *)((int)puVar20 + param_5 + 0xc) = uVar13;
                puVar20 = (uint *)((int)puVar20 + param_5 * 2);
                param_1 = (uint *)((int)param_1 + -1);
                puVar19 = local_5c[0];
              } while (param_1 != (uint *)0x0);
            }
          }
          local_18 = local_18 + 2;
          local_28 = local_28 - 8;
          local_1c = local_1c + 2;
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          param_2 = (uint *)((int)param_2 + param_9);
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          break;
        case 2:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          puVar19 = (uint *)((int)local_1c + (int)*local_fc[0] + (int)*local_12c[0] * param_5);
          local_fc[0] = local_fc[0] + 1;
          local_12c[0] = local_12c[0] + 1;
          uVar13 = puVar19[1];
          uVar6 = *(undefined4 *)((int)puVar19 + param_5);
          uVar7 = *(undefined4 *)((int)puVar19 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar19 + param_5 * 2);
          *local_18 = *puVar19;
          local_18[1] = uVar13;
          *(undefined4 *)((int)local_18 + param_5) = uVar6;
          *(undefined4 *)((int)local_18 + param_5 + 4) = uVar7;
          pcVar1 = (char *)((int)local_18 + param_5 * 2);
          uVar6 = puVar2[1];
          uVar7 = *(undefined4 *)((int)puVar2 + param_5);
          uVar8 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar3 = (undefined4 *)((int)puVar2 + param_5 * 2);
          *(undefined4 *)pcVar1 = *puVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          pcVar1 = pcVar1 + param_5 * 2;
          uVar6 = puVar3[1];
          uVar7 = *(undefined4 *)((int)puVar3 + param_5);
          uVar8 = *(undefined4 *)((int)puVar3 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar3 + param_5 * 2);
          *(undefined4 *)pcVar1 = *puVar3;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          pcVar1 = pcVar1 + param_5 * 2;
          uVar6 = puVar2[1];
          uVar7 = *(undefined4 *)((int)puVar2 + param_5);
          uVar8 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          *(undefined4 *)pcVar1 = *puVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 3:
          if (local_8 < 4) {
            uVar13 = *local_14 << (bVar14 & 0x1f) | uVar13;
            local_c = *local_14 >> (4 - bVar14 & 0x1f);
            local_8 = local_8 + 0x1c;
            local_14 = local_14 + 1;
          }
          else {
            local_c = uVar13 >> 4;
            local_8 = local_8 - 4;
          }
          iVar12 = (uVar13 & 0xf) * 0x40;
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          iVar18 = 0;
          do {
            if (local_8 == 0) {
              uVar13 = *local_14;
              local_14 = local_14 + 1;
              local_8 = 0x1f;
            }
            else {
              local_8 = local_8 - 1;
              uVar13 = local_c;
            }
            local_c = uVar13 >> 1;
            if ((uVar13 & 1) == 0) {
              bVar14 = *local_cc[0];
              local_cc[0] = local_cc[0] + 1;
              for (iVar15 = bVar14 + 1; iVar15 != 0; iVar15 = iVar15 + -1) {
                iVar11 = iVar18 + iVar12;
                iVar18 = iVar18 + 1;
                puVar20 = (uint *)((int)puVar19 + 1);
                *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033708)[iVar11]) = (char)*puVar19;
                puVar19 = puVar20;
                local_5c[0] = puVar20;
              }
            }
            else {
              uVar13 = *puVar19;
              puVar19 = (uint *)((int)puVar19 + 1);
              bVar14 = *local_cc[0];
              local_cc[0] = local_cc[0] + 1;
              local_5c[0] = puVar19;
              for (iVar15 = bVar14 + 1; iVar15 != 0; iVar15 = iVar15 + -1) {
                iVar11 = iVar18 + iVar12;
                iVar18 = iVar18 + 1;
                *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033708)[iVar11]) = (char)uVar13;
              }
            }
          } while (iVar18 < 0x3f);
          if (iVar18 == 0x3f) {
            local_5c[0] = (uint *)((int)puVar19 + 1);
            *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033747)[iVar12]) = (char)*puVar19;
          }
          *local_18 = local_19c;
          local_18[1] = local_198;
          *(undefined4 *)((int)local_18 + param_5) = local_194;
          *(undefined4 *)((int)local_18 + param_5 + 4) = local_190;
          pcVar1 = (char *)((int)local_18 + param_5 * 2);
          *(undefined4 *)pcVar1 = local_18c;
          *(undefined4 *)(pcVar1 + 4) = local_188;
          *(undefined4 *)(pcVar1 + param_5) = local_184;
          *(undefined4 *)(pcVar1 + param_5 + 4) = local_180;
          pcVar1 = pcVar1 + param_5 * 2;
          *(undefined4 *)pcVar1 = local_17c;
          *(undefined4 *)(pcVar1 + 4) = local_178;
          *(undefined4 *)(pcVar1 + param_5) = local_174;
          *(undefined4 *)(pcVar1 + param_5 + 4) = local_170;
          pcVar1 = pcVar1 + param_5 * 2;
          *(undefined4 *)pcVar1 = local_16c;
          *(undefined4 *)(pcVar1 + 4) = local_168;
          *(undefined4 *)(pcVar1 + param_5) = local_164;
          *(undefined4 *)(pcVar1 + param_5 + 4) = local_160;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 4:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          puVar19 = (uint *)((int)local_1c + (int)*local_fc[0] + (int)*local_12c[0] * param_5);
          local_fc[0] = local_fc[0] + 1;
          local_12c[0] = local_12c[0] + 1;
          local_19c = *puVar19;
          local_198 = puVar19[1];
          local_194 = *(undefined4 *)((int)puVar19 + param_5);
          local_190 = *(undefined4 *)((int)puVar19 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar19 + param_5 * 2);
          local_18c = *puVar2;
          local_188 = puVar2[1];
          local_184 = *(undefined4 *)((int)puVar2 + param_5);
          local_180 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          local_17c = *puVar2;
          local_178 = puVar2[1];
          local_174 = *(undefined4 *)((int)puVar2 + param_5);
          local_170 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          local_16c = *puVar2;
          local_168 = puVar2[1];
          local_164 = *(undefined4 *)((int)puVar2 + param_5);
          local_160 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          if (local_8 < 7) {
            local_c = *local_14 >> (7 - bVar14 & 0x1f);
            uVar13 = *local_14 << (bVar14 & 0x1f) | uVar13;
            local_8 = local_8 + 0x19;
            local_14 = local_14 + 1;
          }
          else {
            local_c = uVar13 >> 7;
            local_8 = local_8 - 7;
          }
          FUN_3001dd60((char *)local_18,param_5,(int *)&local_14,uVar13 & 0x7f,(char *)&local_19c);
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 5:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          local_2ac[0] = *local_15c[0];
          local_15c[0] = local_15c[0] + 1;
          FUN_3001ce50((int)local_2ac,(int *)&local_14);
          if (local_8 < 4) {
            uVar13 = *local_14 << ((byte)local_8 & 0x1f) | local_c;
            local_c = *local_14 >> (4 - (byte)local_8 & 0x1f);
            local_8 = local_8 + 0x1c;
            local_14 = local_14 + 1;
          }
          else {
            local_8 = local_8 - 4;
            uVar13 = local_c;
            local_c = local_c >> 4;
          }
          FUN_3001c560((int)local_18,param_5,local_2ac,uVar13 & 0xf);
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 6:
          uVar13 = *puVar19;
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          local_5c[0] = (uint *)((int)puVar19 + 1);
          uVar9 = CONCAT11((char)uVar13,(char)uVar13);
          uVar13 = CONCAT22(uVar9,uVar9);
          *local_18 = uVar13;
          local_18[1] = uVar13;
          *(uint *)((int)local_18 + param_5) = uVar13;
          *(uint *)((int)local_18 + param_5 + 4) = uVar13;
          *(uint *)((int)local_18 + param_5 * 2) = uVar13;
          *(uint *)((int)local_18 + param_5 * 2 + 4) = uVar13;
          *(uint *)((int)local_18 + param_5 * 3) = uVar13;
          *(uint *)((int)local_18 + param_5 * 3 + 4) = uVar13;
          puVar19 = local_18 + param_5;
          *puVar19 = uVar13;
          puVar19[1] = uVar13;
          puVar19 = (uint *)((int)puVar19 + param_5);
          puVar20 = (uint *)((int)puVar19 + param_5);
          *puVar19 = uVar13;
          puVar19[1] = uVar13;
          *puVar20 = uVar13;
          puVar20[1] = uVar13;
          *(uint *)((int)puVar20 + param_5) = uVar13;
          *(uint *)((int)puVar20 + param_5 + 4) = uVar13;
          puVar19 = local_5c[0];
          break;
        case 7:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          puVar19 = (uint *)((int)local_1c + (int)*local_fc[0] + (int)*local_12c[0] * param_5);
          local_fc[0] = local_fc[0] + 1;
          local_12c[0] = local_12c[0] + 1;
          local_19c = *puVar19;
          local_198 = puVar19[1];
          local_194 = *(undefined4 *)((int)puVar19 + param_5);
          local_190 = *(undefined4 *)((int)puVar19 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar19 + param_5 * 2);
          local_18c = *puVar2;
          local_188 = puVar2[1];
          local_184 = *(undefined4 *)((int)puVar2 + param_5);
          local_180 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          local_17c = *puVar2;
          local_178 = puVar2[1];
          local_174 = *(undefined4 *)((int)puVar2 + param_5);
          local_170 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          local_16c = *puVar2;
          local_168 = puVar2[1];
          local_164 = *(undefined4 *)((int)puVar2 + param_5);
          local_160 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          local_2ac[0] = *local_22c[0];
          local_22c[0] = local_22c[0] + 1;
          FUN_3001ce50((int)local_2ac,(int *)&local_14);
          if (local_8 < 4) {
            uVar13 = *local_14;
            bVar14 = (byte)local_8;
            uVar16 = uVar13 << (bVar14 & 0x1f) | local_c;
            local_8 = local_8 + 0x1c;
            local_14 = local_14 + 1;
            local_c = uVar13 >> (4 - bVar14 & 0x1f);
          }
          else {
            local_8 = local_8 - 4;
            uVar16 = local_c;
            local_c = local_c >> 4;
          }
          FUN_3001ca30((int)local_18,param_5,local_2ac,uVar16 & 0xf,(int)&local_19c);
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 8:
          uVar13 = *puVar19;
          uVar4 = *(undefined1 *)((int)puVar19 + 1);
          local_5c[0] = (uint *)((int)puVar19 + 2);
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          uVar9 = CONCAT11((char)uVar13,(char)uVar13);
          uVar13 = CONCAT22(uVar9,uVar9);
          uVar9 = CONCAT11(uVar4,uVar4);
          uVar16 = CONCAT22(uVar9,uVar9);
          bVar14 = *pbVar21;
          iVar18 = (bVar14 & 0xf) * 4;
          *local_18 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                      *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          local_18[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                        *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[1];
          puVar19 = (uint *)((int)local_18 + param_5 * 2);
          iVar18 = (bVar14 & 0xf) * 4;
          *(uint *)((int)local_18 + param_5) =
               *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
               *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          *(uint *)((int)local_18 + param_5 + 4) =
               *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
               *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[2];
          iVar18 = (bVar14 & 0xf) * 4;
          puVar20 = (uint *)((int)puVar19 + param_5);
          *puVar19 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar19[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[3];
          puVar19 = (uint *)((int)puVar20 + param_5);
          iVar18 = (bVar14 & 0xf) * 4;
          *puVar20 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar20[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[4];
          puVar20 = (uint *)((int)puVar19 + param_5);
          iVar18 = (bVar14 & 0xf) * 4;
          *puVar19 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar19[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[5];
          iVar18 = (bVar14 & 0xf) * 4;
          puVar19 = (uint *)((int)puVar20 + param_5);
          *puVar20 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar20[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[6];
          iVar18 = (bVar14 & 0xf) * 4;
          *puVar19 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar19[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[7];
          local_98[0] = pbVar21 + 8;
          iVar18 = (bVar14 & 0xf) * 4;
          *(uint *)((int)puVar19 + param_5) =
               *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
               *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          *(uint *)((int)puVar19 + param_5 + 4) =
               *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
               *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 9:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          uVar13 = local_5c[0][1];
          uVar16 = local_5c[0][2];
          uVar17 = local_5c[0][3];
          *local_18 = *local_5c[0];
          local_18[1] = uVar13;
          *(uint *)((int)local_18 + param_5) = uVar16;
          *(uint *)((int)local_18 + param_5 + 4) = uVar17;
          puVar19 = (uint *)((int)local_18 + param_5 * 2);
          uVar13 = local_5c[0][5];
          uVar16 = local_5c[0][6];
          uVar17 = local_5c[0][7];
          *puVar19 = local_5c[0][4];
          puVar19[1] = uVar13;
          *(uint *)((int)puVar19 + param_5) = uVar16;
          *(uint *)((int)puVar19 + param_5 + 4) = uVar17;
          puVar19 = (uint *)((int)puVar19 + param_5 * 2);
          uVar13 = local_5c[0][9];
          uVar16 = local_5c[0][10];
          uVar17 = local_5c[0][0xb];
          *puVar19 = local_5c[0][8];
          puVar19[1] = uVar13;
          *(uint *)((int)puVar19 + param_5) = uVar16;
          *(uint *)((int)puVar19 + param_5 + 4) = uVar17;
          puVar19 = (uint *)((int)puVar19 + param_5 * 2);
          uVar13 = local_5c[0][0xd];
          uVar16 = local_5c[0][0xe];
          uVar17 = local_5c[0][0xf];
          *puVar19 = local_5c[0][0xc];
          puVar19[1] = uVar13;
          *(uint *)((int)puVar19 + param_5) = uVar16;
          *(uint *)((int)puVar19 + param_5 + 4) = uVar17;
          local_5c[0] = local_5c[0] + 0x10;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
        }
        param_2 = (uint *)((int)param_2 + param_9);
        local_18 = local_18 + 2;
        local_1c = local_1c + 2;
        uVar16 = local_2c;
        uVar13 = local_c;
      }
      if (param_9 == 1) {
        if ((uVar16 & 8) != 0) {
          param_8 = param_8 + local_60;
        }
      }
      else {
        param_8 = param_8 + local_60;
      }
      local_18 = (uint *)((int)local_18 + local_9c);
      local_1c = (uint *)((int)local_1c + local_9c);
      local_2c = uVar16 + 8;
      local_28 = 0;
    } while (local_2c < param_4);
  }
  return local_14;
}



/* === FUN_30009e30 @ 0x30009e30 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30009e30 @ 0x30009E30 */



void __cdecl
FUN_30009e30(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5,
            int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_3 + (param_4 >> 3) * param_6;
  uVar1 = iVar2 - 1;
  if (uVar1 < 0x81) {
    uVar1 = (uint)(byte)(&DAT_30038087)[iVar2];
  }
  else if (uVar1 < 0x800) {
    if (uVar1 < 0x200) {
      uVar1 = 9 - (uVar1 < 0x100);
    }
    else {
      uVar1 = 0xb - (uVar1 < 0x400);
    }
  }
  else if (uVar1 < 0x2000) {
    uVar1 = 0xd - (uVar1 < 0x1000);
  }
  else {
    uVar1 = 0xf - (uVar1 < 0x4000);
  }
  param_2[10] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = param_5;
  if (param_7 != 0) {
    param_2[0xb] = param_1;
    param_2[3] = 1 << ((char)param_5 - 1U & 0x1f);
    return;
  }
  param_2[3] = 0;
  param_2[0xb] = param_1;
  return;
}



/* === FUN_30009ee0 @ 0x30009ee0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30009ee0 @ 0x30009EE0 */



void __cdecl FUN_30009ee0(int param_1,int *param_2)

{
  FUN_30009f00(param_2,(undefined4 *)(param_1 + 0x24),(uint *)(param_1 + 0x20),
               (undefined1 *)(param_1 + 0x10));
  return;
}



/* === FUN_30009f00 @ 0x30009f00 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30009f00 @ 0x30009F00 */



void __cdecl FUN_30009f00(int *param_1,undefined4 *param_2,uint *param_3,undefined1 *param_4)

{
  uint uVar1;
  byte bVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  puVar7 = (uint *)*param_1;
  local_2c = param_1[1];
  uVar5 = param_1[2];
  local_24 = param_1[3];
  if (local_24 < 4) {
    local_28 = *puVar7 >> (4 - (byte)local_24 & 0x1f);
    uVar5 = *puVar7 << ((byte)local_24 & 0x1f) | uVar5;
    local_24 = local_24 + 0x1c;
    puVar7 = puVar7 + 1;
  }
  else {
    local_28 = uVar5 >> 4;
    local_24 = local_24 - 4;
  }
  uVar5 = uVar5 & 0xf;
  *param_2 = (&PTR_DAT_3003db48)[uVar5];
  *param_3 = (uint)(byte)(&DAT_30033ee8)[uVar5];
  if (uVar5 == 0) {
    uVar5 = 0;
    do {
      param_4[uVar5] = (char)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
  }
  else {
    if (local_24 == 0) {
      local_28 = *puVar7;
      local_30 = puVar7 + 1;
      local_24 = 0x1f;
    }
    else {
      local_24 = local_24 - 1;
      local_30 = puVar7;
    }
    uVar5 = local_28 >> 1;
    bVar2 = (byte)local_24;
    if ((local_28 & 1) == 0) {
      if (local_24 < 2) {
        local_28 = *local_30 >> (2 - bVar2 & 0x1f);
        uVar5 = *local_30 << (bVar2 & 0x1f) | uVar5;
        local_24 = local_24 + 0x1e;
        local_30 = local_30 + 1;
      }
      else {
        local_28 = local_28 >> 3;
        local_24 = local_24 - 2;
      }
      uVar5 = uVar5 & 3;
      if (uVar5 == 0) {
        uVar5 = 0;
        puVar7 = local_30;
        do {
          if (local_24 == 0) {
            uVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            local_24 = 0x1f;
          }
          else {
            local_24 = local_24 - 1;
            uVar6 = local_28;
          }
          local_28 = uVar6 >> 1;
          cVar4 = (char)uVar5;
          if ((uVar6 & 1) == 0) {
            param_4[uVar5] = cVar4;
            param_4[uVar5 + 1] = cVar4 + '\x01';
          }
          else {
            param_4[uVar5] = cVar4 + '\x01';
            param_4[uVar5 + 1] = cVar4;
          }
          uVar5 = uVar5 + 2;
        } while (uVar5 < 0x10);
      }
      else {
        uVar6 = 0;
        puVar7 = local_30;
        do {
          if (local_24 == 0) {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            local_24 = 0x1f;
            local_30 = puVar7;
          }
          else {
            local_24 = local_24 - 1;
            uVar1 = local_28;
          }
          local_28 = uVar1 >> 1;
          cVar4 = (char)uVar6;
          if ((uVar1 & 1) == 0) {
            local_20[uVar6] = cVar4;
            local_20[uVar6 + 1] = cVar4 + '\x01';
          }
          else {
            local_20[uVar6] = cVar4 + '\x01';
            local_20[uVar6 + 1] = cVar4;
          }
          uVar6 = uVar6 + 2;
        } while (uVar6 < 0x10);
        if (uVar5 == 1) {
          FUN_3000a380((int *)&local_30,param_4,local_20,local_20 + 2,2);
          FUN_3000a380((int *)&local_30,param_4 + 4,local_20 + 4,local_20 + 6,2);
          FUN_3000a380((int *)&local_30,param_4 + 8,local_20 + 8,local_20 + 10,2);
          FUN_3000a380((int *)&local_30,param_4 + 0xc,local_20 + 0xc,local_20 + 0xe,2);
          puVar7 = local_30;
        }
        else {
          FUN_3000a380((int *)&local_30,local_20 + 0x10,local_20,local_20 + 2,2);
          FUN_3000a380((int *)&local_30,local_c,local_20 + 4,local_20 + 6,2);
          FUN_3000a380((int *)&local_30,local_8,local_20 + 8,local_20 + 10,2);
          FUN_3000a380((int *)&local_30,local_4,local_20 + 0xc,local_20 + 0xe,2);
          if (uVar5 == 2) {
            FUN_3000a380((int *)&local_30,param_4,local_20 + 0x10,local_c,4);
            FUN_3000a380((int *)&local_30,param_4 + 8,local_8,local_4,4);
            puVar7 = local_30;
          }
          else {
            FUN_3000a380((int *)&local_30,local_20,local_20 + 0x10,local_c,4);
            FUN_3000a380((int *)&local_30,local_20 + 8,local_8,local_4,4);
            FUN_3000a380((int *)&local_30,param_4,local_20,local_20 + 8,8);
            puVar7 = local_30;
          }
        }
      }
    }
    else {
      if (local_24 < 3) {
        uVar6 = *local_30 >> (3 - bVar2 & 0x1f);
        uVar5 = *local_30 << (bVar2 & 0x1f) | uVar5;
        local_24 = local_24 + 0x1d;
        local_30 = local_30 + 1;
      }
      else {
        uVar6 = local_28 >> 4;
        local_24 = local_24 - 3;
      }
      param_2 = (undefined4 *)0xffff;
      param_3 = (uint *)0x0;
      puVar7 = local_30;
      do {
        if (local_24 < 4) {
          local_28 = *puVar7 >> (4 - (byte)local_24 & 0x1f);
          uVar6 = *puVar7 << ((byte)local_24 & 0x1f) | uVar6;
          local_24 = local_24 + 0x1c;
          puVar7 = puVar7 + 1;
          local_30 = puVar7;
        }
        else {
          local_28 = uVar6 >> 4;
          local_24 = local_24 - 4;
        }
        bVar2 = (byte)uVar6 & 0xf;
        param_2 = (undefined4 *)((uint)param_2 & ~(1 << bVar2));
        *(byte *)((int)param_3 + (int)param_4) = bVar2;
        param_3 = (uint *)((int)param_3 + 1);
        uVar6 = local_28;
      } while (param_3 <= (uint *)(uVar5 & 7));
      cVar4 = '\0';
      pcVar3 = param_4 + (int)(uVar5 & 7);
      do {
        if (((uint)param_2 & 1) != 0) {
          pcVar3 = pcVar3 + 1;
          *pcVar3 = cVar4;
          puVar7 = local_30;
        }
        cVar4 = cVar4 + '\x01';
        param_2 = (undefined4 *)((uint)param_2 >> 1);
      } while (param_2 != (undefined4 *)0x0);
    }
  }
  *param_1 = (int)puVar7;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = local_24;
  return;
}



/* === FUN_3000a380 @ 0x3000a380 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000a380 @ 0x3000A380 */



void __cdecl
FUN_3000a380(int *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,int param_5)

{
  uint uVar1;
  int local_4;
  
  local_4 = param_5;
  while( true ) {
    if (param_1[3] == 0) {
      uVar1 = *(uint *)*param_1;
      *param_1 = (int)((uint *)*param_1 + 1);
      param_1[2] = uVar1 >> 1;
      param_1[3] = 0x1f;
    }
    else {
      uVar1 = param_1[2];
      param_1[2] = uVar1 >> 1;
      param_1[3] = param_1[3] + -1;
    }
    if ((uVar1 & 1) == 0) {
      *param_2 = *param_3;
      param_3 = param_3 + 1;
      param_5 = param_5 + -1;
    }
    else {
      *param_2 = *param_4;
      param_4 = param_4 + 1;
      local_4 = local_4 + -1;
    }
    param_2 = param_2 + 1;
    if (param_5 == 0) break;
    if (local_4 == 0) {
      if (param_5 == 0) {
        return;
      }
      do {
        *param_2 = *param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return;
    }
  }
  for (; local_4 != 0; local_4 = local_4 + -1) {
    *param_2 = *param_4;
    param_2 = param_2 + 1;
    param_4 = param_4 + 1;
  }
  return;
}



/* === FUN_3000a440 @ 0x3000a440 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000a440 @ 0x3000A440 */



void __cdecl FUN_3000a440(int param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined4 *)(param_3 + 0x140);
  iVar1 = 0x10;
  puVar3 = param_3;
  do {
    FUN_30009f00(param_2,puVar2,puVar2 + -0x10,puVar3);
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_30009f00(param_2,(undefined4 *)(param_1 + 0x24),(uint *)(param_1 + 0x20),
               (undefined1 *)(param_1 + 0x10));
  *(undefined4 *)(param_3 + 0x180) = 0;
  return;
}



/* === FUN_3000a4a0 @ 0x3000a4a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000a4a0 @ 0x3000A4A0 */



void __cdecl FUN_3000a4a0(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint local_28;
  uint local_24;
  uint *local_20;
  uint local_14;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    uVar7 = param_1[10];
    local_10 = (uint *)*param_2;
    iVar2 = param_2[1];
    uVar8 = param_2[2];
    uVar10 = param_2[3];
    bVar9 = (byte)uVar7;
    if (uVar10 < uVar7) {
      local_28 = 0xffffffffU >> (0x20 - bVar9 & 0x1f) & (*local_10 << ((byte)uVar10 & 0x1f) | uVar8)
      ;
      uVar8 = *local_10 >> (bVar9 - (byte)uVar10 & 0x1f);
      iVar5 = 0x20 - uVar7;
      local_10 = local_10 + 1;
    }
    else {
      local_28 = 0xffffffffU >> (0x20 - bVar9 & 0x1f) & uVar8;
      uVar8 = uVar8 >> (bVar9 & 0x1f);
      iVar5 = -uVar7;
    }
    uVar10 = uVar10 + iVar5;
    if (local_28 == 0) {
      *param_1 = param_1[0xb] + 4;
      param_1[1] = param_1[0xb];
    }
    else {
      local_20 = (uint *)param_1[0xb];
      *param_1 = (int)local_20;
      param_1[1] = (int)local_20 + local_28;
      if (uVar10 == 0) {
        uVar7 = *local_10;
        local_10 = local_10 + 1;
        uVar10 = 0x1f;
      }
      else {
        uVar10 = uVar10 - 1;
        uVar7 = uVar8;
      }
      uVar8 = uVar7 >> 1;
      if ((uVar7 & 1) == 0) {
        bVar9 = *(byte *)(param_1 + 8);
        local_24 = (uint)bVar9;
        uVar7 = local_24;
        iVar5 = param_1[9];
        local_14 = 0;
        do {
          if (uVar10 < uVar7) {
            bVar1 = *(byte *)((0xffffffffU >> (0x20 - bVar9 & 0x1f) &
                              (*local_10 << ((byte)uVar10 & 0x1f) | uVar8)) + iVar5);
            bVar4 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)param_1);
            bVar1 = bVar1 >> 4;
            uVar3 = (uint)bVar1;
            if (uVar10 < uVar3) {
              uVar8 = *local_10 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar6 = 0x20 - uVar3;
              local_10 = local_10 + 1;
            }
            else {
              uVar8 = uVar8 >> bVar1;
              iVar6 = -uVar3;
            }
          }
          else {
            bVar1 = *(byte *)((0xffffffffU >> (0x20 - bVar9 & 0x1f) & uVar8) + iVar5);
            bVar4 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)param_1);
            bVar1 = bVar1 >> 4;
            uVar8 = uVar8 >> bVar1;
            iVar6 = -(uint)bVar1;
          }
          local_24 = (uint)bVar4;
          uVar10 = uVar10 + iVar6;
          if (bVar4 < 0xc) {
            *(byte *)local_20 = bVar4;
            local_20 = (uint *)((int)local_20 + 1);
            local_28 = local_28 - 1;
            local_14 = (uint)bVar4;
          }
          else {
            uVar3 = local_14 << 8 | local_14;
            bVar4 = (&DAT_30033eec)[local_24];
            local_28 = local_28 - bVar4;
            do {
              *local_20 = uVar3 | uVar3 << 0x10;
              local_20 = local_20 + 1;
              bVar4 = bVar4 - 4;
            } while (bVar4 != 0);
          }
        } while (local_28 != 0);
      }
      else {
        bVar9 = (byte)uVar8;
        if (uVar10 < 4) {
          uVar8 = *local_10 >> (4 - (byte)uVar10 & 0x1f);
          bVar9 = (char)*local_10 << ((byte)uVar10 & 0x1f) | bVar9;
          uVar10 = uVar10 + 0x1c;
          local_10 = local_10 + 1;
        }
        else {
          uVar8 = uVar7 >> 5;
          uVar10 = uVar10 - 4;
        }
        for (uVar7 = local_28 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_20 = CONCAT22(CONCAT11(bVar9,bVar9),CONCAT11(bVar9,bVar9)) & 0xf0f0f0f;
          local_20 = local_20 + 1;
        }
        for (local_28 = local_28 & 3; local_28 != 0; local_28 = local_28 - 1) {
          *(byte *)local_20 = bVar9 & 0xf;
          local_20 = (uint *)((int)local_20 + 1);
        }
      }
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar2;
    param_2[2] = uVar8;
    param_2[3] = uVar10;
  }
  return;
}



/* === FUN_3000aa30 @ 0x3000aa30 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000aa30 @ 0x3000AA30 */



void __cdecl FUN_3000aa30(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint local_24;
  byte *local_18;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    local_10 = (uint *)*param_2;
    iVar4 = param_2[1];
    uVar9 = param_2[2];
    uVar13 = param_2[3];
    uVar6 = param_1[10];
    bVar1 = (byte)uVar6;
    if (uVar13 < uVar6) {
      uVar12 = *local_10 >> (bVar1 - (byte)uVar13 & 0x1f);
      local_24 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & (*local_10 << ((byte)uVar13 & 0x1f) | uVar9)
      ;
      iVar7 = 0x20 - uVar6;
      local_10 = local_10 + 1;
    }
    else {
      local_24 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & uVar9;
      uVar12 = uVar9 >> (bVar1 & 0x1f);
      iVar7 = -uVar6;
    }
    uVar13 = uVar13 + iVar7;
    local_18 = (byte *)param_1[0xb];
    if (local_24 == 0) {
      *param_1 = (int)(local_18 + 4);
      param_1[1] = (int)local_18;
    }
    else {
      param_1[1] = (int)(local_18 + local_24);
      uVar9 = param_1[8];
      *param_1 = (int)local_18;
      iVar7 = param_1[9];
      uVar6 = *(uint *)(param_3 + 0x180);
      if (uVar13 == 0) {
        uVar10 = *local_10;
        local_10 = local_10 + 1;
        uVar13 = 0x1f;
      }
      else {
        uVar13 = uVar13 - 1;
        uVar10 = uVar12;
      }
      uVar12 = uVar10 >> 1;
      if ((uVar10 & 1) != 0) {
        local_24 = -local_24 - 0x14;
      }
      do {
        uVar10 = *(uint *)(param_3 + 0x100 + uVar6 * 4);
        cVar5 = (char)uVar10;
        if (uVar13 < uVar10) {
          bVar11 = *(byte *)((0xffffffffU >> (0x20U - cVar5 & 0x1f) &
                             (*local_10 << ((byte)uVar13 & 0x1f) | uVar12)) +
                            *(int *)(param_3 + 0x140 + uVar6 * 4));
          bVar1 = *(byte *)(uVar6 * 0x10 + param_3 + (bVar11 & 0xf));
          bVar11 = bVar11 >> 4;
          uVar6 = (uint)bVar11;
          if (uVar13 < uVar6) {
            uVar12 = *local_10 >> (bVar11 - (byte)uVar13 & 0x1f);
            iVar8 = 0x20 - uVar6;
            local_10 = local_10 + 1;
          }
          else {
            uVar12 = uVar12 >> bVar11;
            iVar8 = -uVar6;
          }
        }
        else {
          bVar11 = *(byte *)((0xffffffffU >> (0x20U - cVar5 & 0x1f) & uVar12) +
                            *(int *)(param_3 + 0x140 + uVar6 * 4));
          bVar1 = *(byte *)(uVar6 * 0x10 + param_3 + (bVar11 & 0xf));
          bVar11 = bVar11 >> 4;
          uVar12 = uVar12 >> bVar11;
          iVar8 = -(uint)bVar11;
        }
        uVar13 = uVar13 + iVar8;
        uVar6 = (uint)bVar1;
        cVar5 = (char)uVar9;
        if (uVar13 < uVar9) {
          bVar2 = *(byte *)((0xffffffffU >> (0x20U - cVar5 & 0x1f) &
                            (*local_10 << ((byte)uVar13 & 0x1f) | uVar12)) + iVar7);
          bVar11 = *(byte *)((bVar2 & 0xf) + 0x10 + (int)param_1);
          bVar2 = bVar2 >> 4;
          uVar10 = (uint)bVar2;
          if (uVar13 < uVar10) {
            uVar12 = *local_10 >> (bVar2 - (byte)uVar13 & 0x1f);
            iVar8 = 0x20 - uVar10;
            local_10 = local_10 + 1;
          }
          else {
            uVar12 = uVar12 >> bVar2;
            iVar8 = -uVar10;
          }
        }
        else {
          bVar11 = *(byte *)((0xffffffffU >> (0x20U - cVar5 & 0x1f) & uVar12) + iVar7);
          bVar2 = bVar11 >> 4;
          bVar11 = *(byte *)((bVar11 & 0xf) + 0x10 + (int)param_1);
          uVar12 = uVar12 >> bVar2;
          iVar8 = -(uint)bVar2;
        }
        uVar13 = uVar13 + iVar8;
        *local_18 = bVar1 << 4 | bVar11;
        local_24 = local_24 - 1;
        local_18 = local_18 + 1;
      } while (0 < (int)local_24);
      if ((int)local_24 < -0x16) {
        uVar3 = *(undefined1 *)param_1[0xb];
        puVar14 = (undefined4 *)param_1[0xb];
        for (uVar9 = -local_24 - 0x15 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
          puVar14 = puVar14 + 1;
        }
        for (uVar9 = -local_24 - 0x15 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar14 = uVar3;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
      }
      *(uint *)(param_3 + 0x180) = uVar6;
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar4;
    param_2[2] = uVar12;
    param_2[3] = uVar13;
  }
  return;
}



/* === FUN_3000ad10 @ 0x3000ad10 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ad10 @ 0x3000AD10 */



void __cdecl FUN_3000ad10(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint local_14;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    local_10 = (uint *)*param_2;
    iVar1 = param_2[1];
    uVar10 = param_2[2];
    uVar8 = param_1[10];
    uVar11 = param_2[3];
    bVar7 = (byte)uVar8;
    if (uVar11 < uVar8) {
      local_14 = 0xffffffffU >> (0x20 - bVar7 & 0x1f) &
                 (*local_10 << ((byte)uVar11 & 0x1f) | uVar10);
      iVar4 = 0x20 - uVar8;
      uVar10 = *local_10 >> (bVar7 - (byte)uVar11 & 0x1f);
      local_10 = local_10 + 1;
    }
    else {
      local_14 = 0xffffffffU >> (0x20 - bVar7 & 0x1f) & uVar10;
      uVar10 = uVar10 >> (bVar7 & 0x1f);
      iVar4 = -uVar8;
    }
    uVar11 = uVar11 + iVar4;
    if (local_14 == 0) {
      *param_1 = param_1[0xb] + 4;
      param_1[1] = param_1[0xb];
      puVar9 = local_10;
    }
    else {
      puVar12 = (uint *)param_1[0xb];
      *param_1 = (int)puVar12;
      param_1[1] = (int)((int)puVar12 + local_14);
      if (uVar11 == 0) {
        uVar8 = *local_10;
        local_10 = local_10 + 1;
        uVar11 = 0x1f;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar8 = uVar10;
      }
      uVar10 = uVar8 >> 1;
      if ((uVar8 & 1) == 0) {
        uVar8 = param_1[8];
        iVar4 = param_1[9];
        puVar9 = local_10;
        do {
          cVar2 = (char)uVar8;
          if (uVar11 < uVar8) {
            uVar6 = *puVar9;
            bVar7 = *(byte *)((0xffffffffU >> (0x20U - cVar2 & 0x1f) &
                              (uVar6 << ((byte)uVar11 & 0x1f) | uVar10)) + iVar4);
            *(byte *)puVar12 = *(byte *)((bVar7 & 0xf) + 0x10 + (int)param_1);
            bVar7 = bVar7 >> 4;
            uVar5 = (uint)bVar7;
            if (uVar11 < uVar5) {
              uVar10 = uVar6 >> (bVar7 - (byte)uVar11 & 0x1f);
              uVar11 = uVar11 + (0x20 - uVar5);
              puVar9 = local_10 + 1;
              local_10 = puVar9;
            }
            else {
              uVar10 = uVar10 >> bVar7;
              uVar11 = uVar11 - uVar5;
              puVar9 = local_10;
            }
          }
          else {
            bVar7 = *(byte *)((0xffffffffU >> (0x20U - cVar2 & 0x1f) & uVar10) + iVar4);
            bVar3 = bVar7 >> 4;
            *(byte *)puVar12 = *(byte *)((bVar7 & 0xf) + 0x10 + (int)param_1);
            uVar10 = uVar10 >> bVar3;
            uVar11 = uVar11 - bVar3;
          }
          puVar12 = (uint *)((int)puVar12 + 1);
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
      else {
        if (uVar11 < 4) {
          uVar8 = *local_10;
          bVar7 = (byte)uVar11;
          uVar6 = uVar8 << (bVar7 & 0x1f) | uVar10;
          uVar11 = uVar11 + 0x1c;
          local_10 = local_10 + 1;
          uVar8 = uVar8 >> (4 - bVar7 & 0x1f);
        }
        else {
          uVar11 = uVar11 - 4;
          uVar8 = uVar8 >> 5;
          uVar6 = uVar10;
        }
        uVar10 = uVar8;
        bVar7 = (byte)uVar6;
        for (uVar8 = local_14 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar12 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7)) & 0xf0f0f0f;
          puVar12 = puVar12 + 1;
        }
        for (local_14 = local_14 & 3; puVar9 = local_10, local_14 != 0; local_14 = local_14 - 1) {
          *(byte *)puVar12 = bVar7 & 0xf;
          puVar12 = (uint *)((int)puVar12 + 1);
        }
      }
    }
    *param_2 = (int)puVar9;
    param_2[1] = iVar1;
    param_2[2] = uVar10;
    param_2[3] = uVar11;
  }
  return;
}



/* === FUN_3000af10 @ 0x3000af10 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000af10 @ 0x3000AF10 */



void __cdecl FUN_3000af10(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  byte *local_1c;
  uint local_18;
  uint *local_10;
  
  piVar5 = param_1;
  if (*param_1 == param_1[1]) {
    local_10 = (uint *)*param_2;
    iVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar8 = param_1[10];
    uVar6 = param_2[3];
    bVar1 = (byte)uVar8;
    if (uVar6 < uVar8) {
      uVar10 = *local_10 >> (bVar1 - (byte)uVar6 & 0x1f);
      iVar7 = 0x20 - uVar8;
      local_18 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & (*local_10 << ((byte)uVar6 & 0x1f) | uVar3);
      local_10 = local_10 + 1;
    }
    else {
      local_18 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & uVar3;
      uVar10 = uVar3 >> (bVar1 & 0x1f);
      iVar7 = -uVar8;
    }
    uVar6 = uVar6 + iVar7;
    local_1c = (byte *)param_1[0xb];
    if (local_18 == 0) {
      *param_1 = (int)(local_1c + 4);
      param_1[1] = (int)local_1c;
    }
    else {
      iVar7 = param_1[9];
      param_1[1] = (int)(local_1c + local_18);
      uVar3 = param_1[8];
      *param_1 = (int)local_1c;
      do {
        if (uVar6 < uVar3) {
          uVar8 = 0xffffffff >> (0x20U - (char)uVar3 & 0x1f);
          bVar1 = *(byte *)(((*local_10 << ((byte)uVar6 & 0x1f) | uVar10) & uVar8) + iVar7);
          param_1._0_1_ = *(byte *)((bVar1 & 0xf) + 0x10 + (int)piVar5);
          bVar1 = bVar1 >> 4;
          uVar11 = (uint)bVar1;
          if (uVar6 < uVar11) {
            uVar10 = *local_10 >> (bVar1 - (byte)uVar6 & 0x1f);
            uVar6 = uVar6 + (0x20 - uVar11);
            local_10 = local_10 + 1;
          }
          else {
            uVar10 = uVar10 >> bVar1;
            uVar6 = uVar6 - uVar11;
          }
        }
        else {
          uVar8 = 0xffffffff >> (0x20U - (char)uVar3 & 0x1f);
          bVar1 = *(byte *)((uVar8 & uVar10) + iVar7);
          param_1._0_1_ = *(byte *)((bVar1 & 0xf) + 0x10 + (int)piVar5);
          bVar1 = bVar1 >> 4;
          uVar10 = uVar10 >> bVar1;
          uVar6 = uVar6 - bVar1;
        }
        if (uVar6 < uVar3) {
          bVar1 = *(byte *)(((*local_10 << ((byte)uVar6 & 0x1f) | uVar10) & uVar8) + iVar7);
          cVar9 = *(char *)((bVar1 & 0xf) + 0x10 + (int)piVar5);
          bVar1 = bVar1 >> 4;
          uVar8 = (uint)bVar1;
          if (uVar6 < uVar8) {
            uVar10 = *local_10 >> (bVar1 - (byte)uVar6 & 0x1f);
            uVar6 = uVar6 + (0x20 - uVar8);
            local_10 = local_10 + 1;
          }
          else {
            uVar10 = uVar10 >> bVar1;
            uVar6 = uVar6 - uVar8;
          }
        }
        else {
          bVar1 = *(byte *)((uVar8 & uVar10) + iVar7);
          bVar4 = bVar1 >> 4;
          cVar9 = *(char *)((bVar1 & 0xf) + 0x10 + (int)piVar5);
          uVar10 = uVar10 >> bVar4;
          uVar6 = uVar6 - bVar4;
        }
        *local_1c = cVar9 << 4 | (byte)param_1;
        local_1c = local_1c + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar2;
    param_2[2] = uVar10;
    param_2[3] = uVar6;
  }
  return;
}



/* === FUN_3000b110 @ 0x3000b110 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b110 @ 0x3000B110 */



void __cdecl FUN_3000b110(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  byte *local_1c;
  uint local_18;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    uVar6 = param_1[10];
    local_10 = (uint *)*param_2;
    iVar2 = param_2[1];
    uVar4 = param_2[2];
    uVar9 = param_2[3];
    bVar8 = (byte)uVar6;
    if (uVar9 < uVar6) {
      uVar7 = *local_10 >> (bVar8 - (byte)uVar9 & 0x1f);
      iVar5 = 0x20 - uVar6;
      local_18 = 0xffffffffU >> (0x20 - bVar8 & 0x1f) & (*local_10 << ((byte)uVar9 & 0x1f) | uVar4);
      local_10 = local_10 + 1;
    }
    else {
      local_18 = 0xffffffffU >> (0x20 - bVar8 & 0x1f) & uVar4;
      uVar7 = uVar4 >> (bVar8 & 0x1f);
      iVar5 = -uVar6;
    }
    uVar9 = uVar9 + iVar5;
    if (local_18 == 0) {
      *param_1 = param_1[0xb] + 4;
      param_1[1] = param_1[0xb];
    }
    else {
      local_1c = (byte *)param_1[0xb];
      *param_1 = (int)local_1c;
      param_1[1] = (int)(local_1c + local_18);
      if (uVar9 == 0) {
        uVar6 = *local_10;
        local_10 = local_10 + 1;
        uVar9 = 0x1f;
      }
      else {
        uVar9 = uVar9 - 1;
        uVar6 = uVar7;
      }
      uVar7 = uVar6 >> 1;
      if ((uVar6 & 1) == 0) {
        uVar6 = param_1[8];
        iVar5 = param_1[9];
        do {
          cVar3 = (char)uVar6;
          if (uVar9 < uVar6) {
            bVar1 = *(byte *)((0xffffffffU >> (0x20U - cVar3 & 0x1f) &
                              (*local_10 << ((byte)uVar9 & 0x1f) | uVar7)) + iVar5);
            bVar8 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)param_1);
            bVar1 = bVar1 >> 4;
            uVar4 = (uint)bVar1;
            if (uVar9 < uVar4) {
              uVar7 = *local_10 >> (bVar1 - (byte)uVar9 & 0x1f);
              uVar9 = uVar9 + (0x20 - uVar4);
              local_10 = local_10 + 1;
            }
            else {
              uVar7 = uVar7 >> bVar1;
              uVar9 = uVar9 - uVar4;
            }
          }
          else {
            bVar8 = *(byte *)((0xffffffffU >> (0x20U - cVar3 & 0x1f) & uVar7) + iVar5);
            bVar1 = bVar8 >> 4;
            bVar8 = *(byte *)((bVar8 & 0xf) + 0x10 + (int)param_1);
            uVar7 = uVar7 >> bVar1;
            uVar9 = uVar9 - bVar1;
          }
          if (bVar8 != 0) {
            if (uVar9 == 0) {
              uVar4 = *local_10;
              local_10 = local_10 + 1;
              uVar9 = 0x1f;
            }
            else {
              uVar9 = uVar9 - 1;
              uVar4 = uVar7;
            }
            uVar7 = uVar4 >> 1;
            if ((uVar4 & 1) != 0) {
              bVar8 = -bVar8;
            }
          }
          *local_1c = bVar8;
          local_1c = local_1c + 1;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      else {
        bVar8 = (byte)uVar7;
        if (uVar9 < 4) {
          uVar7 = *local_10 >> (4 - (byte)uVar9 & 0x1f);
          bVar8 = (char)*local_10 << ((byte)uVar9 & 0x1f) | bVar8;
          uVar9 = uVar9 + 0x1c;
          local_10 = local_10 + 1;
        }
        else {
          uVar7 = uVar6 >> 5;
          uVar9 = uVar9 - 4;
        }
        bVar8 = bVar8 & 0xf;
        if (bVar8 != 0) {
          if (uVar9 == 0) {
            uVar6 = *local_10;
            local_10 = local_10 + 1;
            uVar9 = 0x1f;
          }
          else {
            uVar9 = uVar9 - 1;
            uVar6 = uVar7;
          }
          uVar7 = uVar6 >> 1;
          if ((uVar6 & 1) != 0) {
            bVar8 = -bVar8;
          }
        }
        for (uVar6 = local_18 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(uint *)local_1c = CONCAT22(CONCAT11(bVar8,bVar8),CONCAT11(bVar8,bVar8));
          local_1c = local_1c + 4;
        }
        for (local_18 = local_18 & 3; local_18 != 0; local_18 = local_18 - 1) {
          *local_1c = bVar8;
          local_1c = local_1c + 1;
        }
      }
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar2;
    param_2[2] = uVar7;
    param_2[3] = uVar9;
  }
  return;
}



/* === FUN_3000b370 @ 0x3000b370 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b370 @ 0x3000B370 */



void __cdecl FUN_3000b370(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  sbyte sVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  uint *local_28;
  int *local_14;
  short *local_c;
  uint local_8;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar9 = param_1[10];
  puVar10 = (uint *)*param_2;
  iVar1 = param_2[1];
  uVar8 = param_2[2];
  uVar11 = param_2[3];
  bVar3 = (byte)uVar9;
  if (uVar11 < uVar9) {
    uVar12 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & (*puVar10 << ((byte)uVar11 & 0x1f) | uVar8);
    uVar8 = *puVar10 >> (bVar3 - (byte)uVar11 & 0x1f);
    iVar6 = 0x20 - uVar9;
    puVar10 = puVar10 + 1;
  }
  else {
    uVar12 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & uVar8;
    uVar8 = uVar8 >> (bVar3 & 0x1f);
    iVar6 = -uVar9;
  }
  uVar11 = uVar11 + iVar6;
  local_c = (short *)param_1[0xb];
  if (uVar12 == 0) {
    *param_1 = (int)(local_c + 2);
    param_1[1] = (int)local_c;
    goto LAB_3000b67d;
  }
  uVar9 = param_1[2];
  bVar3 = (byte)uVar9;
  bVar5 = (byte)uVar11;
  local_28 = puVar10;
  if (param_1[3] == 0) {
    if (uVar11 < uVar9) {
      local_8 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & 0xffff;
      local_8 = local_8 & (*puVar10 << (bVar5 & 0x1f) | uVar8);
      uVar8 = *puVar10 >> (bVar3 - bVar5 & 0x1f);
      uVar11 = uVar11 + (0x20 - uVar9);
      local_28 = puVar10 + 1;
    }
    else {
      local_8 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & uVar8;
      uVar8 = uVar8 >> (bVar3 & 0x1f);
      uVar11 = uVar11 - uVar9;
    }
LAB_3000b515:
  }
  else {
    if (uVar11 < uVar9 - 1) {
      local_8 = 0xffffffffU >> (0x21 - bVar3 & 0x1f) & 0xffff;
      local_8 = local_8 & (*puVar10 << (bVar5 & 0x1f) | uVar8);
      uVar8 = *puVar10 >> ((bVar3 - bVar5) - 1 & 0x1f);
      iVar6 = 0x21 - uVar9;
      local_28 = puVar10 + 1;
    }
    else {
      local_8 = 0xffffffffU >> (0x21 - bVar3 & 0x1f) & uVar8;
      uVar8 = uVar8 >> (bVar3 - 1 & 0x1f);
      iVar6 = 1 - uVar9;
    }
    uVar11 = uVar11 + iVar6;
    if ((short)local_8 != 0) {
      if (uVar11 == 0) {
        uVar9 = *local_28;
        local_28 = local_28 + 1;
        uVar11 = 0x1f;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar9 = uVar8;
      }
      uVar8 = uVar9 >> 1;
      if ((uVar9 & 1) != 0) {
        local_8 = -local_8;
        goto LAB_3000b515;
      }
    }
  }
  *local_c = (short)local_8;
  local_c = local_c + 1;
  *param_1 = param_1[0xb];
  param_1[1] = param_1[0xb] + uVar12 * 2;
  puVar10 = local_28;
  for (piVar7 = (int *)(uVar12 - 1); piVar7 != (int *)0x0;
      piVar7 = (int *)((int)piVar7 - (int)param_1)) {
    param_1 = (int *)0x8;
    if (piVar7 < (int *)0x9) {
      param_1 = piVar7;
    }
    if (uVar11 < 4) {
      uVar9 = *puVar10 >> (4 - (byte)uVar11 & 0x1f);
      uVar8 = *puVar10 << ((byte)uVar11 & 0x1f) | uVar8;
      uVar11 = uVar11 + 0x1c;
      puVar10 = puVar10 + 1;
      local_28 = puVar10;
    }
    else {
      uVar9 = uVar8 >> 4;
      uVar11 = uVar11 - 4;
    }
    uVar8 = uVar8 & 0xf;
    if (uVar8 == 0) {
      psVar13 = local_c;
      for (uVar8 = (uint)param_1 & 0x7fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(uint *)psVar13 = CONCAT22((short)local_8,(short)local_8);
        psVar13 = psVar13 + 2;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *psVar13 = (short)local_8;
        psVar13 = psVar13 + 1;
      }
      local_c = local_c + (int)param_1;
      puVar10 = local_28;
    }
    else if (param_1 != (int *)0x0) {
      local_14 = param_1;
      do {
        sVar4 = (sbyte)uVar8;
        if (uVar11 < uVar8) {
          uVar12 = *puVar10 << ((byte)uVar11 & 0x1f) | uVar9;
          uVar9 = *puVar10 >> (sVar4 - (byte)uVar11 & 0x1f);
          uVar12 = 0xffffffffU >> (0x20U - sVar4 & 0x1f) & uVar12;
          iVar6 = 0x20 - uVar8;
          puVar10 = local_28 + 1;
          local_28 = puVar10;
        }
        else {
          uVar12 = 0xffffffffU >> (0x20U - sVar4 & 0x1f) & uVar9;
          uVar9 = uVar9 >> sVar4;
          iVar6 = -uVar8;
        }
        uVar11 = uVar11 + iVar6;
        if ((short)uVar12 != 0) {
          if (uVar11 == 0) {
            uVar2 = *puVar10;
            puVar10 = puVar10 + 1;
            uVar11 = 0x1f;
            local_28 = puVar10;
          }
          else {
            uVar11 = uVar11 - 1;
            uVar2 = uVar9;
          }
          uVar9 = uVar2 >> 1;
          if ((uVar2 & 1) != 0) {
            uVar12 = -uVar12;
          }
        }
        local_8 = local_8 + uVar12;
        *local_c = (short)local_8;
        local_c = local_c + 1;
        local_14 = (int *)((int)local_14 + -1);
      } while (local_14 != (int *)0x0);
    }
    uVar8 = uVar9;
  }
LAB_3000b67d:
  *param_2 = (int)puVar10;
  param_2[1] = iVar1;
  param_2[2] = uVar8;
  param_2[3] = uVar11;
  return;
}



/* === _RADTimerRead@0 @ 0x3000b6a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _RADTimerRead@0 @ 0x3000B6A0 */



undefined8 _RADTimerRead_0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 extraout_EDX;
  longlong lVar3;
  undefined8 uVar4;
  LARGE_INTEGER local_8;
  
                    /* 0xb6a0  55  _RADTimerRead@0 */
  if (DAT_3003db88 != 0) {
    DAT_3003db88 = 0;
    BVar1 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_30041c28);
    if (BVar1 == 0) {
      DAT_30041c28 = 0;
      DAT_30041c2c = 0;
      goto LAB_3000b73a;
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_30041c20);
  }
  if (DAT_30041c28 != 0 || DAT_30041c2c != 0) {
    QueryPerformanceCounter(&local_8);
    lVar3 = __allmul(local_8.s.LowPart - DAT_30041c20,
                     (local_8.s.HighPart - DAT_30041c24) - (uint)(local_8.s.LowPart < DAT_30041c20),
                     1000,0);
    uVar4 = __aulldiv((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),DAT_30041c28,DAT_30041c2c);
    return uVar4;
  }
LAB_3000b73a:
  DVar2 = timeGetTime();
  return CONCAT44(extraout_EDX,DVar2);
}



/* === FUN_3000b750 @ 0x3000b750 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b750 @ 0x3000B750 */



undefined4 FUN_3000b750(undefined4 *param_1,LPCSTR param_2,uint param_3)

{
  DWORD DVar1;
  HANDLE pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  for (iVar3 = 0x33; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if ((param_3 & 0x800000) == 0) {
    pvVar2 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
    param_1[0x13] = pvVar2;
    if (param_1[0x13] == -1) {
      pvVar2 = CreateFileA(param_2,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
      param_1[0x13] = pvVar2;
    }
    if (param_1[0x13] == -1) {
      return 0;
    }
  }
  else {
    param_1[0x13] = param_2;
    param_1[0x1d] = 1;
    DVar1 = SetFilePointer(param_2,0,(PLONG)0x0,1);
    param_1[0x1e] = DVar1;
  }
  *param_1 = FUN_3000b810;
  param_1[1] = FUN_3000b8c0;
  param_1[2] = FUN_3000bc00;
  param_1[3] = FUN_3000bc60;
  param_1[4] = FUN_3000bd40;
  param_1[5] = FUN_3000bce0;
  return 1;
}



/* === FUN_3000b810 @ 0x3000b810 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b810 @ 0x3000B810 */



DWORD FUN_3000b810(DWORD param_1,int param_2,LPVOID param_3,DWORD param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  
  DVar4 = param_1;
  pcVar1 = (char *)(param_1 + 0x60);
  LOCK();
  *pcVar1 = *pcVar1 + '\x01';
  UNLOCK();
  iVar2 = *(int *)(param_1 + 100);
  iVar3 = param_2;
  while (param_2 = iVar3, iVar2 != 0) {
    Sleep(0);
    _BinkService_4(*(int **)(DVar4 + 0x18));
    iVar3 = param_2;
    iVar2 = *(int *)(DVar4 + 100);
  }
  if ((iVar3 != -1) && (*(int *)(DVar4 + 0x50) != iVar3)) {
    SetFilePointer(*(HANDLE *)(DVar4 + 0x4c),*(int *)(DVar4 + 0x78) + iVar3,(PLONG)0x0,0);
    *(int *)(DVar4 + 0x50) = iVar3;
  }
  ReadFile(*(HANDLE *)(DVar4 + 0x4c),param_3,param_4,&param_1,(LPOVERLAPPED)0x0);
  *(DWORD *)(DVar4 + 0x50) = *(int *)(DVar4 + 0x50) + param_1;
  *(undefined4 *)(DVar4 + 0x54) = *(undefined4 *)(DVar4 + 0x50);
  uVar5 = *(int *)(DVar4 + 0x7c) - *(int *)(DVar4 + 0x54);
  if (*(uint *)(DVar4 + 0x3c) <= uVar5) {
    uVar5 = *(uint *)(DVar4 + 0x3c);
  }
  *(uint *)(DVar4 + 0x44) = uVar5;
  LOCK();
  *pcVar1 = *pcVar1 + -1;
  UNLOCK();
  return param_1;
}



/* === FUN_3000b8c0 @ 0x3000b8c0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b8c0 @ 0x3000B8C0 */



char * FUN_3000b8c0(char *param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *local_8;
  
  pcVar2 = param_1;
  bVar1 = false;
  local_8 = (char *)0x0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (char *)0x0;
  }
  uVar8 = _RADTimerRead_0();
  pcVar3 = param_3;
  if ((param_3 != (char *)0xffffffff) && (*(char **)(pcVar2 + 0x54) != param_3)) {
    param_3 = pcVar2 + 0x60;
    bVar1 = true;
    LOCK();
    *param_3 = *param_3 + '\x01';
    UNLOCK();
    iVar4 = *(int *)(pcVar2 + 100);
    while (iVar4 != 0) {
      Sleep(0);
      _BinkService_4(*(int **)(pcVar2 + 0x18));
      iVar4 = *(int *)(pcVar2 + 100);
    }
    if ((*(char **)(pcVar2 + 0x54) < pcVar3) && (pcVar3 <= *(char **)(pcVar2 + 0x50))) {
      param_1 = pcVar3 + -*(int *)(pcVar2 + 0x54);
      *(char **)(pcVar2 + 0x54) = pcVar3;
      *(char **)(pcVar2 + 0x5c) = param_1 + *(int *)(pcVar2 + 0x5c);
      *(int *)(pcVar2 + 0x48) = *(int *)(pcVar2 + 0x48) - (int)param_1;
      *(char **)(pcVar2 + 0x58) = param_1 + *(int *)(pcVar2 + 0x58);
      if (*(uint *)(pcVar2 + 0x6c) < *(uint *)(pcVar2 + 0x58)) {
        *(int *)(pcVar2 + 0x58) = *(int *)(pcVar2 + 0x58) - *(int *)(pcVar2 + 0x3c);
      }
    }
    else {
      SetFilePointer(*(HANDLE *)(pcVar2 + 0x4c),(LONG)(pcVar3 + *(int *)(pcVar2 + 0x78)),(PLONG)0x0,
                     0);
      *(char **)(pcVar2 + 0x50) = pcVar3;
      *(char **)(pcVar2 + 0x54) = pcVar3;
      *(undefined4 *)(pcVar2 + 0x5c) = *(undefined4 *)(pcVar2 + 0x3c);
      pcVar2[0x48] = '\0';
      pcVar2[0x49] = '\0';
      pcVar2[0x4a] = '\0';
      pcVar2[0x4b] = '\0';
      *(undefined4 *)(pcVar2 + 0x58) = *(undefined4 *)(pcVar2 + 0x68);
      *(undefined4 *)(pcVar2 + 0x70) = *(undefined4 *)(pcVar2 + 0x68);
    }
  }
  do {
    if (*(int *)(pcVar2 + 0x48) != 0) {
      pcVar3 = *(char **)(pcVar2 + 0x48);
      if (param_5 < *(char **)(pcVar2 + 0x48)) {
        pcVar3 = param_5;
      }
      param_5 = param_5 + -(int)pcVar3;
      local_8 = local_8 + (int)pcVar3;
      *(char **)(pcVar2 + 0x54) = pcVar3 + *(int *)(pcVar2 + 0x54);
      param_3 = (char *)(*(int *)(pcVar2 + 0x6c) - *(int *)(pcVar2 + 0x58));
      if (param_3 <= pcVar3) {
        pcVar6 = *(char **)(pcVar2 + 0x58);
        pcVar7 = param_4;
        for (uVar5 = (uint)param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = (uint)param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        param_4 = param_4 + (int)param_3;
        *(undefined4 *)(pcVar2 + 0x58) = *(undefined4 *)(pcVar2 + 0x68);
        pcVar3 = pcVar3 + -(int)param_3;
        *(int *)(pcVar2 + 0x48) = *(int *)(pcVar2 + 0x48) - (int)param_3;
        *(char **)(pcVar2 + 0x5c) = param_3 + *(int *)(pcVar2 + 0x5c);
        if (pcVar3 == (char *)0x0) goto LAB_3000ba51;
      }
      pcVar6 = *(char **)(pcVar2 + 0x58);
      pcVar7 = param_4;
      for (uVar5 = (uint)pcVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = (uint)pcVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      param_4 = param_4 + (int)pcVar3;
      *(char **)(pcVar2 + 0x58) = pcVar3 + *(int *)(pcVar2 + 0x58);
      *(int *)(pcVar2 + 0x48) = *(int *)(pcVar2 + 0x48) - (int)pcVar3;
      *(char **)(pcVar2 + 0x5c) = pcVar3 + *(int *)(pcVar2 + 0x5c);
    }
LAB_3000ba51:
    if (param_5 == (char *)0x0) {
      uVar9 = _RADTimerRead_0();
      iVar4 = ((int)uVar9 - (int)uVar8) + *(int *)(pcVar2 + 0x30);
      goto LAB_3000bb23;
    }
    if (bVar1) {
      uVar9 = _RADTimerRead_0();
      pcVar3 = param_5;
      ReadFile(*(HANDLE *)(pcVar2 + 0x4c),param_4,(DWORD)param_5,(LPDWORD)&param_1,(LPOVERLAPPED)0x0
              );
      if (param_1 < pcVar3) {
        pcVar2[0x1c] = '\x01';
        pcVar2[0x1d] = '\0';
        pcVar2[0x1e] = '\0';
        pcVar2[0x1f] = '\0';
      }
      *(char **)(pcVar2 + 0x50) = param_1 + *(int *)(pcVar2 + 0x50);
      *(char **)(pcVar2 + 0x54) = param_1 + *(int *)(pcVar2 + 0x54);
      *(char **)(pcVar2 + 0x24) = param_1 + *(int *)(pcVar2 + 0x24);
      local_8 = local_8 + (int)param_1;
      if (*(int *)(pcVar2 + 0x80) != 0) {
        FUN_3000bb70((int)pcVar2,(uint)param_1,(int)uVar9);
      }
      uVar10 = _RADTimerRead_0();
      *(int *)(pcVar2 + 0x2c) = ((int)uVar10 - (int)uVar9) + *(int *)(pcVar2 + 0x2c);
      iVar4 = ((int)uVar10 - (int)uVar8) + *(int *)(pcVar2 + 0x30);
LAB_3000bb23:
      *(int *)(pcVar2 + 0x30) = iVar4;
      uVar5 = *(int *)(pcVar2 + 0x7c) - *(int *)(pcVar2 + 0x54);
      if (*(uint *)(pcVar2 + 0x3c) <= uVar5) {
        uVar5 = *(uint *)(pcVar2 + 0x3c);
      }
      *(uint *)(pcVar2 + 0x44) = uVar5;
      if (*(uint *)(pcVar2 + 0x44) < *(int *)(pcVar2 + 0x48) + 0x1000U) {
        *(undefined4 *)(pcVar2 + 0x44) = *(undefined4 *)(pcVar2 + 0x48);
      }
      if (bVar1) {
        LOCK();
        pcVar2[0x60] = pcVar2[0x60] + -1;
        UNLOCK();
      }
      return local_8;
    }
    param_3 = pcVar2 + 0x60;
    bVar1 = true;
    LOCK();
    *param_3 = *param_3 + '\x01';
    UNLOCK();
    iVar4 = *(int *)(pcVar2 + 100);
    while (iVar4 != 0) {
      Sleep(0);
      _BinkService_4(*(int **)(pcVar2 + 0x18));
      iVar4 = *(int *)(pcVar2 + 100);
    }
  } while( true );
}



/* === FUN_3000bb70 @ 0x3000bb70 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bb70 @ 0x3000BB70 */



void __cdecl FUN_3000bb70(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar5 = _RADTimerRead_0();
  *(int *)(param_1 + 0x84) =
       *(int *)(param_1 + 0x84) +
       param_3 + ((int)(((ulonglong)param_2 * 1000) / (ulonglong)uVar1) - (int)uVar5);
  iVar2 = *(int *)(param_1 + 0x84);
  iVar3 = (int)uVar5;
  while (0 < iVar2) {
    do {
      Sleep(0);
      uVar5 = _RADTimerRead_0();
      iVar4 = (int)uVar5;
    } while (iVar4 - iVar3 < *(int *)(param_1 + 0x84));
    *(int *)(param_1 + 0x84) = (iVar3 - iVar4) + *(int *)(param_1 + 0x84);
    iVar3 = iVar4;
    iVar2 = *(int *)(param_1 + 0x84);
  }
  return;
}



/* === FUN_3000bc00 @ 0x3000bc00 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bc00 @ 0x3000BC00 */



uint FUN_3000bc00(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(param_1 + 0x60);
  LOCK();
  *pcVar1 = *pcVar1 + '\x01';
  UNLOCK();
  iVar2 = *(int *)(param_1 + 100);
  while (iVar2 != 0) {
    Sleep(0);
    _BinkService_4(*(int **)(param_1 + 0x18));
    iVar2 = *(int *)(param_1 + 100);
  }
  LOCK();
  *pcVar1 = *pcVar1 + -1;
  UNLOCK();
  return param_2 + 0xfffU & 0xfffff000;
}



/* === FUN_3000bc60 @ 0x3000bc60 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bc60 @ 0x3000BC60 */



void FUN_3000bc60(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = (char *)(param_1 + 0x60);
  LOCK();
  *pcVar1 = *pcVar1 + '\x01';
  UNLOCK();
  iVar2 = *(int *)(param_1 + 100);
  while (iVar2 != 0) {
    Sleep(0);
    _BinkService_4(*(int **)(param_1 + 0x18));
    iVar2 = *(int *)(param_1 + 100);
  }
  uVar3 = param_3 & 0xfffff000;
  *(int *)(param_1 + 0x68) = param_2;
  *(int *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x70) = param_2;
  *(uint *)(param_1 + 0x6c) = param_2 + uVar3;
  *(uint *)(param_1 + 0x3c) = uVar3;
  *(uint *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  LOCK();
  *pcVar1 = *pcVar1 + -1;
  UNLOCK();
  return;
}



/* === FUN_3000bce0 @ 0x3000bce0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bce0 @ 0x3000BCE0 */



void FUN_3000bce0(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(param_1 + 0x60);
  LOCK();
  *pcVar1 = *pcVar1 + '\x01';
  UNLOCK();
  iVar2 = *(int *)(param_1 + 100);
  while (iVar2 != 0) {
    Sleep(0);
    _BinkService_4(*(int **)(param_1 + 0x18));
    iVar2 = *(int *)(param_1 + 100);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x4c));
  }
  LOCK();
  *pcVar1 = *pcVar1 + -1;
  UNLOCK();
  return;
}



/* === FUN_3000bd40 @ 0x3000bd40 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bd40 @ 0x3000BD40 */



uint FUN_3000bd40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  DWORD local_8;
  
  bVar4 = false;
  local_8 = 0;
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 100);
  LOCK();
  *(char *)piVar1 = *(char *)piVar1 + '\x01';
  UNLOCK();
  piVar2 = (int *)(param_1 + 0x60);
  LOCK();
  *(char *)piVar2 = *(char *)piVar2 + '\x01';
  UNLOCK();
  if ((*piVar1 == 1) && (*piVar2 == 1)) {
    if ((*(uint *)(param_1 + 0x5c) < 0x1000) ||
       ((uint)(*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x50)) < 0x1000)) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x48);
    }
    else {
      uVar6 = _RADTimerRead_0();
      *(undefined4 *)(param_1 + 0x20) = 1;
      ReadFile(*(HANDLE *)(param_1 + 0x4c),*(LPVOID *)(param_1 + 0x70),0x1000,&local_8,
               (LPOVERLAPPED)0x0);
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (local_8 < 0x1000) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      *(DWORD *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + local_8;
      *(DWORD *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + local_8;
      *(DWORD *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + local_8;
      if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x70)) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x68);
      }
      *(DWORD *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - local_8;
      *(DWORD *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + local_8;
      if (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x48)) {
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x48);
      }
      if (*(int *)(param_1 + 0x80) != 0) {
        FUN_3000bb70(param_1,local_8,(int)uVar6);
      }
      uVar7 = _RADTimerRead_0();
      iVar5 = (int)uVar7 - (int)uVar6;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar5;
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x28) == 0)) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar5;
      }
      else {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar5;
      }
    }
  }
  else {
    bVar4 = true;
    local_8 = 0xffffffff;
  }
  LOCK();
  *(char *)piVar2 = *(char *)piVar2 + -1;
  UNLOCK();
  LOCK();
  *(char *)piVar1 = *(char *)piVar1 + -1;
  UNLOCK();
  if (bVar4) {
    Sleep(0);
  }
  return local_8;
}



/* === _YUV_init@4 @ 0x3000bed0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_init@4 @ 0x3000BED0 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _YUV_init_4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  sbyte sVar5;
  sbyte sVar6;
  byte bVar7;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 local_28;
  int local_1c;
  byte bVar8;
  byte bVar9;
  
                    /* 0xbed0  79  _YUV_init@4 */
  if (DAT_3004f1d0 == 0) {
    FUN_3000c5a0();
  }
  if (DAT_3004f1e4 == 0) {
    iVar10 = 0;
    iVar12 = -0x811a80;
    iVar17 = -0x662580;
    iVar13 = 0x191280;
    iVar14 = 0x340780;
    do {
      if (iVar14 < 0x2d8690) {
        iVar1 = 0xdb;
        if (-0x2b7e45 < iVar14) {
          iVar1 = iVar10 + -0x10;
        }
      }
      else {
        iVar1 = 0;
      }
      iVar1 = (int)(iVar1 * 0x950a + (iVar1 * 0x950a >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_3004b538)[iVar10] = iVar1;
      (&DAT_300458d8)[iVar10] = iVar1 << 2;
      (&DAT_300460e8)[iVar10] = (int)(iVar14 + (iVar14 >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_300464e8)[iVar10] = (int)(iVar13 + (iVar13 >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_300468e8)[iVar10] = (int)(iVar17 + (iVar17 >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_30045ce8)[iVar10] = (int)(iVar12 + (iVar12 >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_300470e8)[iVar10] =
           (&DAT_300460e8)[iVar10] * 0x10000 + ((&DAT_300460e8)[iVar10] & 0xffff);
      (&DAT_300474e8)[iVar10] =
           (&DAT_300464e8)[iVar10] * 0x10000 + ((&DAT_300464e8)[iVar10] & 0xffff);
      (&DAT_300478e8)[iVar10] =
           (&DAT_300468e8)[iVar10] * 0x10000 + ((&DAT_300468e8)[iVar10] & 0xffff);
      (&DAT_30046ce8)[iVar10] =
           (&DAT_30045ce8)[iVar10] * 0x10000 + ((&DAT_30045ce8)[iVar10] & 0xffff);
      iVar14 = iVar14 + -0x680f;
      iVar10 = iVar10 + 1;
      iVar17 = iVar17 + 0xcc4b;
      iVar12 = iVar12 + 0x10235;
      iVar13 = iVar13 + -0x3225;
    } while (-0x340780 < iVar14);
    iVar10 = 0;
    do {
      (&DAT_30047ce8)[iVar10] = 0;
      (&DAT_300480e8)[iVar10] = iVar10;
      (&DAT_300484e8)[iVar10] = 0xff;
      (&DAT_3004b118)[iVar10] = &DAT_300480e8 + (&DAT_3004b538)[iVar10];
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x100);
    puVar15 = &DAT_30045ce8;
    puVar18 = &DAT_30049118;
    for (iVar10 = 0x800; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar18 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar18 = puVar18 + 1;
    }
    DAT_3004f1e4 = 1;
  }
  uVar16 = 0;
  DAT_30041c30 = FUN_3001e070();
  if ((DAT_3003db90 != param_1) && (param_1 != -1)) {
    DAT_3003db90 = param_1;
    iVar10 = 5;
    switch(param_1) {
    case 7:
      DAT_3003e8c8._0_4_ = 0x12a112a1;
      DAT_3003e8c8._4_4_ = 0x12a112a1;
      iVar10 = 4;
      DAT_3003e8d0._0_4_ = 0x7ff07ff0;
      DAT_3003e8d0._4_4_ = 0x7ff07ff0;
      iVar13 = 4;
      iVar12 = 4;
      local_28 = 4;
      param_1 = 8;
      DAT_3003e8c0._0_4_ = 0x1110111;
      DAT_3003e8c0._4_4_ = 0x1110111;
      break;
    case 8:
    case 9:
      DAT_3003e8c8._0_4_ = 0x25422542;
      DAT_3003e8c8._4_4_ = 0x25422542;
      DAT_3003e8d0._0_4_ = 0x7fe07fe0;
      DAT_3003e8d0._4_4_ = 0x7fe07fe0;
      iVar13 = 5;
      iVar12 = 5;
      local_28 = 5;
      param_1 = 10;
      DAT_3003e8c0._0_4_ = 0x4210421;
      DAT_3003e8c0._4_4_ = 0x4210421;
      break;
    case 10:
      DAT_3003e8c8._0_4_ = 0x25422542;
      DAT_3003e8c8._4_4_ = 0x25422542;
      DAT_3003e8d0._0_4_ = 0x7fe07fe0;
      DAT_3003e8d0._4_4_ = 0x7fe07fe0;
      iVar13 = 5;
      iVar12 = 6;
      local_28 = 5;
      param_1 = 0xb;
      DAT_3003e8c0._0_4_ = 0x8410841;
      DAT_3003e8c0._4_4_ = 0x8410841;
      break;
    case 0xb:
      DAT_3003e8c8._0_4_ = 0x25422542;
      DAT_3003e8c8._4_4_ = 0x25422542;
      DAT_3003e8d0._0_4_ = 0x7fe07fe0;
      DAT_3003e8d0._4_4_ = 0x7fe07fe0;
      iVar13 = 6;
      iVar12 = 5;
      local_28 = 6;
      param_1 = 0xb;
      DAT_3003e8c0._0_4_ = 0x8420842;
      DAT_3003e8c0._4_4_ = 0x8420842;
      break;
    case 0xc:
      DAT_3003e8c8._0_4_ = 0x12a112a1;
      DAT_3003e8c8._4_4_ = 0x12a112a1;
      iVar13 = 6;
      DAT_3003e8d0._0_4_ = 0x7ff07ff0;
      DAT_3003e8d0._4_4_ = 0x7ff07ff0;
      iVar12 = 6;
      local_28 = 6;
      iVar10 = 4;
      param_1 = 0xc;
      DAT_3003e8c0._0_4_ = 0x11041104;
      DAT_3003e8c0._4_4_ = 0x11041104;
      break;
    default:
      iVar13 = 0;
      iVar12 = 0;
      local_28 = 0;
      iVar10 = 0;
      param_1 = 0;
    }
    _DAT_3004f1b0 = param_1;
    _DAT_3004f1a8 = local_28;
    _DAT_3004f1a0 = 0;
    _DAT_3004f1a4 = 0;
    iVar14 = (1 << (sbyte)iVar13) + -1;
    _DAT_3004f1ac = 0;
    sVar5 = (sbyte)local_28;
    iVar17 = (1 << (sbyte)iVar12) + -1 << sVar5;
    sVar6 = (sbyte)param_1;
    iVar1 = (1 << (sbyte)iVar10) + -1 << sVar6;
    _DAT_3004f1b4 = 0;
    _DAT_3004f1bc = 0;
    _DAT_3004f1c4 = 0;
    _DAT_3004f1cc = 0;
    local_1c = -0xff0;
    _DAT_3004f1b8 = 8 - iVar13;
    _DAT_3004f1c0 = 8 - iVar12;
    _DAT_3004f1c8 = 8 - iVar10;
    do {
      bVar7 = (byte)(8 - iVar12);
      bVar8 = (byte)(8 - iVar13);
      bVar9 = (byte)(8 - iVar10);
      if (local_1c < 1) {
        (&DAT_30048904)[uVar16] = 0;
        (&DAT_3004d57c)[uVar16] = 0;
        (&DAT_30048d04)[uVar16] = 0;
      }
      else if (local_1c < 0xda25) {
        uVar2 = local_1c / 0xdb;
        uVar3 = (uVar2 >> (bVar9 & 0x1f)) << sVar6 | (uVar2 >> (bVar7 & 0x1f)) << sVar5 |
                uVar2 >> (bVar8 & 0x1f);
        (&DAT_30048904)[uVar16] = uVar3;
        (&DAT_3004d57c)[uVar16] = uVar3 << 0x10 | uVar3;
        (&DAT_30048d04)[uVar16] = (uVar2 * 0x100 | uVar2) << 8 | uVar2;
      }
      else {
        (&DAT_30048d04)[uVar16] = 0xffffff;
        uVar2 = (0xff >> (bVar9 & 0x1f)) << sVar6 | (0xff >> (bVar7 & 0x1f)) << sVar5 |
                0xff >> (bVar8 & 0x1f);
        (&DAT_30048904)[uVar16] = uVar2;
        (&DAT_3004d57c)[uVar16] = uVar2 << 0x10 | uVar2;
      }
      (&DAT_30044c7c)[uVar16] = 0;
      iVar19 = (int)uVar16 >> (bVar8 & 0x1f);
      (&DAT_30043454)[uVar16] = 0;
      (&DAT_3004507c)[uVar16] = iVar19;
      (&DAT_3004547c)[uVar16] = iVar14;
      (&DAT_30044068)[uVar16] = 0;
      (&DAT_30042844)[uVar16] = 0;
      iVar4 = ((int)uVar16 >> (bVar7 & 0x1f)) << sVar5;
      (&DAT_30043854)[uVar16] = iVar4;
      (&DAT_30043c54)[uVar16] = iVar17;
      iVar11 = ((int)uVar16 >> (bVar9 & 0x1f)) << sVar6;
      (&DAT_3004d168)[uVar16] = (uVar16 & 0xfffffff0) << 8;
      (&DAT_30042c44)[uVar16] = iVar19 * 0x10001;
      (&DAT_30043044)[uVar16] = iVar14 * 0x10001;
      (&DAT_3004e58c)[uVar16] = 0;
      (&DAT_3004c558)[uVar16] = 0;
      (&DAT_30044468)[uVar16] = iVar11;
      (&DAT_3004c958)[uVar16] = iVar11 * 0x10001;
      (&DAT_3004cd58)[uVar16] = iVar1 * 0x10001;
      (&DAT_3004e98c)[uVar16] = iVar4 * 0x10001;
      (&DAT_3004ed8c)[uVar16] = iVar17 * 0x10001;
      (&DAT_30041c34)[uVar16] = (&DAT_30044c7c)[uVar16] << 0x10;
      (&DAT_30042034)[uVar16] = (&DAT_3004507c)[uVar16] << 0x10;
      (&DAT_30042434)[uVar16] = iVar14 * 0x10000;
      (&DAT_3004d97c)[uVar16] = (&DAT_30043454)[uVar16] << 0x10;
      (&DAT_30044868)[uVar16] = iVar1;
      (&DAT_3004dd7c)[uVar16] = (&DAT_30043854)[uVar16] << 0x10;
      (&DAT_3004e17c)[uVar16] = iVar17 << 0x10;
      (&DAT_3004b948)[uVar16] = (&DAT_30044068)[uVar16] << 0x10;
      (&DAT_3004bd48)[uVar16] = (&DAT_30044468)[uVar16] << 0x10;
      (&DAT_3004c148)[uVar16] = iVar1 << 0x10;
      uVar16 = uVar16 + 1;
      local_1c = local_1c + 0xff;
    } while (local_1c < 0xef10);
  }
  return;
}



/* === FUN_3000c5a0 @ 0x3000c5a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000c5a0 @ 0x3000C5A0 */



undefined8 FUN_3000c5a0(void)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  DAT_3004f1d0 = 1;
  return uVar1;
}



/* === FUN_3000c660 @ 0x3000c660 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000c660 @ 0x3000C660 */



int __cdecl FUN_3000c660(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar2 = (&DAT_30048d04)[bVar1];
    *DAT_30045890 = uVar2;
    DAT_30045890[1] = uVar2;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar2 = (&DAT_30048d04)[bVar1];
    *DAT_30045894 = uVar2;
    DAT_30045894[1] = uVar2;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}



/* === _YUV_blit_32bpp@48 @ 0x3000db70 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_32bpp@48 @ 0x3000DB70 */



void _YUV_blit_32bpp_48(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                       uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                       uint param_12)

{
                    /* 0xdb70  68  _YUV_blit_32bpp@48 */
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003db98);
  return;
}



/* === FUN_3000dbc0 @ 0x3000dbc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000dbc0 @ 0x3000DBC0 */



void __cdecl
FUN_3000dbc0(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
            uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12,
            int param_13,int *param_14)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar5 = param_8;
  uVar1 = param_4;
  uVar4 = param_12 & 0x70000000;
  uVar7 = param_10;
  if (uVar4 == 0x60000000) {
    param_9 = param_9 >> 1;
    param_7 = param_7 >> 1;
    param_11 = param_11 >> 1;
    param_4 = param_4 * 2;
    uVar7 = param_10 * 2;
  }
  iVar6 = *param_14;
  if (iVar6 == 2) {
    if (((byte)param_1 & 3) == 2) {
      param_2 = param_2 + 1;
      param_1 = param_1 & 0xfffffffc;
    }
  }
  else if (iVar6 == 3) {
    if ((param_1 + 1 & 3) == 0) {
      param_2 = param_2 + 1;
      param_1 = param_1 - 3;
    }
    else if ((param_1 - 2 & 3) == 0) {
      param_2 = param_2 + 2;
      param_1 = param_1 - 6;
    }
    else if ((param_1 - 1 & 3) == 0) {
      param_2 = param_2 + 3;
      param_1 = param_1 - 9;
    }
  }
  DAT_30045890 = uVar1 * param_3 + param_1 + iVar6 * param_2;
  if ((uVar4 == 0x20000000) || (uVar4 == 0x50000000)) {
    param_4 = param_4 * 2;
  }
  FUN_3000e000(param_12,(int *)&param_4,param_8,param_9,param_14,(int *)&param_10);
  DAT_30045894 = DAT_30045890 + param_4;
  DAT_300458a8 = param_7 * uVar7 + param_6 + param_13;
  DAT_30045898 = param_7 * uVar7 + param_5 + param_6;
  DAT_300458ac = DAT_300458a8 + uVar7;
  DAT_3004589c = DAT_30045898 + uVar7;
  uVar1 = uVar7 >> 1;
  iVar6 = uVar7 - uVar5;
  iVar8 = uVar1 - (uVar5 >> 1);
  if (((uVar5 & 1) != 0) && ((param_6 & 1) != 0)) {
    iVar8 = iVar8 + -1;
  }
  if ((param_12 & 0x10000) == 0) {
    DAT_300458a4 = uVar7 * param_11 + param_5;
    iVar3 = (param_11 >> 1) * uVar1 + DAT_300458a4;
  }
  else {
    iVar3 = uVar7 * param_11 + param_5;
    DAT_300458a4 = (param_11 >> 1) * uVar1 + iVar3;
  }
  iVar2 = (param_6 >> 1) + (param_7 >> 1) * uVar1;
  DAT_300458a0 = iVar3 + iVar2;
  DAT_300458a4 = DAT_300458a4 + iVar2;
  iVar3 = (param_7 - 1) + param_9;
  param_11 = param_7;
  if (((param_7 & 1) != 0) && ((int)param_7 <= iVar3)) {
    (*DAT_3004b534)(param_6,uVar5);
    DAT_30045898 = DAT_30045898 + iVar6;
    DAT_3004589c = DAT_30045898 + uVar7;
    DAT_300458a8 = DAT_300458a8 + iVar6;
    DAT_300458ac = DAT_300458a8 + uVar7;
    DAT_300458a0 = DAT_300458a0 + iVar8;
    DAT_300458a4 = DAT_300458a4 + iVar8;
    DAT_30045890 = DAT_30045890 + param_10;
    DAT_30045894 = DAT_30045890 + param_4;
    param_11 = param_7 + 1;
  }
  param_1 = -(param_2 & 3) & 3;
  if (uVar5 < param_1) {
    param_1 = uVar5;
  }
  uVar1 = param_6 & 1;
  if (uVar5 < (param_6 & 1)) {
    uVar1 = uVar5;
  }
  uVar4 = *DAT_30044064;
  if ((uVar4 & 1) == 0) {
    if (uVar4 != 0) goto LAB_3000de7b;
  }
  else if (uVar4 < 0x2001) {
    *DAT_30044064 = uVar4 + param_9 * 4;
    goto LAB_3000de7b;
  }
  *DAT_30044064 = 0x80;
LAB_3000de7b:
  if ((int)param_11 < iVar3) {
    param_14 = (int *)((iVar3 - param_11) + 1 >> 1);
    param_11 = param_11 + (int)param_14 * 2;
    uVar4 = param_11;
    do {
      param_7 = param_6;
      uVar9 = FUN_3000ed00(param_1,uVar4,param_1,uVar1);
      param_9 = (uint)uVar9;
      if (param_9 != 0) {
        param_7 = (*DAT_3004d578)(param_9,param_6);
        uVar5 = param_8 - param_9;
      }
      param_9 = (~DAT_300488fc & uVar5) >> 2;
      param_5 = uVar5 + param_9 * -4;
      if (param_9 != 0) {
        if ((param_7 & 1) == 0) {
          (*DAT_300488f8)(param_9);
        }
        else {
          (*DAT_30049114)();
        }
      }
      if (param_5 != 0) {
        (*DAT_3004d578)(param_5,param_7 + param_9 * 4);
      }
      FUN_3000ed50();
      DAT_30045898 = DAT_3004589c + iVar6;
      DAT_3004589c = DAT_30045898 + uVar7;
      DAT_300458a8 = DAT_300458ac + iVar6;
      DAT_300458ac = DAT_300458a8 + uVar7;
      DAT_300458a4 = DAT_300458a4 + iVar8;
      DAT_300458a0 = DAT_300458a0 + iVar8;
      DAT_30045890 = param_10 + DAT_30045894;
      DAT_30045894 = DAT_30045890 + param_4;
      param_14 = (int *)((int)param_14 + -1);
      uVar4 = param_4;
      uVar5 = param_8;
    } while (param_14 != (int *)0x0);
    param_14 = (int *)0x0;
  }
  if ((int)param_11 <= iVar3) {
    (*DAT_3004b534)(param_6,uVar5);
  }
  if ((DAT_30041c30 != 0) && ((param_12 & 0x40000) == 0)) {
    FUN_3000dff0();
    return;
  }
  return;
}



/* === FUN_3000dff0 @ 0x3000dff0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000dff0 @ 0x3000DFF0 */



void FUN_3000dff0(void)

{
  return;
}



/* === FUN_3000e000 @ 0x3000e000 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000e000 @ 0x3000E000 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_3000e000(uint param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  DAT_30048900 = 0;
  DAT_300458d4 = *param_2;
  if ((param_1 & 0x10000) == 0) {
    if (DAT_3004f1d4 != 0) {
      DAT_3004f1d4 = 0;
      iVar2 = 0x800;
      puVar3 = &DAT_30049118;
      puVar4 = &DAT_30045ce8;
      goto LAB_3000e0e4;
    }
  }
  else if (DAT_3004f1d4 != 1) {
    DAT_3004f1d4 = 1;
    puVar3 = &DAT_30049118;
    puVar4 = &DAT_300468e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_30049918;
    puVar4 = &DAT_300460e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_30049518;
    puVar4 = &DAT_300464e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_30049d18;
    puVar4 = &DAT_30045ce8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_3004a118;
    puVar4 = &DAT_300478e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_3004a918;
    puVar4 = &DAT_300470e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_3004a518;
    puVar4 = &DAT_300474e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 0x100;
    puVar3 = &DAT_3004ad18;
    puVar4 = &DAT_30046ce8;
LAB_3000e0e4:
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if ((DAT_30041c30 == 0) || ((param_1 & 0x40000) != 0)) {
    uVar1 = param_1 & 0x70000000;
    if (uVar1 == 0x10000000) {
      FUN_3000e770(*param_5 * param_3);
      iVar2 = *param_2;
      *param_2 = iVar2 * 2;
      *param_6 = iVar2 * 2 - *param_5 * param_3;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x23;
        FUN_3000e7d0((uint *)(param_5 + 0x1b),param_4);
        DAT_3004b534 = param_5[0x33];
        DAT_3004d578 = param_5[0x34];
        DAT_3004910c = param_5[6];
        DAT_3004b52c = param_5[6];
        _DAT_30049110 = param_5[5];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x21;
      FUN_3000e7d0((uint *)(param_5 + 0x19),param_4);
      DAT_3004b534 = param_5[0x31];
      DAT_3004d578 = param_5[0x32];
      DAT_3004910c = param_5[2];
      DAT_3004b52c = param_5[4];
      uVar1 = param_5[1];
      _DAT_30049110 = param_5[3];
      if (uVar1 <= _DAT_30049110) goto LAB_3000e751;
    }
    else if ((uVar1 == 0x30000000) || (uVar1 == 0x50000000)) {
      *param_6 = *param_2 + *param_5 * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x27;
        DAT_3004b534 = param_5[0x2f];
        DAT_3004d578 = param_5[0x30];
        DAT_300488f8 = param_5[0xc];
        DAT_30049114 = param_5[0xc];
        _DAT_30049110 = param_5[0xb];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x25;
      DAT_3004b534 = param_5[0x2d];
      DAT_3004d578 = param_5[0x2e];
      DAT_300488f8 = param_5[8];
      DAT_30049114 = param_5[10];
      _DAT_30049110 = param_5[7];
      uVar1 = param_5[9];
      if (uVar1 < _DAT_30049110) goto LAB_3000e751;
    }
    else if (uVar1 == 0x40000000) {
      FUN_3000e770(*param_5 * param_3 * 2);
      iVar2 = *param_2;
      *param_2 = iVar2 * 2;
      *param_6 = iVar2 * 2 + *param_5 * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x27;
        FUN_3000e7d0((uint *)(param_5 + 0x1f),param_4);
        DAT_3004b534 = param_5[0x37];
        DAT_3004d578 = param_5[0x38];
        DAT_3004910c = param_5[0xc];
        DAT_3004b52c = param_5[0xc];
        _DAT_30049110 = param_5[0xb];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x25;
      FUN_3000e7d0((uint *)(param_5 + 0x1d),param_4);
      DAT_3004b534 = param_5[0x35];
      DAT_3004d578 = param_5[0x36];
      DAT_3004910c = param_5[8];
      DAT_3004b52c = param_5[10];
      uVar1 = param_5[7];
      _DAT_30049110 = param_5[9];
      if (uVar1 <= _DAT_30049110) goto LAB_3000e751;
    }
    else {
      *param_6 = *param_2 - *param_5 * param_3;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x23;
        DAT_3004b534 = param_5[0x2b];
        DAT_3004d578 = param_5[0x2c];
        DAT_300488f8 = param_5[6];
        DAT_30049114 = param_5[6];
        _DAT_30049110 = param_5[5];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x21;
      DAT_3004b534 = param_5[0x29];
      DAT_3004d578 = param_5[0x2a];
      DAT_300488f8 = param_5[2];
      DAT_30049114 = param_5[4];
      _DAT_30049110 = param_5[1];
      uVar1 = param_5[3];
      if (uVar1 < _DAT_30049110) goto LAB_3000e751;
    }
  }
  else {
    uVar1 = param_1 & 0x70000000;
    if (uVar1 == 0x10000000) {
      FUN_3000e770(*param_5 * param_3);
      iVar2 = *param_2;
      *param_2 = iVar2 * 2;
      *param_6 = iVar2 * 2 - *param_5 * param_3;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x24;
        FUN_3000e7d0((uint *)(param_5 + 0x1c),param_4);
        DAT_3004b534 = param_5[0x33];
        DAT_3004d578 = param_5[0x34];
        DAT_3004910c = param_5[0x12];
        DAT_3004b52c = param_5[0x12];
        _DAT_30049110 = param_5[0x11];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x22;
      FUN_3000e7d0((uint *)(param_5 + 0x1a),param_4);
      DAT_3004b534 = param_5[0x31];
      DAT_3004d578 = param_5[0x32];
      DAT_3004910c = param_5[0xe];
      DAT_3004b52c = param_5[0x10];
      uVar1 = param_5[0xd];
      _DAT_30049110 = param_5[0xf];
      if (uVar1 <= _DAT_30049110) goto LAB_3000e751;
    }
    else if ((uVar1 == 0x30000000) || (uVar1 == 0x50000000)) {
      *param_6 = *param_2 + *param_5 * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x28;
        DAT_3004b534 = param_5[0x2f];
        DAT_3004d578 = param_5[0x30];
        DAT_300488f8 = param_5[0x18];
        DAT_30049114 = param_5[0x18];
        _DAT_30049110 = param_5[0x17];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x26;
      DAT_3004b534 = param_5[0x2d];
      DAT_3004d578 = param_5[0x2e];
      DAT_300488f8 = param_5[0x14];
      DAT_30049114 = param_5[0x16];
      _DAT_30049110 = param_5[0x13];
      uVar1 = param_5[0x15];
      if (uVar1 < _DAT_30049110) goto LAB_3000e751;
    }
    else if (uVar1 == 0x40000000) {
      FUN_3000e770(*param_5 * param_3 * 2);
      iVar2 = *param_2;
      *param_2 = iVar2 * 2;
      *param_6 = iVar2 * 2 + *param_5 * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x28;
        FUN_3000e7d0((uint *)(param_5 + 0x20),param_4);
        DAT_3004b534 = param_5[0x37];
        DAT_3004d578 = param_5[0x38];
        DAT_3004910c = param_5[0x18];
        DAT_3004b52c = param_5[0x18];
        _DAT_30049110 = param_5[0x17];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x26;
      FUN_3000e7d0((uint *)(param_5 + 0x1e),param_4);
      DAT_3004b534 = param_5[0x35];
      DAT_3004d578 = param_5[0x36];
      DAT_3004910c = param_5[0x14];
      DAT_3004b52c = param_5[0x16];
      uVar1 = param_5[0x13];
      _DAT_30049110 = param_5[0x15];
      if (uVar1 <= _DAT_30049110) goto LAB_3000e751;
    }
    else {
      *param_6 = *param_2 - *param_5 * param_3;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x24;
        DAT_3004b534 = param_5[0x2b];
        DAT_3004d578 = param_5[0x2c];
        DAT_300488f8 = param_5[0x12];
        DAT_30049114 = param_5[0x12];
        _DAT_30049110 = param_5[0x11];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x22;
      DAT_3004b534 = param_5[0x29];
      DAT_3004d578 = param_5[0x2a];
      DAT_300488f8 = param_5[0xe];
      DAT_30049114 = param_5[0x10];
      _DAT_30049110 = param_5[0xd];
      uVar1 = param_5[0xf];
      if (uVar1 < _DAT_30049110) goto LAB_3000e751;
    }
  }
  _DAT_30049110 = uVar1;
LAB_3000e751:
  _DAT_30044c78 = 1 << ((byte)_DAT_30049110 & 0x1f);
  DAT_300488fc = _DAT_30044c78 + -1;
  return;
}



/* === FUN_3000e770 @ 0x3000e770 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000e770 @ 0x3000E770 */



void __cdecl FUN_3000e770(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0x1fU & 0xffffffe0;
  uVar1 = uVar2 * 2;
  if (DAT_3004f1d8 < uVar1) {
    if (DAT_3004f1dc != 0) {
      radfree(DAT_3004f1dc);
      DAT_3004f1dc = 0;
    }
    DAT_3004f1dc = radmalloc(uVar1);
    DAT_3004f1d8 = uVar1;
    DAT_3004f1e0 = DAT_3004f1dc + uVar2;
    return;
  }
  DAT_3004f1e0 = DAT_3004f1dc + uVar2;
  return;
}



/* === FUN_3000e7d0 @ 0x3000e7d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000e7d0 @ 0x3000E7D0 */



void __cdecl FUN_3000e7d0(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_3004f1d0 == 1) {
    uVar1 = *param_1;
    if (((uVar1 & 1) == 0) || (0x2000 < uVar1)) {
      DAT_300488f8 = FUN_3000eb90;
      DAT_30049114 = FUN_3000ecc0;
      DAT_3004b530 = param_1;
      *param_1 = 0x82;
      DAT_30049108 = &LAB_3000e870;
      DAT_3004b528 = &LAB_3000e940;
      DAT_30048900 = 1;
      return;
    }
    uVar1 = uVar1 + param_2 * 4;
    *param_1 = uVar1;
    if ((uVar1 & 2) == 0) {
      DAT_300488f8 = (code *)&LAB_3000e870;
      DAT_30049114 = (code *)&LAB_3000e940;
      return;
    }
  }
  DAT_300488f8 = (code *)&LAB_3000ea10;
  DAT_30049114 = (code *)&LAB_3000ead0;
  return;
}



/* === FUN_3000eb90 @ 0x3000eb90 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000eb90 @ 0x3000EB90 */



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_3000eb90(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = rdtsc();
  (*DAT_30049108)(param_1);
  uVar2 = rdtsc();
  FUN_3000ebd0((int)uVar2 - (int)uVar1);
  return;
}



/* === FUN_3000ebd0 @ 0x3000ebd0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ebd0 @ 0x3000EBD0 */



void __cdecl FUN_3000ebd0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *DAT_3004b530;
  if ((uVar1 & 2) != 0) {
    *DAT_3004b530 = uVar1 & 0xfd | param_1 << 8;
    DAT_30049108 = &LAB_3000ea10;
    DAT_3004b528 = &LAB_3000ead0;
    return;
  }
  uVar2 = uVar1 >> 2 & 0x3f;
  if (param_1 < uVar1 >> 8) {
    if (uVar2 == 0) {
      DAT_300488f8 = &LAB_3000ea10;
      DAT_30049114 = &LAB_3000ead0;
      DAT_30048900 = uVar2;
      *DAT_3004b530 = 3;
      return;
    }
    DAT_30049108 = &LAB_3000e870;
    DAT_3004b528 = &LAB_3000e940;
    *DAT_3004b530 = uVar2 * 4 - 1 & 0xfc | 2;
    return;
  }
  if (uVar2 == 0x3f) {
    DAT_30048900 = 0;
    DAT_300488f8 = &LAB_3000e870;
    DAT_30049114 = &LAB_3000e940;
    *DAT_3004b530 = 1;
    return;
  }
  DAT_30049108 = &LAB_3000e870;
  DAT_3004b528 = &LAB_3000e940;
  *DAT_3004b530 = uVar2 * 4 + 4 & 0xfc | 2;
  return;
}



/* === FUN_3000ecc0 @ 0x3000ecc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ecc0 @ 0x3000ECC0 */



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_3000ecc0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = rdtsc();
  (*DAT_3004b528)(param_1);
  uVar2 = rdtsc();
  FUN_3000ebd0((int)uVar2 - (int)uVar1);
  return;
}



/* === FUN_3000ed00 @ 0x3000ed00 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ed00 @ 0x3000ED00 */



undefined8 __fastcall FUN_3000ed00(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *DAT_30044064;
  if ((DAT_30048900 == 0) && (param_3 != param_4)) {
    if (DAT_3004f1d0 == 1) {
      if ((uVar1 & 1) == 0) {
        *DAT_30044064 = uVar1 | 4;
        uVar2 = rdtsc();
        param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
        DAT_30049104 = (undefined4)uVar2;
      }
      goto LAB_3000ed3f;
    }
  }
  else {
LAB_3000ed3f:
    if ((uVar1 & 2) != 0) goto LAB_3000ed48;
  }
  param_4 = param_3;
LAB_3000ed48:
  return CONCAT44(param_2,param_4);
}



/* === FUN_3000ed50 @ 0x3000ed50 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ed50 @ 0x3000ED50 */



void FUN_3000ed50(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *DAT_30044064;
  if ((uVar1 & 4) != 0) {
    uVar2 = rdtsc();
    DAT_30049104 = (int)uVar2 - DAT_30049104;
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar1 >> 3 & 0x1f;
      if (uVar1 >> 8 <= DAT_30049104) {
        if (uVar3 == 0x1f) {
          *DAT_30044064 = 1;
          return;
        }
        *DAT_30044064 = uVar3 * 8 + 8 & 0xf8;
        return;
      }
      if (uVar3 == 0) {
        *DAT_30044064 = 3;
        return;
      }
      *DAT_30044064 = uVar3 * 8 - 1 & 0xf8;
      return;
    }
    *DAT_30044064 = DAT_30049104 * 0x100 | uVar1 & 0xfd | 2;
  }
  return;
}



/* === _YUV_blit_32rbpp@48 @ 0x3000ee00 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_32rbpp@48 @ 0x3000EE00 */



void _YUV_blit_32rbpp_48(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6
                        ,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                        uint param_12)

{
                    /* 0xee00  72  _YUV_blit_32rbpp@48 */
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003dc80);
  return;
}



/* === FUN_3000eeb0 @ 0x3000eeb0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000eeb0 @ 0x3000EEB0 */



int __cdecl FUN_3000eeb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    uVar1 = (&DAT_30048d04)[*DAT_30045898] | (uint)*DAT_300458a8 << 0x18;
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = uVar1;
    DAT_30045890[1] = uVar1;
    uVar1 = (&DAT_30048d04)[*DAT_3004589c] | (uint)*DAT_300458ac << 0x18;
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = uVar1;
    DAT_30045894[1] = uVar1;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_2 + param_1;
}



/* === FUN_3000efe0 @ 0x3000efe0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000efe0 @ 0x3000EFE0 */



int __cdecl FUN_3000efe0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    uVar1 = (&DAT_30048d04)[*DAT_30045898] | (uint)*DAT_300458a8 << 0x18;
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = uVar1;
    *(uint *)(DAT_300458d4 + (int)DAT_30045890) = uVar1;
    uVar1 = (&DAT_30048d04)[*DAT_3004589c] | (uint)*DAT_300458ac << 0x18;
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = uVar1;
    *(uint *)((int)DAT_30045894 + DAT_300458d4) = uVar1;
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1 + param_2;
}



/* === FUN_3000f130 @ 0x3000f130 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000f130 @ 0x3000F130 */



int __cdecl FUN_3000f130(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    uVar1 = (&DAT_30048d04)[*DAT_30045898] | (uint)*DAT_300458a8 << 0x18;
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = uVar1;
    DAT_30045890[1] = uVar1;
    *(uint *)(DAT_300458d4 + (int)DAT_30045890) = uVar1;
    *(uint *)(DAT_300458d4 + 4 + (int)DAT_30045890) = uVar1;
    uVar1 = (&DAT_30048d04)[*DAT_3004589c] | (uint)*DAT_300458ac << 0x18;
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = uVar1;
    DAT_30045894[1] = uVar1;
    *(uint *)((int)DAT_30045894 + DAT_300458d4) = uVar1;
    *(uint *)((int)DAT_30045894 + DAT_300458d4 + 4) = uVar1;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_2 + param_1;
}



/* === _YUV_blit_32abpp@52 @ 0x300105b0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_32abpp@52 @ 0x300105B0 */



void _YUV_blit_32abpp_52(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6
                        ,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                        int param_12,uint param_13)

{
                    /* 0x105b0  66  _YUV_blit_32abpp@52 */
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_13,param_12,(int *)&DAT_3003dd68);
  return;
}



/* === _YUV_blit_32rabpp@52 @ 0x30010610 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_32rabpp@52 @ 0x30010610 */



void _YUV_blit_32rabpp_52
               (uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
               uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,int param_12,
               uint param_13)

{
                    /* 0x10610  70  _YUV_blit_32rabpp@52 */
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_13,param_12,(int *)&DAT_3003de50);
  return;
}



/* === FUN_30010810 @ 0x30010810 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30010810 @ 0x30010810 */



int __cdecl FUN_30010810(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar2 = (&DAT_30048d04)[bVar1] | (&DAT_30048d04)[bVar1] << 8;
    *DAT_30045890 = uVar2;
    *(short *)(DAT_30045890 + 1) = (short)uVar2;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar2 = (&DAT_30048d04)[bVar1] | (&DAT_30048d04)[bVar1] << 8;
    *DAT_30045894 = uVar2;
    *(short *)(DAT_30045894 + 1) = (short)uVar2;
    DAT_30045890 = (uint *)((int)DAT_30045890 + 6);
    DAT_30045894 = (uint *)((int)DAT_30045894 + 6);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}



/* === FUN_30011490 @ 0x30011490 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30011490 @ 0x30011490 */



int __cdecl FUN_30011490(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar2 = *(undefined2 *)(&DAT_30048d04 + bVar1);
    *DAT_30045890 = uVar2;
    *(char *)(DAT_30045890 + 1) = (char)uVar2;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar2 = *(undefined2 *)(&DAT_30048d04 + bVar1);
    *DAT_30045894 = uVar2;
    *(char *)(DAT_30045894 + 1) = (char)uVar2;
    DAT_30045890 = (undefined2 *)((int)DAT_30045890 + 3);
    DAT_30045894 = (undefined2 *)((int)DAT_30045894 + 3);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}



/* === _YUV_blit_24bpp@48 @ 0x300123a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_24bpp@48 @ 0x300123A0 */



void _YUV_blit_24bpp_48(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                       uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                       uint param_12)

{
                    /* 0x123a0  62  _YUV_blit_24bpp@48 */
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003df38);
  return;
}



/* === _YUV_blit_24rbpp@48 @ 0x300123f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_24rbpp@48 @ 0x300123F0 */



void _YUV_blit_24rbpp_48(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6
                        ,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                        uint param_12)

{
                    /* 0x123f0  64  _YUV_blit_24rbpp@48 */
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003e020);
  return;
}



/* === FUN_30012590 @ 0x30012590 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30012590 @ 0x30012590 */



int __cdecl FUN_30012590(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar2 = *(undefined2 *)(&DAT_30048904 + bVar1);
    *DAT_30045890 = uVar2;
    DAT_30045890[1] = uVar2;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar2 = *(undefined2 *)(&DAT_30048904 + bVar1);
    *DAT_30045894 = uVar2;
    DAT_30045894[1] = uVar2;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}



/* === FUN_30012ee0 @ 0x30012ee0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30012ee0 @ 0x30012EE0 */



int __cdecl FUN_30012ee0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = *(undefined2 *)(&DAT_30048904 + bVar1);
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = *(undefined2 *)(&DAT_30048904 + bVar1);
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1 + param_2;
}



/* === _YUV_blit_16bpp@48 @ 0x30013180 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_16bpp@48 @ 0x30013180 */



void _YUV_blit_16bpp_48(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                       uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                       uint param_12)

{
                    /* 0x13180  60  _YUV_blit_16bpp@48 */
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003e108);
  return;
}



/* === FUN_30013240 @ 0x30013240 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30013240 @ 0x30013240 */



int __cdecl FUN_30013240(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    uVar1 = *(ushort *)(&DAT_3004d168 + *DAT_300458a8);
    uVar2 = *(ushort *)(&DAT_30048904 + *DAT_30045898);
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = uVar1 | uVar2;
    *(ushort *)(DAT_300458d4 + (int)DAT_30045890) = uVar1 | uVar2;
    uVar1 = *(ushort *)(&DAT_3004d168 + *DAT_300458ac);
    uVar2 = *(ushort *)(&DAT_30048904 + *DAT_3004589c);
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = uVar1 | uVar2;
    *(ushort *)((int)DAT_30045894 + DAT_300458d4) = uVar1 | uVar2;
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}



/* === FUN_30013390 @ 0x30013390 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30013390 @ 0x30013390 */



int __cdecl FUN_30013390(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    uVar1 = *(ushort *)(&DAT_3004d168 + *DAT_300458a8);
    uVar2 = *(ushort *)(&DAT_30048904 + *DAT_30045898);
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = uVar1 | uVar2;
    DAT_30045890[1] = uVar1 | uVar2;
    uVar1 = *(ushort *)(&DAT_3004d168 + *DAT_300458ac);
    uVar2 = *(ushort *)(&DAT_30048904 + *DAT_3004589c);
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = uVar1 | uVar2;
    DAT_30045894[1] = uVar1 | uVar2;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_2 + param_1;
}



/* === FUN_300134f0 @ 0x300134f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300134f0 @ 0x300134F0 */



int __cdecl FUN_300134f0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    uVar1 = *(ushort *)(&DAT_3004d168 + *DAT_300458a8) | *(ushort *)(&DAT_30048904 + *DAT_30045898);
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = uVar1;
    DAT_30045890[1] = uVar1;
    *(ushort *)(DAT_300458d4 + (int)DAT_30045890) = uVar1;
    *(ushort *)(DAT_300458d4 + 2 + (int)DAT_30045890) = uVar1;
    uVar1 = *(ushort *)(&DAT_3004d168 + *DAT_300458ac) | *(ushort *)(&DAT_30048904 + *DAT_3004589c);
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = uVar1;
    DAT_30045894[1] = uVar1;
    *(ushort *)((int)DAT_30045894 + DAT_300458d4) = uVar1;
    *(ushort *)((int)DAT_30045894 + DAT_300458d4 + 2) = uVar1;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_2 + param_1;
}



/* === FUN_30013e60 @ 0x30013e60 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30013e60 @ 0x30013E60 */



int __cdecl FUN_30013e60(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_300458a8;
    bVar2 = *DAT_30045898;
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = *(ushort *)(&DAT_3004d168 + bVar1) | *(ushort *)(&DAT_30048904 + bVar2);
    bVar1 = *DAT_300458ac;
    bVar2 = *DAT_3004589c;
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = *(ushort *)(&DAT_3004d168 + bVar1) | *(ushort *)(&DAT_30048904 + bVar2);
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}



/* === _YUV_blit_16a4bpp@52 @ 0x300141a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_16a4bpp@52 @ 0x300141A0 */



void _YUV_blit_16a4bpp_52
               (uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
               uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,int param_12,
               uint param_13)

{
                    /* 0x141a0  58  _YUV_blit_16a4bpp@52 */
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_13,param_12,(int *)&DAT_3003e1f0);
  return;
}



/* === _YUV_blit_16a1bpp@52 @ 0x30014d40 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_16a1bpp@52 @ 0x30014D40 */



void _YUV_blit_16a1bpp_52
               (uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
               uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,int param_12,
               uint param_13)

{
                    /* 0x14d40  56  _YUV_blit_16a1bpp@52 */
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_13,param_12,(int *)&DAT_3003e2d8);
  return;
}



/* === FUN_30014fc0 @ 0x30014fc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30014fc0 @ 0x30014FC0 */



int __cdecl FUN_30014fc0(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar2 = iVar2 + -2;
    *DAT_30045890 = (uint)*DAT_30045898 << 0x10 | (uint)*DAT_30045898 | 0x80008000;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890[1] = (uint)*pbVar1 << 0x10 | (uint)*pbVar1 | 0x80008000;
    *DAT_30045894 = (uint)*DAT_3004589c << 0x10 | (uint)*DAT_3004589c | 0x80008000;
    pbVar1 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_30045894[1] = (uint)*pbVar1 << 0x10 | (uint)*pbVar1 | 0x80008000;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
  } while (0 < iVar2);
  return param_1 + param_2;
}



/* === FUN_30015270 @ 0x30015270 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015270 @ 0x30015270 */



int __cdecl FUN_30015270(int param_1,int param_2)

{
  byte bVar1;
  uint3 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = param_1;
  do {
    iVar6 = iVar6 + -2;
    uVar2 = CONCAT21(CONCAT11(*DAT_300458a4,*DAT_30045898),*DAT_300458a0);
    uVar4 = CONCAT31(uVar2,*DAT_30045898);
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    uVar5 = (uVar2 & 0xff00ff) << 8;
    uVar3 = (uint)(byte)DAT_30045898[1] << 0x10 | uVar5 | (uint)(byte)DAT_30045898[1];
    *DAT_30045890 = uVar4;
    DAT_30045890[1] = uVar3;
    *(undefined4 *)(DAT_300458d4 + (int)DAT_30045890) = uVar4;
    *(uint *)(DAT_300458d4 + 4 + (int)DAT_30045890) = uVar3;
    uVar3 = (uint)*DAT_3004589c << 0x10 | (uint)*DAT_3004589c | uVar5;
    bVar1 = DAT_3004589c[1];
    *DAT_30045894 = uVar3;
    uVar5 = (uint)bVar1 << 0x10 | uVar5 | (uint)bVar1;
    DAT_30045894[1] = uVar5;
    *(uint *)((int)DAT_30045894 + DAT_300458d4) = uVar3;
    *(uint *)((int)DAT_30045894 + DAT_300458d4 + 4) = uVar5;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
  } while (0 < iVar6);
  return param_1 + param_2;
}



/* === FUN_30015450 @ 0x30015450 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015450 @ 0x30015450 */



int __cdecl FUN_30015450(int param_1,int param_2)

{
  byte *pbVar1;
  uint3 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1;
  do {
    iVar4 = iVar4 + -2;
    uVar2 = CONCAT21(CONCAT11(*DAT_300458a4,*DAT_30045898),*DAT_300458a0);
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    *DAT_30045890 = CONCAT31(uVar2,*DAT_30045898);
    pbVar1 = DAT_30045898 + 1;
    uVar3 = (uVar2 & 0xff00ff) << 8;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890[1] = (uint)*pbVar1 << 0x10 | uVar3 | (uint)*pbVar1;
    *DAT_30045894 = (uint)*DAT_3004589c << 0x10 | uVar3 | (uint)*DAT_3004589c;
    pbVar1 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_30045894[1] = (uint)*pbVar1 << 0x10 | uVar3 | (uint)*pbVar1;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
  } while (0 < iVar4);
  return param_1 + param_2;
}



/* === FUN_300155d0 @ 0x300155d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300155d0 @ 0x300155D0 */



int __cdecl FUN_300155d0(int param_1,int param_2)

{
  uint3 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  do {
    iVar4 = iVar4 + -2;
    uVar1 = CONCAT21(CONCAT11(*DAT_300458a4,DAT_30045898[1]),*DAT_300458a0);
    uVar3 = CONCAT31(uVar1,*DAT_30045898);
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 = uVar3;
    *(undefined4 *)(DAT_300458d4 + (int)DAT_30045890) = uVar3;
    uVar2 = (uint)DAT_3004589c[1] << 0x10 | (uVar1 & 0xff00ff) << 8 | (uint)*DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 = uVar2;
    *(uint *)((int)DAT_30045894 + DAT_300458d4) = uVar2;
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
  } while (0 < iVar4);
  return param_2 + param_1;
}



/* === FUN_30015810 @ 0x30015810 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015810 @ 0x30015810 */



int __cdecl FUN_30015810(int param_1,int param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  uint3 uVar4;
  int iVar5;
  
  iVar5 = param_1;
  do {
    iVar5 = iVar5 + -2;
    uVar4 = CONCAT21(CONCAT11(*DAT_300458a4,DAT_30045898[1]),*DAT_300458a0);
    uVar2 = *DAT_30045898;
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 = CONCAT31(uVar4,uVar2);
    pbVar1 = DAT_3004589c + 1;
    bVar3 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 = (uint)*pbVar1 << 0x10 | (uVar4 & 0xff00ff) << 8 | (uint)bVar3;
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
  } while (0 < iVar5);
  return param_2 + param_1;
}



/* === _YUV_blit_YUY2@48 @ 0x300158d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_YUY2@48 @ 0x300158D0 */



void _YUV_blit_YUY2_48(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                      uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                      uint param_12)

{
                    /* 0x158d0  76  _YUV_blit_YUY2@48 */
  if (((byte)param_1 & 3) == 2) {
    param_2 = param_2 + 1;
    param_1 = param_1 & 0xfffffffc;
  }
  if ((param_2 & 1) == 0) {
    if ((param_6 & 1) != 0) {
      param_6 = param_6 + 1;
      param_8 = param_8 - 1;
    }
  }
  else {
    if ((param_6 & 1) != 0) {
      param_6 = param_6 + 1;
    }
    param_2 = param_2 + 1;
    param_8 = param_8 - 1;
  }
  if ((param_8 & 1) != 0) {
    param_8 = param_8 - 1;
  }
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003e3c0);
  return;
}



/* === FUN_30015ba0 @ 0x30015ba0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015ba0 @ 0x30015BA0 */



int __cdecl FUN_30015ba0(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar2 = iVar2 + -2;
    *DAT_30045890 = ((uint)*DAT_30045898 << 0x10 | (uint)*DAT_30045898) << 8 | 0x800080;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890[1] = ((uint)*pbVar1 << 0x10 | (uint)*pbVar1) << 8 | 0x800080;
    *DAT_30045894 = ((uint)*DAT_3004589c << 0x10 | (uint)*DAT_3004589c) << 8 | 0x800080;
    pbVar1 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_30045894[1] = ((uint)*pbVar1 << 0x10 | (uint)*pbVar1) << 8 | 0x800080;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
  } while (0 < iVar2);
  return param_1 + param_2;
}



/* === FUN_30015e80 @ 0x30015e80 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015e80 @ 0x30015E80 */



int __cdecl FUN_30015e80(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1;
  do {
    iVar5 = iVar5 + -2;
    uVar2 = CONCAT31(CONCAT21(CONCAT11(*DAT_30045898,*DAT_300458a4),*DAT_30045898),*DAT_300458a0);
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar1 = DAT_30045898[1];
    uVar4 = uVar2 & 0xff00ff;
    *DAT_30045890 = uVar2;
    uVar3 = ((uint)bVar1 << 0x10 | (uint)bVar1) << 8 | uVar4;
    DAT_30045890[1] = uVar3;
    *(uint *)(DAT_300458d4 + (int)DAT_30045890) = uVar2;
    *(uint *)(DAT_300458d4 + 4 + (int)DAT_30045890) = uVar3;
    uVar2 = ((uint)*DAT_3004589c << 0x10 | (uint)*DAT_3004589c) << 8 | uVar4;
    uVar4 = ((uint)DAT_3004589c[1] << 0x10 | (uint)DAT_3004589c[1]) << 8 | uVar4;
    *DAT_30045894 = uVar2;
    DAT_30045894[1] = uVar4;
    *(uint *)((int)DAT_30045894 + DAT_300458d4) = uVar2;
    *(uint *)((int)DAT_30045894 + DAT_300458d4 + 4) = uVar4;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
  } while (0 < iVar5);
  return param_1 + param_2;
}



/* === _YUV_blit_UYVY@48 @ 0x30016510 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_UYVY@48 @ 0x30016510 */



void _YUV_blit_UYVY_48(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                      uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                      uint param_12)

{
                    /* 0x16510  74  _YUV_blit_UYVY@48 */
  if (((byte)param_1 & 3) == 2) {
    param_2 = param_2 + 1;
    param_1 = param_1 & 0xfffffffc;
  }
  if ((param_2 & 1) == 0) {
    if ((param_6 & 1) != 0) {
      param_6 = param_6 + 1;
      param_8 = param_8 - 1;
    }
  }
  else {
    if ((param_6 & 1) != 0) {
      param_6 = param_6 + 1;
    }
    param_2 = param_2 + 1;
    param_8 = param_8 - 1;
  }
  if ((param_8 & 1) != 0) {
    param_8 = param_8 - 1;
  }
  FUN_3000dbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003e4a8);
  return;
}



/* === _YUV_blit_YV12@52 @ 0x300165a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_YV12@52 @ 0x300165A0 */



void _YUV_blit_YV12_52(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                      uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                      int param_12,uint param_13)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
                    /* 0x165a0  78  _YUV_blit_YV12@52 */
  uVar6 = param_4;
  if ((param_2 & 1) == 0) {
    if ((param_7 & 1) != 0) {
      param_7 = param_7 + 1;
      goto LAB_300165c5;
    }
  }
  else {
    if ((param_7 & 1) != 0) {
      param_7 = param_7 + 1;
    }
    param_2 = param_2 + 1;
LAB_300165c5:
    param_9 = param_9 - 1;
  }
  if ((param_9 & 1) != 0) {
    param_9 = param_9 - 1;
  }
  if ((param_3 & 1) == 0) {
    if ((param_8 & 1) == 0) goto LAB_30016600;
    param_8 = param_8 + 1;
  }
  else {
    if ((param_8 & 1) != 0) {
      param_8 = param_8 + 1;
    }
    param_3 = param_3 + 1;
  }
  param_10 = param_10 - 1;
LAB_30016600:
  if ((param_10 & 1) != 0) {
    param_10 = param_10 - 1;
  }
  puVar1 = (undefined4 *)(param_8 * param_11 + param_6 + param_7);
  puVar7 = (undefined4 *)(param_3 * param_4 + param_1 + param_2);
  if (param_10 != 0) {
    param_4 = param_10;
    do {
      puVar11 = puVar1;
      puVar12 = puVar7;
      for (uVar3 = param_9 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar3 = param_9 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + param_11);
      puVar7 = (undefined4 *)((int)puVar7 + uVar6);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if ((param_13 & 0x10000) == 0) {
    iVar2 = param_11 * param_12;
  }
  else {
    iVar2 = (param_11 * param_12 >> 2) + param_11 * param_12;
  }
  uVar3 = param_10 >> 1;
  uVar10 = param_9 >> 1;
  uVar8 = param_11 >> 1;
  iVar4 = (param_8 >> 1) * uVar8;
  puVar1 = (undefined4 *)(iVar2 + param_6 + iVar4 + (param_7 >> 1));
  uVar9 = uVar6 >> 1;
  puVar7 = (undefined4 *)(uVar6 * param_5 + param_1 + (param_3 >> 1) * uVar9 + (param_2 >> 1));
  uVar6 = uVar3;
  if ((param_13 & 0x20000) == 0) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar11 = puVar1;
      puVar12 = puVar7;
      for (uVar5 = param_9 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar5 = uVar10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + uVar8);
      puVar7 = (undefined4 *)((int)puVar7 + uVar9);
    }
  }
  else {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar1 = puVar7;
      for (uVar5 = param_9 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = 0x80808080;
        puVar1 = puVar1 + 1;
      }
      for (uVar5 = uVar10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar1 = 0x80;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      puVar7 = (undefined4 *)((int)puVar7 + uVar9);
    }
  }
  if ((param_13 & 0x10000) == 0) {
    iVar2 = param_6 + (uVar8 * param_12 >> 1) + uVar8 * param_12 * 2;
  }
  else {
    iVar2 = param_6 + uVar8 * param_12 * 2;
  }
  puVar1 = (undefined4 *)(iVar2 + iVar4 + (param_7 >> 1));
  puVar7 = (undefined4 *)
           ((uVar9 * param_5 >> 1) + param_1 + ((param_3 >> 1) + param_5 * 2) * uVar9 +
           (param_2 >> 1));
  if ((param_13 & 0x20000) == 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar11 = puVar1;
      puVar12 = puVar7;
      for (uVar6 = param_9 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = uVar10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + uVar8);
      puVar7 = (undefined4 *)((int)puVar7 + uVar9);
    }
  }
  else if (uVar3 != 0) {
    do {
      puVar1 = puVar7;
      for (uVar6 = param_9 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar1 = 0x80808080;
        puVar1 = puVar1 + 1;
      }
      puVar7 = (undefined4 *)((int)puVar7 + uVar9);
      uVar3 = uVar3 - 1;
      for (uVar6 = uVar10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar1 = 0x80;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    } while (uVar3 != 0);
    return;
  }
  return;
}



/* === _YUV_blit_32bpp_mask@48 @ 0x30016850 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_32bpp_mask@48 @ 0x30016850 */



void _YUV_blit_32bpp_mask_48
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,uint param_12)

{
                    /* 0x16850  69  _YUV_blit_32bpp_mask@48 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003db98);
  return;
}



/* === FUN_300168a0 @ 0x300168a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300168a0 @ 0x300168A0 */



void __cdecl
FUN_300168a0(uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
            int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,uint param_12,
            int param_13,int *param_14)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_9c [18];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  byte *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = param_4;
  uVar8 = param_12 & 0x70000000;
  local_1c = param_9;
  local_38 = param_11;
  local_24 = param_10;
  local_2c = param_4;
  if (uVar8 == 0x60000000) {
    param_9 = param_9 >> 1;
    local_c = param_6;
    param_4 = param_4 * 2;
    param_6 = param_6 * 2;
    pbVar4 = (byte *)((int)param_10 * 2);
    uVar6 = param_11 >> 1;
  }
  else {
    local_c = 0;
    pbVar4 = param_10;
    uVar6 = param_11;
  }
  DAT_30045890 = uVar2 * param_3 + param_1 + *param_14 * param_2;
  if ((uVar8 == 0x20000000) || (uVar8 == 0x50000000)) {
    param_4 = param_4 * 2;
  }
  local_48 = param_6 - (param_8 >> 4);
  param_11 = param_4;
  FUN_3000e000(param_12,(int *)&param_11,0x10,param_9,param_14,&param_6);
  FUN_3000e000(param_12,(int *)&param_4,0x20,param_9,param_14,&local_8);
  if (((uVar8 == 0x30000000) || (uVar8 == 0x50000000)) || (local_18 = 1, uVar8 == 0x40000000)) {
    local_18 = 2;
  }
  local_10 = *param_14 * local_18 * 0x10;
  DAT_30045894 = DAT_30045890 + param_4;
  DAT_30045898 = (byte *)param_7;
  DAT_3004589c = pbVar4 + param_7;
  DAT_300458ac = pbVar4 + param_13;
  DAT_300458a8 = (byte *)param_13;
  param_11 = (int)pbVar4 - param_8;
  local_20 = param_8 & 0xf;
  uVar2 = (uint)pbVar4 >> 1;
  local_14 = uVar2 - 8;
  local_44 = uVar2 - 0x10;
  local_3c = ((int)pbVar4 * 0xf - param_8) + local_20;
  local_4c = ((param_8 >> 1 & 7) + uVar2 * 8) - (param_8 >> 1);
  local_40 = (local_20 - param_8) * (*param_14 * local_18 & 0xfffffffU) + param_4 * 0xf;
  if ((param_12 & 0x10000) == 0) {
    DAT_300458a4 = (int)pbVar4 * uVar6 + param_7;
    DAT_300458a0 = (uVar6 >> 1) * uVar2 + DAT_300458a4;
  }
  else {
    DAT_300458a0 = (int)pbVar4 * uVar6 + param_7;
    DAT_300458a4 = (uVar6 >> 1) * uVar2 + DAT_300458a0;
  }
  local_50 = param_9 - 1;
  param_10 = param_5;
  if (0xe < local_50) {
    local_34 = 0xf;
    uVar2 = param_4;
    do {
      iVar3 = param_8 - 1;
      local_28 = 0;
      if (0x1e < iVar3) {
        param_5 = param_10 + local_c;
        local_54 = 1 - local_c;
        local_30 = 0x1f;
        do {
          bVar5 = (*param_10 != 0) + (param_5[local_54] != 0) * '\x02';
          if (local_c != 0) {
            bVar5 = bVar5 | (*param_5 != 0) + (param_10[local_c + 1] != 0) * '\x02';
          }
          if (bVar5 == 1) {
            puVar7 = &DAT_30045890;
            puVar9 = local_9c;
            for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            iVar3 = 8;
            do {
              (*DAT_300488f8)(4);
              DAT_30045898 = DAT_3004589c + -0x10 + (int)pbVar4;
              DAT_3004589c = DAT_30045898 + (int)pbVar4;
              DAT_300458a8 = DAT_300458ac + -0x10 + (int)pbVar4;
              DAT_300458ac = DAT_300458a8 + (int)pbVar4;
              DAT_300458a4 = DAT_300458a4 + local_14;
              DAT_300458a0 = DAT_300458a0 + local_14;
              DAT_30045890 = param_6 + DAT_30045894;
              DAT_30045894 = DAT_30045890 + param_4;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
LAB_30016d39:
            puVar7 = local_9c;
            puVar9 = &DAT_30045890;
            for (iVar3 = 0x12; uVar2 = param_4, iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          else {
            if (bVar5 == 2) {
              puVar7 = &DAT_30045890;
              puVar9 = local_9c;
              for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              DAT_3004589c = DAT_3004589c + 0x10;
              DAT_30045898 = DAT_30045898 + 0x10;
              DAT_300458a8 = DAT_300458a8 + 0x10;
              DAT_300458ac = DAT_300458ac + 0x10;
              iVar3 = 8;
              DAT_300458a0 = DAT_300458a0 + 8;
              DAT_300458a4 = DAT_300458a4 + 8;
              DAT_30045890 = DAT_30045890 + local_10;
              DAT_30045894 = DAT_30045894 + local_10;
              do {
                (*DAT_300488f8)(4);
                DAT_30045898 = DAT_3004589c + -0x10 + (int)pbVar4;
                DAT_3004589c = DAT_30045898 + (int)pbVar4;
                DAT_300458a8 = DAT_300458ac + -0x10 + (int)pbVar4;
                DAT_300458ac = DAT_300458a8 + (int)pbVar4;
                DAT_300458a0 = DAT_300458a0 + local_14;
                DAT_300458a4 = DAT_300458a4 + local_14;
                DAT_30045890 = DAT_30045894 + param_6;
                DAT_30045894 = DAT_30045890 + param_4;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              goto LAB_30016d39;
            }
            if (bVar5 == 3) {
              puVar7 = &DAT_30045890;
              puVar9 = local_9c;
              for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              iVar3 = 8;
              do {
                (*DAT_300488f8)(8);
                DAT_30045898 = DAT_3004589c + -0x20 + (int)pbVar4;
                DAT_3004589c = DAT_30045898 + (int)pbVar4;
                DAT_300458a8 = DAT_300458ac + -0x20 + (int)pbVar4;
                DAT_300458ac = DAT_300458a8 + (int)pbVar4;
                DAT_300458a4 = DAT_300458a4 + local_44;
                DAT_300458a0 = DAT_300458a0 + local_44;
                DAT_30045890 = DAT_30045894 + local_8;
                DAT_30045894 = DAT_30045890 + param_4;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              goto LAB_30016d39;
            }
          }
          DAT_30045898 = DAT_30045898 + 0x20;
          DAT_3004589c = DAT_3004589c + 0x20;
          DAT_300458a8 = DAT_300458a8 + 0x20;
          DAT_300458ac = DAT_300458ac + 0x20;
          DAT_300458a4 = DAT_300458a4 + 0x10;
          DAT_30045890 = DAT_30045890 + local_10 * 2;
          DAT_30045894 = DAT_30045894 + local_10 * 2;
          local_28 = local_28 + 0x20;
          param_5 = param_5 + 2;
          DAT_300458a0 = DAT_300458a0 + 0x10;
          param_10 = param_10 + 2;
          local_30 = local_30 + 0x20;
          iVar3 = param_8 - 1;
        } while (local_30 <= iVar3);
      }
      if (local_28 + 0xf <= iVar3) {
        bVar5 = *param_10;
        if (local_c != 0) {
          bVar5 = bVar5 | param_10[local_c];
        }
        param_10 = param_10 + 1;
        if (bVar5 != 0) {
          puVar7 = &DAT_30045890;
          puVar9 = local_9c;
          for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          iVar3 = 8;
          do {
            (*DAT_300488f8)(4);
            DAT_30045898 = DAT_3004589c + -0x10 + (int)pbVar4;
            DAT_3004589c = DAT_30045898 + (int)pbVar4;
            DAT_300458a8 = DAT_300458ac + -0x10 + (int)pbVar4;
            DAT_300458ac = DAT_300458a8 + (int)pbVar4;
            DAT_300458a4 = DAT_300458a4 + local_14;
            DAT_300458a0 = DAT_300458a0 + local_14;
            DAT_30045890 = DAT_30045894 + param_6;
            DAT_30045894 = DAT_30045890 + param_4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          puVar7 = local_9c;
          puVar9 = &DAT_30045890;
          for (iVar3 = 0x12; uVar2 = param_4, iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        DAT_300458ac = DAT_300458ac + 0x10;
        DAT_3004589c = DAT_3004589c + 0x10;
        DAT_300458a4 = DAT_300458a4 + 8;
        DAT_300458a0 = DAT_300458a0 + 8;
        DAT_30045894 = DAT_30045894 + local_10;
      }
      DAT_30045898 = DAT_3004589c + local_3c;
      DAT_3004589c = DAT_30045898 + (int)pbVar4;
      DAT_300458a8 = DAT_300458ac + local_3c;
      DAT_300458ac = DAT_300458a8 + (int)pbVar4;
      DAT_300458a4 = DAT_300458a4 + local_4c;
      DAT_300458a0 = DAT_300458a0 + local_4c;
      DAT_30045890 = local_40 + DAT_30045894;
      DAT_30045894 = DAT_30045890 + uVar2;
      param_10 = param_10 + local_48;
      local_34 = local_34 + 0x10;
    } while (local_34 <= local_50);
  }
  uVar2 = local_1c;
  if (local_20 != 0) {
    uVar8 = param_8 & 0xfffffff0;
    FUN_3000dbc0(param_1,uVar8 * local_18 + param_2,param_3,local_2c,param_7,uVar8,0,param_8 - uVar8
                 ,local_1c,(uint)local_24,local_38,param_12,param_13,param_14);
  }
  if ((param_9 & 0xf) != 0) {
    uVar1 = ((ulonglong)(param_9 & 0xfffffff0) * (ulonglong)local_1c) / (ulonglong)param_9;
    param_5 = (byte *)uVar1;
    param_9 = local_2c * (int)pbVar4;
    param_10 = (byte *)((int)local_24 * param_4);
    FUN_3000dbc0(param_1,param_2,
                 (int)(((uVar1 & 0xffffffff) * ZEXT48(param_10)) / (ulonglong)param_9) + param_3,
                 local_2c,param_7,0,(uint)param_5,param_8,uVar2 - (int)param_5,(uint)local_24,
                 local_38,param_12,param_13,param_14);
  }
  if ((DAT_30041c30 != 0) && ((param_12 & 0x40000) == 0)) {
    FUN_3000dff0();
  }
  return;
}



/* === _YUV_blit_32rbpp_mask@48 @ 0x30017080 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_32rbpp_mask@48 @ 0x30017080 */



void _YUV_blit_32rbpp_mask_48
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,uint param_12)

{
                    /* 0x17080  73  _YUV_blit_32rbpp_mask@48 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003dc80);
  return;
}



/* === _YUV_blit_32abpp_mask@52 @ 0x300170d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_32abpp_mask@52 @ 0x300170D0 */



void _YUV_blit_32abpp_mask_52
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,int param_12,
               uint param_13)

{
                    /* 0x170d0  67  _YUV_blit_32abpp_mask@52 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_13,param_12,(int *)&DAT_3003dd68);
  return;
}



/* === _YUV_blit_32rabpp_mask@52 @ 0x30017130 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_32rabpp_mask@52 @ 0x30017130 */



void _YUV_blit_32rabpp_mask_52
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,int param_12,
               uint param_13)

{
                    /* 0x17130  71  _YUV_blit_32rabpp_mask@52 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_13,param_12,(int *)&DAT_3003de50);
  return;
}



/* === _YUV_blit_24bpp_mask@48 @ 0x30017190 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_24bpp_mask@48 @ 0x30017190 */



void _YUV_blit_24bpp_mask_48
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,uint param_12)

{
                    /* 0x17190  63  _YUV_blit_24bpp_mask@48 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003df38);
  return;
}



/* === _YUV_blit_24rbpp_mask@48 @ 0x300171e0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_24rbpp_mask@48 @ 0x300171E0 */



void _YUV_blit_24rbpp_mask_48
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,uint param_12)

{
                    /* 0x171e0  65  _YUV_blit_24rbpp_mask@48 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003e020);
  return;
}



/* === _YUV_blit_16bpp_mask@48 @ 0x30017230 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_16bpp_mask@48 @ 0x30017230 */



void _YUV_blit_16bpp_mask_48
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,uint param_12)

{
                    /* 0x17230  61  _YUV_blit_16bpp_mask@48 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003e108);
  return;
}



/* === _YUV_blit_16a1bpp_mask@52 @ 0x30017280 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_16a1bpp_mask@52 @ 0x30017280 */



void _YUV_blit_16a1bpp_mask_52
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,int param_12,
               uint param_13)

{
                    /* 0x17280  57  _YUV_blit_16a1bpp_mask@52 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_13,param_12,(int *)&DAT_3003e2d8);
  return;
}



/* === _YUV_blit_16a4bpp_mask@52 @ 0x300172e0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_16a4bpp_mask@52 @ 0x300172E0 */



void _YUV_blit_16a4bpp_mask_52
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,int param_12,
               uint param_13)

{
                    /* 0x172e0  59  _YUV_blit_16a4bpp_mask@52 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_13,param_12,(int *)&DAT_3003e1f0);
  return;
}



/* === _YUV_blit_YUY2_mask@48 @ 0x30017340 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_YUY2_mask@48 @ 0x30017340 */



void _YUV_blit_YUY2_mask_48
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,uint param_12)

{
                    /* 0x17340  77  _YUV_blit_YUY2_mask@48 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003e3c0);
  return;
}



/* === _YUV_blit_UYVY_mask@48 @ 0x30017390 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_UYVY_mask@48 @ 0x30017390 */



void _YUV_blit_UYVY_mask_48
               (uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
               int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,uint param_12)

{
                    /* 0x17390  75  _YUV_blit_UYVY_mask@48 */
  FUN_300168a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,0,(int *)&DAT_3003e4a8);
  return;
}



/* === FUN_300173e0 @ 0x300173e0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300173e0 @ 0x300173E0 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_300173e0(int param_1,int param_2,float *param_3,int *param_4,undefined4 *param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 >> 2;
  iVar4 = *param_4;
  if (*param_4 * 4 < param_1) {
    FUN_30017520(iVar3,param_4,param_5);
    iVar4 = iVar3;
  }
  iVar2 = param_4[1];
  if (param_4[1] * 4 < param_1) {
    FUN_30017680(iVar3,(int)param_4,(float *)(param_5 + iVar4));
    iVar2 = iVar3;
  }
  if (-1 < param_2) {
    if (4 < param_1) {
      FUN_30017710(param_1,param_3,param_4 + 2,iVar4,(int)param_5);
      FUN_3001b890(param_1,param_3,iVar2,(int)(param_5 + iVar4));
      fVar1 = *param_3;
      *param_3 = *param_3 + param_3[1];
      param_3[1] = fVar1 - param_3[1];
      return;
    }
    if (param_1 == 4) {
      FUN_30017710(4,param_3,param_4 + 2,iVar4,(int)param_5);
    }
    fVar1 = *param_3;
    *param_3 = *param_3 + param_3[1];
    param_3[1] = fVar1 - param_3[1];
    return;
  }
  fVar1 = (*param_3 - param_3[1]) * _DAT_30033fc0;
  param_3[1] = fVar1;
  *param_3 = *param_3 - fVar1;
  if (4 < param_1) {
    FUN_3001b950(param_1,param_3,iVar2,(int)(param_5 + iVar4));
    FUN_30017840(param_1,param_3,param_4 + 2,iVar4,(int)param_5);
    return;
  }
  if (param_1 == 4) {
    FUN_30017840(4,param_3,param_4 + 2,iVar4,(int)param_5);
  }
  return;
}



/* === FUN_30017520 @ 0x30017520 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017520 @ 0x30017520 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_30017520(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  *param_2 = param_1;
  param_2[1] = 1;
  if (2 < param_1) {
    iVar10 = param_1 >> 1;
    fVar15 = (float10)fpatan((float10)_DAT_30033fb0,(float10)1);
    *param_3 = 0x3f800000;
    fVar2 = (float)(fVar15 / (float10)iVar10);
    fVar15 = (float10)fcos((float10)iVar10 * (float10)fVar2);
    param_3[1] = (float)fVar15;
    if (3 < iVar10) {
      fVar12 = (float10)fcos((float10)fVar2 + (float10)fVar2);
      param_3[2] = (float)((float10)_DAT_30033fd0 / fVar12);
      fVar12 = (float10)fcos((float10)fVar2 * (float10)_DAT_30033fe4);
      param_3[3] = (float)((float10)_DAT_30033fd0 / fVar12);
    }
    param_2 = (int *)0x4;
    if (4 < iVar10) {
      pfVar7 = (float *)(param_3 + 6);
      do {
        fVar13 = (float10)(int)param_2;
        param_2 = param_2 + 1;
        fVar13 = fVar13 * (float10)fVar2;
        fVar12 = (float10)fcos(fVar13);
        pfVar7[-2] = (float)fVar12;
        fVar12 = (float10)fsin(fVar13);
        pfVar7[-1] = (float)fVar12;
        fVar12 = (float10)_DAT_30033fe0;
        fVar14 = (float10)fcos(fVar13 * fVar12);
        *pfVar7 = (float)fVar14;
        fVar12 = (float10)fsin(fVar13 * fVar12);
        pfVar7[1] = (float)fVar12;
        pfVar7 = pfVar7 + 4;
      } while ((int)param_2 < iVar10);
    }
    iVar1 = 0;
    while (iVar6 = iVar1, 2 < iVar10) {
      iVar1 = iVar6 + iVar10;
      iVar10 = iVar10 >> 1;
      param_3[iVar1] = 0x3f800000;
      param_3[iVar1 + 1] = (float)fVar15;
      if (3 < iVar10) {
        fVar2 = (float)param_3[iVar6 + 6];
        param_3[iVar1 + 2] = _DAT_30033fc0 / (float)param_3[iVar6 + 4];
        param_3[iVar1 + 3] = _DAT_30033fc0 / fVar2;
        if (4 < iVar10) {
          puVar8 = param_3 + iVar1 + 5;
          puVar9 = param_3 + iVar6 + 10;
          uVar11 = iVar10 - 1U >> 2;
          do {
            uVar4 = *puVar9;
            uVar3 = puVar9[-1];
            uVar5 = puVar9[1];
            puVar8[-1] = puVar9[-2];
            *puVar8 = uVar3;
            puVar8[1] = uVar4;
            puVar8[2] = uVar5;
            puVar8 = puVar8 + 4;
            puVar9 = puVar9 + 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
    }
  }
  return;
}



/* === FUN_30017680 @ 0x30017680 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017680 @ 0x30017680 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_30017680(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = param_1;
  *(int *)(param_2 + 4) = param_1;
  if (1 < param_1) {
    iVar2 = param_1 >> 1;
    fVar6 = (float10)fpatan((float10)_DAT_30033fb0,(float10)1);
    param_1 = 1;
    fVar4 = (float10)fcos((float10)iVar2 * (float10)(float)(fVar6 / (float10)iVar2));
    *param_3 = (float)fVar4;
    param_3[iVar2] = (float)(fVar4 * (float10)_DAT_30033fc0);
    if (1 < iVar2) {
      pfVar3 = param_3 + iVar1 + -1;
      do {
        param_3 = param_3 + 1;
        fVar4 = (float10)param_1;
        param_1 = param_1 + 1;
        fVar4 = fVar4 * (float10)(float)(fVar6 / (float10)iVar2);
        fVar5 = (float10)fcos(fVar4);
        *param_3 = (float)(fVar5 * (float10)_DAT_30033fd0);
        fVar4 = (float10)fsin(fVar4);
        *pfVar3 = (float)(fVar4 * (float10)_DAT_30033fd0);
        pfVar3 = pfVar3 + -1;
      } while (param_1 < iVar2);
    }
  }
  return;
}



/* === FUN_30017710 @ 0x30017710 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017710 @ 0x30017710 */



void __cdecl FUN_30017710(int param_1,float *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (0x20 < param_1) {
    iVar1 = param_1 >> 2;
    FUN_300181f0(param_1,param_2,(float *)(param_5 + (param_4 - iVar1) * 4));
    if (param_1 < 0x201) {
      if (iVar1 < 0x21) {
        FUN_3001a420(param_1,param_2,param_4,param_5);
      }
      else {
        FUN_30019540(param_1,(int)param_2,param_4,param_5);
      }
    }
    else {
      FUN_30019400(iVar1,param_2,param_4,param_5);
      FUN_300194a0(iVar1,param_2 + iVar1,param_4,param_5);
      FUN_30019400(iVar1,param_2 + iVar1 * 2,param_4,param_5);
      FUN_30019400(iVar1,param_2 + iVar1 * 3,param_4,param_5);
    }
    FUN_30017970(param_1,param_3,(int)param_2);
    return;
  }
  if (param_1 < 9) {
    if (param_1 != 8) {
      if (param_1 == 4) {
        FUN_3001b860(param_2);
      }
      return;
    }
    FUN_3001b700(param_2);
    return;
  }
  if (param_1 != 0x20) {
    FUN_3001b260(param_2,param_5);
    FUN_30018100((int)param_2);
    return;
  }
  FUN_3001a560(param_2,param_5 + -0x20 + param_4 * 4);
  FUN_30017ed0((int)param_2);
  return;
}



/* === FUN_30017840 @ 0x30017840 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017840 @ 0x30017840 */



void __cdecl FUN_30017840(int param_1,float *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (0x20 < param_1) {
    iVar1 = param_1 >> 2;
    FUN_30018af0(param_1,param_2,(float *)(param_5 + (param_4 - iVar1) * 4));
    if (param_1 < 0x201) {
      if (iVar1 < 0x21) {
        FUN_3001a420(param_1,param_2,param_4,param_5);
      }
      else {
        FUN_30019540(param_1,(int)param_2,param_4,param_5);
      }
    }
    else {
      FUN_30019400(iVar1,param_2,param_4,param_5);
      FUN_300194a0(iVar1,param_2 + iVar1,param_4,param_5);
      FUN_30019400(iVar1,param_2 + iVar1 * 2,param_4,param_5);
      FUN_30019400(iVar1,param_2 + iVar1 * 3,param_4,param_5);
    }
    FUN_30017bf0(param_1,param_3,(int)param_2);
    return;
  }
  if (param_1 < 9) {
    if (param_1 != 8) {
      if (param_1 == 4) {
        FUN_3001b860(param_2);
      }
      return;
    }
    FUN_3001b7b0(param_2);
    return;
  }
  if (param_1 != 0x20) {
    FUN_3001b260(param_2,param_5);
    FUN_30018160((int)param_2);
    return;
  }
  FUN_3001a560(param_2,param_5 + -0x20 + param_4 * 4);
  FUN_30017fc0((int)param_2);
  return;
}



/* === FUN_30017970 @ 0x30017970 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017970 @ 0x30017970 */



void __cdecl FUN_30017970(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *local_c;
  int *local_8;
  int local_4;
  
  *param_2 = 0;
  local_4 = 1;
  iVar9 = 1;
  if (8 < param_1) {
    do {
      param_1 = param_1 >> 1;
      if (0 < iVar9) {
        piVar5 = param_2 + iVar9;
        piVar4 = param_2;
        iVar10 = iVar9;
        do {
          iVar8 = *piVar4;
          piVar4 = piVar4 + 1;
          *piVar5 = param_1 + iVar8;
          piVar5 = piVar5 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_4 = iVar9 * 2;
      iVar10 = iVar9 * 0x10;
      iVar9 = local_4;
    } while (iVar10 < param_1);
  }
  iVar9 = local_4 * 2;
  if (local_4 * 8 - param_1 == 0) {
    local_8 = (int *)0x0;
    if (0 < local_4) {
      param_1 = 0;
      local_c = param_2;
      do {
        iVar10 = 0;
        if (0 < param_1) {
          piVar5 = param_2;
          do {
            iVar8 = *local_c + iVar10 * 2;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            iVar6 = param_1 + *piVar5;
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
            piVar5 = piVar5 + 1;
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar2;
            iVar6 = iVar6 + local_4 * 4;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar2;
            iVar6 = iVar6 + local_4 * -2;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar2;
            iVar6 = iVar6 + local_4 * 4;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            iVar10 = iVar10 + 1;
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar2;
          } while (iVar10 < (int)local_8);
        }
        iVar8 = *local_c + param_1 + iVar9;
        uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
        iVar10 = iVar8 + iVar9;
        uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
        local_c = local_c + 1;
        param_1 = param_1 + 2;
        uVar3 = *(undefined4 *)(param_3 + 4 + iVar10 * 4);
        *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar10 * 4);
        *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
        local_8 = (int *)((int)local_8 + 1);
        *(undefined4 *)(param_3 + iVar10 * 4) = uVar1;
        *(undefined4 *)(param_3 + 4 + iVar10 * 4) = uVar2;
      } while ((int)local_8 < local_4);
      return;
    }
  }
  else {
    iVar10 = 1;
    if (1 < local_4) {
      param_1 = 2;
      local_8 = param_2;
      do {
        local_8 = local_8 + 1;
        iVar8 = 0;
        piVar5 = param_2;
        if (0 < param_1) {
          do {
            iVar7 = param_1 + *piVar5;
            iVar6 = *local_8 + iVar8 * 2;
            uVar1 = *(undefined4 *)(param_3 + iVar6 * 4);
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar7 * 4);
            *(undefined4 *)(param_3 + iVar6 * 4) = *(undefined4 *)(param_3 + iVar7 * 4);
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar3;
            iVar6 = iVar6 + iVar9;
            *(undefined4 *)(param_3 + iVar7 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar7 * 4) = uVar2;
            iVar7 = iVar7 + iVar9;
            uVar1 = *(undefined4 *)(param_3 + iVar6 * 4);
            iVar8 = iVar8 + 1;
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar7 * 4);
            *(undefined4 *)(param_3 + iVar6 * 4) = *(undefined4 *)(param_3 + iVar7 * 4);
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar3;
            *(undefined4 *)(param_3 + iVar7 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar7 * 4) = uVar2;
            piVar5 = piVar5 + 1;
          } while (iVar8 < iVar10);
        }
        iVar10 = iVar10 + 1;
        param_1 = param_1 + 2;
      } while (iVar10 < local_4);
    }
  }
  return;
}



/* === FUN_30017bf0 @ 0x30017bf0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017bf0 @ 0x30017BF0 */



void __cdecl FUN_30017bf0(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int *local_8;
  int local_4;
  
  *param_2 = 0;
  local_4 = 1;
  iVar9 = 1;
  if (8 < param_1) {
    do {
      param_1 = param_1 >> 1;
      if (0 < iVar9) {
        piVar7 = param_2 + iVar9;
        piVar4 = param_2;
        iVar10 = iVar9;
        do {
          *piVar7 = *piVar4 + param_1;
          piVar4 = piVar4 + 1;
          piVar7 = piVar7 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_4 = iVar9 * 2;
      iVar10 = iVar9 * 0x10;
      iVar9 = local_4;
    } while (iVar10 < param_1);
  }
  iVar9 = local_4 * 2;
  if (local_4 * 8 - param_1 == 0) {
    param_1 = 0;
    if (0 < local_4) {
      local_c = 0;
      local_8 = param_2;
      do {
        iVar10 = 0;
        if (0 < local_c) {
          piVar7 = param_2;
          do {
            iVar5 = local_c + *piVar7;
            iVar8 = *local_8 + iVar10 * 2;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            piVar7 = piVar7 + 1;
            fVar2 = *(float *)(param_3 + 4 + iVar8 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar5 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar5 * 4);
            *(float *)(param_3 + 4 + iVar8 * 4) = -fVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar5 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar2;
            iVar5 = iVar5 + local_4 * 4;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            fVar2 = *(float *)(param_3 + 4 + iVar8 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar5 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar5 * 4);
            *(float *)(param_3 + 4 + iVar8 * 4) = -fVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar5 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar2;
            iVar5 = iVar5 + local_4 * -2;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            fVar2 = *(float *)(param_3 + 4 + iVar8 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar5 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar5 * 4);
            *(float *)(param_3 + 4 + iVar8 * 4) = -fVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar5 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar2;
            iVar5 = iVar5 + local_4 * 4;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            iVar10 = iVar10 + 1;
            fVar2 = *(float *)(param_3 + 4 + iVar8 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar5 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar5 * 4);
            *(float *)(param_3 + 4 + iVar8 * 4) = -fVar3;
            *(undefined4 *)(param_3 + iVar5 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar2;
          } while (iVar10 < param_1);
        }
        iVar8 = *local_8 + local_c;
        iVar10 = iVar8 + iVar9;
        *(float *)(param_3 + 4 + iVar8 * 4) = -*(float *)(param_3 + 4 + iVar8 * 4);
        uVar1 = *(undefined4 *)(param_3 + iVar10 * 4);
        iVar8 = iVar10 + iVar9;
        fVar2 = *(float *)(param_3 + 4 + iVar10 * 4);
        local_8 = local_8 + 1;
        local_c = local_c + 2;
        fVar3 = *(float *)(param_3 + 4 + iVar8 * 4);
        *(undefined4 *)(param_3 + iVar10 * 4) = *(undefined4 *)(param_3 + iVar8 * 4);
        *(float *)(param_3 + 4 + iVar10 * 4) = -fVar3;
        *(undefined4 *)(param_3 + iVar8 * 4) = uVar1;
        *(float *)(param_3 + 4 + iVar8 * 4) = -fVar2;
        *(float *)(param_3 + 4 + (iVar8 + iVar9) * 4) =
             -*(float *)(param_3 + 4 + (iVar8 + iVar9) * 4);
        param_1 = param_1 + 1;
      } while (param_1 < local_4);
      return;
    }
  }
  else {
    *(float *)(param_3 + 4) = -*(float *)(param_3 + 4);
    param_1 = 1;
    *(float *)(param_3 + 4 + local_4 * 8) = -*(float *)(param_3 + 4 + local_4 * 8);
    if (1 < local_4) {
      iVar10 = 2;
      local_8 = param_2;
      do {
        local_8 = local_8 + 1;
        iVar8 = 0;
        piVar7 = param_2;
        if (0 < iVar10) {
          do {
            iVar5 = *local_8 + iVar8 * 2;
            uVar1 = *(undefined4 *)(param_3 + iVar5 * 4);
            iVar6 = iVar10 + *piVar7;
            fVar2 = *(float *)(param_3 + 4 + iVar5 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar5 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar3;
            iVar5 = iVar5 + iVar9;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar6 * 4) = -fVar2;
            iVar6 = iVar6 + iVar9;
            uVar1 = *(undefined4 *)(param_3 + iVar5 * 4);
            iVar8 = iVar8 + 1;
            fVar2 = *(float *)(param_3 + 4 + iVar5 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar5 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar3;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar6 * 4) = -fVar2;
            piVar7 = piVar7 + 1;
          } while (iVar8 < param_1);
        }
        iVar8 = *local_8 + iVar10;
        param_1 = param_1 + 1;
        iVar10 = iVar10 + 2;
        *(float *)(param_3 + 4 + iVar8 * 4) = -*(float *)(param_3 + 4 + iVar8 * 4);
        iVar8 = iVar9 + 1 + iVar8;
        *(float *)(param_3 + iVar8 * 4) = -*(float *)(param_3 + iVar8 * 4);
      } while (param_1 < local_4);
    }
  }
  return;
}



/* === FUN_30017ed0 @ 0x30017ed0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017ed0 @ 0x30017ED0 */



void __cdecl FUN_30017ed0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x44);
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x60);
  uVar10 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 100);
  uVar11 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x68) = uVar11;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar9;
  *(undefined4 *)(param_1 + 0x74) = uVar10;
  return;
}



/* === FUN_30017fc0 @ 0x30017fc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017fc0 @ 0x30017FC0 */



void __cdecl FUN_30017fc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x78);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x7c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x38);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x3c);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x58);
  uVar10 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x5c);
  uVar11 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x68);
  uVar12 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x6c);
  uVar13 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x48);
  uVar14 = *(undefined4 *)(param_1 + 0x50);
  uVar15 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x4c);
  uVar16 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar11;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar14;
  *(undefined4 *)(param_1 + 0x5c) = uVar15;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 100) = uVar5;
  *(undefined4 *)(param_1 + 0x68) = uVar16;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  *(undefined4 *)(param_1 + 0x78) = uVar12;
  *(undefined4 *)(param_1 + 0x7c) = uVar13;
  return;
}



/* === FUN_30018100 @ 0x30018100 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30018100 @ 0x30018100 */



void __cdecl FUN_30018100(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  return;
}



/* === FUN_30018160 @ 0x30018160 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30018160 @ 0x30018160 */



void __cdecl FUN_30018160(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  return;
}



/* === FUN_300181f0 @ 0x300181f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300181f0 @ 0x300181F0 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_300181f0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float *pfVar41;
  float *pfVar42;
  float fVar43;
  float *pfVar44;
  int iVar45;
  float *pfVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  float *pfVar50;
  float *pfVar51;
  float *local_5c;
  float local_4c;
  float local_48;
  float local_44;
  float *local_20;
  float *local_14;
  uint local_8;
  
  iVar45 = param_1 >> 3;
  fVar2 = param_2[iVar45 * 4];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[iVar45 * 4 + 1];
  local_4c = 0.0;
  local_48 = 1.0;
  local_44 = 0.0;
  fVar6 = *param_2;
  fVar7 = param_2[iVar45 * 4];
  fVar8 = param_2[1];
  fVar9 = param_2[iVar45 * 4 + 1];
  fVar10 = param_2[iVar45 * 6];
  fVar11 = param_2[iVar45 * 2];
  fVar12 = param_2[iVar45 * 6 + 1];
  fVar13 = param_2[iVar45 * 2 + 1];
  fVar14 = param_2[iVar45 * 2];
  fVar15 = param_2[iVar45 * 6];
  fVar16 = param_2[iVar45 * 2 + 1];
  fVar17 = param_2[iVar45 * 6 + 1];
  *param_2 = fVar10 + fVar11 + fVar2 + fVar3;
  param_2[1] = fVar12 + fVar13 + fVar4 + fVar5;
  param_2[iVar45 * 2] = (fVar2 + fVar3) - (fVar10 + fVar11);
  param_2[iVar45 * 2 + 1] = (fVar4 + fVar5) - (fVar12 + fVar13);
  param_2[iVar45 * 4] = (fVar6 - fVar7) - (fVar16 - fVar17);
  param_2[iVar45 * 4 + 1] = (fVar14 - fVar15) + (fVar8 - fVar9);
  param_2[iVar45 * 6] = (fVar16 - fVar17) + (fVar6 - fVar7);
  param_2[iVar45 * 6 + 1] = (fVar8 - fVar9) - (fVar14 - fVar15);
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  local_20 = param_3 + 2;
  fVar5 = param_3[3];
  fVar2 = _DAT_30033fb8;
  if (2 < iVar45 + -2) {
    param_3 = param_2 + iVar45 * 2 + -4;
    local_14 = param_2 + iVar45 * 4 + -4;
    pfVar50 = param_2 + iVar45 * 2 + 4;
    pfVar47 = param_2 + iVar45 * 4 + 4;
    local_8 = iVar45 - 1U >> 2;
    pfVar48 = param_2 + iVar45 * 8 + -4;
    pfVar41 = param_2 + iVar45 * 6;
    pfVar42 = param_2;
    pfVar44 = param_2 + iVar45 * 6;
    do {
      local_5c = pfVar44 + -4;
      pfVar51 = pfVar42 + 4;
      pfVar46 = pfVar41 + 4;
      pfVar49 = local_20 + 4;
      fVar43 = (fVar2 + local_20[2]) * fVar4;
      fVar38 = (local_4c + local_20[3]) * fVar4;
      fVar39 = (local_48 + *pfVar49) * fVar5;
      fVar40 = (local_44 - local_20[5]) * fVar5;
      fVar2 = local_20[2];
      local_4c = local_20[3];
      local_48 = *pfVar49;
      local_44 = -local_20[5];
      fVar6 = pfVar47[-2];
      fVar7 = pfVar42[2];
      fVar8 = pfVar42[3];
      fVar9 = pfVar47[-1];
      fVar10 = pfVar42[2];
      fVar11 = pfVar47[-2];
      fVar12 = pfVar42[3];
      fVar13 = pfVar47[-1];
      fVar14 = *pfVar47;
      fVar15 = *pfVar51;
      fVar16 = pfVar42[5];
      fVar17 = pfVar47[1];
      fVar18 = *pfVar51;
      fVar19 = *pfVar47;
      fVar20 = pfVar42[5];
      fVar21 = pfVar47[1];
      fVar22 = pfVar41[2];
      fVar23 = pfVar50[-2];
      fVar24 = pfVar41[3];
      fVar25 = pfVar50[-1];
      fVar26 = pfVar50[-2];
      fVar27 = pfVar41[2];
      fVar28 = pfVar50[-1];
      fVar29 = pfVar41[3];
      fVar30 = *pfVar46;
      fVar31 = *pfVar50;
      fVar32 = pfVar41[5];
      fVar33 = pfVar50[1];
      fVar34 = *pfVar50;
      fVar35 = *pfVar46;
      fVar36 = pfVar50[1];
      fVar37 = pfVar41[5];
      pfVar42[2] = fVar22 + fVar23 + fVar6 + fVar7;
      pfVar42[3] = fVar24 + fVar25 + fVar8 + fVar9;
      *pfVar51 = fVar30 + fVar31 + fVar14 + fVar15;
      pfVar42[5] = fVar32 + fVar33 + fVar16 + fVar17;
      pfVar50[-2] = (fVar6 + fVar7) - (fVar22 + fVar23);
      pfVar50[-1] = (fVar8 + fVar9) - (fVar24 + fVar25);
      *pfVar50 = (fVar14 + fVar15) - (fVar30 + fVar31);
      pfVar50[1] = (fVar16 + fVar17) - (fVar32 + fVar33);
      fVar6 = (fVar10 - fVar11) - (fVar28 - fVar29);
      fVar7 = (fVar26 - fVar27) + (fVar12 - fVar13);
      pfVar47[-2] = fVar43 * fVar6 - fVar38 * fVar7;
      pfVar47[-1] = fVar38 * fVar6 + fVar43 * fVar7;
      fVar6 = (fVar18 - fVar19) - (fVar36 - fVar37);
      fVar7 = (fVar34 - fVar35) + (fVar20 - fVar21);
      *pfVar47 = fVar2 * fVar6 - local_4c * fVar7;
      pfVar47[1] = local_4c * fVar6 + fVar2 * fVar7;
      fVar6 = (fVar28 - fVar29) + (fVar10 - fVar11);
      fVar7 = (fVar12 - fVar13) - (fVar26 - fVar27);
      pfVar41[2] = fVar39 * fVar6 + fVar40 * fVar7;
      pfVar41[3] = fVar39 * fVar7 - fVar40 * fVar6;
      fVar6 = (fVar36 - fVar37) + (fVar18 - fVar19);
      fVar7 = (fVar20 - fVar21) - (fVar34 - fVar35);
      *pfVar46 = local_48 * fVar6 + local_44 * fVar7;
      pfVar41[5] = local_48 * fVar7 - local_44 * fVar6;
      fVar6 = param_3[2];
      fVar7 = pfVar44[-2];
      fVar8 = param_3[3];
      fVar9 = pfVar44[-1];
      fVar10 = param_3[2];
      fVar11 = pfVar44[-2];
      fVar12 = param_3[3];
      fVar13 = pfVar44[-1];
      fVar14 = *local_5c;
      fVar15 = *param_3;
      fVar16 = param_3[1];
      fVar17 = pfVar44[-3];
      fVar18 = *param_3;
      fVar19 = *local_5c;
      fVar20 = param_3[1];
      fVar21 = pfVar44[-3];
      fVar22 = local_14[2];
      fVar23 = pfVar48[2];
      fVar24 = local_14[3];
      fVar25 = pfVar48[3];
      fVar26 = local_14[2];
      fVar27 = pfVar48[2];
      fVar28 = local_14[3];
      fVar29 = pfVar48[3];
      fVar30 = *local_14;
      fVar31 = *pfVar48;
      fVar32 = local_14[1];
      fVar33 = pfVar48[1];
      fVar34 = *local_14;
      fVar35 = *pfVar48;
      fVar36 = local_14[1];
      fVar37 = pfVar48[1];
      param_3[2] = fVar22 + fVar23 + fVar6 + fVar7;
      param_3[3] = fVar24 + fVar25 + fVar8 + fVar9;
      *param_3 = fVar30 + fVar31 + fVar14 + fVar15;
      param_3[1] = fVar32 + fVar33 + fVar16 + fVar17;
      local_14[2] = (fVar6 + fVar7) - (fVar22 + fVar23);
      local_14[3] = (fVar8 + fVar9) - (fVar24 + fVar25);
      *local_14 = (fVar14 + fVar15) - (fVar30 + fVar31);
      local_14[1] = (fVar16 + fVar17) - (fVar32 + fVar33);
      fVar6 = (fVar10 - fVar11) - (fVar28 - fVar29);
      fVar7 = (fVar26 - fVar27) + (fVar12 - fVar13);
      pfVar44[-2] = fVar38 * fVar6 - fVar43 * fVar7;
      pfVar44[-1] = fVar43 * fVar6 + fVar38 * fVar7;
      fVar7 = (fVar18 - fVar19) - (fVar36 - fVar37);
      fVar6 = (fVar34 - fVar35) + (fVar20 - fVar21);
      *local_5c = local_4c * fVar7 - fVar2 * fVar6;
      pfVar44[-3] = fVar2 * fVar7 + local_4c * fVar6;
      fVar6 = (fVar28 - fVar29) + (fVar10 - fVar11);
      fVar7 = (fVar12 - fVar13) - (fVar26 - fVar27);
      pfVar48[2] = fVar40 * fVar6 + fVar39 * fVar7;
      pfVar48[3] = fVar40 * fVar7 - fVar39 * fVar6;
      fVar6 = (fVar36 - fVar37) + (fVar18 - fVar19);
      fVar7 = (fVar20 - fVar21) - (fVar34 - fVar35);
      local_14 = local_14 + -4;
      param_3 = param_3 + -4;
      *pfVar48 = local_44 * fVar6 + local_48 * fVar7;
      pfVar47 = pfVar47 + 4;
      pfVar50 = pfVar50 + 4;
      local_8 = local_8 - 1;
      pfVar48[1] = local_44 * fVar7 - local_48 * fVar6;
      pfVar48 = pfVar48 + -4;
      pfVar41 = pfVar46;
      pfVar42 = pfVar51;
      local_20 = pfVar49;
      pfVar44 = local_5c;
    } while (local_8 != 0);
  }
  iVar1 = iVar45 + -2;
  fVar22 = (fVar2 + fVar3) * fVar4;
  fVar4 = (local_4c + fVar3) * fVar4;
  fVar21 = (local_48 - fVar3) * fVar5;
  fVar5 = (local_44 - fVar3) * fVar5;
  fVar2 = param_2[iVar45 * 5 + -2];
  fVar6 = param_2[iVar1];
  fVar7 = param_2[iVar45 * 5 + -1];
  fVar8 = param_2[iVar45 + -1];
  fVar9 = param_2[iVar1];
  fVar10 = param_2[iVar45 * 5 + -2];
  fVar11 = param_2[iVar45 + -1];
  fVar12 = param_2[iVar45 * 5 + -1];
  fVar13 = param_2[iVar45 * 7 + -2];
  fVar14 = param_2[iVar45 * 3 + -2];
  fVar15 = param_2[iVar45 * 3 + -1];
  fVar16 = param_2[iVar45 * 7 + -1];
  fVar17 = param_2[iVar45 * 3 + -2];
  fVar18 = param_2[iVar45 * 7 + -2];
  fVar19 = param_2[iVar45 * 3 + -1];
  fVar20 = param_2[iVar45 * 7 + -1];
  param_2[iVar1] = fVar13 + fVar14 + fVar2 + fVar6;
  param_2[iVar45 + -1] = fVar15 + fVar16 + fVar7 + fVar8;
  param_2[iVar45 * 3 + -2] = (fVar2 + fVar6) - (fVar13 + fVar14);
  param_2[iVar45 * 3 + -1] = (fVar7 + fVar8) - (fVar15 + fVar16);
  fVar2 = (fVar9 - fVar10) - (fVar19 - fVar20);
  fVar6 = (fVar17 - fVar18) + (fVar11 - fVar12);
  param_2[iVar45 * 5 + -2] = fVar22 * fVar2 - fVar4 * fVar6;
  param_2[iVar45 * 5 + -1] = fVar4 * fVar2 + fVar22 * fVar6;
  fVar2 = (fVar19 - fVar20) + (fVar9 - fVar10);
  fVar6 = (fVar11 - fVar12) - (fVar17 - fVar18);
  param_2[iVar45 * 7 + -2] = fVar21 * fVar2 + fVar5 * fVar6;
  param_2[iVar45 * 7 + -1] = fVar21 * fVar6 - fVar5 * fVar2;
  fVar2 = param_2[iVar45];
  fVar6 = param_2[iVar45 * 5];
  fVar7 = param_2[iVar45 + 1];
  fVar8 = param_2[iVar45 * 5 + 1];
  fVar9 = param_2[iVar45];
  fVar10 = param_2[iVar45 * 5];
  fVar11 = param_2[iVar45 + 1];
  fVar12 = param_2[iVar45 * 5 + 1];
  fVar13 = param_2[iVar45 * 7];
  fVar14 = param_2[iVar45 * 3];
  fVar15 = param_2[iVar45 * 7 + 1];
  fVar16 = param_2[iVar45 * 3 + 1];
  fVar17 = param_2[iVar45 * 3];
  fVar18 = param_2[iVar45 * 7];
  fVar19 = param_2[iVar45 * 3 + 1];
  fVar20 = param_2[iVar45 * 7 + 1];
  param_2[iVar45] = fVar13 + fVar14 + fVar2 + fVar6;
  param_2[iVar45 + 1] = fVar15 + fVar16 + fVar7 + fVar8;
  param_2[iVar45 * 3] = (fVar2 + fVar6) - (fVar13 + fVar14);
  param_2[iVar45 * 3 + 1] = (fVar7 + fVar8) - (fVar15 + fVar16);
  fVar2 = (fVar9 - fVar10) - (fVar19 - fVar20);
  fVar6 = (fVar17 - fVar18) + (fVar11 - fVar12);
  param_2[iVar45 * 5] = (fVar2 - fVar6) * fVar3;
  param_2[iVar45 * 5 + 1] = (fVar6 + fVar2) * fVar3;
  fVar2 = (fVar19 - fVar20) + (fVar9 - fVar10);
  fVar6 = (fVar11 - fVar12) - (fVar17 - fVar18);
  param_2[iVar45 * 7] = -((fVar6 + fVar2) * fVar3);
  param_2[iVar45 * 7 + 1] = -((fVar6 - fVar2) * fVar3);
  fVar2 = param_2[iVar45 * 5 + 2];
  fVar3 = param_2[iVar45 + 2];
  fVar6 = param_2[iVar45 + 3];
  fVar7 = param_2[iVar45 * 5 + 3];
  fVar8 = param_2[iVar45 + 2];
  fVar9 = param_2[iVar45 * 5 + 2];
  fVar10 = param_2[iVar45 + 3];
  fVar11 = param_2[iVar45 * 5 + 3];
  fVar12 = param_2[iVar45 * 3 + 2];
  fVar13 = param_2[iVar45 * 7 + 2];
  fVar14 = param_2[iVar45 * 7 + 3];
  fVar15 = param_2[iVar45 * 3 + 3];
  fVar16 = param_2[iVar45 * 3 + 2];
  fVar17 = param_2[iVar45 * 7 + 2];
  fVar18 = param_2[iVar45 * 3 + 3];
  fVar19 = param_2[iVar45 * 7 + 3];
  param_2[iVar45 + 2] = fVar12 + fVar13 + fVar2 + fVar3;
  param_2[iVar45 + 3] = fVar14 + fVar15 + fVar6 + fVar7;
  param_2[iVar45 * 3 + 2] = (fVar2 + fVar3) - (fVar12 + fVar13);
  param_2[iVar45 * 3 + 3] = (fVar6 + fVar7) - (fVar14 + fVar15);
  fVar3 = (fVar8 - fVar9) - (fVar18 - fVar19);
  fVar2 = (fVar16 - fVar17) + (fVar10 - fVar11);
  param_2[iVar45 * 5 + 2] = fVar4 * fVar3 - fVar22 * fVar2;
  param_2[iVar45 * 5 + 3] = fVar22 * fVar3 + fVar4 * fVar2;
  fVar2 = (fVar18 - fVar19) + (fVar8 - fVar9);
  fVar3 = (fVar10 - fVar11) - (fVar16 - fVar17);
  param_2[iVar45 * 7 + 2] = fVar5 * fVar2 + fVar21 * fVar3;
  param_2[iVar45 * 7 + 3] = fVar5 * fVar3 - fVar21 * fVar2;
  return;
}



/* === FUN_30018af0 @ 0x30018af0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30018af0 @ 0x30018AF0 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_30018af0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float *pfVar41;
  float *pfVar42;
  float fVar43;
  float *pfVar44;
  int iVar45;
  float *pfVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  float *pfVar50;
  float *pfVar51;
  float *local_54;
  float local_4c;
  float local_48;
  float local_44;
  float *local_20;
  float *local_14;
  uint local_8;
  
  iVar45 = param_1 >> 3;
  fVar2 = param_2[iVar45 * 4];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[iVar45 * 4 + 1];
  local_4c = 0.0;
  local_48 = 1.0;
  local_44 = 0.0;
  fVar6 = *param_2;
  fVar7 = param_2[iVar45 * 4];
  fVar8 = param_2[iVar45 * 4 + 1];
  fVar9 = param_2[1];
  fVar10 = param_2[iVar45 * 2];
  fVar11 = param_2[iVar45 * 6];
  fVar12 = param_2[iVar45 * 2 + 1];
  fVar13 = param_2[iVar45 * 6 + 1];
  fVar14 = param_2[iVar45 * 2];
  fVar15 = param_2[iVar45 * 6];
  fVar16 = param_2[iVar45 * 2 + 1];
  fVar17 = param_2[iVar45 * 6 + 1];
  *param_2 = fVar10 + fVar11 + fVar2 + fVar3;
  param_2[1] = (-fVar4 - fVar5) - (fVar12 + fVar13);
  param_2[iVar45 * 2] = (fVar2 + fVar3) - (fVar10 + fVar11);
  param_2[iVar45 * 2 + 1] = fVar12 + fVar13 + (-fVar4 - fVar5);
  param_2[iVar45 * 4] = (fVar16 - fVar17) + (fVar6 - fVar7);
  param_2[iVar45 * 4 + 1] = (fVar14 - fVar15) + (fVar8 - fVar9);
  param_2[iVar45 * 6] = (fVar6 - fVar7) - (fVar16 - fVar17);
  param_2[iVar45 * 6 + 1] = (fVar8 - fVar9) - (fVar14 - fVar15);
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  local_20 = param_3 + 2;
  fVar5 = param_3[3];
  fVar2 = _DAT_30033fb8;
  if (2 < iVar45 + -2) {
    param_3 = param_2 + iVar45 * 2 + -4;
    local_14 = param_2 + iVar45 * 4 + -4;
    pfVar50 = param_2 + iVar45 * 2 + 4;
    pfVar47 = param_2 + iVar45 * 4 + 4;
    local_8 = iVar45 - 1U >> 2;
    pfVar48 = param_2 + iVar45 * 8 + -4;
    pfVar41 = param_2 + iVar45 * 6;
    pfVar42 = param_2;
    pfVar44 = param_2 + iVar45 * 6;
    do {
      local_54 = pfVar44 + -4;
      pfVar51 = pfVar42 + 4;
      pfVar46 = pfVar41 + 4;
      pfVar49 = local_20 + 4;
      fVar43 = (fVar2 + local_20[2]) * fVar4;
      fVar38 = (local_4c + local_20[3]) * fVar4;
      fVar39 = (local_48 + *pfVar49) * fVar5;
      fVar40 = (local_44 - local_20[5]) * fVar5;
      fVar2 = local_20[2];
      local_4c = local_20[3];
      local_48 = *pfVar49;
      local_44 = -local_20[5];
      fVar6 = pfVar42[2];
      fVar7 = pfVar47[-2];
      fVar8 = pfVar42[3];
      fVar9 = pfVar47[-1];
      fVar10 = pfVar42[2];
      fVar11 = pfVar47[-2];
      fVar12 = pfVar47[-1];
      fVar13 = pfVar42[3];
      fVar14 = *pfVar47;
      fVar15 = *pfVar51;
      fVar16 = pfVar42[5];
      fVar17 = pfVar47[1];
      fVar18 = *pfVar51;
      fVar19 = *pfVar47;
      fVar20 = pfVar47[1];
      fVar21 = pfVar42[5];
      fVar22 = pfVar41[2];
      fVar23 = pfVar50[-2];
      fVar24 = pfVar41[3];
      fVar25 = pfVar50[-1];
      fVar26 = pfVar50[-2];
      fVar27 = pfVar41[2];
      fVar28 = pfVar50[-1];
      fVar29 = pfVar41[3];
      fVar30 = *pfVar50;
      fVar31 = *pfVar46;
      fVar32 = pfVar41[5];
      fVar33 = pfVar50[1];
      fVar34 = *pfVar50;
      fVar35 = *pfVar46;
      fVar36 = pfVar50[1];
      fVar37 = pfVar41[5];
      pfVar42[2] = fVar22 + fVar23 + fVar6 + fVar7;
      pfVar42[3] = (-fVar8 - fVar9) - (fVar24 + fVar25);
      *pfVar51 = fVar30 + fVar31 + fVar14 + fVar15;
      pfVar42[5] = (-fVar16 - fVar17) - (fVar32 + fVar33);
      pfVar50[-2] = (fVar6 + fVar7) - (fVar22 + fVar23);
      pfVar50[-1] = fVar24 + fVar25 + (-fVar8 - fVar9);
      *pfVar50 = (fVar14 + fVar15) - (fVar30 + fVar31);
      pfVar50[1] = fVar32 + fVar33 + (-fVar16 - fVar17);
      fVar6 = (fVar28 - fVar29) + (fVar10 - fVar11);
      fVar7 = (fVar26 - fVar27) + (fVar12 - fVar13);
      pfVar47[-2] = fVar43 * fVar6 - fVar38 * fVar7;
      pfVar47[-1] = fVar38 * fVar6 + fVar43 * fVar7;
      fVar6 = (fVar36 - fVar37) + (fVar18 - fVar19);
      fVar7 = (fVar34 - fVar35) + (fVar20 - fVar21);
      *pfVar47 = fVar2 * fVar6 - local_4c * fVar7;
      pfVar47[1] = local_4c * fVar6 + fVar2 * fVar7;
      fVar6 = (fVar10 - fVar11) - (fVar28 - fVar29);
      fVar7 = (fVar12 - fVar13) - (fVar26 - fVar27);
      pfVar41[2] = fVar39 * fVar6 + fVar40 * fVar7;
      pfVar41[3] = fVar39 * fVar7 - fVar40 * fVar6;
      fVar6 = (fVar18 - fVar19) - (fVar36 - fVar37);
      fVar7 = (fVar20 - fVar21) - (fVar34 - fVar35);
      *pfVar46 = local_48 * fVar6 + local_44 * fVar7;
      pfVar41[5] = local_48 * fVar7 - local_44 * fVar6;
      fVar6 = param_3[2];
      fVar7 = pfVar44[-2];
      fVar8 = param_3[3];
      fVar9 = pfVar44[-1];
      fVar10 = param_3[2];
      fVar11 = pfVar44[-2];
      fVar12 = pfVar44[-1];
      fVar13 = param_3[3];
      fVar14 = *param_3;
      fVar15 = *local_54;
      fVar16 = param_3[1];
      fVar17 = pfVar44[-3];
      fVar18 = *param_3;
      fVar19 = *local_54;
      fVar20 = pfVar44[-3];
      fVar21 = param_3[1];
      fVar22 = local_14[2];
      fVar23 = pfVar48[2];
      fVar24 = local_14[3];
      fVar25 = pfVar48[3];
      fVar26 = local_14[2];
      fVar27 = pfVar48[2];
      fVar28 = local_14[3];
      fVar29 = pfVar48[3];
      fVar30 = *local_14;
      fVar31 = *pfVar48;
      fVar32 = pfVar48[1];
      fVar33 = local_14[1];
      fVar34 = *local_14;
      fVar35 = *pfVar48;
      fVar36 = local_14[1];
      fVar37 = pfVar48[1];
      param_3[2] = fVar22 + fVar23 + fVar6 + fVar7;
      param_3[3] = (-fVar8 - fVar9) - (fVar24 + fVar25);
      *param_3 = fVar30 + fVar31 + fVar14 + fVar15;
      param_3[1] = (-fVar16 - fVar17) - (fVar32 + fVar33);
      local_14[2] = (fVar6 + fVar7) - (fVar22 + fVar23);
      local_14[3] = fVar24 + fVar25 + (-fVar8 - fVar9);
      *local_14 = (fVar14 + fVar15) - (fVar30 + fVar31);
      local_14[1] = fVar32 + fVar33 + (-fVar16 - fVar17);
      fVar6 = (fVar28 - fVar29) + (fVar10 - fVar11);
      fVar7 = (fVar26 - fVar27) + (fVar12 - fVar13);
      pfVar44[-2] = fVar38 * fVar6 - fVar43 * fVar7;
      pfVar44[-1] = fVar43 * fVar6 + fVar38 * fVar7;
      fVar7 = (fVar36 - fVar37) + (fVar18 - fVar19);
      fVar6 = (fVar34 - fVar35) + (fVar20 - fVar21);
      *local_54 = local_4c * fVar7 - fVar2 * fVar6;
      pfVar44[-3] = fVar2 * fVar7 + local_4c * fVar6;
      fVar6 = (fVar10 - fVar11) - (fVar28 - fVar29);
      fVar7 = (fVar12 - fVar13) - (fVar26 - fVar27);
      pfVar48[2] = fVar40 * fVar6 + fVar39 * fVar7;
      pfVar48[3] = fVar40 * fVar7 - fVar39 * fVar6;
      fVar6 = (fVar18 - fVar19) - (fVar36 - fVar37);
      fVar7 = (fVar20 - fVar21) - (fVar34 - fVar35);
      local_14 = local_14 + -4;
      param_3 = param_3 + -4;
      pfVar47 = pfVar47 + 4;
      *pfVar48 = local_44 * fVar6 + local_48 * fVar7;
      pfVar50 = pfVar50 + 4;
      local_8 = local_8 - 1;
      pfVar48[1] = local_44 * fVar7 - local_48 * fVar6;
      pfVar48 = pfVar48 + -4;
      pfVar41 = pfVar46;
      pfVar42 = pfVar51;
      local_20 = pfVar49;
      pfVar44 = local_54;
    } while (local_8 != 0);
  }
  iVar1 = iVar45 + -2;
  fVar22 = (fVar2 + fVar3) * fVar4;
  fVar4 = (local_4c + fVar3) * fVar4;
  fVar21 = (local_48 - fVar3) * fVar5;
  fVar5 = (local_44 - fVar3) * fVar5;
  fVar2 = param_2[iVar1];
  fVar6 = param_2[iVar45 * 5 + -2];
  fVar7 = param_2[iVar45 + -1];
  fVar8 = param_2[iVar45 * 5 + -1];
  fVar9 = param_2[iVar1];
  fVar10 = param_2[iVar45 * 5 + -2];
  fVar11 = param_2[iVar45 * 5 + -1];
  fVar12 = param_2[iVar45 + -1];
  fVar13 = param_2[iVar45 * 3 + -2];
  fVar14 = param_2[iVar45 * 7 + -2];
  fVar15 = param_2[iVar45 * 3 + -1];
  fVar16 = param_2[iVar45 * 7 + -1];
  fVar17 = param_2[iVar45 * 3 + -2];
  fVar18 = param_2[iVar45 * 7 + -2];
  fVar19 = param_2[iVar45 * 3 + -1];
  fVar20 = param_2[iVar45 * 7 + -1];
  param_2[iVar1] = fVar13 + fVar14 + fVar2 + fVar6;
  param_2[iVar45 + -1] = (-fVar7 - fVar8) - (fVar15 + fVar16);
  param_2[iVar45 * 3 + -2] = (fVar2 + fVar6) - (fVar13 + fVar14);
  param_2[iVar45 * 3 + -1] = fVar15 + fVar16 + (-fVar7 - fVar8);
  fVar2 = (fVar19 - fVar20) + (fVar9 - fVar10);
  fVar6 = (fVar17 - fVar18) + (fVar11 - fVar12);
  param_2[iVar45 * 5 + -2] = fVar22 * fVar2 - fVar4 * fVar6;
  param_2[iVar45 * 5 + -1] = fVar4 * fVar2 + fVar22 * fVar6;
  fVar2 = (fVar9 - fVar10) - (fVar19 - fVar20);
  fVar6 = (fVar11 - fVar12) - (fVar17 - fVar18);
  param_2[iVar45 * 7 + -2] = fVar21 * fVar2 + fVar5 * fVar6;
  param_2[iVar45 * 7 + -1] = fVar21 * fVar6 - fVar5 * fVar2;
  fVar2 = param_2[iVar45 * 5];
  fVar6 = param_2[iVar45];
  fVar7 = param_2[iVar45 + 1];
  fVar8 = param_2[iVar45 * 5 + 1];
  fVar9 = param_2[iVar45];
  fVar10 = param_2[iVar45 * 5];
  fVar11 = param_2[iVar45 * 5 + 1];
  fVar12 = param_2[iVar45 + 1];
  fVar13 = param_2[iVar45 * 3];
  fVar14 = param_2[iVar45 * 7];
  fVar15 = param_2[iVar45 * 7 + 1];
  fVar16 = param_2[iVar45 * 3 + 1];
  fVar17 = param_2[iVar45 * 3];
  fVar18 = param_2[iVar45 * 7];
  fVar19 = param_2[iVar45 * 3 + 1];
  fVar20 = param_2[iVar45 * 7 + 1];
  param_2[iVar45] = fVar13 + fVar14 + fVar2 + fVar6;
  param_2[iVar45 + 1] = (-fVar7 - fVar8) - (fVar15 + fVar16);
  param_2[iVar45 * 3] = (fVar2 + fVar6) - (fVar13 + fVar14);
  param_2[iVar45 * 3 + 1] = fVar15 + fVar16 + (-fVar7 - fVar8);
  fVar2 = (fVar19 - fVar20) + (fVar9 - fVar10);
  fVar6 = (fVar17 - fVar18) + (fVar11 - fVar12);
  param_2[iVar45 * 5] = (fVar2 - fVar6) * fVar3;
  param_2[iVar45 * 5 + 1] = (fVar6 + fVar2) * fVar3;
  fVar2 = (fVar9 - fVar10) - (fVar19 - fVar20);
  fVar6 = (fVar11 - fVar12) - (fVar17 - fVar18);
  param_2[iVar45 * 7] = -((fVar6 + fVar2) * fVar3);
  param_2[iVar45 * 7 + 1] = -((fVar6 - fVar2) * fVar3);
  fVar2 = param_2[iVar45 * 5 + 2];
  fVar3 = param_2[iVar45 + 2];
  fVar6 = param_2[iVar45 + 3];
  fVar7 = param_2[iVar45 * 5 + 3];
  fVar8 = param_2[iVar45 + 2];
  fVar9 = param_2[iVar45 * 5 + 2];
  fVar10 = param_2[iVar45 * 5 + 3];
  fVar11 = param_2[iVar45 + 3];
  fVar12 = param_2[iVar45 * 7 + 2];
  fVar13 = param_2[iVar45 * 3 + 2];
  fVar14 = param_2[iVar45 * 7 + 3];
  fVar15 = param_2[iVar45 * 3 + 3];
  fVar16 = param_2[iVar45 * 3 + 2];
  fVar17 = param_2[iVar45 * 7 + 2];
  fVar18 = param_2[iVar45 * 3 + 3];
  fVar19 = param_2[iVar45 * 7 + 3];
  param_2[iVar45 + 2] = fVar12 + fVar13 + fVar2 + fVar3;
  param_2[iVar45 + 3] = (-fVar6 - fVar7) - (fVar14 + fVar15);
  param_2[iVar45 * 3 + 2] = (fVar2 + fVar3) - (fVar12 + fVar13);
  param_2[iVar45 * 3 + 3] = fVar14 + fVar15 + (-fVar6 - fVar7);
  fVar3 = (fVar18 - fVar19) + (fVar8 - fVar9);
  fVar2 = (fVar16 - fVar17) + (fVar10 - fVar11);
  param_2[iVar45 * 5 + 2] = fVar4 * fVar3 - fVar22 * fVar2;
  param_2[iVar45 * 5 + 3] = fVar22 * fVar3 + fVar4 * fVar2;
  fVar2 = (fVar8 - fVar9) - (fVar18 - fVar19);
  fVar3 = (fVar10 - fVar11) - (fVar16 - fVar17);
  param_2[iVar45 * 7 + 2] = fVar5 * fVar2 + fVar21 * fVar3;
  param_2[iVar45 * 7 + 3] = fVar5 * fVar3 - fVar21 * fVar2;
  return;
}



/* === FUN_30019400 @ 0x30019400 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30019400 @ 0x30019400 */



void __cdecl FUN_30019400(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_30019a80(param_1,param_2,(float *)(param_4 + (param_3 + (param_1 >> 2) * -2) * 4));
  iVar2 = param_1 >> 2;
  while (iVar1 = iVar2, 0x200 < param_1) {
    FUN_30019400(iVar1,param_2,param_3,param_4);
    FUN_300194a0(iVar1,param_2 + iVar1,param_3,param_4);
    FUN_30019400(iVar1,param_2 + iVar1 * 2,param_3,param_4);
    param_2 = param_2 + iVar1 * 3;
    FUN_30019a80(iVar1,param_2,(float *)(param_4 + (param_3 + (iVar1 >> 2) * -2) * 4));
    iVar2 = iVar1 >> 2;
    param_1 = iVar1;
  }
  FUN_30019540(param_1,(int)param_2,param_3,param_4);
  return;
}



/* === FUN_300194a0 @ 0x300194a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300194a0 @ 0x300194A0 */



void __cdecl FUN_300194a0(int param_1,float *param_2,int param_3,int param_4)

{
  FUN_30019e90(param_1,param_2,param_4 + (param_3 - param_1) * 4);
  while (0x200 < param_1) {
    param_1 = param_1 >> 2;
    FUN_30019400(param_1,param_2,param_3,param_4);
    FUN_300194a0(param_1,param_2 + param_1,param_3,param_4);
    FUN_30019400(param_1,param_2 + param_1 * 2,param_3,param_4);
    param_2 = param_2 + param_1 * 3;
    FUN_30019e90(param_1,param_2,param_4 + (param_3 - param_1) * 4);
  }
  FUN_300197b0(param_1,(int)param_2,param_3,param_4);
  return;
}



/* === FUN_30019540 @ 0x30019540 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30019540 @ 0x30019540 */



void __cdecl FUN_30019540(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *local_10;
  float *local_c;
  float *local_8;
  
  iVar4 = param_1;
  while( true ) {
    iVar2 = iVar4 >> 2;
    iVar4 = iVar4 >> 3;
    iVar3 = iVar2;
    if (iVar2 < 0x81) break;
    for (; iVar3 < param_1; iVar3 = iVar3 * 4) {
      iVar5 = iVar3 - iVar2;
      if (iVar5 < param_1) {
        pfVar1 = (float *)(param_4 + (param_3 - iVar4) * 4);
        local_8 = (float *)(param_2 + iVar5 * 4);
        local_10 = (float *)(param_2 + (iVar5 + iVar3 * 2) * 4);
        local_c = (float *)(param_2 + (iVar3 + iVar5) * 4);
        do {
          FUN_30019a80(iVar2,local_8,pfVar1);
          FUN_30019e90(iVar2,local_c,param_4 + (param_3 - iVar2) * 4);
          FUN_30019a80(iVar2,local_10,pfVar1);
          iVar5 = iVar5 + iVar3 * 4;
          local_8 = local_8 + iVar3 * 4;
          local_c = local_c + iVar3 * 4;
          local_10 = local_10 + iVar3 * 4;
        } while (iVar5 < param_1);
      }
    }
    FUN_30019a80(iVar2,(float *)(param_2 + (param_1 - iVar2) * 4),
                 (float *)(param_4 + (param_3 - iVar4) * 4));
    iVar4 = iVar2;
  }
  for (; iVar3 < param_1; iVar3 = iVar3 * 4) {
    iVar5 = iVar3 - iVar2;
    if (iVar5 < param_1) {
      pfVar1 = (float *)(param_4 + (param_3 - iVar4) * 4);
      local_10 = (float *)(param_2 + iVar5 * 4);
      local_8 = (float *)(param_2 + (iVar5 + iVar3 * 2) * 4);
      local_c = (float *)(param_2 + (iVar3 + iVar5) * 4);
      do {
        FUN_30019a80(iVar2,local_10,pfVar1);
        FUN_3001a420(iVar2,local_10,param_3,param_4);
        FUN_30019e90(iVar2,local_c,param_4 + (param_3 - iVar2) * 4);
        FUN_3001a4c0(iVar2,local_c,param_3,param_4);
        FUN_30019a80(iVar2,local_8,pfVar1);
        FUN_3001a420(iVar2,local_8,param_3,param_4);
        iVar5 = iVar5 + iVar3 * 4;
        local_10 = local_10 + iVar3 * 4;
        local_c = local_c + iVar3 * 4;
        local_8 = local_8 + iVar3 * 4;
      } while (iVar5 < param_1);
    }
  }
  pfVar1 = (float *)(param_2 + (param_1 - iVar2) * 4);
  FUN_30019a80(iVar2,pfVar1,(float *)(param_4 + (param_3 - iVar4) * 4));
  FUN_3001a420(iVar2,pfVar1,param_3,param_4);
  return;
}



/* === FUN_300197b0 @ 0x300197b0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300197b0 @ 0x300197B0 */



void __cdecl FUN_300197b0(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int local_10;
  float *local_c;
  float *local_8;
  
  iVar8 = param_1 >> 1;
  while( true ) {
    iVar3 = param_1 >> 2;
    iVar5 = param_1 >> 3;
    iVar4 = iVar3;
    if (iVar3 < 0x81) break;
    for (; param_1 = iVar3, iVar4 < iVar8; iVar4 = iVar4 * 4) {
      iVar6 = iVar4 - iVar3;
      if (iVar6 < iVar8) {
        pfVar1 = (float *)(param_4 + (param_3 - iVar5) * 4);
        local_8 = (float *)(param_2 + (iVar6 + iVar8) * 4);
        pfVar7 = (float *)(param_2 + iVar6 * 4);
        do {
          FUN_30019a80(iVar3,pfVar7,pfVar1);
          FUN_30019a80(iVar3,local_8,pfVar1);
          iVar6 = iVar6 + iVar4 * 2;
          local_8 = local_8 + iVar4 * 2;
          pfVar7 = pfVar7 + iVar4 * 2;
        } while (iVar6 < iVar8);
      }
      iVar6 = iVar4 * 2 - iVar3;
      if (iVar6 < iVar8) {
        iVar2 = param_4 + (param_3 - iVar3) * 4;
        local_8 = (float *)(param_2 + iVar6 * 4);
        local_c = (float *)(param_2 + (iVar6 + iVar8) * 4);
        do {
          FUN_30019e90(iVar3,local_8,iVar2);
          FUN_30019e90(iVar3,local_c,iVar2);
          iVar6 = iVar6 + iVar4 * 4;
          local_8 = local_8 + iVar4 * 4;
          local_c = local_c + iVar4 * 4;
        } while (iVar6 < iVar8);
      }
    }
  }
  for (; iVar4 < iVar8; iVar4 = iVar4 * 4) {
    local_10 = iVar4 - iVar3;
    if (local_10 < iVar8) {
      pfVar1 = (float *)(param_4 + (param_3 - iVar5) * 4);
      local_c = (float *)(param_2 + local_10 * 4);
      local_8 = (float *)(param_2 + (local_10 + iVar8) * 4);
      do {
        FUN_30019a80(iVar3,local_c,pfVar1);
        FUN_3001a420(iVar3,local_c,param_3,param_4);
        FUN_30019a80(iVar3,local_8,pfVar1);
        FUN_3001a420(iVar3,local_8,param_3,param_4);
        local_10 = local_10 + iVar4 * 2;
        local_c = local_c + iVar4 * 2;
        local_8 = local_8 + iVar4 * 2;
      } while (local_10 < iVar8);
    }
    local_10 = iVar4 * 2 - iVar3;
    if (local_10 < iVar8) {
      iVar6 = param_4 + (param_3 - iVar3) * 4;
      local_8 = (float *)(param_2 + local_10 * 4);
      local_c = (float *)(param_2 + (local_10 + iVar8) * 4);
      do {
        FUN_30019e90(iVar3,local_8,iVar6);
        FUN_3001a4c0(iVar3,local_8,param_3,param_4);
        FUN_30019e90(iVar3,local_c,iVar6);
        FUN_3001a4c0(iVar3,local_c,param_3,param_4);
        local_10 = local_10 + iVar4 * 4;
        local_8 = local_8 + iVar4 * 4;
        local_c = local_c + iVar4 * 4;
      } while (local_10 < iVar8);
    }
  }
  return;
}



/* === FUN_30019a80 @ 0x30019a80 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30019a80 @ 0x30019A80 */



void __cdecl FUN_30019a80(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *local_1c;
  float *local_10;
  float *local_c;
  uint local_8;
  
  iVar25 = param_1 >> 3;
  fVar1 = param_2[iVar25 * 4];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[iVar25 * 4 + 1];
  fVar5 = *param_2;
  fVar6 = param_2[iVar25 * 4];
  fVar7 = param_2[1];
  fVar8 = param_2[iVar25 * 4 + 1];
  fVar9 = param_2[iVar25 * 6];
  fVar10 = param_2[iVar25 * 2];
  fVar11 = param_2[iVar25 * 2 + 1];
  fVar12 = param_2[iVar25 * 6 + 1];
  fVar13 = param_2[iVar25 * 2];
  fVar14 = param_2[iVar25 * 6];
  fVar15 = param_2[iVar25 * 2 + 1];
  fVar16 = param_2[iVar25 * 6 + 1];
  *param_2 = fVar9 + fVar10 + fVar1 + fVar2;
  param_2[1] = fVar11 + fVar12 + fVar3 + fVar4;
  param_2[iVar25 * 2] = (fVar1 + fVar2) - (fVar9 + fVar10);
  param_2[iVar25 * 2 + 1] = (fVar3 + fVar4) - (fVar11 + fVar12);
  param_2[iVar25 * 4] = (fVar5 - fVar6) - (fVar15 - fVar16);
  param_2[iVar25 * 4 + 1] = (fVar13 - fVar14) + (fVar7 - fVar8);
  param_2[iVar25 * 6] = (fVar15 - fVar16) + (fVar5 - fVar6);
  param_2[iVar25 * 6 + 1] = (fVar7 - fVar8) - (fVar13 - fVar14);
  fVar1 = param_3[1];
  if (2 < iVar25) {
    local_1c = param_2 + iVar25 * 2 + -2;
    local_10 = param_2 + iVar25 * 4 + -2;
    pfVar29 = param_2 + iVar25 * 2 + 2;
    pfVar27 = param_2 + iVar25 * 4 + 2;
    local_8 = iVar25 - 1U >> 1;
    pfVar28 = param_2 + iVar25 * 8 + -2;
    pfVar22 = param_2 + iVar25 * 6;
    pfVar23 = param_2;
    local_c = param_3 + 2;
    pfVar24 = param_2 + iVar25 * 6;
    do {
      param_3 = pfVar24 + -2;
      pfVar30 = pfVar23 + 2;
      pfVar26 = pfVar22 + 2;
      fVar2 = local_c[2];
      fVar3 = local_c[3];
      fVar20 = local_c[4];
      fVar21 = -local_c[5];
      fVar4 = *pfVar30;
      fVar5 = *pfVar27;
      fVar6 = pfVar27[1];
      fVar7 = pfVar23[3];
      fVar8 = *pfVar30;
      fVar9 = *pfVar27;
      fVar10 = pfVar23[3];
      fVar11 = pfVar27[1];
      fVar12 = *pfVar26;
      fVar13 = *pfVar29;
      fVar14 = pfVar22[3];
      fVar15 = pfVar29[1];
      fVar16 = *pfVar29;
      fVar17 = *pfVar26;
      fVar18 = pfVar29[1];
      fVar19 = pfVar22[3];
      *pfVar30 = fVar12 + fVar13 + fVar4 + fVar5;
      pfVar23[3] = fVar14 + fVar15 + fVar6 + fVar7;
      *pfVar29 = (fVar4 + fVar5) - (fVar12 + fVar13);
      pfVar29[1] = (fVar6 + fVar7) - (fVar14 + fVar15);
      fVar4 = (fVar8 - fVar9) - (fVar18 - fVar19);
      fVar5 = (fVar16 - fVar17) + (fVar10 - fVar11);
      *pfVar27 = fVar2 * fVar4 - fVar3 * fVar5;
      pfVar27[1] = fVar3 * fVar4 + fVar2 * fVar5;
      fVar4 = (fVar18 - fVar19) + (fVar8 - fVar9);
      fVar5 = (fVar10 - fVar11) - (fVar16 - fVar17);
      *pfVar26 = fVar20 * fVar4 + fVar21 * fVar5;
      pfVar22[3] = fVar20 * fVar5 - fVar21 * fVar4;
      fVar4 = *param_3;
      fVar5 = *local_1c;
      fVar6 = local_1c[1];
      fVar7 = pfVar24[-1];
      fVar8 = *local_1c;
      fVar9 = *param_3;
      fVar10 = local_1c[1];
      fVar11 = pfVar24[-1];
      fVar12 = *pfVar28;
      fVar13 = *local_10;
      fVar14 = pfVar28[1];
      fVar15 = local_10[1];
      fVar16 = *local_10;
      fVar17 = *pfVar28;
      fVar18 = local_10[1];
      fVar19 = pfVar28[1];
      *local_1c = fVar12 + fVar13 + fVar4 + fVar5;
      local_1c[1] = fVar14 + fVar15 + fVar6 + fVar7;
      *local_10 = (fVar4 + fVar5) - (fVar12 + fVar13);
      local_10[1] = (fVar6 + fVar7) - (fVar14 + fVar15);
      fVar4 = (fVar8 - fVar9) - (fVar18 - fVar19);
      fVar5 = (fVar16 - fVar17) + (fVar10 - fVar11);
      *param_3 = fVar3 * fVar4 - fVar2 * fVar5;
      pfVar24[-1] = fVar2 * fVar4 + fVar3 * fVar5;
      fVar2 = (fVar18 - fVar19) + (fVar8 - fVar9);
      fVar3 = (fVar10 - fVar11) - (fVar16 - fVar17);
      *pfVar28 = fVar21 * fVar2 + fVar20 * fVar3;
      pfVar28[1] = fVar21 * fVar3 - fVar20 * fVar2;
      local_10 = local_10 + -2;
      local_1c = local_1c + -2;
      pfVar27 = pfVar27 + 2;
      pfVar29 = pfVar29 + 2;
      pfVar28 = pfVar28 + -2;
      local_8 = local_8 - 1;
      pfVar22 = pfVar26;
      pfVar23 = pfVar30;
      local_c = local_c + 4;
      pfVar24 = param_3;
    } while (local_8 != 0);
  }
  fVar2 = param_2[iVar25 * 5];
  fVar3 = param_2[iVar25];
  fVar4 = param_2[iVar25 * 5 + 1];
  fVar5 = param_2[iVar25 + 1];
  fVar6 = param_2[iVar25];
  fVar7 = param_2[iVar25 * 5];
  fVar8 = param_2[iVar25 + 1];
  fVar9 = param_2[iVar25 * 5 + 1];
  fVar10 = param_2[iVar25 * 7];
  fVar11 = param_2[iVar25 * 3];
  fVar12 = param_2[iVar25 * 7 + 1];
  fVar13 = param_2[iVar25 * 3 + 1];
  fVar14 = param_2[iVar25 * 3];
  fVar15 = param_2[iVar25 * 7];
  fVar16 = param_2[iVar25 * 3 + 1];
  fVar17 = param_2[iVar25 * 7 + 1];
  param_2[iVar25] = fVar10 + fVar11 + fVar2 + fVar3;
  param_2[iVar25 + 1] = fVar12 + fVar13 + fVar4 + fVar5;
  param_2[iVar25 * 3] = (fVar2 + fVar3) - (fVar10 + fVar11);
  param_2[iVar25 * 3 + 1] = (fVar4 + fVar5) - (fVar12 + fVar13);
  fVar3 = (fVar6 - fVar7) - (fVar16 - fVar17);
  fVar2 = (fVar14 - fVar15) + (fVar8 - fVar9);
  param_2[iVar25 * 5] = (fVar3 - fVar2) * fVar1;
  param_2[iVar25 * 5 + 1] = (fVar2 + fVar3) * fVar1;
  fVar3 = (fVar16 - fVar17) + (fVar6 - fVar7);
  fVar2 = (fVar8 - fVar9) - (fVar14 - fVar15);
  param_2[iVar25 * 7] = -((fVar2 + fVar3) * fVar1);
  param_2[iVar25 * 7 + 1] = -((fVar2 - fVar3) * fVar1);
  return;
}



/* === FUN_30019e90 @ 0x30019e90 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30019e90 @ 0x30019E90 */



void __cdecl FUN_30019e90(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  int iVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_10;
  float *local_c;
  uint local_8;
  
  fVar1 = *(float *)(param_3 + 4);
  iVar24 = param_1 >> 3;
  fVar2 = *param_2;
  fVar3 = param_2[iVar24 * 4 + 1];
  fVar4 = param_2[1];
  fVar5 = param_2[iVar24 * 4];
  fVar6 = param_2[iVar24 * 4 + 1];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[iVar24 * 4];
  fVar10 = param_2[iVar24 * 2];
  fVar11 = param_2[iVar24 * 6 + 1];
  fVar12 = param_2[iVar24 * 2 + 1];
  fVar13 = param_2[iVar24 * 6];
  fVar14 = ((param_2[iVar24 * 2] - param_2[iVar24 * 6 + 1]) -
           (param_2[iVar24 * 6] + param_2[iVar24 * 2 + 1])) * fVar1;
  fVar15 = (param_2[iVar24 * 6] + param_2[iVar24 * 2 + 1] +
           (param_2[iVar24 * 2] - param_2[iVar24 * 6 + 1])) * fVar1;
  *param_2 = fVar14 + (fVar2 - fVar3);
  param_2[1] = fVar15 + fVar4 + fVar5;
  param_2[iVar24 * 2] = (fVar2 - fVar3) - fVar14;
  param_2[iVar24 * 2 + 1] = (fVar4 + fVar5) - fVar15;
  fVar2 = ((fVar10 + fVar11) - (fVar12 - fVar13)) * fVar1;
  fVar1 = ((fVar12 - fVar13) + fVar10 + fVar11) * fVar1;
  param_2[iVar24 * 4] = (fVar6 + fVar7) - fVar1;
  param_2[iVar24 * 4 + 1] = fVar2 + (fVar8 - fVar9);
  param_2[iVar24 * 6] = fVar1 + fVar6 + fVar7;
  param_2[iVar24 * 6 + 1] = (fVar8 - fVar9) - fVar2;
  if (2 < iVar24) {
    local_2c = param_2 + iVar24 * 2 + -2;
    local_30 = param_2 + iVar24 * 4 + -2;
    local_8 = iVar24 - 1U >> 1;
    pfVar28 = param_2 + iVar24 * 2 + 2;
    pfVar27 = param_2 + iVar24 * 4 + 2;
    pfVar21 = param_2 + iVar24 * 6;
    pfVar22 = param_2;
    local_28 = param_2 + iVar24 * 8 + -2;
    local_10 = (float *)(param_3 + 8);
    local_c = (float *)(param_3 + 8 + iVar24 * 0x10);
    pfVar23 = param_2 + iVar24 * 6;
    do {
      local_34 = pfVar23 + -2;
      pfVar26 = pfVar22 + 2;
      pfVar25 = pfVar21 + 2;
      fVar1 = local_10[2];
      fVar2 = local_10[3];
      fVar13 = local_10[4];
      fVar17 = -local_10[5];
      fVar3 = local_c[-6];
      fVar4 = local_c[-5];
      fVar14 = local_c[-4];
      fVar20 = -local_c[-3];
      fVar5 = *pfVar26;
      fVar6 = pfVar27[1];
      fVar7 = pfVar22[3];
      fVar8 = *pfVar27;
      fVar9 = *pfVar28;
      fVar10 = pfVar21[3];
      fVar11 = pfVar28[1];
      fVar12 = *pfVar25;
      fVar16 = fVar1 * (*pfVar26 - pfVar27[1]) - fVar2 * (pfVar22[3] + *pfVar27);
      fVar15 = fVar2 * (*pfVar26 - pfVar27[1]) + fVar1 * (pfVar22[3] + *pfVar27);
      fVar19 = fVar4 * (*pfVar28 - pfVar21[3]) - fVar3 * (pfVar28[1] + *pfVar25);
      fVar18 = fVar3 * (*pfVar28 - pfVar21[3]) + fVar4 * (pfVar28[1] + *pfVar25);
      *pfVar26 = fVar19 + fVar16;
      pfVar22[3] = fVar18 + fVar15;
      *pfVar28 = fVar16 - fVar19;
      pfVar28[1] = fVar15 - fVar18;
      fVar15 = fVar13 * (fVar5 + fVar6) + fVar17 * (fVar7 - fVar8);
      fVar6 = fVar13 * (fVar7 - fVar8) - fVar17 * (fVar5 + fVar6);
      fVar5 = fVar20 * (fVar9 + fVar10) + fVar14 * (fVar11 - fVar12);
      fVar7 = fVar20 * (fVar11 - fVar12) - fVar14 * (fVar9 + fVar10);
      *pfVar27 = fVar5 + fVar15;
      pfVar27[1] = fVar7 + fVar6;
      *pfVar25 = fVar15 - fVar5;
      pfVar21[3] = fVar6 - fVar7;
      fVar5 = *local_2c;
      fVar6 = pfVar23[-1];
      fVar7 = local_2c[1];
      fVar8 = *local_34;
      fVar9 = local_28[1];
      fVar10 = *local_30;
      fVar11 = local_30[1];
      fVar12 = *local_28;
      fVar15 = fVar3 * (*local_2c - pfVar23[-1]) - fVar4 * (*local_34 + local_2c[1]);
      fVar4 = fVar4 * (*local_2c - pfVar23[-1]) + fVar3 * (*local_34 + local_2c[1]);
      pfVar27 = pfVar27 + 2;
      pfVar28 = pfVar28 + 2;
      fVar3 = fVar2 * (*local_30 - local_28[1]) - fVar1 * (local_30[1] + *local_28);
      fVar1 = fVar1 * (*local_30 - local_28[1]) + fVar2 * (local_30[1] + *local_28);
      *local_2c = fVar3 + fVar15;
      local_2c[1] = fVar1 + fVar4;
      *local_30 = fVar15 - fVar3;
      local_30[1] = fVar4 - fVar1;
      fVar1 = fVar14 * (fVar5 + fVar6) + fVar20 * (fVar7 - fVar8);
      fVar3 = fVar14 * (fVar7 - fVar8) - fVar20 * (fVar5 + fVar6);
      fVar2 = fVar17 * (fVar9 + fVar10) + fVar13 * (fVar11 - fVar12);
      fVar4 = fVar17 * (fVar11 - fVar12) - fVar13 * (fVar9 + fVar10);
      *local_34 = fVar2 + fVar1;
      pfVar23[-1] = fVar4 + fVar3;
      *local_28 = fVar1 - fVar2;
      local_28[1] = fVar3 - fVar4;
      local_30 = local_30 + -2;
      local_2c = local_2c + -2;
      local_8 = local_8 - 1;
      pfVar21 = pfVar25;
      pfVar22 = pfVar26;
      local_28 = local_28 + -2;
      local_10 = local_10 + 4;
      local_c = local_c + -4;
      pfVar23 = local_34;
    } while (local_8 != 0);
  }
  fVar1 = *(float *)(param_3 + iVar24 * 8);
  fVar2 = *(float *)(param_3 + 4 + iVar24 * 8);
  fVar3 = param_2[iVar24];
  fVar4 = param_2[iVar24 * 5 + 1];
  fVar5 = param_2[iVar24 + 1];
  fVar6 = param_2[iVar24 * 5];
  fVar7 = param_2[iVar24 * 3];
  fVar8 = param_2[iVar24 * 7 + 1];
  fVar9 = param_2[iVar24 * 3 + 1];
  fVar10 = param_2[iVar24 * 7];
  fVar14 = fVar1 * (param_2[iVar24] - param_2[iVar24 * 5 + 1]) -
           fVar2 * (param_2[iVar24 + 1] + param_2[iVar24 * 5]);
  fVar13 = fVar2 * (param_2[iVar24] - param_2[iVar24 * 5 + 1]) +
           fVar1 * (param_2[iVar24 + 1] + param_2[iVar24 * 5]);
  fVar12 = fVar2 * (param_2[iVar24 * 3] - param_2[iVar24 * 7 + 1]) -
           fVar1 * (param_2[iVar24 * 7] + param_2[iVar24 * 3 + 1]);
  fVar11 = fVar1 * (param_2[iVar24 * 3] - param_2[iVar24 * 7 + 1]) +
           fVar2 * (param_2[iVar24 * 7] + param_2[iVar24 * 3 + 1]);
  param_2[iVar24] = fVar12 + fVar14;
  param_2[iVar24 + 1] = fVar11 + fVar13;
  param_2[iVar24 * 3] = fVar14 - fVar12;
  param_2[iVar24 * 3 + 1] = fVar13 - fVar11;
  fVar11 = fVar2 * (fVar3 + fVar4) - fVar1 * (fVar5 - fVar6);
  fVar4 = fVar1 * (fVar3 + fVar4) + fVar2 * (fVar5 - fVar6);
  fVar3 = fVar1 * (fVar7 + fVar8) - fVar2 * (fVar9 - fVar10);
  fVar1 = fVar2 * (fVar7 + fVar8) + fVar1 * (fVar9 - fVar10);
  param_2[iVar24 * 5] = fVar11 - fVar3;
  param_2[iVar24 * 5 + 1] = fVar4 - fVar1;
  param_2[iVar24 * 7] = fVar3 + fVar11;
  param_2[iVar24 * 7 + 1] = fVar1 + fVar4;
  return;
}



/* === FUN_3001a420 @ 0x3001a420 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001a420 @ 0x3001A420 */



void __cdecl FUN_3001a420(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == 0x80) {
    iVar1 = param_4 + -0x20 + param_3 * 4;
    FUN_3001a560(param_2,iVar1);
    FUN_3001ab60(param_2 + 0x20,param_4 + -0x80 + param_3 * 4);
    FUN_3001a560(param_2 + 0x40,iVar1);
    FUN_3001a560(param_2 + 0x60,iVar1);
    return;
  }
  iVar1 = param_4 + -0x40 + param_3 * 4;
  FUN_3001b260(param_2,iVar1);
  FUN_3001b490(param_2 + 0x10,iVar1);
  FUN_3001b260(param_2 + 0x20,iVar1);
  FUN_3001b260(param_2 + 0x30,iVar1);
  return;
}



/* === FUN_3001a4c0 @ 0x3001a4c0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001a4c0 @ 0x3001A4C0 */



void __cdecl FUN_3001a4c0(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0x80) {
    iVar1 = param_4 + -0x20 + param_3 * 4;
    FUN_3001a560(param_2,iVar1);
    iVar2 = param_4 + -0x80 + param_3 * 4;
    FUN_3001ab60(param_2 + 0x20,iVar2);
    FUN_3001a560(param_2 + 0x40,iVar1);
    FUN_3001ab60(param_2 + 0x60,iVar2);
    return;
  }
  iVar1 = param_4 + -0x40 + param_3 * 4;
  FUN_3001b260(param_2,iVar1);
  FUN_3001b490(param_2 + 0x10,iVar1);
  FUN_3001b260(param_2 + 0x20,iVar1);
  FUN_3001b490(param_2 + 0x30,iVar1);
  return;
}



/* === FUN_3001a560 @ 0x3001a560 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001a560 @ 0x3001A560 */



void __cdecl FUN_3001a560(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar8 = fVar1 * *(float *)(param_2 + 8);
  fVar17 = fVar8 + *(float *)(param_2 + 8);
  fVar19 = param_1[0x18] + param_1[8] + *param_1 + param_1[0x10];
  fVar21 = param_1[9] + param_1[0x19] + param_1[1] + param_1[0x11];
  fVar20 = (*param_1 + param_1[0x10]) - (param_1[0x18] + param_1[8]);
  fVar22 = (param_1[1] + param_1[0x11]) - (param_1[9] + param_1[0x19]);
  fVar23 = (*param_1 - param_1[0x10]) - (param_1[9] - param_1[0x19]);
  fVar24 = (param_1[8] - param_1[0x18]) + (param_1[1] - param_1[0x11]);
  fVar25 = (param_1[9] - param_1[0x19]) + (*param_1 - param_1[0x10]);
  fVar26 = (param_1[1] - param_1[0x11]) - (param_1[8] - param_1[0x18]);
  fVar27 = param_1[0x1a] + param_1[10] + param_1[0x12] + param_1[2];
  fVar29 = param_1[0xb] + param_1[0x1b] + param_1[3] + param_1[0x13];
  fVar28 = (param_1[0x12] + param_1[2]) - (param_1[0x1a] + param_1[10]);
  fVar6 = (param_1[3] + param_1[0x13]) - (param_1[0xb] + param_1[0x1b]);
  fVar3 = (param_1[2] - param_1[0x12]) - (param_1[0xb] - param_1[0x1b]);
  fVar2 = (param_1[10] - param_1[0x1a]) + (param_1[3] - param_1[0x13]);
  fVar16 = fVar3 * fVar17 - fVar2 * fVar8;
  fVar15 = fVar3 * fVar8 + fVar2 * fVar17;
  fVar2 = (param_1[0xb] - param_1[0x1b]) + (param_1[2] - param_1[0x12]);
  fVar3 = (param_1[3] - param_1[0x13]) - (param_1[10] - param_1[0x1a]);
  fVar14 = fVar2 * fVar8 - fVar3 * fVar17;
  fVar13 = fVar3 * fVar8 + fVar2 * fVar17;
  fVar30 = param_1[0x1c] + param_1[0xc] + param_1[0x14] + param_1[4];
  fVar32 = param_1[0xd] + param_1[0x1d] + param_1[5] + param_1[0x15];
  fVar31 = (param_1[0x14] + param_1[4]) - (param_1[0x1c] + param_1[0xc]);
  fVar33 = (param_1[5] + param_1[0x15]) - (param_1[0xd] + param_1[0x1d]);
  fVar4 = (param_1[4] - param_1[0x14]) - (param_1[0xd] - param_1[0x1d]);
  fVar3 = (param_1[0xc] - param_1[0x1c]) + (param_1[5] - param_1[0x15]);
  fVar2 = (fVar4 - fVar3) * fVar1;
  fVar3 = (fVar3 + fVar4) * fVar1;
  fVar7 = (param_1[0xd] - param_1[0x1d]) + (param_1[4] - param_1[0x14]);
  fVar5 = (param_1[5] - param_1[0x15]) - (param_1[0xc] - param_1[0x1c]);
  fVar4 = (fVar5 + fVar7) * fVar1;
  fVar5 = (fVar5 - fVar7) * fVar1;
  fVar34 = param_1[0xe] + param_1[0x1e] + param_1[6] + param_1[0x16];
  fVar36 = param_1[0x1f] + param_1[0xf] + param_1[0x17] + param_1[7];
  fVar35 = (param_1[6] + param_1[0x16]) - (param_1[0xe] + param_1[0x1e]);
  fVar7 = (param_1[0x17] + param_1[7]) - (param_1[0x1f] + param_1[0xf]);
  fVar9 = (param_1[6] - param_1[0x16]) - (param_1[0xf] - param_1[0x1f]);
  fVar10 = (param_1[0xe] - param_1[0x1e]) + (param_1[7] - param_1[0x17]);
  fVar12 = fVar9 * fVar8 - fVar10 * fVar17;
  fVar11 = fVar10 * fVar8 + fVar9 * fVar17;
  fVar9 = (param_1[0xf] - param_1[0x1f]) + (param_1[6] - param_1[0x16]);
  fVar18 = (param_1[7] - param_1[0x17]) - (param_1[0xe] - param_1[0x1e]);
  fVar10 = fVar9 * fVar17 - fVar18 * fVar8;
  fVar8 = fVar9 * fVar8 + fVar18 * fVar17;
  fVar17 = fVar25 - fVar4;
  fVar18 = fVar26 - fVar5;
  fVar4 = fVar4 + fVar25;
  fVar5 = fVar5 + fVar26;
  fVar25 = fVar14 - fVar10;
  fVar9 = fVar13 - fVar8;
  fVar10 = fVar10 + fVar14;
  fVar8 = fVar8 + fVar13;
  param_1[0x18] = fVar25 + fVar17;
  param_1[0x19] = fVar9 + fVar18;
  param_1[0x1a] = fVar17 - fVar25;
  param_1[0x1b] = fVar18 - fVar9;
  param_1[0x1c] = fVar4 - fVar8;
  param_1[0x1d] = fVar10 + fVar5;
  param_1[0x1e] = fVar8 + fVar4;
  param_1[0x1f] = fVar5 - fVar10;
  fVar4 = fVar2 + fVar23;
  fVar5 = fVar3 + fVar24;
  fVar23 = fVar23 - fVar2;
  fVar24 = fVar24 - fVar3;
  fVar2 = fVar12 + fVar16;
  fVar3 = fVar11 + fVar15;
  fVar16 = fVar16 - fVar12;
  fVar15 = fVar15 - fVar11;
  param_1[0x10] = fVar2 + fVar4;
  param_1[0x11] = fVar3 + fVar5;
  param_1[0x12] = fVar4 - fVar2;
  param_1[0x13] = fVar5 - fVar3;
  param_1[0x14] = fVar23 - fVar15;
  param_1[0x15] = fVar16 + fVar24;
  param_1[0x16] = fVar15 + fVar23;
  param_1[0x17] = fVar24 - fVar16;
  fVar4 = fVar28 - fVar7;
  fVar3 = fVar35 + fVar6;
  fVar2 = (fVar4 - fVar3) * fVar1;
  fVar3 = (fVar3 + fVar4) * fVar1;
  fVar7 = fVar7 + fVar28;
  fVar6 = fVar6 - fVar35;
  fVar4 = (fVar7 - fVar6) * fVar1;
  fVar1 = (fVar6 + fVar7) * fVar1;
  fVar5 = fVar20 - fVar33;
  fVar6 = fVar31 + fVar22;
  fVar33 = fVar33 + fVar20;
  fVar22 = fVar22 - fVar31;
  param_1[8] = fVar2 + fVar5;
  param_1[9] = fVar3 + fVar6;
  param_1[10] = fVar5 - fVar2;
  param_1[0xb] = fVar6 - fVar3;
  param_1[0xc] = fVar33 - fVar1;
  param_1[0xd] = fVar4 + fVar22;
  param_1[0xe] = fVar1 + fVar33;
  param_1[0xf] = fVar22 - fVar4;
  fVar1 = fVar30 + fVar19;
  fVar3 = fVar32 + fVar21;
  fVar19 = fVar19 - fVar30;
  fVar21 = fVar21 - fVar32;
  fVar2 = fVar34 + fVar27;
  fVar4 = fVar36 + fVar29;
  fVar27 = fVar27 - fVar34;
  fVar29 = fVar29 - fVar36;
  *param_1 = fVar2 + fVar1;
  param_1[1] = fVar4 + fVar3;
  param_1[2] = fVar1 - fVar2;
  param_1[3] = fVar3 - fVar4;
  param_1[4] = fVar19 - fVar29;
  param_1[5] = fVar27 + fVar21;
  param_1[6] = fVar29 + fVar19;
  param_1[7] = fVar21 - fVar27;
  return;
}



/* === FUN_3001ab60 @ 0x3001ab60 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001ab60 @ 0x3001AB60 */



void __cdecl FUN_3001ab60(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar2 = *(float *)(param_2 + 0x10);
  fVar7 = *(float *)(param_2 + 0x1c);
  fVar3 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 0x20);
  fVar5 = *(float *)(param_2 + 0x24);
  fVar8 = ((param_1[8] - param_1[0x19]) - (param_1[9] + param_1[0x18])) * fVar1;
  fVar9 = (param_1[9] + param_1[0x18] + (param_1[8] - param_1[0x19])) * fVar1;
  fVar22 = fVar8 + (*param_1 - param_1[0x11]);
  fVar23 = fVar9 + param_1[0x10] + param_1[1];
  fVar8 = (*param_1 - param_1[0x11]) - fVar8;
  fVar9 = (param_1[0x10] + param_1[1]) - fVar9;
  fVar10 = ((param_1[0x19] + param_1[8]) - (param_1[9] - param_1[0x18])) * fVar1;
  fVar11 = ((param_1[9] - param_1[0x18]) + param_1[0x19] + param_1[8]) * fVar1;
  fVar24 = (param_1[0x11] + *param_1) - fVar11;
  fVar25 = fVar10 + (param_1[1] - param_1[0x10]);
  fVar11 = fVar11 + param_1[0x11] + *param_1;
  fVar10 = (param_1[1] - param_1[0x10]) - fVar10;
  fVar16 = (param_1[2] - param_1[0x13]) * fVar2 - (param_1[3] + param_1[0x12]) * fVar3;
  fVar15 = (param_1[3] + param_1[0x12]) * fVar2 + (param_1[2] - param_1[0x13]) * fVar3;
  fVar13 = (param_1[10] - param_1[0x1b]) * fVar7 - (param_1[0xb] + param_1[0x1a]) * fVar6;
  fVar12 = (param_1[10] - param_1[0x1b]) * fVar6 + (param_1[0xb] + param_1[0x1a]) * fVar7;
  fVar26 = fVar13 + fVar16;
  fVar27 = fVar12 + fVar15;
  fVar16 = fVar16 - fVar13;
  fVar15 = fVar15 - fVar12;
  fVar17 = (param_1[0x13] + param_1[2]) * fVar6 - (param_1[3] - param_1[0x12]) * fVar7;
  fVar13 = (param_1[3] - param_1[0x12]) * fVar6 + (param_1[0x13] + param_1[2]) * fVar7;
  fVar12 = (param_1[0x1b] + param_1[10]) * fVar2 + (param_1[0xb] - param_1[0x1a]) * fVar3;
  fVar14 = (param_1[0xb] - param_1[0x1a]) * fVar2 - (param_1[0x1b] + param_1[10]) * fVar3;
  fVar28 = fVar17 - fVar12;
  fVar29 = fVar13 - fVar14;
  fVar12 = fVar12 + fVar17;
  fVar14 = fVar14 + fVar13;
  fVar21 = (param_1[4] - param_1[0x15]) * fVar4 - (param_1[5] + param_1[0x14]) * fVar5;
  fVar17 = (param_1[5] + param_1[0x14]) * fVar4 + (param_1[4] - param_1[0x15]) * fVar5;
  fVar18 = (param_1[0xc] - param_1[0x1d]) * fVar5 - (param_1[0xd] + param_1[0x1c]) * fVar4;
  fVar13 = (param_1[0xc] - param_1[0x1d]) * fVar4 + (param_1[0xd] + param_1[0x1c]) * fVar5;
  fVar30 = fVar18 + fVar21;
  fVar31 = fVar13 + fVar17;
  fVar21 = fVar21 - fVar18;
  fVar17 = fVar17 - fVar13;
  fVar18 = (param_1[0x15] + param_1[4]) * fVar5 - (param_1[5] - param_1[0x14]) * fVar4;
  fVar13 = (param_1[0x15] + param_1[4]) * fVar4 + (param_1[5] - param_1[0x14]) * fVar5;
  fVar20 = (param_1[0x1d] + param_1[0xc]) * fVar4 - (param_1[0xd] - param_1[0x1c]) * fVar5;
  fVar19 = (param_1[0xd] - param_1[0x1c]) * fVar4 + (param_1[0x1d] + param_1[0xc]) * fVar5;
  fVar32 = fVar18 - fVar20;
  fVar33 = fVar13 - fVar19;
  fVar20 = fVar20 + fVar18;
  fVar19 = fVar19 + fVar13;
  fVar35 = (param_1[6] - param_1[0x17]) * fVar6 - (param_1[7] + param_1[0x16]) * fVar7;
  fVar18 = (param_1[7] + param_1[0x16]) * fVar6 + (param_1[6] - param_1[0x17]) * fVar7;
  fVar5 = (param_1[0xe] - param_1[0x1f]) * fVar3 - (param_1[0x1e] + param_1[0xf]) * fVar2;
  fVar4 = (param_1[0xe] - param_1[0x1f]) * fVar2 + (param_1[0x1e] + param_1[0xf]) * fVar3;
  fVar36 = fVar5 + fVar35;
  fVar34 = fVar4 + fVar18;
  fVar35 = fVar35 - fVar5;
  fVar18 = fVar18 - fVar4;
  fVar4 = (param_1[7] - param_1[0x16]) * fVar2 + (param_1[0x17] + param_1[6]) * fVar3;
  fVar13 = (param_1[7] - param_1[0x16]) * fVar3 - (param_1[0x17] + param_1[6]) * fVar2;
  fVar3 = (param_1[0x1f] + param_1[0xe]) * fVar7 - (param_1[0xf] - param_1[0x1e]) * fVar6;
  fVar2 = (param_1[0x1f] + param_1[0xe]) * fVar6 + (param_1[0xf] - param_1[0x1e]) * fVar7;
  fVar7 = fVar3 + fVar4;
  fVar5 = fVar2 + fVar13;
  fVar4 = fVar4 - fVar3;
  fVar13 = fVar13 - fVar2;
  fVar2 = fVar30 + fVar22;
  fVar6 = fVar31 + fVar23;
  fVar3 = fVar36 + fVar26;
  fVar37 = fVar34 + fVar27;
  *param_1 = fVar3 + fVar2;
  param_1[1] = fVar37 + fVar6;
  param_1[2] = fVar2 - fVar3;
  param_1[3] = fVar6 - fVar37;
  fVar22 = fVar22 - fVar30;
  fVar23 = fVar23 - fVar31;
  fVar26 = fVar26 - fVar36;
  fVar27 = fVar27 - fVar34;
  param_1[4] = fVar22 - fVar27;
  param_1[5] = fVar26 + fVar23;
  param_1[6] = fVar27 + fVar22;
  param_1[7] = fVar23 - fVar26;
  fVar22 = fVar8 - fVar17;
  fVar23 = fVar21 + fVar9;
  fVar6 = fVar16 - fVar18;
  fVar3 = fVar35 + fVar15;
  fVar2 = (fVar6 - fVar3) * fVar1;
  fVar3 = (fVar3 + fVar6) * fVar1;
  param_1[8] = fVar2 + fVar22;
  param_1[9] = fVar3 + fVar23;
  param_1[10] = fVar22 - fVar2;
  param_1[0xb] = fVar23 - fVar3;
  fVar17 = fVar17 + fVar8;
  fVar9 = fVar9 - fVar21;
  fVar18 = fVar18 + fVar16;
  fVar15 = fVar15 - fVar35;
  fVar2 = (fVar18 - fVar15) * fVar1;
  fVar3 = (fVar15 + fVar18) * fVar1;
  param_1[0xc] = fVar17 - fVar3;
  param_1[0xd] = fVar2 + fVar9;
  param_1[0xe] = fVar3 + fVar17;
  param_1[0xf] = fVar9 - fVar2;
  fVar2 = fVar32 + fVar24;
  fVar6 = fVar33 + fVar25;
  fVar3 = fVar28 - fVar7;
  fVar8 = fVar29 - fVar5;
  param_1[0x10] = fVar3 + fVar2;
  param_1[0x11] = fVar8 + fVar6;
  param_1[0x12] = fVar2 - fVar3;
  param_1[0x13] = fVar6 - fVar8;
  fVar24 = fVar24 - fVar32;
  fVar25 = fVar25 - fVar33;
  fVar7 = fVar7 + fVar28;
  fVar5 = fVar5 + fVar29;
  param_1[0x14] = fVar24 - fVar5;
  param_1[0x15] = fVar7 + fVar25;
  param_1[0x16] = fVar5 + fVar24;
  param_1[0x17] = fVar25 - fVar7;
  fVar6 = fVar11 - fVar19;
  fVar7 = fVar20 + fVar10;
  fVar3 = fVar13 + fVar12;
  fVar5 = fVar14 - fVar4;
  fVar2 = (fVar3 - fVar5) * fVar1;
  fVar3 = (fVar5 + fVar3) * fVar1;
  param_1[0x18] = fVar2 + fVar6;
  param_1[0x19] = fVar3 + fVar7;
  param_1[0x1a] = fVar6 - fVar2;
  param_1[0x1b] = fVar7 - fVar3;
  fVar19 = fVar19 + fVar11;
  fVar10 = fVar10 - fVar20;
  fVar12 = fVar12 - fVar13;
  fVar4 = fVar4 + fVar14;
  fVar2 = (fVar12 - fVar4) * fVar1;
  fVar1 = (fVar4 + fVar12) * fVar1;
  param_1[0x1c] = fVar19 - fVar1;
  param_1[0x1d] = fVar2 + fVar10;
  param_1[0x1e] = fVar1 + fVar19;
  param_1[0x1f] = fVar10 - fVar2;
  return;
}



/* === FUN_3001b260 @ 0x3001b260 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b260 @ 0x3001B260 */



void __cdecl FUN_3001b260(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar5 = param_1[4] + param_1[0xc] + param_1[8] + *param_1;
  fVar7 = param_1[5] + param_1[0xd] + param_1[1] + param_1[9];
  fVar6 = (param_1[8] + *param_1) - (param_1[4] + param_1[0xc]);
  fVar8 = (param_1[1] + param_1[9]) - (param_1[5] + param_1[0xd]);
  fVar9 = (*param_1 - param_1[8]) - (param_1[5] - param_1[0xd]);
  fVar10 = (param_1[4] - param_1[0xc]) + (param_1[1] - param_1[9]);
  fVar11 = (param_1[5] - param_1[0xd]) + (*param_1 - param_1[8]);
  fVar12 = (param_1[1] - param_1[9]) - (param_1[4] - param_1[0xc]);
  fVar13 = param_1[6] + param_1[0xe] + param_1[2] + param_1[10];
  fVar15 = param_1[7] + param_1[0xf] + param_1[3] + param_1[0xb];
  fVar14 = (param_1[2] + param_1[10]) - (param_1[6] + param_1[0xe]);
  fVar16 = (param_1[3] + param_1[0xb]) - (param_1[7] + param_1[0xf]);
  fVar4 = (param_1[2] - param_1[10]) - (param_1[7] - param_1[0xf]);
  fVar3 = (param_1[6] - param_1[0xe]) + (param_1[3] - param_1[0xb]);
  fVar17 = (param_1[7] - param_1[0xf]) + (param_1[2] - param_1[10]);
  fVar18 = (param_1[3] - param_1[0xb]) - (param_1[6] - param_1[0xe]);
  fVar2 = (fVar4 - fVar3) * fVar1;
  fVar3 = (fVar3 + fVar4) * fVar1;
  fVar4 = (fVar17 - fVar18) * fVar1;
  fVar1 = (fVar18 + fVar17) * fVar1;
  param_1[8] = fVar2 + fVar9;
  param_1[9] = fVar3 + fVar10;
  param_1[10] = fVar9 - fVar2;
  param_1[0xb] = fVar10 - fVar3;
  param_1[0xc] = fVar11 - fVar1;
  param_1[0xd] = fVar4 + fVar12;
  param_1[0xe] = fVar1 + fVar11;
  param_1[0xf] = fVar12 - fVar4;
  *param_1 = fVar13 + fVar5;
  param_1[1] = fVar15 + fVar7;
  param_1[2] = fVar5 - fVar13;
  param_1[3] = fVar7 - fVar15;
  param_1[4] = fVar6 - fVar16;
  param_1[5] = fVar14 + fVar8;
  param_1[6] = fVar16 + fVar6;
  param_1[7] = fVar8 - fVar14;
  return;
}



/* === FUN_3001b490 @ 0x3001b490 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b490 @ 0x3001B490 */



void __cdecl FUN_3001b490(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_2 + 0x10);
  fVar9 = *(float *)(param_2 + 0x14);
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[9];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[8];
  fVar10 = ((param_1[4] - param_1[0xd]) - (param_1[0xc] + param_1[5])) * fVar1;
  fVar11 = (param_1[0xc] + param_1[5] + (param_1[4] - param_1[0xd])) * fVar1;
  fVar12 = ((param_1[0xd] + param_1[4]) - (param_1[5] - param_1[0xc])) * fVar1;
  fVar1 = ((param_1[5] - param_1[0xc]) + param_1[0xd] + param_1[4]) * fVar1;
  fVar16 = (param_1[2] - param_1[0xb]) * fVar8 - (param_1[3] + param_1[10]) * fVar9;
  fVar13 = (param_1[3] + param_1[10]) * fVar8 + (param_1[2] - param_1[0xb]) * fVar9;
  fVar18 = (param_1[0xb] + param_1[2]) * fVar9 - (param_1[3] - param_1[10]) * fVar8;
  fVar17 = (param_1[0xb] + param_1[2]) * fVar8 + (param_1[3] - param_1[10]) * fVar9;
  fVar15 = (param_1[6] - param_1[0xf]) * fVar9 - (param_1[7] + param_1[0xe]) * fVar8;
  fVar14 = (param_1[6] - param_1[0xf]) * fVar8 + (param_1[7] + param_1[0xe]) * fVar9;
  fVar19 = (param_1[0xf] + param_1[6]) * fVar8 - (param_1[7] - param_1[0xe]) * fVar9;
  fVar8 = (param_1[7] - param_1[0xe]) * fVar8 + (param_1[0xf] + param_1[6]) * fVar9;
  fVar20 = fVar10 + (fVar2 - param_1[9]);
  fVar22 = fVar11 + param_1[8] + fVar3;
  fVar21 = fVar15 + fVar16;
  fVar9 = fVar14 + fVar13;
  *param_1 = fVar21 + fVar20;
  param_1[1] = fVar9 + fVar22;
  param_1[2] = fVar20 - fVar21;
  param_1[3] = fVar22 - fVar9;
  fVar10 = (fVar2 - param_1[9]) - fVar10;
  fVar11 = (param_1[8] + fVar3) - fVar11;
  fVar16 = fVar16 - fVar15;
  fVar13 = fVar13 - fVar14;
  param_1[4] = fVar10 - fVar13;
  param_1[5] = fVar16 + fVar11;
  param_1[6] = fVar13 + fVar10;
  param_1[7] = fVar11 - fVar16;
  fVar2 = (fVar4 + fVar5) - fVar1;
  fVar9 = fVar12 + (fVar6 - fVar7);
  fVar3 = fVar18 - fVar19;
  fVar10 = fVar17 - fVar8;
  param_1[8] = fVar3 + fVar2;
  param_1[9] = fVar10 + fVar9;
  param_1[10] = fVar2 - fVar3;
  param_1[0xb] = fVar9 - fVar10;
  fVar1 = fVar1 + fVar4 + fVar5;
  fVar12 = (fVar6 - fVar7) - fVar12;
  fVar19 = fVar19 + fVar18;
  fVar8 = fVar8 + fVar17;
  param_1[0xc] = fVar1 - fVar8;
  param_1[0xd] = fVar19 + fVar12;
  param_1[0xe] = fVar8 + fVar1;
  param_1[0xf] = fVar12 - fVar19;
  return;
}



/* === FUN_3001b700 @ 0x3001b700 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b700 @ 0x3001B700 */



void __cdecl FUN_3001b700(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = *param_1;
  fVar4 = param_1[4];
  fVar5 = param_1[1];
  fVar6 = param_1[5];
  fVar7 = param_1[2];
  fVar8 = param_1[6];
  fVar9 = param_1[3];
  *param_1 = param_1[6] + param_1[2] + fVar1 + param_1[4];
  param_1[1] = param_1[3] + param_1[7] + fVar2 + param_1[5];
  param_1[4] = (fVar1 + param_1[4]) - (param_1[6] + param_1[2]);
  param_1[5] = (fVar2 + param_1[5]) - (param_1[3] + param_1[7]);
  param_1[2] = (fVar3 - fVar4) - (fVar9 - param_1[7]);
  param_1[3] = (fVar7 - fVar8) + (fVar5 - fVar6);
  param_1[6] = (fVar9 - param_1[7]) + (fVar3 - fVar4);
  param_1[7] = (fVar5 - fVar6) - (fVar7 - fVar8);
  return;
}



/* === FUN_3001b7b0 @ 0x3001b7b0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b7b0 @ 0x3001B7B0 */



void __cdecl FUN_3001b7b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = *param_1;
  fVar4 = param_1[4];
  fVar5 = param_1[1];
  fVar6 = param_1[5];
  fVar7 = param_1[2];
  fVar8 = param_1[6];
  fVar9 = param_1[3];
  *param_1 = param_1[6] + param_1[2] + fVar1 + param_1[4];
  param_1[1] = param_1[3] + param_1[7] + fVar2 + param_1[5];
  param_1[4] = (fVar1 + param_1[4]) - (param_1[6] + param_1[2]);
  param_1[5] = (fVar2 + param_1[5]) - (param_1[3] + param_1[7]);
  param_1[2] = (fVar9 - param_1[7]) + (fVar3 - fVar4);
  param_1[3] = (fVar5 - fVar6) - (fVar7 - fVar8);
  param_1[6] = (fVar3 - fVar4) - (fVar9 - param_1[7]);
  param_1[7] = (fVar7 - fVar8) + (fVar5 - fVar6);
  return;
}



/* === FUN_3001b860 @ 0x3001b860 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b860 @ 0x3001B860 */



void __cdecl FUN_3001b860(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  *param_1 = *param_1 + param_1[2];
  fVar2 = param_1[3];
  param_1[3] = param_1[1] - param_1[3];
  param_1[1] = fVar2 + param_1[1];
  param_1[2] = fVar1 - param_1[2];
  return;
}



/* === FUN_3001b890 @ 0x3001b890 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b890 @ 0x3001B890 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3001b890(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_1 >> 1;
  iVar5 = (param_3 * 2) / iVar9;
  if (2 < iVar9) {
    iVar1 = iVar5 * 4;
    iVar5 = iVar5 * -4;
    iVar10 = param_4 + param_3 * 4;
    uVar8 = iVar9 - 1U >> 1;
    pfVar6 = param_2 + param_1 + -2;
    do {
      pfVar7 = param_2 + 2;
      fVar3 = _DAT_30033fc0 - *(float *)(iVar10 + iVar5);
      iVar10 = iVar10 + iVar5;
      fVar2 = *(float *)(param_4 + iVar1);
      param_4 = param_4 + iVar1;
      uVar8 = uVar8 - 1;
      fVar4 = (*pfVar7 - *pfVar6) * fVar3 - (pfVar6[1] + param_2[3]) * fVar2;
      fVar2 = (pfVar6[1] + param_2[3]) * fVar3 + (*pfVar7 - *pfVar6) * fVar2;
      *pfVar7 = *pfVar7 - fVar4;
      param_2[3] = param_2[3] - fVar2;
      *pfVar6 = fVar4 + *pfVar6;
      pfVar6[1] = pfVar6[1] - fVar2;
      pfVar6 = pfVar6 + -2;
      param_2 = pfVar7;
    } while (uVar8 != 0);
  }
  return;
}



/* === FUN_3001b950 @ 0x3001b950 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b950 @ 0x3001B950 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3001b950(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_1 >> 1;
  iVar5 = (param_3 * 2) / iVar9;
  if (2 < iVar9) {
    iVar1 = iVar5 * 4;
    iVar5 = iVar5 * -4;
    iVar10 = param_4 + param_3 * 4;
    uVar8 = iVar9 - 1U >> 1;
    pfVar6 = param_2 + param_1 + -2;
    do {
      pfVar7 = param_2 + 2;
      fVar3 = _DAT_30033fc0 - *(float *)(iVar10 + iVar5);
      iVar10 = iVar10 + iVar5;
      fVar2 = *(float *)(param_4 + iVar1);
      param_4 = param_4 + iVar1;
      uVar8 = uVar8 - 1;
      fVar4 = (*pfVar7 - *pfVar6) * fVar3 + (pfVar6[1] + param_2[3]) * fVar2;
      fVar2 = (pfVar6[1] + param_2[3]) * fVar3 - (*pfVar7 - *pfVar6) * fVar2;
      *pfVar7 = *pfVar7 - fVar4;
      param_2[3] = param_2[3] - fVar2;
      *pfVar6 = fVar4 + *pfVar6;
      pfVar6[1] = pfVar6[1] - fVar2;
      pfVar6 = pfVar6 + -2;
      param_2 = pfVar7;
    } while (uVar8 != 0);
  }
  return;
}



/* === FUN_3001ba10 @ 0x3001ba10 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001ba10 @ 0x3001BA10 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_3001ba10(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar6 = param_1 * param_2 + 1 >> 1;
  puVar2 = (uint *)radmalloc(((~param_3 & 1) << 1 | 1) * 0x2000 + 0x2688);
  if (puVar2 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar7 = puVar2;
  for (iVar4 = 0x9a2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar2[4] = (uint)(puVar2 + 0x9a2);
  puVar2[3] = (uint)(puVar2 + 0x11a2);
  puVar2[0x9a1] = 0x3000;
  if (param_1 < 0xac44) {
    *puVar2 = (-(uint)(param_1 < 0x5622) & 0xfffffe00) + 0x400;
  }
  else {
    *puVar2 = 0x800;
  }
  uVar3 = *puVar2 * param_2;
  puVar2[2] = uVar3 >> 4;
  *puVar2 = uVar3;
  param_2 = 0;
  puVar5 = &DAT_3003e5f4;
  puVar2[1] = (uint)(_DAT_30033fe8 / SQRT((float)uVar3));
  puVar7 = puVar2 + 7;
  do {
    uVar1 = *puVar5;
    if (uVar6 <= uVar1) break;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
    *puVar7 = (uVar1 * (uVar3 >> 1)) / uVar6;
    puVar7 = puVar7 + 1;
  } while (puVar5 < &DAT_3003e658);
  puVar2[6] = param_2;
  puVar2[param_2 + 7] = uVar3 >> 1;
  puVar2[0x21] = 0;
  puVar2[5] = 1;
  return puVar2;
}



/* === FUN_3001bb30 @ 0x3001bb30 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001bb30 @ 0x3001BB30 */



void FUN_3001bb30(int *param_1,int *param_2,int *param_3,int param_4,int *param_5)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  uVar3 = FUN_3001bc20();
  uVar5 = 0;
  if (param_1[5] == 0) {
    uVar6 = param_1[2];
    if (uVar6 != 0) {
      piVar8 = param_1 + 0x921;
      do {
        psVar1 = (short *)(param_1[4] + uVar5 * 2);
        iVar2 = *piVar8;
        iVar4 = uVar6 - uVar5;
        iVar7 = (int)*psVar1 * uVar5;
        uVar5 = uVar5 + 1;
        piVar8 = (int *)((int)piVar8 + 2);
        *psVar1 = (short)((uint)(iVar4 * (short)iVar2 + iVar7) / uVar6);
      } while (uVar5 < uVar6);
    }
  }
  else {
    param_1[5] = 0;
  }
  uVar5 = param_1[2];
  piVar8 = (int *)(param_1[4] + (*param_1 - uVar5) * 2);
  piVar9 = param_1 + 0x921;
  for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar9 = (char)*piVar8;
    piVar8 = (int *)((int)piVar8 + 1);
    piVar9 = (int *)((int)piVar9 + 1);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (param_1[2] * 0x7fffffff + *param_1) * 2;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = param_1[4];
  }
  if (param_5 != (int *)0x0) {
    *param_5 = uVar3 + param_4;
  }
  return;
}



/* === FUN_3001bc20 @ 0x3001bc20 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001bc20 @ 0x3001BC20 */



uint FUN_3001bc20(void)

{
  short sVar1;
  short sVar2;
  sbyte sVar3;
  ushort uVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  uint *puVar19;
  float10 fVar20;
  uint uStack00000004;
  int iStack00000008;
  uint *puStack0000000c;
  uint in_stack_00006084;
  float in_stack_00006088;
  int *in_stack_0000608c;
  undefined4 *in_stack_00006090;
  undefined2 *in_stack_00006094;
  uint *in_stack_00006098;
  int in_stack_0000609c;
  uint *in_stack_000060a0;
  
  FUN_3002c020();
  uVar16 = *in_stack_00006098;
  FUN_3001bfe0(uVar16 & 0x1fffffff);
  puVar13 = in_stack_00006098 + 2;
  uVar14 = in_stack_00006098[1] >> 0x1a;
  uVar12 = 6;
  puStack0000000c = puVar13;
  FUN_3001bfe0((in_stack_00006098[1] & 0x3ffffff) << 3 | uVar16 >> 0x1d);
  puVar19 = puStack0000000c;
  if (in_stack_0000609c != 0) {
    pfVar6 = (float *)&stack0x0000001c;
    uStack00000004 = in_stack_0000609c;
    do {
      if (uVar12 < 8) {
        uVar14 = *puVar13 >> (8U - (char)uVar12 & 0x1f);
        uVar12 = uVar12 + 0x18;
        puVar13 = puVar13 + 1;
      }
      else {
        uVar14 = uVar14 >> 8;
        uVar12 = uVar12 - 8;
      }
      fVar20 = (float10)FUN_3002c050();
      *pfVar6 = (float)fVar20;
      pfVar6 = pfVar6 + 1;
      uStack00000004 = uStack00000004 + -1;
      puVar19 = puVar13;
    } while (uStack00000004 != 0);
  }
  puStack0000000c = puVar19;
  uVar16 = 2;
  uStack00000004 = 2;
  if (2 < in_stack_00006084) {
    do {
      if (uVar12 == 0) {
        uVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        uVar12 = 0x1f;
        puStack0000000c = puVar13;
      }
      else {
        uVar12 = uVar12 - 1;
      }
      uVar15 = uVar14 >> 1;
      if ((uVar14 & 1) == 0) {
        uVar10 = uVar16 + 8;
      }
      else if (uVar12 < 4) {
        uVar16 = *puVar13;
        bVar7 = (byte)uVar12;
        puVar13 = puVar13 + 1;
        uVar12 = uVar12 + 0x1c;
        uVar10 = uStack00000004 +
                 (uint)(byte)(&DAT_3003e784)[(uVar16 << (bVar7 & 0x1f) | uVar15) & 0xf] * 8;
        uVar15 = uVar16 >> (4 - bVar7 & 0x1f);
        uVar16 = uStack00000004;
        puStack0000000c = puVar13;
      }
      else {
        uVar12 = uVar12 - 4;
        uVar10 = uVar16 + (uint)(byte)(&DAT_3003e784)[uVar15 & 0xf] * 8;
        uVar15 = uVar14 >> 5;
      }
      if (in_stack_00006084 < uVar10) {
        uVar10 = in_stack_00006084;
      }
      if (uVar12 < 4) {
        uVar14 = *puVar13 >> (4 - (byte)uVar12 & 0x1f);
        uVar15 = *puVar13 << ((byte)uVar12 & 0x1f) | uVar15;
        uVar12 = uVar12 + 0x1c;
        puVar13 = puVar13 + 1;
        uVar16 = uStack00000004;
        puStack0000000c = puVar13;
      }
      else {
        uVar14 = uVar15 >> 4;
        uVar12 = uVar12 - 4;
      }
      uVar15 = uVar15 & 0xf;
      if (uVar15 == 0) {
        puVar17 = (undefined4 *)(&stack0x00000080 + uVar16 * 2);
        for (uVar15 = (uVar10 - uVar16 & 0x7fffffff) >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        for (uVar15 = (uVar10 - uVar16) * 2 & 3; uVar16 = uVar10, uStack00000004 = uVar10,
            uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar17 = 0;
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        }
      }
      else if (uVar16 < uVar10) {
        iStack00000008 = uVar10 - uStack00000004;
        puVar18 = (ushort *)(&stack0x00000080 + uVar16 * 2);
        uVar16 = uStack00000004 + iStack00000008;
        do {
          uVar4 = (ushort)uVar14;
          sVar3 = (sbyte)uVar15;
          if (uVar12 < uVar15) {
            uVar14 = *puVar13 >> (sVar3 - (byte)uVar12 & 0x1f);
            *puVar18 = (ushort)(0xffffffff >> (0x20U - sVar3 & 0x1f)) &
                       ((ushort)(*puVar13 << ((byte)uVar12 & 0x1f)) | uVar4);
            iVar8 = 0x20 - uVar15;
            puVar13 = puStack0000000c + 1;
            puStack0000000c = puVar13;
          }
          else {
            uVar14 = uVar14 >> sVar3;
            *puVar18 = (ushort)(0xffffffff >> (0x20U - sVar3 & 0x1f)) & uVar4;
            iVar8 = -uVar15;
          }
          uVar12 = uVar12 + iVar8;
          if (*puVar18 != 0) {
            if (uVar12 == 0) {
              uVar10 = *puVar13;
              puVar13 = puVar13 + 1;
              uVar12 = 0x1f;
              puStack0000000c = puVar13;
            }
            else {
              uVar12 = uVar12 - 1;
              uVar10 = uVar14;
            }
            uVar14 = uVar10 >> 1;
            if ((uVar10 & 1) != 0) {
              *puVar18 = -*puVar18;
            }
          }
          puVar18 = puVar18 + 1;
          iStack00000008 = iStack00000008 + -1;
          uStack00000004 = uVar16;
        } while (iStack00000008 != 0);
      }
    } while (uVar16 < in_stack_00006084);
  }
  psVar9 = (short *)&stack0x00000084;
  pfVar6 = (float *)&stack0x00002088;
  if (in_stack_0000609c != 0) {
    pfVar11 = (float *)&stack0x0000001c;
    iStack00000008 = in_stack_0000609c;
    do {
      puVar19 = in_stack_000060a0 + 1;
      uVar16 = *in_stack_000060a0;
      pfVar5 = pfVar6;
      if (uVar16 < *puVar19) {
        do {
          pfVar6 = pfVar5;
          if (uVar16 != 0) {
            sVar1 = *psVar9;
            sVar2 = psVar9[1];
            pfVar6 = pfVar5 + 2;
            psVar9 = psVar9 + 2;
            *pfVar5 = (float)(int)sVar1 * *pfVar11;
            pfVar5[1] = (float)(int)sVar2 * *pfVar11;
          }
          uVar16 = uVar16 + 1;
          pfVar5 = pfVar6;
        } while (uVar16 < *puVar19);
      }
      pfVar11 = pfVar11 + 1;
      iStack00000008 = iStack00000008 + -1;
      in_stack_000060a0 = puVar19;
    } while (iStack00000008 != 0);
  }
  FUN_300173e0(in_stack_00006084,-1,(float *)&stack0x00002080,in_stack_0000608c,in_stack_00006090);
  FUN_3001c020(in_stack_00006094,(float *)&stack0x00002080,in_stack_00006088,in_stack_00006084);
  return (int)in_stack_00006098 * 0x1fffffff + (int)puVar13 & 0x1fffffff;
}



/* === FUN_3001bfe0 @ 0x3001bfe0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001bfe0 @ 0x3001BFE0 */



float10 __cdecl FUN_3001bfe0(uint param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(param_1 >> 5 & 0x77fffff) *
          (float10)*(double *)(&DAT_3003e798 + (param_1 & 0x1f) * 8);
  if ((param_1 & 0x10000000) != 0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}



/* === FUN_3001c020 @ 0x3001c020 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c020 @ 0x3001C020 */



void __cdecl FUN_3001c020(undefined2 *param_1,float *param_2,float param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar3 = param_4 >> 1;
  do {
    while( true ) {
      iVar1 = (int)ROUND(*param_2 * param_3);
      iVar2 = (int)ROUND(param_2[1] * param_3);
      param_2 = param_2 + 2;
      uVar4 = (undefined2)iVar2;
      if (iVar1 < 0x8000) break;
      *param_1 = 0x7fff;
      if (0x7fff < iVar2) goto LAB_3001c0c4;
      if (iVar2 < -0x8000) goto LAB_3001c0d6;
      param_1[1] = uVar4;
joined_r0x3001c0ce:
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 2;
      if (uVar3 == 0) {
        return;
      }
    }
    if (iVar1 < -0x8000) {
      *param_1 = 0x8000;
      if (0x7fff < iVar2) goto LAB_3001c0c4;
      if (iVar2 < -0x8000) goto LAB_3001c0d6;
      param_1[1] = uVar4;
    }
    else {
      *param_1 = (short)iVar1;
      if (0x7fff < iVar2) {
LAB_3001c0c4:
        param_1[1] = 0x7fff;
        goto joined_r0x3001c0ce;
      }
      if (iVar2 < -0x8000) {
LAB_3001c0d6:
        param_1[1] = 0x8000;
      }
      else {
        param_1[1] = uVar4;
      }
    }
    uVar3 = uVar3 - 1;
    param_1 = param_1 + 2;
    if (uVar3 == 0) {
      return;
    }
  } while( true );
}



/* === FUN_3001c0f0 @ 0x3001c0f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c0f0 @ 0x3001C0F0 */



void FUN_3001c0f0(int param_1)

{
  radfree(param_1);
  return;
}



/* === FUN_3001c100 @ 0x3001c100 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c100 @ 0x3001C100 */



undefined4 * FUN_3001c100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *lpParameter;
  HANDLE pvVar1;
  
  lpParameter = (undefined4 *)radmalloc(0x14);
  if (lpParameter == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *lpParameter = param_1;
  lpParameter[1] = param_2;
  lpParameter[2] = param_3;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_3001c160,lpParameter,0,lpParameter + 4);
  lpParameter[3] = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    radfree((int)lpParameter);
    lpParameter = (undefined4 *)0x0;
  }
  return lpParameter;
}



/* === FUN_3001c160 @ 0x3001c160 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c160 @ 0x3001C160 */



undefined4 FUN_3001c160(undefined4 *param_1)

{
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(param_1[1],param_1[2]);
  }
  return 0;
}



/* === FUN_3001c180 @ 0x3001c180 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c180 @ 0x3001C180 */



void FUN_3001c180(int param_1)

{
  if (param_1 != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    radfree(param_1);
  }
  return;
}



/* === FUN_3001c1a0 @ 0x3001c1a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c1a0 @ 0x3001C1A0 */



void __cdecl FUN_3001c1a0(int param_1,int param_2,short *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_12c;
  int local_100 [16];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int local_40 [8];
  int local_20 [8];
  
  piVar2 = local_100;
  local_12c = 8;
  do {
    if ((((((param_3[8] == 0 && param_3[0x10] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      iVar4 = (int)*param_3 * *param_4 >> 0xb;
      *piVar2 = iVar4;
      piVar2[8] = iVar4;
      piVar2[0x10] = iVar4;
      piVar2[0x18] = iVar4;
      piVar2[0x20] = iVar4;
      piVar2[0x28] = iVar4;
      piVar2[0x30] = iVar4;
      piVar2[0x38] = iVar4;
    }
    else {
      iVar6 = param_4[0x20] * (int)param_3[0x20] >> 0xb;
      iVar11 = param_4[0x10] * (int)param_3[0x10] >> 0xb;
      iVar12 = (int)*param_3 * *param_4 >> 0xb;
      iVar4 = iVar6 + iVar12;
      iVar12 = iVar12 - iVar6;
      iVar8 = param_4[0x30] * (int)param_3[0x30] >> 0xb;
      iVar6 = iVar8 + iVar11;
      iVar1 = iVar6 + iVar4;
      iVar4 = iVar4 - iVar6;
      iVar6 = ((iVar11 - iVar8) * 0xb50 >> 0xb) - iVar6;
      iVar8 = iVar6 + iVar12;
      iVar12 = iVar12 - iVar6;
      iVar6 = param_4[0x18] * (int)param_3[0x18] >> 0xb;
      iVar10 = param_4[0x28] * (int)param_3[0x28] >> 0xb;
      iVar5 = iVar6 + iVar10;
      iVar10 = iVar10 - iVar6;
      iVar7 = param_4[0x38] * (int)param_3[0x38] >> 0xb;
      iVar11 = param_4[8] * (int)param_3[8] >> 0xb;
      iVar6 = iVar7 + iVar11;
      iVar11 = iVar11 - iVar7;
      iVar7 = iVar6 + iVar5;
      iVar9 = (iVar11 + iVar10) * 0xec8 >> 0xb;
      iVar10 = ((iVar10 * -0x14e8 >> 0xb) - iVar7) + iVar9;
      iVar5 = ((iVar6 - iVar5) * 0xb50 >> 0xb) - iVar10;
      iVar6 = ((iVar11 * 0x8a9 >> 0xb) - iVar9) + iVar5;
      *piVar2 = iVar1 + iVar7;
      piVar2[0x38] = iVar1 - iVar7;
      piVar2[0x30] = iVar8 - iVar10;
      piVar2[0x28] = iVar12 - iVar5;
      piVar2[0x10] = iVar5 + iVar12;
      piVar2[8] = iVar10 + iVar8;
      piVar2[0x20] = iVar6 + iVar4;
      piVar2[0x18] = iVar4 - iVar6;
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    piVar2 = piVar2 + 1;
    local_12c = local_12c + -1;
  } while (local_12c != 0);
  puVar3 = (undefined1 *)(param_1 + 1);
  piVar2 = local_100 + 6;
  local_12c = 8;
  do {
    iVar4 = piVar2[-6] + piVar2[-2];
    iVar5 = piVar2[-6] - piVar2[-2];
    iVar6 = piVar2[-4] + *piVar2;
    iVar1 = iVar6 + iVar4;
    iVar4 = iVar4 - iVar6;
    iVar6 = ((piVar2[-4] - *piVar2) * 0xb50 >> 0xb) - iVar6;
    iVar8 = iVar6 + iVar5;
    iVar5 = iVar5 - iVar6;
    iVar6 = piVar2[-3] + piVar2[-1];
    iVar7 = piVar2[-1] - piVar2[-3];
    iVar12 = piVar2[1] + piVar2[-5];
    iVar10 = piVar2[-5] - piVar2[1];
    iVar11 = iVar12 + iVar6;
    iVar9 = (iVar7 + iVar10) * 0xec8 >> 0xb;
    iVar7 = ((iVar7 * -0x14e8 >> 0xb) - iVar11) + iVar9;
    puVar3[-1] = (char)((uint)(iVar11 + 0x7f + iVar1) >> 8);
    iVar12 = ((iVar12 - iVar6) * 0xb50 >> 0xb) - iVar7;
    iVar6 = ((iVar10 * 0x8a9 >> 0xb) - iVar9) + iVar12;
    puVar3[6] = (char)((uint)((iVar1 - iVar11) + 0x7f) >> 8);
    puVar3[5] = (char)((uint)((iVar8 - iVar7) + 0x7f) >> 8);
    puVar3[1] = (char)((uint)(iVar12 + 0x7f + iVar5) >> 8);
    puVar3[4] = (char)((uint)((iVar5 - iVar12) + 0x7f) >> 8);
    puVar3[3] = (char)((uint)(iVar4 + 0x7f + iVar6) >> 8);
    puVar3[2] = (char)((uint)((iVar4 - iVar6) + 0x7f) >> 8);
    *puVar3 = (char)((uint)(iVar7 + 0x7f + iVar8) >> 8);
    piVar2 = piVar2 + 8;
    puVar3 = puVar3 + param_2;
    local_12c = local_12c + -1;
  } while (local_12c != 0);
  return;
}



/* === FUN_3001c560 @ 0x3001c560 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c560 @ 0x3001C560 */



void FUN_3001c560(int param_1,int param_2,short *param_3,int param_4)

{
  FUN_3001c1a0(param_1,param_2,param_3,(int *)(&DAT_30033fec + param_4 * 0x100));
  return;
}



/* === FUN_3001c590 @ 0x3001c590 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c590 @ 0x3001C590 */



void FUN_3001c590(int param_1,int param_2,short *param_3,int param_4)

{
  FUN_3001c5c0(param_1,param_2,param_3,(int *)(&DAT_30033fec + param_4 * 0x100));
  return;
}



/* === FUN_3001c5c0 @ 0x3001c5c0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c5c0 @ 0x3001C5C0 */



void __cdecl FUN_3001c5c0(int param_1,int param_2,short *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_13c;
  int local_134;
  uint *local_10c;
  uint *local_108;
  int local_100 [16];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int local_40 [8];
  int local_20 [8];
  
  local_108 = (uint *)(param_1 + param_2);
  piVar2 = local_100;
  local_13c = 8;
  do {
    if ((((((param_3[8] == 0 && param_3[0x10] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      iVar7 = (int)*param_3 * *param_4 >> 0xb;
      *piVar2 = iVar7;
      piVar2[8] = iVar7;
      piVar2[0x10] = iVar7;
      piVar2[0x18] = iVar7;
      piVar2[0x20] = iVar7;
      piVar2[0x28] = iVar7;
      piVar2[0x30] = iVar7;
      piVar2[0x38] = iVar7;
    }
    else {
      iVar16 = param_4[0x20] * (int)param_3[0x20] >> 0xb;
      iVar9 = param_4[0x10] * (int)param_3[0x10] >> 0xb;
      iVar3 = (int)*param_3 * *param_4 >> 0xb;
      iVar7 = iVar16 + iVar3;
      iVar3 = iVar3 - iVar16;
      iVar8 = param_4[0x30] * (int)param_3[0x30] >> 0xb;
      iVar16 = iVar8 + iVar9;
      iVar1 = iVar16 + iVar7;
      iVar7 = iVar7 - iVar16;
      iVar16 = ((iVar9 - iVar8) * 0xb50 >> 0xb) - iVar16;
      iVar8 = iVar16 + iVar3;
      iVar3 = iVar3 - iVar16;
      iVar16 = param_4[0x18] * (int)param_3[0x18] >> 0xb;
      iVar14 = param_4[0x28] * (int)param_3[0x28] >> 0xb;
      iVar10 = iVar16 + iVar14;
      iVar14 = iVar14 - iVar16;
      iVar11 = param_4[0x38] * (int)param_3[0x38] >> 0xb;
      iVar9 = param_4[8] * (int)param_3[8] >> 0xb;
      iVar16 = iVar11 + iVar9;
      iVar9 = iVar9 - iVar11;
      iVar11 = iVar16 + iVar10;
      iVar13 = (iVar9 + iVar14) * 0xec8 >> 0xb;
      iVar14 = ((iVar14 * -0x14e8 >> 0xb) - iVar11) + iVar13;
      iVar10 = ((iVar16 - iVar10) * 0xb50 >> 0xb) - iVar14;
      iVar16 = ((iVar9 * 0x8a9 >> 0xb) - iVar13) + iVar10;
      *piVar2 = iVar11 + iVar1;
      piVar2[0x38] = iVar1 - iVar11;
      piVar2[0x30] = iVar8 - iVar14;
      piVar2[0x28] = iVar3 - iVar10;
      piVar2[0x10] = iVar10 + iVar3;
      piVar2[8] = iVar14 + iVar8;
      piVar2[0x20] = iVar16 + iVar7;
      piVar2[0x18] = iVar7 - iVar16;
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    piVar2 = piVar2 + 1;
    local_13c = local_13c + -1;
  } while (local_13c != 0);
  local_10c = (uint *)(param_1 + 8);
  piVar2 = local_100 + 6;
  local_134 = 8;
  do {
    iVar7 = piVar2[-6] + piVar2[-2];
    iVar3 = piVar2[-6] - piVar2[-2];
    iVar16 = piVar2[-4] + *piVar2;
    iVar8 = ((piVar2[-4] - *piVar2) * 0xb50 >> 0xb) - iVar16;
    iVar1 = iVar16 + iVar7;
    iVar7 = iVar7 - iVar16;
    iVar16 = iVar8 + iVar3;
    iVar3 = iVar3 - iVar8;
    iVar8 = piVar2[-3] + piVar2[-1];
    iVar9 = piVar2[-1] - piVar2[-3];
    iVar14 = piVar2[1] + piVar2[-5];
    iVar10 = piVar2[-5] - piVar2[1];
    iVar11 = iVar14 + iVar8;
    iVar15 = (iVar10 + iVar9) * 0xec8 >> 0xb;
    iVar13 = ((iVar9 * -0x14e8 >> 0xb) - iVar11) + iVar15;
    iVar8 = ((iVar14 - iVar8) * 0xb50 >> 0xb) - iVar13;
    iVar9 = ((iVar10 * 0x8a9 >> 0xb) - iVar15) + iVar8;
    uVar12 = (iVar13 + 0x7f + iVar16 >> 8 & 0xffU) << 0x10 | iVar1 + 0x7f + iVar11 >> 8 & 0xffU;
    uVar4 = ((iVar1 - iVar11) + 0x7f >> 8 & 0xffU) << 0x10 | (iVar16 - iVar13) + 0x7f >> 8 & 0xffU;
    uVar5 = ((iVar3 - iVar8) + 0x7f >> 8 & 0xffU) << 0x10 | iVar9 + 0x7f + iVar7 >> 8 & 0xffU;
    uVar6 = ((iVar7 - iVar9) + 0x7f >> 8 & 0xffU) << 0x10 | iVar8 + 0x7f + iVar3 >> 8 & 0xffU;
    uVar12 = uVar12 | uVar12 << 8;
    uVar4 = uVar4 | uVar4 << 8;
    uVar5 = uVar5 | uVar5 << 8;
    uVar6 = uVar6 | uVar6 << 8;
    *local_10c = uVar5;
    local_10c[-2] = uVar12;
    local_10c[-1] = uVar6;
    local_10c[1] = uVar4;
    local_108[2] = uVar5;
    local_10c = (uint *)((int)local_10c + param_2 * 2);
    *local_108 = uVar12;
    local_108[1] = uVar6;
    local_108[3] = uVar4;
    local_108 = (uint *)((int)local_108 + param_2 * 2);
    piVar2 = piVar2 + 8;
    local_134 = local_134 + -1;
  } while (local_134 != 0);
  return;
}



/* === FUN_3001ca30 @ 0x3001ca30 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001ca30 @ 0x3001CA30 */



void FUN_3001ca30(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  int local_130;
  int local_12c;
  int local_100 [16];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int local_40 [8];
  int local_20 [8];
  
  piVar2 = (int *)(&DAT_30035fec + param_4 * 0x100);
  piVar1 = local_100;
  local_130 = 8;
  do {
    if ((((((param_3[8] == 0 && param_3[0x10] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      iVar4 = (int)*param_3 * *piVar2 >> 0xb;
      *piVar1 = iVar4;
      piVar1[8] = iVar4;
      piVar1[0x10] = iVar4;
      piVar1[0x18] = iVar4;
      piVar1[0x20] = iVar4;
      piVar1[0x28] = iVar4;
      piVar1[0x30] = iVar4;
      piVar1[0x38] = iVar4;
    }
    else {
      iVar9 = piVar2[0x20] * (int)param_3[0x20] >> 0xb;
      iVar7 = piVar2[0x10] * (int)param_3[0x10] >> 0xb;
      iVar5 = (int)*param_3 * *piVar2 >> 0xb;
      iVar4 = iVar9 + iVar5;
      iVar5 = iVar5 - iVar9;
      iVar13 = piVar2[0x30] * (int)param_3[0x30] >> 0xb;
      iVar9 = iVar13 + iVar7;
      iVar6 = iVar9 + iVar4;
      iVar4 = iVar4 - iVar9;
      iVar9 = ((iVar7 - iVar13) * 0xb50 >> 0xb) - iVar9;
      iVar13 = iVar9 + iVar5;
      iVar5 = iVar5 - iVar9;
      iVar9 = piVar2[0x18] * (int)param_3[0x18] >> 0xb;
      iVar12 = piVar2[0x28] * (int)param_3[0x28] >> 0xb;
      iVar8 = iVar9 + iVar12;
      iVar12 = iVar12 - iVar9;
      iVar10 = piVar2[0x38] * (int)param_3[0x38] >> 0xb;
      iVar7 = piVar2[8] * (int)param_3[8] >> 0xb;
      iVar9 = iVar10 + iVar7;
      iVar7 = iVar7 - iVar10;
      iVar10 = iVar9 + iVar8;
      iVar11 = (iVar7 + iVar12) * 0xec8 >> 0xb;
      iVar12 = ((iVar12 * -0x14e8 >> 0xb) - iVar10) + iVar11;
      iVar8 = ((iVar9 - iVar8) * 0xb50 >> 0xb) - iVar12;
      iVar9 = ((iVar7 * 0x8a9 >> 0xb) - iVar11) + iVar8;
      *piVar1 = iVar6 + iVar10;
      piVar1[0x38] = iVar6 - iVar10;
      piVar1[0x30] = iVar13 - iVar12;
      piVar1[0x28] = iVar5 - iVar8;
      piVar1[0x10] = iVar8 + iVar5;
      piVar1[8] = iVar12 + iVar13;
      piVar1[0x20] = iVar9 + iVar4;
      piVar1[0x18] = iVar4 - iVar9;
    }
    param_3 = param_3 + 1;
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
    local_130 = local_130 + -1;
  } while (local_130 != 0);
  pcVar3 = (char *)(param_1 + 1);
  piVar1 = local_100 + 6;
  local_12c = 8;
  pcVar14 = (char *)(param_5 + 1);
  do {
    iVar4 = piVar1[-6] + piVar1[-2];
    iVar5 = piVar1[-6] - piVar1[-2];
    iVar9 = *piVar1 + piVar1[-4];
    iVar6 = ((piVar1[-4] - *piVar1) * 0xb50 >> 0xb) - iVar9;
    iVar10 = iVar9 + iVar4;
    iVar4 = iVar4 - iVar9;
    iVar9 = iVar6 + iVar5;
    iVar5 = iVar5 - iVar6;
    iVar6 = piVar1[-3] + piVar1[-1];
    iVar7 = piVar1[-1] - piVar1[-3];
    iVar13 = piVar1[-5] + piVar1[1];
    iVar8 = piVar1[-5] - piVar1[1];
    iVar11 = iVar13 + iVar6;
    iVar12 = (iVar8 + iVar7) * 0xec8 >> 0xb;
    iVar7 = ((iVar7 * -0x14e8 >> 0xb) - iVar11) + iVar12;
    iVar13 = ((iVar13 - iVar6) * 0xb50 >> 0xb) - iVar7;
    iVar6 = ((iVar8 * 0x8a9 >> 0xb) - iVar12) + iVar13;
    piVar1 = piVar1 + 8;
    pcVar3[-1] = (char)((uint)(iVar11 + 0x7f + iVar10) >> 8) + pcVar14[-1];
    pcVar3[6] = (char)((uint)((iVar10 - iVar11) + 0x7f) >> 8) + pcVar14[6];
    *pcVar3 = (char)((uint)(iVar7 + 0x7f + iVar9) >> 8) + *pcVar14;
    pcVar3[5] = (char)((uint)((iVar9 - iVar7) + 0x7f) >> 8) + pcVar14[5];
    pcVar3[1] = (char)((uint)(iVar5 + 0x7f + iVar13) >> 8) + pcVar14[1];
    pcVar3[4] = (char)((uint)((iVar5 - iVar13) + 0x7f) >> 8) + pcVar14[4];
    pcVar3[3] = (char)((uint)(iVar4 + 0x7f + iVar6) >> 8) + pcVar14[3];
    pcVar3[2] = (char)((uint)((iVar4 - iVar6) + 0x7f) >> 8) + pcVar14[2];
    pcVar3 = pcVar3 + param_2;
    local_12c = local_12c + -1;
    pcVar14 = pcVar14 + 8;
  } while (local_12c != 0);
  return;
}



/* === FUN_3001ce50 @ 0x3001ce50 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001ce50 @ 0x3001CE50 */



void FUN_3001ce50(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_134;
  byte *local_130;
  byte *local_12c;
  byte *local_124;
  uint local_120;
  uint local_11c;
  int local_118;
  ushort auStack_114 [2];
  undefined4 local_110 [4];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_90;
  byte local_40 [6];
  byte local_3a [58];
  
  puVar9 = (uint *)*param_2;
  local_90 = param_2[1];
  uVar5 = param_2[2];
  uVar10 = param_2[3];
  auStack_114[1] = 0;
  puVar11 = local_110;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  bVar2 = (byte)uVar5;
  if (uVar10 < 4) {
    uVar5 = *puVar9 >> (4 - (byte)uVar10 & 0x1f);
    bVar2 = (char)*puVar9 << ((byte)uVar10 & 0x1f) | bVar2;
    uVar10 = uVar10 + 0x1c;
    puVar9 = puVar9 + 1;
  }
  else {
    uVar5 = uVar5 >> 4;
    uVar10 = uVar10 - 4;
  }
  bVar2 = bVar2 & 0xf;
  local_11c = (uint)bVar2;
  local_12c = local_3a;
  local_130 = local_40;
  local_120 = 1 << (bVar2 - 1 & 0x1f);
  if (1 < bVar2) {
    local_118 = local_11c - 1;
    do {
      local_11c = local_11c - 1;
      local_124 = local_130;
      pbVar12 = local_12c;
      if (local_130 < local_12c) {
        do {
          bVar3 = *local_124;
          if (bVar3 == 0) goto switchD_3001cf90_default;
          if (uVar10 == 0) {
            uVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
            uVar6 = uVar5;
          }
          uVar5 = uVar6 >> 1;
          if ((uVar6 & 1) == 0) goto switchD_3001cf90_default;
          bVar1 = (byte)local_11c;
          switch(bVar3 & 3) {
          case 0:
            *local_124 = (bVar3 & 0xfc) + 0x11;
            break;
          case 1:
            bVar3 = bVar3 & 0xfc;
            *local_124 = bVar3 + 2;
            *local_12c = bVar3 + 0x12;
            local_12c[1] = bVar3 + 0x22;
            local_12c[2] = bVar3 + 0x32;
            pbVar12 = local_12c + 3;
            local_12c = pbVar12;
            goto LAB_3001d3c7;
          case 2:
            *local_124 = 0;
            local_124 = local_124 + 1;
            break;
          case 3:
            local_134 = (uint)(bVar3 >> 2);
            if (uVar10 < local_11c) {
              uVar6 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar5);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar5;
              uVar6 = uVar5 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar5 = uVar6 >> 1;
            if ((uVar6 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
            *local_124 = 0;
            pbVar12 = local_12c;
          default:
switchD_3001cf90_default:
            local_124 = local_124 + 1;
            goto LAB_3001d3c7;
          }
          bVar3 = bVar3 >> 2;
          local_134 = (uint)bVar3;
          if (uVar10 == 0) {
            uVar5 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar6 = uVar5 >> 1;
            uVar10 = 0x1f;
          }
          else {
            uVar6 = uVar6 >> 2;
            uVar10 = uVar10 - 1;
          }
          if ((uVar5 & 1) == 0) {
            if (uVar10 < local_11c) {
              uVar5 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar6);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar6;
              uVar5 = uVar6 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar5 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar6 = uVar5 >> 1;
            if ((uVar5 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
          }
          else {
            local_130 = local_130 + -1;
            *local_130 = bVar3 * '\x04' + 3;
          }
          local_134 = (uint)(byte)(bVar3 + 1);
          if (uVar10 == 0) {
            uVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar5 = uVar6 >> 1;
          if ((uVar6 & 1) == 0) {
            if (uVar10 < local_11c) {
              uVar6 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar5);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar5;
              uVar6 = uVar5 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar5 = uVar6 >> 1;
            if ((uVar6 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
          }
          else {
            local_130 = local_130 + -1;
            *local_130 = (bVar3 + 1) * '\x04' + 3;
          }
          local_134 = (uint)(byte)(bVar3 + 2);
          if (uVar10 == 0) {
            uVar5 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar6 = uVar5 >> 1;
          if ((uVar5 & 1) == 0) {
            if (uVar10 < local_11c) {
              uVar5 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar6);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar6;
              uVar5 = uVar6 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar5 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar6 = uVar5 >> 1;
            if ((uVar5 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
          }
          else {
            local_130 = local_130 + -1;
            *local_130 = (bVar3 + 2) * '\x04' + 3;
          }
          local_134 = (uint)(byte)(bVar3 + 3);
          if (uVar10 == 0) {
            uVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar5 = uVar6 >> 1;
          if ((uVar6 & 1) == 0) {
            if (uVar10 < local_11c) {
              uVar6 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar5);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar5;
              uVar6 = uVar5 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar5 = uVar6 >> 1;
            if ((uVar6 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
            pbVar12 = local_12c;
          }
          else {
            local_130 = local_130 + -1;
            *local_130 = (bVar3 + 3) * '\x04' + 3;
            pbVar12 = local_12c;
          }
LAB_3001d3c7:
        } while (local_124 < pbVar12);
      }
      local_120 = (uint)(ushort)((short)(ushort)local_120 >> 1);
      local_118 = local_118 + -1;
    } while (local_118 != 0);
  }
  if ((bVar2 != 0) && (pbVar12 = local_12c, pbVar13 = local_130, local_130 < local_12c)) {
    do {
      bVar2 = *pbVar13;
      uVar6 = uVar5;
      if (bVar2 == 0) goto switchD_3001d447_default;
      if (uVar10 == 0) {
        uVar7 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar10 = 0x1f;
      }
      else {
        uVar10 = uVar10 - 1;
        uVar7 = uVar5;
      }
      uVar5 = uVar7 >> 1;
      uVar6 = uVar5;
      if ((uVar7 & 1) == 0) goto switchD_3001d447_default;
      switch(bVar2 & 3) {
      case 0:
        *pbVar13 = (bVar2 & 0xfc) + 0x11;
        break;
      case 1:
        bVar2 = bVar2 & 0xfc;
        *pbVar13 = bVar2 + 2;
        *pbVar12 = bVar2 + 0x12;
        pbVar12[1] = bVar2 + 0x22;
        pbVar12[2] = bVar2 + 0x32;
        pbVar12 = pbVar12 + 3;
        local_12c = pbVar12;
        goto LAB_3001d6c2;
      case 2:
        *pbVar13 = 0;
        pbVar13 = pbVar13 + 1;
        break;
      case 3:
        local_134 = (uint)(bVar2 >> 2);
        if (uVar10 == 0) {
          uVar5 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar6 = uVar5 >> 1;
          uVar10 = 0x1f;
        }
        else {
          uVar6 = uVar7 >> 2;
          uVar10 = uVar10 - 1;
        }
        auStack_114[local_134] = (-(ushort)((uVar5 & 1) != 0) & 0xfffe) + 1;
        *pbVar13 = 0;
      default:
switchD_3001d447_default:
        pbVar13 = pbVar13 + 1;
        uVar5 = uVar6;
        goto LAB_3001d6c2;
      }
      bVar2 = bVar2 >> 2;
      local_134 = (uint)bVar2;
      if (uVar10 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar7 = uVar5 >> 1;
        iVar4 = 0x1f;
      }
      else {
        uVar7 = uVar7 >> 2;
        iVar4 = uVar10 - 1;
      }
      if ((uVar5 & 1) == 0) {
        if (iVar4 == 0) {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar4 = 0x1f;
        }
        else {
          iVar4 = iVar4 + -1;
          uVar10 = uVar7;
        }
        uVar7 = uVar10 >> 1;
        auStack_114[local_134] = (-(ushort)((uVar10 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_130 = local_130 + -1;
        *local_130 = bVar2 * '\x04' + 3;
      }
      local_134 = (uint)(byte)(bVar2 + 1);
      if (iVar4 == 0) {
        uVar7 = *puVar9;
        puVar9 = puVar9 + 1;
        iVar4 = 0x1f;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      uVar10 = uVar7 >> 1;
      if ((uVar7 & 1) == 0) {
        if (iVar4 == 0) {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar5 = uVar10 >> 1;
          iVar4 = 0x1f;
        }
        else {
          uVar5 = uVar7 >> 2;
          iVar4 = iVar4 + -1;
        }
        auStack_114[local_134] = (-(ushort)((uVar10 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_130 = local_130 + -1;
        *local_130 = (bVar2 + 1) * '\x04' + 3;
        uVar5 = uVar10;
      }
      local_134 = (uint)(byte)(bVar2 + 2);
      if (iVar4 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        iVar4 = 0x1f;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      uVar10 = uVar5 >> 1;
      if ((uVar5 & 1) == 0) {
        if (iVar4 == 0) {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar5 = uVar10 >> 1;
          iVar4 = 0x1f;
        }
        else {
          uVar5 = uVar5 >> 2;
          iVar4 = iVar4 + -1;
        }
        auStack_114[local_134] = (-(ushort)((uVar10 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_130 = local_130 + -1;
        *local_130 = (bVar2 + 2) * '\x04' + 3;
        uVar5 = uVar10;
      }
      local_134 = (uint)(byte)(bVar2 + 3);
      if (iVar4 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar10 = 0x1f;
      }
      else {
        uVar10 = iVar4 - 1;
      }
      uVar6 = uVar5 >> 1;
      pbVar12 = local_12c;
      if ((uVar5 & 1) == 0) {
        if (uVar10 == 0) {
          uVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar5 = uVar6 >> 1;
          uVar10 = 0x1f;
        }
        else {
          uVar5 = uVar5 >> 2;
          uVar10 = uVar10 - 1;
        }
        auStack_114[local_134] = (-(ushort)((uVar6 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_130 = local_130 + -1;
        *local_130 = (bVar2 + 3) * '\x04' + 3;
        uVar5 = uVar6;
      }
LAB_3001d6c2:
    } while (pbVar13 < pbVar12);
  }
  *param_2 = (int)puVar9;
  param_2[1] = local_90;
  param_2[2] = uVar5;
  param_2[3] = uVar10;
  *(ushort *)(param_1 + 2) = auStack_114[1];
  *(undefined4 *)(param_1 + 4) = local_110[1];
  *(undefined4 *)(param_1 + 8) = local_110[3];
  *(undefined4 *)(param_1 + 0xc) = local_fc;
  *(undefined4 *)(param_1 + 0x10) = local_110[0];
  *(undefined4 *)(param_1 + 0x14) = local_110[2];
  *(undefined4 *)(param_1 + 0x18) = local_100;
  *(undefined4 *)(param_1 + 0x1c) = local_f8;
  *(undefined4 *)(param_1 + 0x20) = local_e4;
  *(undefined4 *)(param_1 + 0x24) = local_bc;
  *(undefined4 *)(param_1 + 0x28) = local_f4;
  *(undefined4 *)(param_1 + 0x2c) = local_ec;
  *(undefined4 *)(param_1 + 0x30) = local_e0;
  *(undefined4 *)(param_1 + 0x34) = local_b8;
  *(undefined4 *)(param_1 + 0x38) = local_f0;
  *(undefined4 *)(param_1 + 0x3c) = local_e8;
  *(undefined4 *)(param_1 + 0x40) = local_dc;
  *(undefined4 *)(param_1 + 0x44) = local_d4;
  *(undefined4 *)(param_1 + 0x48) = local_b4;
  *(undefined4 *)(param_1 + 0x4c) = local_ac;
  *(undefined4 *)(param_1 + 0x50) = local_d8;
  *(undefined4 *)(param_1 + 0x54) = local_d0;
  *(undefined4 *)(param_1 + 0x58) = local_b0;
  *(undefined4 *)(param_1 + 0x5c) = local_a8;
  *(undefined4 *)(param_1 + 0x60) = local_cc;
  *(undefined4 *)(param_1 + 100) = local_c4;
  *(undefined4 *)(param_1 + 0x68) = local_a4;
  *(undefined4 *)(param_1 + 0x6c) = local_9c;
  *(undefined4 *)(param_1 + 0x70) = local_c8;
  *(undefined4 *)(param_1 + 0x74) = local_c0;
  *(undefined4 *)(param_1 + 0x78) = local_a0;
  *(undefined4 *)(param_1 + 0x7c) = local_98;
  return;
}



/* === FUN_3001d820 @ 0x3001d820 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001d820 @ 0x3001D820 */



void __cdecl FUN_3001d820(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  bool bVar16;
  int local_f0;
  uint local_ec;
  int local_e4;
  byte *local_e0;
  byte *local_dc;
  byte *local_d8;
  byte abStack_c4 [132];
  byte local_40 [64];
  
  puVar13 = (uint *)*param_2;
  iVar1 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  local_f0 = 0;
  puVar14 = param_1;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  bVar3 = (byte)uVar9;
  if (uVar10 < 3) {
    uVar9 = *puVar13 >> (3 - (byte)uVar10 & 0x1f);
    bVar3 = (char)*puVar13 << ((byte)uVar10 & 0x1f) | bVar3;
    iVar8 = uVar10 + 0x1d;
    puVar13 = puVar13 + 1;
  }
  else {
    uVar9 = uVar9 >> 3;
    iVar8 = uVar10 - 3;
  }
  local_e0 = local_40;
  local_d8 = local_40 + 4;
  iVar15 = 0;
  cVar11 = '\x01' << (bVar3 & 7);
  local_40[0] = 0x10;
  local_40[1] = 0x60;
  local_40[2] = 0xb0;
  local_40[3] = 2;
  local_e4 = 0;
  for (cVar4 = (bVar3 & 7) + 1; cVar4 != '\0'; cVar4 = cVar4 + -1) {
    iVar12 = 0;
    if (0 < iVar15) {
      do {
        if (iVar8 == 0) {
          uVar10 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
          uVar10 = uVar9;
        }
        uVar9 = uVar10 >> 1;
        if ((uVar10 & 1) != 0) {
          cVar6 = *(char *)((uint)abStack_c4[iVar12] + (int)param_1);
          cVar7 = cVar11;
          if (cVar6 < '\0') {
            cVar7 = -cVar11;
          }
          *(char *)((uint)abStack_c4[iVar12] + (int)param_1) = cVar6 + cVar7;
          bVar16 = local_f0 == param_3;
          iVar15 = local_e4;
          local_f0 = local_f0 + 1;
          if (bVar16) goto LAB_3001dd27;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar15);
    }
    local_dc = local_e0;
    if (local_e0 < local_d8) {
      do {
        bVar3 = *local_dc;
        if (bVar3 == 0) goto switchD_3001d9ac_default;
        if (iVar8 == 0) {
          uVar10 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
          uVar10 = uVar9;
        }
        uVar9 = uVar10 >> 1;
        if ((uVar10 & 1) == 0) goto switchD_3001d9ac_default;
        switch(bVar3 & 3) {
        case 0:
          *local_dc = (bVar3 & 0xfc) + 0x11;
          break;
        case 1:
          bVar3 = bVar3 & 0xfc;
          *local_dc = bVar3 + 2;
          *local_d8 = bVar3 + 0x12;
          local_d8[1] = bVar3 + 0x22;
          local_d8[2] = bVar3 + 0x32;
          local_d8 = local_d8 + 3;
          goto LAB_3001dd03;
        case 2:
          *local_dc = 0;
          local_dc = local_dc + 1;
          break;
        case 3:
          abStack_c4[iVar15] = bVar3 >> 2;
          iVar15 = iVar15 + 1;
          local_ec = (uint)(bVar3 >> 2);
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            iVar8 = 0x1f;
            uVar2 = uVar10 >> 1;
          }
          else {
            iVar8 = iVar8 + -1;
            uVar2 = uVar10 >> 2;
            uVar10 = uVar9;
          }
          uVar9 = uVar2;
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          if (local_f0 != param_3) {
            *local_dc = 0;
            local_f0 = local_f0 + 1;
            local_e4 = iVar15;
            goto switchD_3001d9ac_default;
          }
          goto LAB_3001dd27;
        default:
switchD_3001d9ac_default:
          local_dc = local_dc + 1;
          goto LAB_3001dd03;
        }
        bVar3 = bVar3 >> 2;
        local_ec = (uint)bVar3;
        if (iVar8 == 0) {
          uVar10 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
          uVar2 = uVar10 >> 1;
        }
        else {
          iVar8 = iVar8 + -1;
          uVar2 = uVar10 >> 2;
          uVar10 = uVar9;
        }
        uVar9 = uVar2;
        if ((uVar10 & 1) == 0) {
          abStack_c4[iVar15] = bVar3;
          iVar15 = iVar15 + 1;
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            iVar8 = 0x1f;
          }
          else {
            iVar8 = iVar8 + -1;
            uVar10 = uVar9;
          }
          uVar9 = uVar10 >> 1;
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          bVar16 = local_f0 == param_3;
          local_f0 = local_f0 + 1;
          local_e4 = iVar15;
          if (bVar16) goto LAB_3001dd27;
        }
        else {
          local_e0 = local_e0 + -1;
          *local_e0 = bVar3 * '\x04' + 3;
        }
        bVar5 = bVar3 + 1;
        local_ec = (uint)bVar5;
        if (iVar8 == 0) {
          uVar9 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
        }
        uVar10 = uVar9 >> 1;
        if ((uVar9 & 1) == 0) {
          abStack_c4[iVar15] = bVar5;
          iVar15 = iVar15 + 1;
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            uVar9 = uVar10 >> 1;
            iVar8 = 0x1f;
          }
          else {
            uVar9 = uVar9 >> 2;
            iVar8 = iVar8 + -1;
          }
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          bVar16 = local_f0 == param_3;
          local_f0 = local_f0 + 1;
          local_e4 = iVar15;
          if (bVar16) goto LAB_3001dd27;
        }
        else {
          local_e0 = local_e0 + -1;
          *local_e0 = bVar5 * '\x04' + 3;
          uVar9 = uVar10;
        }
        bVar5 = bVar3 + 2;
        local_ec = (uint)bVar5;
        if (iVar8 == 0) {
          uVar9 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
        }
        uVar10 = uVar9 >> 1;
        if ((uVar9 & 1) == 0) {
          abStack_c4[iVar15] = bVar5;
          iVar15 = iVar15 + 1;
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            uVar9 = uVar10 >> 1;
            iVar8 = 0x1f;
          }
          else {
            uVar9 = uVar9 >> 2;
            iVar8 = iVar8 + -1;
          }
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          bVar16 = local_f0 == param_3;
          local_f0 = local_f0 + 1;
          local_e4 = iVar15;
          if (bVar16) goto LAB_3001dd27;
        }
        else {
          local_e0 = local_e0 + -1;
          *local_e0 = bVar5 * '\x04' + 3;
          uVar9 = uVar10;
        }
        bVar3 = bVar3 + 3;
        local_ec = (uint)bVar3;
        if (iVar8 == 0) {
          uVar9 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
        }
        uVar10 = uVar9 >> 1;
        if ((uVar9 & 1) == 0) {
          abStack_c4[iVar15] = bVar3;
          iVar15 = iVar15 + 1;
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            uVar9 = uVar10 >> 1;
            iVar8 = 0x1f;
          }
          else {
            uVar9 = uVar9 >> 2;
            iVar8 = iVar8 + -1;
          }
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          bVar16 = local_f0 == param_3;
          local_f0 = local_f0 + 1;
          local_e4 = iVar15;
          if (bVar16) goto LAB_3001dd27;
        }
        else {
          local_e0 = local_e0 + -1;
          *local_e0 = bVar3 * '\x04' + 3;
          uVar9 = uVar10;
        }
LAB_3001dd03:
      } while (local_dc < local_d8);
    }
    cVar11 = cVar11 >> 1;
  }
LAB_3001dd27:
  *param_2 = (int)puVar13;
  param_2[1] = iVar1;
  param_2[2] = uVar9;
  param_2[3] = iVar8;
  return;
}



/* === FUN_3001dd60 @ 0x3001dd60 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001dd60 @ 0x3001DD60 */



void FUN_3001dd60(char *param_1,int param_2,int *param_3,int param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  char local_40;
  char local_3f;
  char local_3e;
  char local_3d;
  char local_3c;
  char local_3b;
  char local_3a;
  char local_39;
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  char local_30;
  char local_2f;
  char local_2e;
  char local_2d;
  char local_2c;
  char local_2b;
  char local_2a;
  char local_29;
  char local_28;
  char local_27;
  char local_26;
  char local_25;
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  char local_20;
  char local_1f;
  char local_1e;
  char local_1d;
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char local_18;
  char local_17;
  char local_16;
  char local_15;
  char local_14;
  char local_13;
  char local_12;
  char local_11;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  char local_8;
  char local_7;
  char local_6;
  char local_5;
  char local_4;
  char local_3;
  char local_2;
  char local_1;
  
  FUN_3001d820((undefined4 *)&local_40,param_3,param_4);
  *param_1 = *param_5 + local_40;
  param_1[1] = param_5[1] + local_3f;
  param_1[2] = param_5[2] + local_3c;
  param_1[3] = param_5[3] + local_3b;
  param_1[4] = param_5[4] + local_38;
  param_1[5] = param_5[5] + local_37;
  param_1[6] = param_5[6] + local_34;
  param_1[7] = param_5[7] + local_33;
  param_1[param_2] = param_5[8] + local_3e;
  param_1[param_2 + 1] = param_5[9] + local_3d;
  param_1[param_2 + 2] = param_5[10] + local_3a;
  param_1[param_2 + 3] = param_5[0xb] + local_39;
  param_1[param_2 + 4] = param_5[0xc] + local_36;
  param_1[param_2 + 5] = param_5[0xd] + local_35;
  param_1[param_2 + 6] = param_5[0xe] + local_32;
  param_1[param_2 + 7] = param_5[0xf] + local_31;
  pcVar2 = param_1 + param_2 * 2;
  *pcVar2 = param_5[0x10] + local_28;
  pcVar2[1] = param_5[0x11] + local_27;
  pcVar2[2] = param_5[0x12] + local_14;
  pcVar2[3] = param_5[0x13] + local_13;
  pcVar2[4] = param_5[0x14] + local_30;
  pcVar2[5] = param_5[0x15] + local_2f;
  pcVar2[6] = param_5[0x16] + local_2c;
  pcVar2[7] = param_5[0x17] + local_2b;
  pcVar2[param_2] = param_5[0x18] + local_26;
  pcVar2[param_2 + 1] = param_5[0x19] + local_25;
  pcVar2[param_2 + 2] = param_5[0x1a] + local_12;
  pcVar2[param_2 + 3] = param_5[0x1b] + local_11;
  pcVar2[param_2 + 4] = param_5[0x1c] + local_2e;
  pcVar2[param_2 + 5] = param_5[0x1d] + local_2d;
  pcVar2[param_2 + 6] = param_5[0x1e] + local_2a;
  pcVar2[param_2 + 7] = param_5[0x1f] + local_29;
  pcVar2 = pcVar2 + param_2 * 2;
  *pcVar2 = param_5[0x20] + local_24;
  pcVar2[1] = param_5[0x21] + local_23;
  pcVar2[2] = param_5[0x22] + local_20;
  pcVar2[3] = param_5[0x23] + local_1f;
  pcVar2[4] = param_5[0x24] + local_10;
  pcVar2[5] = param_5[0x25] + local_f;
  pcVar2[6] = param_5[0x26] + local_c;
  pcVar2[7] = param_5[0x27] + local_b;
  pcVar2[param_2] = param_5[0x28] + local_22;
  pcVar2[param_2 + 1] = param_5[0x29] + local_21;
  pcVar2[param_2 + 2] = param_5[0x2a] + local_1e;
  pcVar2[param_2 + 3] = param_5[0x2b] + local_1d;
  pcVar2[param_2 + 4] = param_5[0x2c] + local_e;
  pcVar2[param_2 + 5] = param_5[0x2d] + local_d;
  pcVar2[param_2 + 6] = param_5[0x2e] + local_a;
  pcVar2[param_2 + 7] = param_5[0x2f] + local_9;
  pcVar2[param_2 * 2] = param_5[0x30] + local_1c;
  iVar1 = param_2 * 2;
  pcVar2[iVar1 + 1] = param_5[0x31] + local_1b;
  pcVar2[iVar1 + 2] = param_5[0x32] + local_18;
  pcVar2[iVar1 + 3] = param_5[0x33] + local_17;
  pcVar2[iVar1 + 4] = param_5[0x34] + local_8;
  pcVar2[iVar1 + 5] = param_5[0x35] + local_7;
  pcVar2[iVar1 + 6] = param_5[0x36] + local_4;
  pcVar2[iVar1 + 7] = param_5[0x37] + local_3;
  pcVar2[param_2 * 3] = param_5[0x38] + local_1a;
  iVar1 = param_2 * 3;
  pcVar2[iVar1 + 1] = param_5[0x39] + local_19;
  pcVar2[iVar1 + 2] = param_5[0x3a] + local_16;
  pcVar2[iVar1 + 3] = param_5[0x3b] + local_15;
  pcVar2[iVar1 + 4] = param_5[0x3c] + local_6;
  pcVar2[iVar1 + 5] = param_5[0x3d] + local_5;
  pcVar2[iVar1 + 6] = param_5[0x3e] + local_2;
  pcVar2[iVar1 + 7] = param_5[0x3f] + local_1;
  return;
}



/* === FUN_3001e070 @ 0x3001e070 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001e070 @ 0x3001E070 */



/* WARNING: Removing unreachable block (ram,0x3001e08d) */

undefined4 FUN_3001e070(void)

{
  int iVar1;
  uint uVar2;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar3;
  
  uVar3 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
          (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
          (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
          (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  uVar2 = uVar3 ^ 0x200000;
  if ((((uint)((uVar2 & 0x4000) != 0) * 0x4000 | (uint)((uVar2 & 0x800) != 0) * 0x800 |
        (uint)((uVar2 & 0x200) != 0) * 0x200 | (uint)((uVar2 & 0x100) != 0) * 0x100 |
        (uint)((uVar2 & 0x80) != 0) * 0x80 | (uint)((uVar2 & 0x40) != 0) * 0x40 |
        (uint)((uVar2 & 0x10) != 0) * 0x10 | (uint)((uVar2 & 4) != 0) * 4 | (uint)((uVar2 & 1) != 0)
        | (uint)((uVar2 & 0x200000) != 0) * 0x200000 | (uint)((uVar2 & 0x40000) != 0) * 0x40000) !=
       uVar3) && (iVar1 = cpuid_Version_info(1), (*(uint *)(iVar1 + 8) & 0x800000) != 0)) {
    return 1;
  }
  return 0;
}



/* === FUN_3001e0f0 @ 0x3001e0f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001e0f0 @ 0x3001E0F0 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3001e0f0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1;
  do {
    puVar6 = DAT_30045890;
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar17);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar16 >> 0x30) >> _DAT_3004f1b8,
                            CONCAT24((ushort)((ulonglong)uVar16 >> 0x20) >> _DAT_3004f1b8,
                                     CONCAT22((ushort)((ulonglong)uVar16 >> 0x10) >> _DAT_3004f1b8,
                                              (ushort)uVar16 >> _DAT_3004f1b8))),_DAT_3004f1a0);
    uVar16 = psubusw(uVar12,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar17);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar16 >> 0x30) >> _DAT_3004f1c0,
                            CONCAT24((ushort)((ulonglong)uVar16 >> 0x20) >> _DAT_3004f1c0,
                                     CONCAT22((ushort)((ulonglong)uVar16 >> 0x10) >> _DAT_3004f1c0,
                                              (ushort)uVar16 >> _DAT_3004f1c0))),_DAT_3004f1a8);
    uVar16 = psubusw(uVar12,uVar17);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar16 >> 0x30) >> _DAT_3004f1c8,
                            CONCAT24((ushort)((ulonglong)uVar16 >> 0x20) >> _DAT_3004f1c8,
                                     CONCAT22((ushort)((ulonglong)uVar16 >> 0x10) >> _DAT_3004f1c8,
                                              (ushort)uVar16 >> _DAT_3004f1c8))),_DAT_3004f1b0);
    puVar9 = puVar10 + 1;
    *puVar10 = uVar11 | uVar13 | uVar14;
    uVar16 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1;
  do {
    puVar6 = DAT_30045894;
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar16);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar17 >> 0x30) >> _DAT_3004f1b8,
                            CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> _DAT_3004f1b8,
                                     CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> _DAT_3004f1b8,
                                              (ushort)uVar17 >> _DAT_3004f1b8))),_DAT_3004f1a0);
    uVar17 = psubusw(uVar12,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar16);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar17 >> 0x30) >> _DAT_3004f1c0,
                            CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> _DAT_3004f1c0,
                                     CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> _DAT_3004f1c0,
                                              (ushort)uVar17 >> _DAT_3004f1c0))),_DAT_3004f1a8);
    uVar17 = psubusw(uVar12,uVar16);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar17 >> 0x30) >> _DAT_3004f1c8,
                            CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> _DAT_3004f1c8,
                                     CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> _DAT_3004f1c8,
                                              (ushort)uVar17 >> _DAT_3004f1c8))),_DAT_3004f1b0);
    puVar9 = puVar10 + 1;
    *puVar10 = uVar11 | uVar13 | uVar14;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_3001ed00 @ 0x3001ed00 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001ed00 @ 0x3001ED00 */



void FUN_3001ed00(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  short sVar16;
  short sVar19;
  short sVar20;
  undefined8 uVar17;
  short sVar21;
  undefined8 uVar18;
  uint5 uVar23;
  ulonglong uVar22;
  
  uVar18 = DAT_3003e8b8;
  pbVar8 = DAT_300458a4;
  pbVar9 = DAT_300458a0;
  puVar11 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1;
  do {
    puVar7 = DAT_30045890;
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar9;
    pbVar1 = pbVar9 + 1;
    pbVar9 = pbVar9 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar8;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar2 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    sVar16 = (short)uVar17;
    sVar19 = (short)((ulonglong)uVar17 >> 0x10);
    sVar20 = (short)((ulonglong)uVar17 >> 0x20);
    sVar21 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar16))),
                    uVar18);
    uVar17 = psubusw(uVar17,uVar18);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar16))),
                    uVar18);
    uVar5 = *DAT_300458a8;
    uVar12 = psubusw(uVar12,uVar18);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar16))),
                    uVar18);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x34),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 4,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 4,
                                              (ushort)uVar12 >> 4))),4);
    uVar12 = psubusw(uVar14,uVar18);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x34),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 4,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 4,
                                              (ushort)uVar12 >> 4))),8);
    uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar5 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)
                                           ) >> 0x20),uVar5) >> 0x18);
    uVar23 = (uint5)uVar6 & 0xffffffff00;
    uVar22 = psllw(CONCAT26((ushort)(uVar23 >> 0x1c),
                            CONCAT24((ushort)(uVar23 >> 8) >> 4,
                                     CONCAT22(((ushort)(CONCAT43(uVar6,CONCAT12((char)((uint)uVar5
                                                                                      >> 8),
                                                                                (ushort)uVar5)) >>
                                                       0x10) & 0xff) >> 4,
                                              ((ushort)uVar5 & 0xff) >> 4))),0xc);
    puVar10 = puVar11 + 1;
    DAT_300458a8 = DAT_300458a8 + 1;
    *puVar11 = CONCAT26((ushort)((ulonglong)uVar17 >> 0x34),
                        CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> 4,
                                 CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> 4,
                                          (ushort)uVar17 >> 4))) | uVar13 | uVar15 | uVar22;
    uVar17 = DAT_3003e8b8;
    puVar11 = puVar10;
  } while (puVar10 < puVar7);
  puVar11 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1;
  do {
    puVar7 = DAT_30045894;
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar8 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar9 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar16 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar20 = (short)((ulonglong)uVar18 >> 0x20);
    sVar21 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar8] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar8] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar16))),
                    uVar17);
    uVar18 = psubusw(uVar18,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar8] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar9] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar8] +
                                      (short)(&DAT_300470e8)[*pbVar9] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar16))),
                    uVar17);
    uVar5 = *DAT_300458ac;
    uVar12 = psubusw(uVar12,uVar17);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar9] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar9] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar16))),
                    uVar17);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x34),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 4,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 4,
                                              (ushort)uVar12 >> 4))),4);
    uVar12 = psubusw(uVar14,uVar17);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x34),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 4,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 4,
                                              (ushort)uVar12 >> 4))),8);
    uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar5 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)
                                           ) >> 0x20),uVar5) >> 0x18);
    uVar23 = (uint5)uVar6 & 0xffffffff00;
    uVar22 = psllw(CONCAT26((ushort)(uVar23 >> 0x1c),
                            CONCAT24((ushort)(uVar23 >> 8) >> 4,
                                     CONCAT22(((ushort)(CONCAT43(uVar6,CONCAT12((char)((uint)uVar5
                                                                                      >> 8),
                                                                                (ushort)uVar5)) >>
                                                       0x10) & 0xff) >> 4,
                                              ((ushort)uVar5 & 0xff) >> 4))),0xc);
    puVar10 = puVar11 + 1;
    DAT_300458ac = DAT_300458ac + 1;
    *puVar11 = CONCAT26((ushort)((ulonglong)uVar18 >> 0x34),
                        CONCAT24((ushort)((ulonglong)uVar18 >> 0x20) >> 4,
                                 CONCAT22((ushort)((ulonglong)uVar18 >> 0x10) >> 4,
                                          (ushort)uVar18 >> 4))) | uVar13 | uVar15 | uVar22;
    puVar11 = puVar10;
  } while (puVar10 < puVar7);
  return;
}



/* === FUN_3001f240 @ 0x3001f240 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001f240 @ 0x3001F240 */



void FUN_3001f240(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint *puVar9;
  byte *pbVar10;
  int local_1c;
  
  pbVar10 = DAT_300458a4;
  pbVar2 = DAT_300458a0;
  local_1c = param_1;
  do {
    pbVar8 = DAT_300458a8;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar1];
    bVar5 = *DAT_300458a8;
    DAT_300458a8 = DAT_300458a8 + 2;
    puVar9 = DAT_30045890 + 1;
    *DAT_30045890 =
         (&DAT_3004d168)[bVar5] | *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar6)
         | *(uint *)((int)&DAT_30043854 +
                    ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar6) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar6) |
         ((&DAT_3004d168)[pbVar8[1]] |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar7) |
          *(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar7) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar7)) << 0x10;
    DAT_30045890 = puVar9;
    pbVar8 = DAT_300458a8;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar1];
    bVar5 = *DAT_300458a8;
    DAT_300458a8 = DAT_300458a8 + 2;
    puVar9 = DAT_30045890 + 1;
    *DAT_30045890 =
         (&DAT_3004d168)[bVar5] | *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar6)
         | *(uint *)((int)&DAT_30043854 +
                    ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar6) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar6) |
         ((&DAT_3004d168)[pbVar8[1]] |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar7) |
          *(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar7) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar7)) << 0x10;
    DAT_30045890 = puVar9;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  do {
    DAT_300458a4 = pbVar10;
    DAT_300458a0 = pbVar2;
    pbVar10 = DAT_300458ac;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar2];
    bVar5 = *DAT_300458ac;
    DAT_300458ac = DAT_300458ac + 2;
    puVar9 = DAT_30045894 + 1;
    *DAT_30045894 =
         (&DAT_3004d168)[bVar5] | *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar6)
         | *(uint *)((int)&DAT_30043854 +
                    ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar6) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar6) |
         ((&DAT_3004d168)[pbVar10[1]] |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar7) |
          *(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar7) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar7)) << 0x10;
    DAT_30045894 = puVar9;
    pbVar10 = DAT_300458ac;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar2];
    bVar5 = *DAT_300458ac;
    DAT_300458ac = DAT_300458ac + 2;
    puVar9 = DAT_30045894 + 1;
    *DAT_30045894 =
         (&DAT_3004d168)[bVar5] | *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar6)
         | *(uint *)((int)&DAT_30043854 +
                    ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar6) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar6) |
         ((&DAT_3004d168)[pbVar10[1]] |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar7) |
          *(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar7) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar7)) << 0x10;
    DAT_30045894 = puVar9;
    local_1c = local_1c + -1;
    pbVar2 = DAT_300458a0;
    pbVar10 = DAT_300458a4;
  } while (local_1c != 0);
  return;
}



/* === FUN_3001fa50 @ 0x3001fa50 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001fa50 @ 0x3001FA50 */



void FUN_3001fa50(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  short sVar16;
  short sVar19;
  short sVar20;
  undefined8 uVar17;
  short sVar21;
  undefined8 uVar18;
  
  uVar18 = DAT_3003e8b8;
  pbVar8 = DAT_300458a4;
  pbVar9 = DAT_300458a0;
  puVar11 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1;
  do {
    puVar6 = DAT_30045890;
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar9;
    pbVar1 = pbVar9 + 1;
    pbVar9 = pbVar9 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar8;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar2 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    sVar16 = (short)uVar17;
    sVar19 = (short)((ulonglong)uVar17 >> 0x10);
    sVar20 = (short)((ulonglong)uVar17 >> 0x20);
    sVar21 = (short)((ulonglong)uVar17 >> 0x30);
    uVar7 = *DAT_300458a8 & 0x80808080;
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar16))),
                    uVar18);
    uVar17 = psubusw(uVar17,uVar18);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar16))),
                    uVar18);
    uVar12 = psubusw(uVar12,uVar18);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar16))),
                    uVar18);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x33),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 3,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 3,
                                              (ushort)uVar12 >> 3))),5);
    uVar12 = psubusw(uVar14,uVar18);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x33),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 3,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 3,
                                              (ushort)uVar12 >> 3))),10);
    puVar10 = puVar11 + 1;
    DAT_300458a8 = DAT_300458a8 + 1;
    *puVar11 = CONCAT26((ushort)((ulonglong)uVar17 >> 0x33),
                        CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> 3,
                                 CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> 3,
                                          (ushort)uVar17 >> 3))) | uVar13 |
               (ulonglong)
               CONCAT61((int6)(((ulonglong)
                                CONCAT41((int)(((ulonglong)
                                                CONCAT21((short)(((ulonglong)(byte)(uVar7 >> 0x18)
                                                                 << 0x38) >> 0x30),
                                                         (char)(uVar7 >> 0x10)) << 0x28) >> 0x20),
                                         (char)(uVar7 >> 8)) << 0x18) >> 0x10),(char)uVar7) << 8 |
               uVar15;
    uVar17 = DAT_3003e8b8;
    puVar11 = puVar10;
  } while (puVar10 < puVar6);
  puVar11 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1;
  do {
    puVar6 = DAT_30045894;
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar8 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar9 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar16 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar20 = (short)((ulonglong)uVar18 >> 0x20);
    sVar21 = (short)((ulonglong)uVar18 >> 0x30);
    uVar7 = *DAT_300458ac & 0x80808080;
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar8] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar8] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar16))),
                    uVar17);
    uVar18 = psubusw(uVar18,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar8] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar9] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar8] +
                                      (short)(&DAT_300470e8)[*pbVar9] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar16))),
                    uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar9] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar9] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar16))),
                    uVar17);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x33),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 3,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 3,
                                              (ushort)uVar12 >> 3))),5);
    uVar12 = psubusw(uVar14,uVar17);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x33),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 3,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 3,
                                              (ushort)uVar12 >> 3))),10);
    puVar10 = puVar11 + 1;
    DAT_300458ac = DAT_300458ac + 1;
    *puVar11 = CONCAT26((ushort)((ulonglong)uVar18 >> 0x33),
                        CONCAT24((ushort)((ulonglong)uVar18 >> 0x20) >> 3,
                                 CONCAT22((ushort)((ulonglong)uVar18 >> 0x10) >> 3,
                                          (ushort)uVar18 >> 3))) | uVar13 |
               (ulonglong)
               CONCAT61((int6)(((ulonglong)
                                CONCAT41((int)(((ulonglong)
                                                CONCAT21((short)(((ulonglong)(byte)(uVar7 >> 0x18)
                                                                 << 0x38) >> 0x30),
                                                         (char)(uVar7 >> 0x10)) << 0x28) >> 0x20),
                                         (char)(uVar7 >> 8)) << 0x18) >> 0x10),(char)uVar7) << 8 |
               uVar15;
    puVar11 = puVar10;
  } while (puVar10 < puVar6);
  return;
}



/* === FUN_30020340 @ 0x30020340 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30020340 @ 0x30020340 */



void FUN_30020340(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  
  pbVar6 = DAT_300458a4;
  pbVar5 = DAT_300458a0;
  local_1c = param_1;
  bVar1 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar2 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar9 = (&DAT_30045ce8)[bVar1];
  iVar10 = (&DAT_300468e8)[bVar2];
  iVar11 = (&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1];
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_300458d8)[bVar1];
    bVar1 = *(byte *)DAT_300458a8;
    DAT_300458a8 = (ushort *)((int)DAT_300458a8 + 1);
    puVar7 = (uint *)((int)DAT_30045890 + 2);
    *(ushort *)DAT_30045890 =
         (ushort)*(undefined4 *)((int)&DAT_3004507c + iVar9 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30043854 + iVar11 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30044468 + iVar10 * 4 + iVar4) | (bVar1 & 0x80) << 8;
    DAT_30045890 = puVar7;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    uVar3 = *DAT_300458a8;
    iVar9 = (&DAT_300458d8)[*DAT_30045898];
    iVar10 = (&DAT_300458d8)[DAT_30045898[1]];
    puVar7 = DAT_30045890 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_300458a8 = DAT_300458a8 + 1;
    *DAT_30045890 =
         *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar1] * 4 + iVar9) |
         *(uint *)((int)&DAT_30043854 +
                  ((&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1]) * 4 + iVar9) |
         ((uint)uVar3 << 0x10 | (uint)uVar3 << 8) & 0x80008000 |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar2] * 4 + iVar9) |
         (*(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1]) * 4 + iVar10) |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar1] * 4 + iVar10) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar2] * 4 + iVar10)) << 0x10;
    DAT_30045890 = puVar7;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar9 = (&DAT_30045ce8)[bVar1];
    iVar10 = (&DAT_300468e8)[bVar2];
    iVar11 = (&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_300458d8)[bVar1];
    uVar3 = *DAT_300458a8;
    DAT_300458a8 = (ushort *)((int)DAT_300458a8 + 1);
    puVar8 = (ushort *)((int)DAT_30045890 + 2);
    *(ushort *)DAT_30045890 =
         (ushort)*(undefined4 *)((int)&DAT_3004507c + iVar9 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30043854 + iVar11 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30044468 + iVar10 * 4 + iVar4) |
         ((byte)uVar3 & 0x80) << 8;
    DAT_30045890 = (uint *)puVar8;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar1 = *pbVar5;
  DAT_300458a0 = pbVar5 + 1;
  bVar2 = *pbVar6;
  DAT_300458a4 = pbVar6 + 1;
  iVar9 = (&DAT_30045ce8)[bVar1];
  iVar10 = (&DAT_300468e8)[bVar2];
  iVar11 = (&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1];
  do {
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_300458d8)[bVar1];
    bVar1 = *(byte *)DAT_300458ac;
    DAT_300458ac = (ushort *)((int)DAT_300458ac + 1);
    puVar7 = (uint *)((int)DAT_30045894 + 2);
    *(ushort *)DAT_30045894 =
         (ushort)*(undefined4 *)((int)&DAT_3004507c + iVar9 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30043854 + iVar11 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30044468 + iVar10 * 4 + iVar4) | (bVar1 & 0x80) << 8;
    DAT_30045894 = puVar7;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    uVar3 = *DAT_300458ac;
    iVar9 = (&DAT_300458d8)[*DAT_3004589c];
    iVar10 = (&DAT_300458d8)[DAT_3004589c[1]];
    puVar7 = DAT_30045894 + 1;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_300458ac = DAT_300458ac + 1;
    *DAT_30045894 =
         *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar1] * 4 + iVar9) |
         *(uint *)((int)&DAT_30043854 +
                  ((&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1]) * 4 + iVar9) |
         ((uint)uVar3 << 0x10 | (uint)uVar3 << 8) & 0x80008000 |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar2] * 4 + iVar9) |
         (*(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1]) * 4 + iVar10) |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar1] * 4 + iVar10) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar2] * 4 + iVar10)) << 0x10;
    DAT_30045894 = puVar7;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar9 = (&DAT_30045ce8)[bVar1];
    iVar10 = (&DAT_300468e8)[bVar2];
    iVar11 = (&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_300458d8)[bVar1];
    uVar3 = *DAT_300458ac;
    DAT_300458ac = (ushort *)((int)DAT_300458ac + 1);
    puVar8 = (ushort *)((int)DAT_30045894 + 2);
    *(ushort *)DAT_30045894 =
         (ushort)*(undefined4 *)((int)&DAT_3004507c + iVar9 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30043854 + iVar11 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30044468 + iVar10 * 4 + iVar4) |
         ((byte)uVar3 & 0x80) << 8;
    DAT_30045894 = (uint *)puVar8;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}



/* === FUN_300207d0 @ 0x300207d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300207d0 @ 0x300207D0 */



void FUN_300207d0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 3;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar17);
    uVar14 = psubusw(uVar14,uVar17);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar16 >> 0x30),(uint)(ushort)((ulonglong)uVar16 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045890;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    uVar16 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 3;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar16);
    uVar14 = psubusw(uVar14,uVar16);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar17 >> 0x10),(int)uVar17) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar17 >> 0x30),(uint)(ushort)((ulonglong)uVar17 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045894;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_30020a90 @ 0x30020a90 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30020a90 @ 0x30020A90 */



void FUN_30020a90(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 3;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*pbVar8] + sVar20,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar1] + sVar18,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar15))),uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)(&DAT_300474e8)[*pbVar8] + (short)(&DAT_300470e8)[*pbVar7] +
                             sVar20,CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) +
                                             sVar19,CONCAT22((short)(&DAT_300474e8)[*pbVar1] +
                                                             (short)(&DAT_300470e8)[*pbVar2] +
                                                             sVar18,(short)((uint)(&DAT_300474e8)
                                                                                  [bVar3] >> 0x10) +
                                                                    (short)((uint)(&DAT_300470e8)
                                                                                  [bVar4] >> 0x10) +
                                                                    sVar15))),uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar14 = paddsw(CONCAT26((short)(&DAT_300478e8)[*pbVar7] + sVar20,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar2] + sVar18,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar15))),uVar17);
    uVar14 = psubusw(uVar14,uVar17);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar16 >> 0x30),(uint)(ushort)((ulonglong)uVar16 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045890;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    uVar16 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 3;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*DAT_300458a0] + sVar20,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar7] + sVar18,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar15))),uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)(&DAT_300474e8)[*DAT_300458a0] +
                             (short)(&DAT_300470e8)[*DAT_300458a4] + sVar20,
                             CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                                      (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_300474e8)[*pbVar7] +
                                               (short)(&DAT_300470e8)[*pbVar8] + sVar18,
                                               (short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar15))),uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar14 = paddsw(CONCAT26((short)(&DAT_300478e8)[*DAT_300458a4] + sVar20,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar8] + sVar18,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar15))),uVar16);
    uVar14 = psubusw(uVar14,uVar16);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar17 >> 0x10),(int)uVar17) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar17 >> 0x30),(uint)(ushort)((ulonglong)uVar17 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045894;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_30020df0 @ 0x30020df0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30020df0 @ 0x30020DF0 */



void FUN_30020df0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  int local_1c;
  
  pbVar16 = DAT_300458a4;
  pbVar15 = DAT_300458a0;
  local_1c = param_1;
  do {
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar4 = (&DAT_300468e8)[bVar3];
    iVar5 = (&DAT_300464e8)[bVar2];
    iVar6 = (&DAT_300460e8)[bVar3];
    iVar7 = (&DAT_3004b118)[*DAT_30045898];
    iVar8 = (&DAT_3004b118)[DAT_30045898[1]];
    iVar9 = (int)DAT_30045890 + 6;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 =
         CONCAT13(*(undefined1 *)(iVar8 + (&DAT_30045ce8)[bVar2] * 4),
                  CONCAT12(*(undefined1 *)(iVar7 + iVar4 * 4),
                           CONCAT11(*(undefined1 *)(iVar7 + (iVar5 + iVar6) * 4),
                                    *(undefined1 *)(iVar7 + (&DAT_30045ce8)[bVar2] * 4))));
    DAT_30045890 = (undefined4 *)iVar9;
    iVar14 = (int)DAT_30045890;
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar7 = (&DAT_30045ce8)[bVar2];
    iVar9 = (&DAT_300468e8)[bVar3];
    iVar10 = (&DAT_300464e8)[bVar2];
    iVar11 = (&DAT_300460e8)[bVar3];
    bVar2 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 2;
    iVar12 = (&DAT_3004b118)[bVar2];
    puVar1 = (undefined4 *)((int)DAT_30045890 + -2);
    DAT_30045890 = (undefined4 *)((int)DAT_30045890 + 6);
    *puVar1 = CONCAT22(CONCAT11(*(undefined1 *)(iVar12 + (iVar10 + iVar11) * 4),
                                *(undefined1 *)(iVar12 + iVar7 * 4)),
                       CONCAT11(*(undefined1 *)(iVar8 + iVar4 * 4),
                                *(undefined1 *)(iVar8 + (iVar5 + iVar6) * 4)));
    iVar4 = (&DAT_3004b118)[DAT_30045898[-1]];
    *(uint *)(iVar14 + 2) =
         CONCAT13(*(undefined1 *)(iVar4 + iVar9 * 4),
                  CONCAT12(*(undefined1 *)(iVar4 + (iVar10 + iVar11) * 4),
                           CONCAT11(*(undefined1 *)(iVar4 + iVar7 * 4),
                                    *(undefined1 *)(iVar12 + iVar9 * 4))));
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  do {
    DAT_300458a4 = pbVar16;
    DAT_300458a0 = pbVar15;
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar4 = (&DAT_300468e8)[bVar3];
    iVar5 = (&DAT_300464e8)[bVar2];
    iVar6 = (&DAT_300460e8)[bVar3];
    iVar7 = (&DAT_3004b118)[*DAT_3004589c];
    iVar8 = (&DAT_3004b118)[DAT_3004589c[1]];
    iVar9 = (int)DAT_30045894 + 6;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 =
         CONCAT13(*(undefined1 *)(iVar8 + (&DAT_30045ce8)[bVar2] * 4),
                  CONCAT12(*(undefined1 *)(iVar7 + iVar4 * 4),
                           CONCAT11(*(undefined1 *)(iVar7 + (iVar5 + iVar6) * 4),
                                    *(undefined1 *)(iVar7 + (&DAT_30045ce8)[bVar2] * 4))));
    DAT_30045894 = (undefined4 *)iVar9;
    iVar10 = (int)DAT_30045894;
    uVar13 = CONCAT11(*(undefined1 *)(iVar8 + iVar4 * 4),
                      *(undefined1 *)(iVar8 + (iVar5 + iVar6) * 4));
    DAT_3003e8e0 = (uint)uVar13;
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar4 = (&DAT_30045ce8)[bVar2];
    iVar5 = (&DAT_300468e8)[bVar3];
    iVar6 = (&DAT_300464e8)[bVar2];
    iVar7 = (&DAT_300460e8)[bVar3];
    bVar2 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    iVar8 = (&DAT_3004b118)[bVar2];
    puVar1 = (undefined4 *)((int)DAT_30045894 + -2);
    DAT_30045894 = (undefined4 *)((int)DAT_30045894 + 6);
    *puVar1 = CONCAT22(CONCAT11(*(undefined1 *)(iVar8 + (iVar6 + iVar7) * 4),
                                *(undefined1 *)(iVar8 + iVar4 * 4)),uVar13);
    iVar9 = (&DAT_3004b118)[DAT_3004589c[-1]];
    *(uint *)(iVar10 + 2) =
         CONCAT13(*(undefined1 *)(iVar9 + iVar5 * 4),
                  CONCAT12(*(undefined1 *)(iVar9 + (iVar6 + iVar7) * 4),
                           CONCAT11(*(undefined1 *)(iVar9 + iVar4 * 4),
                                    *(undefined1 *)(iVar8 + iVar5 * 4))));
    local_1c = local_1c + -1;
    pbVar15 = DAT_300458a0;
    pbVar16 = DAT_300458a4;
  } while (local_1c != 0);
  return;
}



/* === FUN_30021500 @ 0x30021500 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30021500 @ 0x30021500 */



void FUN_30021500(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 3;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar17);
    uVar14 = psubusw(uVar14,uVar17);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar16 >> 0x30),(uint)(ushort)((ulonglong)uVar16 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045890;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    uVar16 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 3;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar16);
    uVar14 = psubusw(uVar14,uVar16);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar17 >> 0x10),(int)uVar17) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar17 >> 0x30),(uint)(ushort)((ulonglong)uVar17 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045894;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_300217c0 @ 0x300217c0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300217c0 @ 0x300217C0 */



void FUN_300217c0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 3;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)(&DAT_300478e8)[*pbVar7] + sVar20,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar2] + sVar18,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar15))),uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)(&DAT_300474e8)[*pbVar8] + (short)(&DAT_300470e8)[*pbVar7] +
                             sVar20,CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) +
                                             sVar19,CONCAT22((short)(&DAT_300474e8)[*pbVar1] +
                                                             (short)(&DAT_300470e8)[*pbVar2] +
                                                             sVar18,(short)((uint)(&DAT_300474e8)
                                                                                  [bVar3] >> 0x10) +
                                                                    (short)((uint)(&DAT_300470e8)
                                                                                  [bVar4] >> 0x10) +
                                                                    sVar15))),uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar14 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*pbVar8] + sVar20,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar1] + sVar18,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar15))),uVar17);
    uVar14 = psubusw(uVar14,uVar17);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar16 >> 0x30),(uint)(ushort)((ulonglong)uVar16 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045890;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    uVar16 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 3;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)(&DAT_300478e8)[*DAT_300458a4] + sVar20,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar8] + sVar18,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar15))),uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)(&DAT_300474e8)[*DAT_300458a0] +
                             (short)(&DAT_300470e8)[*DAT_300458a4] + sVar20,
                             CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                                      (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_300474e8)[*pbVar7] +
                                               (short)(&DAT_300470e8)[*pbVar8] + sVar18,
                                               (short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar15))),uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar14 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*DAT_300458a0] + sVar20,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar7] + sVar18,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar15))),uVar16);
    uVar14 = psubusw(uVar14,uVar16);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar17 >> 0x10),(int)uVar17) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar17 >> 0x30),(uint)(ushort)((ulonglong)uVar17 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045894;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_30021b20 @ 0x30021b20 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30021b20 @ 0x30021B20 */



void FUN_30021b20(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  int local_1c;
  
  pbVar16 = DAT_300458a4;
  pbVar15 = DAT_300458a0;
  local_1c = param_1;
  do {
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar4 = (&DAT_30045ce8)[bVar2];
    iVar5 = (&DAT_300464e8)[bVar2];
    iVar6 = (&DAT_300460e8)[bVar3];
    iVar7 = (&DAT_3004b118)[*DAT_30045898];
    iVar8 = (&DAT_3004b118)[DAT_30045898[1]];
    iVar9 = (int)DAT_30045890 + 6;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 =
         CONCAT13(*(undefined1 *)(iVar8 + (&DAT_300468e8)[bVar3] * 4),
                  CONCAT12(*(undefined1 *)(iVar7 + iVar4 * 4),
                           CONCAT11(*(undefined1 *)(iVar7 + (iVar5 + iVar6) * 4),
                                    *(undefined1 *)(iVar7 + (&DAT_300468e8)[bVar3] * 4))));
    DAT_30045890 = (undefined4 *)iVar9;
    iVar14 = (int)DAT_30045890;
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar7 = (&DAT_30045ce8)[bVar2];
    iVar9 = (&DAT_300468e8)[bVar3];
    iVar10 = (&DAT_300464e8)[bVar2];
    iVar11 = (&DAT_300460e8)[bVar3];
    bVar2 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 2;
    iVar12 = (&DAT_3004b118)[bVar2];
    puVar1 = (undefined4 *)((int)DAT_30045890 + -2);
    DAT_30045890 = (undefined4 *)((int)DAT_30045890 + 6);
    *puVar1 = CONCAT22(CONCAT11(*(undefined1 *)(iVar12 + (iVar10 + iVar11) * 4),
                                *(undefined1 *)(iVar12 + iVar9 * 4)),
                       CONCAT11(*(undefined1 *)(iVar8 + iVar4 * 4),
                                *(undefined1 *)(iVar8 + (iVar5 + iVar6) * 4)));
    iVar4 = (&DAT_3004b118)[DAT_30045898[-1]];
    *(uint *)(iVar14 + 2) =
         CONCAT13(*(undefined1 *)(iVar4 + iVar7 * 4),
                  CONCAT12(*(undefined1 *)(iVar4 + (iVar10 + iVar11) * 4),
                           CONCAT11(*(undefined1 *)(iVar4 + iVar9 * 4),
                                    *(undefined1 *)(iVar12 + iVar7 * 4))));
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  do {
    DAT_300458a4 = pbVar16;
    DAT_300458a0 = pbVar15;
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar4 = (&DAT_30045ce8)[bVar2];
    iVar5 = (&DAT_300464e8)[bVar2];
    iVar6 = (&DAT_300460e8)[bVar3];
    iVar7 = (&DAT_3004b118)[*DAT_3004589c];
    iVar8 = (&DAT_3004b118)[DAT_3004589c[1]];
    iVar9 = (int)DAT_30045894 + 6;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 =
         CONCAT13(*(undefined1 *)(iVar8 + (&DAT_300468e8)[bVar3] * 4),
                  CONCAT12(*(undefined1 *)(iVar7 + iVar4 * 4),
                           CONCAT11(*(undefined1 *)(iVar7 + (iVar5 + iVar6) * 4),
                                    *(undefined1 *)(iVar7 + (&DAT_300468e8)[bVar3] * 4))));
    DAT_30045894 = (undefined4 *)iVar9;
    iVar10 = (int)DAT_30045894;
    uVar13 = CONCAT11(*(undefined1 *)(iVar8 + iVar4 * 4),
                      *(undefined1 *)(iVar8 + (iVar5 + iVar6) * 4));
    DAT_3003e8e0 = (uint)uVar13;
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar4 = (&DAT_30045ce8)[bVar2];
    iVar5 = (&DAT_300468e8)[bVar3];
    iVar6 = (&DAT_300464e8)[bVar2];
    iVar7 = (&DAT_300460e8)[bVar3];
    bVar2 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    iVar8 = (&DAT_3004b118)[bVar2];
    puVar1 = (undefined4 *)((int)DAT_30045894 + -2);
    DAT_30045894 = (undefined4 *)((int)DAT_30045894 + 6);
    *puVar1 = CONCAT22(CONCAT11(*(undefined1 *)(iVar8 + (iVar6 + iVar7) * 4),
                                *(undefined1 *)(iVar8 + iVar5 * 4)),uVar13);
    iVar9 = (&DAT_3004b118)[DAT_3004589c[-1]];
    *(uint *)(iVar10 + 2) =
         CONCAT13(*(undefined1 *)(iVar9 + iVar4 * 4),
                  CONCAT12(*(undefined1 *)(iVar9 + (iVar6 + iVar7) * 4),
                           CONCAT11(*(undefined1 *)(iVar9 + iVar5 * 4),
                                    *(undefined1 *)(iVar8 + iVar4 * 4))));
    local_1c = local_1c + -1;
    pbVar15 = DAT_300458a0;
    pbVar16 = DAT_300458a4;
  } while (local_1c != 0);
  return;
}



/* === FUN_30022230 @ 0x30022230 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30022230 @ 0x30022230 */



void FUN_30022230(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 uVar12;
  ulonglong uVar11;
  ushort uVar14;
  undefined8 uVar13;
  ushort uVar16;
  undefined8 uVar15;
  short sVar17;
  short sVar19;
  ushort uVar20;
  short sVar21;
  undefined8 uVar18;
  short sVar22;
  uint uVar23;
  
  puVar8 = DAT_30045890 + param_1 * 6;
  pbVar6 = DAT_300458a4;
  pbVar7 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = puVar8;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar7;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar6;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar17))),
                    DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  puVar8 = DAT_30045894 + param_1 * 6;
  puVar10 = DAT_30045894;
  DAT_30045894 = puVar8;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar6 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar7 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar6] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar6] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar17))),
                    DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar6] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar7] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar6] +
                                      (short)(&DAT_300470e8)[*pbVar7] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar7] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar7] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  return;
}



/* === FUN_30022640 @ 0x30022640 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30022640 @ 0x30022640 */



void FUN_30022640(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 uVar12;
  ulonglong uVar11;
  ushort uVar14;
  undefined8 uVar13;
  ushort uVar16;
  undefined8 uVar15;
  short sVar17;
  short sVar19;
  ushort uVar20;
  short sVar21;
  undefined8 uVar18;
  short sVar22;
  uint uVar23;
  
  puVar8 = DAT_30045890 + param_1 * 6;
  pbVar6 = DAT_300458a4;
  pbVar7 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = puVar8;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar7;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar6;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)(&DAT_300478e8)[*pbVar6] + sVar22,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar2] + sVar19,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)(&DAT_300474e8)[*pbVar7] + (short)(&DAT_300470e8)[*pbVar6] +
                             sVar22,CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) +
                                             sVar21,CONCAT22((short)(&DAT_300474e8)[*pbVar1] +
                                                             (short)(&DAT_300470e8)[*pbVar2] +
                                                             sVar19,(short)((uint)(&DAT_300474e8)
                                                                                  [bVar3] >> 0x10) +
                                                                    (short)((uint)(&DAT_300470e8)
                                                                                  [bVar4] >> 0x10) +
                                                                    sVar17))),DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*pbVar7] + sVar22,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar1] + sVar19,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  puVar8 = DAT_30045894 + param_1 * 6;
  puVar10 = DAT_30045894;
  DAT_30045894 = puVar8;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar6 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar7 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)(&DAT_300478e8)[*DAT_300458a4] + sVar22,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar7] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar7] + sVar19,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)(&DAT_300474e8)[*DAT_300458a0] +
                             (short)(&DAT_300470e8)[*DAT_300458a4] + sVar22,
                             CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar6] >> 0x10) +
                                      (short)((uint)(&DAT_300470e8)[*pbVar7] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_300474e8)[*pbVar6] +
                                               (short)(&DAT_300470e8)[*pbVar7] + sVar19,
                                               (short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*DAT_300458a0] + sVar22,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar6] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar6] + sVar19,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  return;
}



/* === FUN_30022e60 @ 0x30022e60 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30022e60 @ 0x30022E60 */



void FUN_30022e60(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int local_1c;
  
  pbVar10 = DAT_300458a4;
  pbVar9 = DAT_300458a0;
  local_1c = param_1;
  bVar1 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar2 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar16 = (&DAT_30045ce8)[bVar1];
  iVar15 = (&DAT_300468e8)[bVar2];
  iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    puVar7 = DAT_30045890;
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045890 + 6);
    *DAT_30045890 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045890 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    pbVar8 = DAT_30045898;
    puVar7 = DAT_30045890;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar16 = (&DAT_30045ce8)[bVar1];
    iVar15 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1];
    iVar4 = (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 2;
    iVar5 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar5 + iVar16 * 4),
                     *(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4));
    uVar3 = *(undefined1 *)(iVar5 + iVar15 * 4);
    puVar11 = DAT_30045890 + 3;
    *DAT_30045890 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045890 = puVar11;
    iVar5 = (&DAT_3004b118)[pbVar8[1]];
    uVar14 = CONCAT13(*(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4),
                      CONCAT12(*(undefined1 *)(iVar5 + iVar15 * 4),uVar6));
    puVar7[1] = uVar14;
    uVar12 = (uint)*(byte *)(iVar5 + iVar16 * 4);
    puVar7[2] = uVar12 << 0x18 | (uVar14 >> 0x10) << 8 | uVar12;
    puVar7 = DAT_30045890;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar16 = (&DAT_30045ce8)[bVar1];
    iVar15 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045890 + 6);
    *DAT_30045890 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045890 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar1 = *pbVar9;
  DAT_300458a0 = pbVar9 + 1;
  bVar2 = *pbVar10;
  DAT_300458a4 = pbVar10 + 1;
  iVar16 = (&DAT_30045ce8)[bVar1];
  iVar15 = (&DAT_300468e8)[bVar2];
  iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    puVar7 = DAT_30045894;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045894 + 6);
    *DAT_30045894 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045894 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    pbVar9 = DAT_3004589c;
    puVar7 = DAT_30045894;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar16 = (&DAT_30045ce8)[bVar1];
    iVar15 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1];
    iVar4 = (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    iVar5 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar5 + iVar16 * 4),
                     *(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4));
    uVar3 = *(undefined1 *)(iVar5 + iVar15 * 4);
    puVar11 = DAT_30045894 + 3;
    *DAT_30045894 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045894 = puVar11;
    iVar5 = (&DAT_3004b118)[pbVar9[1]];
    uVar14 = CONCAT13(*(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4),
                      CONCAT12(*(undefined1 *)(iVar5 + iVar15 * 4),uVar6));
    puVar7[1] = uVar14;
    uVar12 = (uint)*(byte *)(iVar5 + iVar16 * 4);
    puVar7[2] = uVar12 << 0x18 | (uVar14 >> 0x10) << 8 | uVar12;
    puVar7 = DAT_30045894;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar16 = (&DAT_30045ce8)[bVar1];
    iVar15 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045894 + 6);
    *DAT_30045894 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045894 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}



/* === FUN_30023290 @ 0x30023290 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30023290 @ 0x30023290 */



void FUN_30023290(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  short sVar13;
  short sVar16;
  short sVar17;
  undefined8 uVar14;
  short sVar18;
  undefined8 uVar15;
  
  uVar15 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar14 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar14 = psllw(uVar14,2);
    uVar14 = pmulhw(uVar14,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar13 = (short)uVar14;
    sVar16 = (short)((ulonglong)uVar14 >> 0x10);
    sVar17 = (short)((ulonglong)uVar14 >> 0x20);
    sVar18 = (short)((ulonglong)uVar14 >> 0x30);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar16,(short)(&DAT_30046ce8)[bVar3] + sVar13))),
                    uVar15);
    uVar14 = psubusw(uVar14,uVar15);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar13))),
                    uVar15);
    uVar11 = psubusw(uVar11,uVar15);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300478e8)[bVar4] + sVar13))),
                    uVar15);
    uVar12 = psubusw(uVar12,uVar15);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar14 >> 0x10),(int)uVar14) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10);
    puVar6 = DAT_30045890;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar14 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar14 >> 0x20)) |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    uVar14 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 2;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar15 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar13 = (short)uVar15;
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar17 = (short)((ulonglong)uVar15 >> 0x20);
    sVar18 = (short)((ulonglong)uVar15 >> 0x30);
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar16,(short)(&DAT_30046ce8)[bVar3] + sVar13))),
                    uVar14);
    uVar15 = psubusw(uVar15,uVar14);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar13))),
                    uVar14);
    uVar11 = psubusw(uVar11,uVar14);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300478e8)[bVar4] + sVar13))),
                    uVar14);
    uVar12 = psubusw(uVar12,uVar14);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar15 >> 0x10),(int)uVar15) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10);
    puVar6 = DAT_30045894;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar15 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar15 >> 0x20)) |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_30023ae0 @ 0x30023ae0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30023ae0 @ 0x30023AE0 */



void FUN_30023ae0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_1c;
  
  pbVar7 = DAT_300458a4;
  pbVar6 = DAT_300458a0;
  local_1c = param_1;
  bVar1 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar2 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar11 = (&DAT_30045ce8)[bVar1];
  iVar12 = (&DAT_300468e8)[bVar2];
  iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045890 + 1;
    *DAT_30045890 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar12 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar11 * 4)));
    DAT_30045890 = puVar8;
    puVar8 = DAT_30045890;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1];
    iVar3 = (&DAT_300460e8)[bVar2];
    iVar4 = (&DAT_3004b118)[*DAT_30045898];
    iVar5 = (&DAT_3004b118)[DAT_30045898[1]];
    puVar9 = DAT_30045890 + 2;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 =
         (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + iVar12 * 4),
                                 *(undefined1 *)(iVar4 + (iVar10 + iVar3) * 4)),
                        *(undefined1 *)(iVar4 + iVar11 * 4));
    DAT_30045890 = puVar9;
    puVar8[1] = (uint)CONCAT12(*(undefined1 *)(iVar5 + iVar12 * 4),
                               CONCAT11(*(undefined1 *)(iVar5 + (iVar10 + iVar3) * 4),
                                        *(undefined1 *)(iVar5 + iVar11 * 4)));
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045890 + 1;
    *DAT_30045890 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar12 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar11 * 4)));
    DAT_30045890 = puVar8;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar1 = *pbVar6;
  DAT_300458a0 = pbVar6 + 1;
  bVar2 = *pbVar7;
  DAT_300458a4 = pbVar7 + 1;
  iVar11 = (&DAT_30045ce8)[bVar1];
  iVar12 = (&DAT_300468e8)[bVar2];
  iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045894 + 1;
    *DAT_30045894 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar12 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar11 * 4)));
    DAT_30045894 = puVar8;
    puVar8 = DAT_30045894;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1];
    iVar3 = (&DAT_300460e8)[bVar2];
    iVar4 = (&DAT_3004b118)[*DAT_3004589c];
    iVar5 = (&DAT_3004b118)[DAT_3004589c[1]];
    puVar9 = DAT_30045894 + 2;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 =
         (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + iVar12 * 4),
                                 *(undefined1 *)(iVar4 + (iVar10 + iVar3) * 4)),
                        *(undefined1 *)(iVar4 + iVar11 * 4));
    DAT_30045894 = puVar9;
    puVar8[1] = (uint)CONCAT12(*(undefined1 *)(iVar5 + iVar12 * 4),
                               CONCAT11(*(undefined1 *)(iVar5 + (iVar10 + iVar3) * 4),
                                        *(undefined1 *)(iVar5 + iVar11 * 4)));
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045894 + 1;
    *DAT_30045894 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar12 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar11 * 4)));
    DAT_30045894 = puVar8;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}



/* === FUN_30023eb0 @ 0x30023eb0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30023eb0 @ 0x30023EB0 */



void FUN_30023eb0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  short sVar13;
  short sVar16;
  short sVar17;
  undefined8 uVar14;
  short sVar18;
  undefined8 uVar15;
  
  uVar15 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar14 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar14 = psllw(uVar14,2);
    uVar14 = pmulhw(uVar14,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar13 = (short)uVar14;
    sVar16 = (short)((ulonglong)uVar14 >> 0x10);
    sVar17 = (short)((ulonglong)uVar14 >> 0x20);
    sVar18 = (short)((ulonglong)uVar14 >> 0x30);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar16,(short)(&DAT_30046ce8)[bVar3] + sVar13))),
                    uVar15);
    uVar14 = psubusw(uVar14,uVar15);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar13))),
                    uVar15);
    uVar11 = psubusw(uVar11,uVar15);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300478e8)[bVar4] + sVar13))),
                    uVar15);
    uVar12 = psubusw(uVar12,uVar15);
    *puVar10 = CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10) |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | (ulonglong)CONCAT24((short)((ulonglong)uVar12 >> 0x10),(int)uVar12) &
                 0xffffffff0000ffff;
    puVar6 = DAT_30045890;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar14 >> 0x20)) << 0x10 |
                 (ulonglong)
                 CONCAT24((short)((ulonglong)uVar12 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar12 >> 0x20)) |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8);
    uVar14 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 2;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar15 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar13 = (short)uVar15;
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar17 = (short)((ulonglong)uVar15 >> 0x20);
    sVar18 = (short)((ulonglong)uVar15 >> 0x30);
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar16,(short)(&DAT_30046ce8)[bVar3] + sVar13))),
                    uVar14);
    uVar15 = psubusw(uVar15,uVar14);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar13))),
                    uVar14);
    uVar11 = psubusw(uVar11,uVar14);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300478e8)[bVar4] + sVar13))),
                    uVar14);
    uVar12 = psubusw(uVar12,uVar14);
    *puVar10 = CONCAT44((uint)(ushort)((ulonglong)uVar15 >> 0x10) << 0x10,(int)uVar15 << 0x10) |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | (ulonglong)CONCAT24((short)((ulonglong)uVar12 >> 0x10),(int)uVar12) &
                 0xffffffff0000ffff;
    puVar6 = DAT_30045894;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar15 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar15 >> 0x20)) << 0x10 |
                 (ulonglong)
                 CONCAT24((short)((ulonglong)uVar12 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar12 >> 0x20)) |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8);
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_30024700 @ 0x30024700 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30024700 @ 0x30024700 */



void FUN_30024700(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_1c;
  
  pbVar7 = DAT_300458a4;
  pbVar6 = DAT_300458a0;
  local_1c = param_1;
  bVar1 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar2 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar11 = (&DAT_30045ce8)[bVar1];
  iVar12 = (&DAT_300468e8)[bVar2];
  iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045890 + 1;
    *DAT_30045890 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar11 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar12 * 4)));
    DAT_30045890 = puVar8;
    puVar8 = DAT_30045890;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1];
    iVar3 = (&DAT_300460e8)[bVar2];
    iVar4 = (&DAT_3004b118)[*DAT_30045898];
    iVar5 = (&DAT_3004b118)[DAT_30045898[1]];
    puVar9 = DAT_30045890 + 2;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 =
         (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + iVar11 * 4),
                                 *(undefined1 *)(iVar4 + (iVar10 + iVar3) * 4)),
                        *(undefined1 *)(iVar4 + iVar12 * 4));
    DAT_30045890 = puVar9;
    puVar8[1] = (uint)CONCAT12(*(undefined1 *)(iVar5 + iVar11 * 4),
                               CONCAT11(*(undefined1 *)(iVar5 + (iVar10 + iVar3) * 4),
                                        *(undefined1 *)(iVar5 + iVar12 * 4)));
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045890 + 1;
    *DAT_30045890 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar11 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar12 * 4)));
    DAT_30045890 = puVar8;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar1 = *pbVar6;
  DAT_300458a0 = pbVar6 + 1;
  bVar2 = *pbVar7;
  DAT_300458a4 = pbVar7 + 1;
  iVar11 = (&DAT_30045ce8)[bVar1];
  iVar12 = (&DAT_300468e8)[bVar2];
  iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045894 + 1;
    *DAT_30045894 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar11 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar12 * 4)));
    DAT_30045894 = puVar8;
    puVar8 = DAT_30045894;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1];
    iVar3 = (&DAT_300460e8)[bVar2];
    iVar4 = (&DAT_3004b118)[*DAT_3004589c];
    iVar5 = (&DAT_3004b118)[DAT_3004589c[1]];
    puVar9 = DAT_30045894 + 2;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 =
         (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + iVar11 * 4),
                                 *(undefined1 *)(iVar4 + (iVar10 + iVar3) * 4)),
                        *(undefined1 *)(iVar4 + iVar12 * 4));
    DAT_30045894 = puVar9;
    puVar8[1] = (uint)CONCAT12(*(undefined1 *)(iVar5 + iVar11 * 4),
                               CONCAT11(*(undefined1 *)(iVar5 + (iVar10 + iVar3) * 4),
                                        *(undefined1 *)(iVar5 + iVar12 * 4)));
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045894 + 1;
    *DAT_30045894 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar11 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar12 * 4)));
    DAT_30045894 = puVar8;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}



/* === FUN_30024ad0 @ 0x30024ad0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30024ad0 @ 0x30024AD0 */



void FUN_30024ad0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  short sVar14;
  short sVar17;
  short sVar18;
  undefined8 uVar15;
  short sVar19;
  undefined8 uVar16;
  
  uVar16 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar15 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar14 = (short)uVar15;
    sVar17 = (short)((ulonglong)uVar15 >> 0x10);
    sVar18 = (short)((ulonglong)uVar15 >> 0x20);
    sVar19 = (short)((ulonglong)uVar15 >> 0x30);
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17,(short)(&DAT_30046ce8)[bVar3] + sVar14))),
                    uVar16);
    uVar15 = psubusw(uVar15,uVar16);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar14))),
                    uVar16);
    uVar11 = psubusw(uVar11,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300478e8)[bVar4] + sVar14))),
                    uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar5 = *DAT_300458a8;
    uVar13 = (undefined2)(((ulonglong)(byte)((uint)uVar5 >> 0x18) << 0x38) >> 0x30);
    *puVar10 = CONCAT44((uint)(ushort)((ulonglong)uVar15 >> 0x10) << 0x10,(int)uVar15 << 0x10) |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | (ulonglong)CONCAT24((short)((ulonglong)uVar12 >> 0x10),(int)uVar12) &
                 0xffffffff0000ffff |
               (ulonglong)
               CONCAT41((int)(((ulonglong)(byte)((uint)uVar5 >> 8) << 0x38) >> 0x20),(char)uVar5) <<
               0x18;
    puVar6 = DAT_30045890;
    DAT_300458a8 = DAT_300458a8 + 1;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar15 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar15 >> 0x20)) << 0x10 |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT24((short)((ulonglong)uVar12 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar12 >> 0x20)) |
                 (ulonglong)
                 CONCAT24(uVar13,(uint)(ushort)(((ulonglong)
                                                 CONCAT21(uVar13,(char)((uint)uVar5 >> 0x10)) <<
                                                0x28) >> 0x20)) << 0x10;
    uVar15 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 2;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar14 = (short)uVar16;
    sVar17 = (short)((ulonglong)uVar16 >> 0x10);
    sVar18 = (short)((ulonglong)uVar16 >> 0x20);
    sVar19 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17,(short)(&DAT_30046ce8)[bVar3] + sVar14))),
                    uVar15);
    uVar16 = psubusw(uVar16,uVar15);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar14))),
                    uVar15);
    uVar11 = psubusw(uVar11,uVar15);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300478e8)[bVar4] + sVar14))),
                    uVar15);
    uVar12 = psubusw(uVar12,uVar15);
    uVar5 = *DAT_300458ac;
    uVar13 = (undefined2)(((ulonglong)(byte)((uint)uVar5 >> 0x18) << 0x38) >> 0x30);
    *puVar10 = CONCAT44((uint)(ushort)((ulonglong)uVar16 >> 0x10) << 0x10,(int)uVar16 << 0x10) |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | (ulonglong)CONCAT24((short)((ulonglong)uVar12 >> 0x10),(int)uVar12) &
                 0xffffffff0000ffff |
               (ulonglong)
               CONCAT41((int)(((ulonglong)(byte)((uint)uVar5 >> 8) << 0x38) >> 0x20),(char)uVar5) <<
               0x18;
    puVar6 = DAT_30045894;
    DAT_300458ac = DAT_300458ac + 1;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar16 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar16 >> 0x20)) << 0x10 |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT24((short)((ulonglong)uVar12 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar12 >> 0x20)) |
                 (ulonglong)
                 CONCAT24(uVar13,(uint)(ushort)(((ulonglong)
                                                 CONCAT21(uVar13,(char)((uint)uVar5 >> 0x10)) <<
                                                0x28) >> 0x20)) << 0x10;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_300258d0 @ 0x300258d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300258d0 @ 0x300258D0 */



void FUN_300258d0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8b8;
  pbVar6 = DAT_300458a4;
  pbVar7 = DAT_300458a0;
  puVar9 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 4;
  do {
    uVar10 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar7;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar10 >> 0x10),uVar10)) >>
                                                  0x20),uVar10) >> 0x18),
                                              CONCAT12((char)((uint)uVar10 >> 8),(short)uVar10)) >>
                                    0x10),(short)uVar10) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar6;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar17);
    uVar13 = psubusw(uVar13,uVar17);
    uVar11 = CONCAT44((uint)(ushort)((ulonglong)uVar16 >> 0x10) << 0x10,(int)uVar16 << 0x10) |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             (ulonglong)CONCAT24((short)((ulonglong)uVar13 >> 0x10),(int)uVar13) &
             0xffffffff0000ffff;
    puVar8 = puVar9 + 4;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    *puVar9 = CONCAT44(uVar10,uVar10);
    puVar9[1] = CONCAT44(uVar14,uVar14);
    puVar5 = DAT_30045890;
    uVar11 = (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar16 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar16 >> 0x20)) << 0x10 |
             (ulonglong)
             CONCAT24((short)((ulonglong)uVar13 >> 0x30),(uint)(ushort)((ulonglong)uVar13 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8);
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    puVar9[2] = CONCAT44(uVar10,uVar10);
    puVar9[3] = CONCAT44(uVar14,uVar14);
    uVar16 = DAT_3003e8b8;
    puVar9 = puVar8;
  } while (puVar8 < puVar5);
  puVar9 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 4;
  do {
    uVar10 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar6 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar10 >> 0x10),uVar10)) >>
                                                  0x20),uVar10) >> 0x18),
                                              CONCAT12((char)((uint)uVar10 >> 8),(short)uVar10)) >>
                                    0x10),(short)uVar10) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar7 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar6] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar6] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar6] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar6] +
                                      (short)(&DAT_300470e8)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar16);
    uVar13 = psubusw(uVar13,uVar16);
    uVar11 = CONCAT44((uint)(ushort)((ulonglong)uVar17 >> 0x10) << 0x10,(int)uVar17 << 0x10) |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             (ulonglong)CONCAT24((short)((ulonglong)uVar13 >> 0x10),(int)uVar13) &
             0xffffffff0000ffff;
    puVar8 = puVar9 + 4;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    *puVar9 = CONCAT44(uVar10,uVar10);
    puVar9[1] = CONCAT44(uVar14,uVar14);
    puVar5 = DAT_30045894;
    uVar11 = (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar17 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar17 >> 0x20)) << 0x10 |
             (ulonglong)
             CONCAT24((short)((ulonglong)uVar13 >> 0x30),(uint)(ushort)((ulonglong)uVar13 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8);
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    puVar9[2] = CONCAT44(uVar10,uVar10);
    puVar9[3] = CONCAT44(uVar14,uVar14);
    puVar9 = puVar8;
  } while (puVar8 < puVar5);
  return;
}



/* === FUN_30026580 @ 0x30026580 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30026580 @ 0x30026580 */



void FUN_30026580(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  short sVar14;
  short sVar17;
  short sVar18;
  undefined8 uVar15;
  short sVar19;
  undefined8 uVar16;
  
  uVar16 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar15 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar14 = (short)uVar15;
    sVar17 = (short)((ulonglong)uVar15 >> 0x10);
    sVar18 = (short)((ulonglong)uVar15 >> 0x20);
    sVar19 = (short)((ulonglong)uVar15 >> 0x30);
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17,(short)(&DAT_30046ce8)[bVar3] + sVar14))),
                    uVar16);
    uVar15 = psubusw(uVar15,uVar16);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar14))),
                    uVar16);
    uVar11 = psubusw(uVar11,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300478e8)[bVar4] + sVar14))),
                    uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar5 = *DAT_300458a8;
    uVar13 = (undefined2)(((ulonglong)(byte)((uint)uVar5 >> 0x18) << 0x38) >> 0x30);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar15 >> 0x10),(int)uVar15) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10) |
               (ulonglong)
               CONCAT41((int)(((ulonglong)(byte)((uint)uVar5 >> 8) << 0x38) >> 0x20),(char)uVar5) <<
               0x18;
    puVar6 = DAT_30045890;
    DAT_300458a8 = DAT_300458a8 + 1;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar15 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar15 >> 0x20)) |
                 (ulonglong)
                 CONCAT24(uVar13,(uint)(ushort)(((ulonglong)
                                                 CONCAT21(uVar13,(char)((uint)uVar5 >> 0x10)) <<
                                                0x28) >> 0x20)) << 0x10 |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    uVar15 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 2;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar14 = (short)uVar16;
    sVar17 = (short)((ulonglong)uVar16 >> 0x10);
    sVar18 = (short)((ulonglong)uVar16 >> 0x20);
    sVar19 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17,(short)(&DAT_30046ce8)[bVar3] + sVar14))),
                    uVar15);
    uVar16 = psubusw(uVar16,uVar15);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar14))),
                    uVar15);
    uVar11 = psubusw(uVar11,uVar15);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300478e8)[bVar4] + sVar14))),
                    uVar15);
    uVar12 = psubusw(uVar12,uVar15);
    uVar5 = *DAT_300458ac;
    uVar13 = (undefined2)(((ulonglong)(byte)((uint)uVar5 >> 0x18) << 0x38) >> 0x30);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10) |
               (ulonglong)
               CONCAT41((int)(((ulonglong)(byte)((uint)uVar5 >> 8) << 0x38) >> 0x20),(char)uVar5) <<
               0x18;
    puVar6 = DAT_30045894;
    DAT_300458ac = DAT_300458ac + 1;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar16 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar16 >> 0x20)) |
                 (ulonglong)
                 CONCAT24(uVar13,(uint)(ushort)(((ulonglong)
                                                 CONCAT21(uVar13,(char)((uint)uVar5 >> 0x10)) <<
                                                0x28) >> 0x20)) << 0x10 |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_30027380 @ 0x30027380 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027380 @ 0x30027380 */



void FUN_30027380(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  puVar2 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar6 = (undefined1)((ushort)*DAT_300458a4 >> 8);
    uVar4 = (undefined1)((ushort)*DAT_300458a0 >> 8);
    uVar3 = (undefined1)*DAT_300458a0;
    uVar5 = (undefined1)*DAT_300458a4;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_300458a4 = DAT_300458a4 + 1;
    uVar1 = *DAT_3004589c;
    uVar9 = (undefined1)((uint)uVar1 >> 0x18);
    uVar8 = (undefined1)((uint)uVar1 >> 0x10);
    uVar7 = (undefined1)((uint)uVar1 >> 8);
    DAT_30045894[1] =
         CONCAT17(uVar9,CONCAT16(uVar6,CONCAT15(uVar9,CONCAT14(uVar4,CONCAT13(uVar8,CONCAT12(uVar6,
                                                  CONCAT11(uVar8,uVar4)))))));
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar5),uVar7),uVar3),
                                    (char)uVar1),uVar5),CONCAT11((char)uVar1,uVar3));
    DAT_30045894 = DAT_30045894 + 2;
    uVar1 = *DAT_30045898;
    uVar9 = (undefined1)((uint)uVar1 >> 0x18);
    uVar8 = (undefined1)((uint)uVar1 >> 0x10);
    uVar7 = (undefined1)((uint)uVar1 >> 8);
    puVar2[1] = CONCAT17(uVar9,CONCAT16(uVar6,CONCAT15(uVar9,CONCAT14(uVar4,CONCAT13(uVar8,CONCAT12(
                                                  uVar6,CONCAT11(uVar8,uVar4)))))));
    DAT_30045898 = DAT_30045898 + 1;
    *puVar2 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar5),uVar7),uVar3),
                                         (char)uVar1),uVar5),CONCAT11((char)uVar1,uVar3));
    puVar2 = puVar2 + 2;
  } while (puVar2 < DAT_30045890);
  return;
}



/* === FUN_30027570 @ 0x30027570 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027570 @ 0x30027570 */



void FUN_30027570(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  puVar2 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar6 = (undefined1)((ushort)*DAT_300458a4 >> 8);
    uVar4 = (undefined1)((ushort)*DAT_300458a0 >> 8);
    uVar3 = (undefined1)*DAT_300458a0;
    uVar5 = (undefined1)*DAT_300458a4;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_300458a4 = DAT_300458a4 + 1;
    uVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar9 = (undefined1)((uint)uVar1 >> 0x18);
    uVar8 = (undefined1)((uint)uVar1 >> 0x10);
    uVar7 = (undefined1)((uint)uVar1 >> 8);
    DAT_30045894[1] =
         CONCAT17(uVar6,CONCAT16(uVar9,CONCAT15(uVar4,CONCAT14(uVar9,CONCAT13(uVar6,CONCAT12(uVar8,
                                                  CONCAT11(uVar4,uVar8)))))));
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar5,uVar7),uVar3),uVar7),uVar5),
                           (char)uVar1),CONCAT11(uVar3,(char)uVar1));
    DAT_30045894 = DAT_30045894 + 2;
    uVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar9 = (undefined1)((uint)uVar1 >> 0x18);
    uVar8 = (undefined1)((uint)uVar1 >> 0x10);
    uVar7 = (undefined1)((uint)uVar1 >> 8);
    puVar2[1] = CONCAT17(uVar6,CONCAT16(uVar9,CONCAT15(uVar4,CONCAT14(uVar9,CONCAT13(uVar6,CONCAT12(
                                                  uVar8,CONCAT11(uVar4,uVar8)))))));
    *puVar2 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar5,uVar7),uVar3),uVar7),uVar5
                                        ),(char)uVar1),CONCAT11(uVar3,(char)uVar1));
    puVar2 = puVar2 + 2;
  } while (puVar2 < DAT_30045890);
  return;
}



/* === FUN_30027760 @ 0x30027760 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027760 @ 0x30027760 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_30027760(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 uVar12;
  ulonglong uVar11;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined2 uVar16;
  ulonglong uVar15;
  undefined2 uVar17;
  short sVar18;
  short sVar21;
  short sVar22;
  undefined8 uVar19;
  short sVar23;
  undefined8 uVar20;
  
  uVar20 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    puVar6 = DAT_30045890;
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar19 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar19 = psllw(uVar19,2);
    uVar19 = pmulhw(uVar19,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar18 = (short)uVar19;
    sVar21 = (short)((ulonglong)uVar19 >> 0x10);
    sVar22 = (short)((ulonglong)uVar19 >> 0x20);
    sVar23 = (short)((ulonglong)uVar19 >> 0x30);
    uVar19 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar21,(short)(&DAT_30046ce8)[bVar3] + sVar18))),
                    uVar20);
    uVar19 = psubusw(uVar19,uVar20);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar21,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar18))),
                    uVar20);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_3004f1b8,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_3004f1b8,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_3004f1b8,
                                              (ushort)uVar19 >> _DAT_3004f1b8))),_DAT_3004f1a0);
    uVar19 = psubusw(uVar13,uVar20);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar21,(short)(&DAT_300478e8)[bVar4] + sVar18))),
                    uVar20);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_3004f1c0,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_3004f1c0,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_3004f1c0,
                                              (ushort)uVar19 >> _DAT_3004f1c0))),_DAT_3004f1a8);
    uVar19 = psubusw(uVar13,uVar20);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_3004f1c8,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_3004f1c8,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_3004f1c8,
                                              (ushort)uVar19 >> _DAT_3004f1c8))),_DAT_3004f1b0);
    uVar15 = uVar11 | uVar14 | uVar15;
    puVar9 = puVar10 + 2;
    uVar12 = (undefined2)(uVar15 >> 0x10);
    uVar16 = (undefined2)(uVar15 >> 0x20);
    uVar17 = (undefined2)(uVar15 >> 0x30);
    *puVar10 = CONCAT44(CONCAT22(uVar12,uVar12),CONCAT22((short)uVar15,(short)uVar15));
    puVar10[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar16,uVar16)));
    uVar19 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 2;
  do {
    puVar6 = DAT_30045894;
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar20 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar20 = psllw(uVar20,2);
    uVar20 = pmulhw(uVar20,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar18 = (short)uVar20;
    sVar21 = (short)((ulonglong)uVar20 >> 0x10);
    sVar22 = (short)((ulonglong)uVar20 >> 0x20);
    sVar23 = (short)((ulonglong)uVar20 >> 0x30);
    uVar20 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar21,(short)(&DAT_30046ce8)[bVar3] + sVar18))),
                    uVar19);
    uVar20 = psubusw(uVar20,uVar19);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar21,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar18))),
                    uVar19);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_3004f1b8,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_3004f1b8,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_3004f1b8,
                                              (ushort)uVar20 >> _DAT_3004f1b8))),_DAT_3004f1a0);
    uVar20 = psubusw(uVar13,uVar19);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar21,(short)(&DAT_300478e8)[bVar4] + sVar18))),
                    uVar19);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_3004f1c0,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_3004f1c0,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_3004f1c0,
                                              (ushort)uVar20 >> _DAT_3004f1c0))),_DAT_3004f1a8);
    uVar20 = psubusw(uVar13,uVar19);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_3004f1c8,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_3004f1c8,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_3004f1c8,
                                              (ushort)uVar20 >> _DAT_3004f1c8))),_DAT_3004f1b0);
    uVar15 = uVar11 | uVar14 | uVar15;
    puVar9 = puVar10 + 2;
    uVar12 = (undefined2)(uVar15 >> 0x10);
    uVar16 = (undefined2)(uVar15 >> 0x20);
    uVar17 = (undefined2)(uVar15 >> 0x30);
    *puVar10 = CONCAT44(CONCAT22(uVar12,uVar12),CONCAT22((short)uVar15,(short)uVar15));
    puVar10[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar16,uVar16)));
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_300279c0 @ 0x300279c0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300279c0 @ 0x300279C0 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_300279c0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 uVar12;
  ulonglong uVar11;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined2 uVar16;
  ulonglong uVar15;
  undefined2 uVar17;
  short sVar18;
  short sVar21;
  short sVar22;
  undefined8 uVar19;
  short sVar23;
  undefined8 uVar20;
  
  uVar20 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    puVar6 = DAT_30045890;
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar19 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar19 = psllw(uVar19,2);
    uVar19 = pmulhw(uVar19,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar18 = (short)uVar19;
    sVar21 = (short)((ulonglong)uVar19 >> 0x10);
    sVar22 = (short)((ulonglong)uVar19 >> 0x20);
    sVar23 = (short)((ulonglong)uVar19 >> 0x30);
    uVar19 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*pbVar8] + sVar23,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar1] + sVar21,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18))),uVar20);
    uVar19 = psubusw(uVar19,uVar20);
    uVar13 = paddsw(CONCAT26((short)(&DAT_300474e8)[*pbVar8] + (short)(&DAT_300470e8)[*pbVar7] +
                             sVar23,CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) +
                                             sVar22,CONCAT22((short)(&DAT_300474e8)[*pbVar1] +
                                                             (short)(&DAT_300470e8)[*pbVar2] +
                                                             sVar21,(short)((uint)(&DAT_300474e8)
                                                                                  [bVar3] >> 0x10) +
                                                                    (short)((uint)(&DAT_300470e8)
                                                                                  [bVar4] >> 0x10) +
                                                                    sVar18))),uVar20);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_3004f1b8,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_3004f1b8,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_3004f1b8,
                                              (ushort)uVar19 >> _DAT_3004f1b8))),_DAT_3004f1a0);
    uVar19 = psubusw(uVar13,uVar20);
    uVar13 = paddsw(CONCAT26((short)(&DAT_300478e8)[*pbVar7] + sVar23,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar2] + sVar21,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18))),uVar20);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_3004f1c0,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_3004f1c0,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_3004f1c0,
                                              (ushort)uVar19 >> _DAT_3004f1c0))),_DAT_3004f1a8);
    uVar19 = psubusw(uVar13,uVar20);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_3004f1c8,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_3004f1c8,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_3004f1c8,
                                              (ushort)uVar19 >> _DAT_3004f1c8))),_DAT_3004f1b0);
    uVar15 = uVar11 | uVar14 | uVar15;
    puVar9 = puVar10 + 2;
    uVar12 = (undefined2)(uVar15 >> 0x10);
    uVar16 = (undefined2)(uVar15 >> 0x20);
    uVar17 = (undefined2)(uVar15 >> 0x30);
    *puVar10 = CONCAT44(CONCAT22(uVar12,uVar12),CONCAT22((short)uVar15,(short)uVar15));
    puVar10[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar16,uVar16)));
    uVar19 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 2;
  do {
    puVar6 = DAT_30045894;
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar20 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar20 = psllw(uVar20,2);
    uVar20 = pmulhw(uVar20,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar18 = (short)uVar20;
    sVar21 = (short)((ulonglong)uVar20 >> 0x10);
    sVar22 = (short)((ulonglong)uVar20 >> 0x20);
    sVar23 = (short)((ulonglong)uVar20 >> 0x30);
    uVar20 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*DAT_300458a0] + sVar23,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar7] + sVar21,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18))),uVar19);
    uVar20 = psubusw(uVar20,uVar19);
    uVar13 = paddsw(CONCAT26((short)(&DAT_300474e8)[*DAT_300458a0] +
                             (short)(&DAT_300470e8)[*DAT_300458a4] + sVar23,
                             CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                                      (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_300474e8)[*pbVar7] +
                                               (short)(&DAT_300470e8)[*pbVar8] + sVar21,
                                               (short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18))),uVar19);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_3004f1b8,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_3004f1b8,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_3004f1b8,
                                              (ushort)uVar20 >> _DAT_3004f1b8))),_DAT_3004f1a0);
    uVar20 = psubusw(uVar13,uVar19);
    uVar13 = paddsw(CONCAT26((short)(&DAT_300478e8)[*DAT_300458a4] + sVar23,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar8] + sVar21,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18))),uVar19);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_3004f1c0,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_3004f1c0,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_3004f1c0,
                                              (ushort)uVar20 >> _DAT_3004f1c0))),_DAT_3004f1a8);
    uVar20 = psubusw(uVar13,uVar19);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_3004f1c8,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_3004f1c8,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_3004f1c8,
                                              (ushort)uVar20 >> _DAT_3004f1c8))),_DAT_3004f1b0);
    uVar15 = uVar11 | uVar14 | uVar15;
    puVar9 = puVar10 + 2;
    uVar12 = (undefined2)(uVar15 >> 0x10);
    uVar16 = (undefined2)(uVar15 >> 0x20);
    uVar17 = (undefined2)(uVar15 >> 0x30);
    *puVar10 = CONCAT44(CONCAT22(uVar12,uVar12),CONCAT22((short)uVar15,(short)uVar15));
    puVar10[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar16,uVar16)));
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}



/* === FUN_30027cc0 @ 0x30027cc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027cc0 @ 0x30027CC0 */



void FUN_30027cc0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  int local_1c;
  
  pbVar13 = DAT_300458a4;
  pbVar2 = DAT_300458a0;
  local_1c = param_1;
  do {
    puVar11 = DAT_30045890;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar1];
    uVar8 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar7);
    uVar9 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar7);
    uVar10 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar7);
    puVar12 = DAT_30045890 + 2;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar6);
    DAT_30045890 = puVar12;
    puVar11[1] = uVar8 | uVar9 | uVar10;
    puVar11 = DAT_30045890;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar1];
    uVar8 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar7);
    uVar9 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar7);
    uVar10 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar7);
    puVar12 = DAT_30045890 + 2;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar6);
    DAT_30045890 = puVar12;
    puVar11[1] = uVar8 | uVar9 | uVar10;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  do {
    DAT_300458a4 = pbVar13;
    DAT_300458a0 = pbVar2;
    puVar11 = DAT_30045894;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar2];
    uVar8 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar7);
    uVar9 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar7);
    uVar10 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar7);
    puVar12 = DAT_30045894 + 2;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar6);
    DAT_30045894 = puVar12;
    puVar11[1] = uVar8 | uVar9 | uVar10;
    puVar11 = DAT_30045894;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar2];
    uVar8 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar7);
    uVar9 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar7);
    uVar10 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar7);
    puVar12 = DAT_30045894 + 2;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar6);
    DAT_30045894 = puVar12;
    puVar11[1] = uVar8 | uVar9 | uVar10;
    local_1c = local_1c + -1;
    pbVar2 = DAT_300458a0;
    pbVar13 = DAT_300458a4;
  } while (local_1c != 0);
  return;
}



/* === FUN_30027fc0 @ 0x30027fc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027fc0 @ 0x30027FC0 */



void FUN_30027fc0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_1c;
  
  pbVar10 = DAT_300458a4;
  pbVar2 = DAT_300458a0;
  local_1c = param_1;
  bVar3 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar4 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar14 = (&DAT_30045ce8)[bVar3];
  iVar15 = (&DAT_300468e8)[bVar4];
  iVar13 = (&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4];
  do {
    bVar3 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar6 = (&DAT_300458d8)[bVar3];
    puVar11 = DAT_30045890 + 1;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + iVar14 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c + iVar13 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + iVar15 * 4 + iVar6);
    DAT_30045890 = puVar11;
    puVar11 = DAT_30045890;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar14 = (&DAT_300458d8)[bVar5];
    iVar15 = (&DAT_300458d8)[*pbVar1];
    uVar7 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar15);
    uVar8 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar15);
    uVar9 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar15);
    puVar12 = DAT_30045890 + 2;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar14) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar14) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar14);
    DAT_30045890 = puVar12;
    puVar11[1] = uVar7 | uVar8 | uVar9;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar14 = (&DAT_30045ce8)[bVar3];
    iVar15 = (&DAT_300468e8)[bVar4];
    iVar13 = (&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4];
    bVar3 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar6 = (&DAT_300458d8)[bVar3];
    puVar11 = DAT_30045890 + 1;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + iVar14 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c + iVar13 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + iVar15 * 4 + iVar6);
    DAT_30045890 = puVar11;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar3 = *pbVar2;
  DAT_300458a0 = pbVar2 + 1;
  bVar4 = *pbVar10;
  DAT_300458a4 = pbVar10 + 1;
  iVar14 = (&DAT_30045ce8)[bVar3];
  iVar15 = (&DAT_300468e8)[bVar4];
  iVar13 = (&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4];
  do {
    bVar3 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar6 = (&DAT_300458d8)[bVar3];
    puVar11 = DAT_30045894 + 1;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + iVar14 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c + iVar13 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + iVar15 * 4 + iVar6);
    DAT_30045894 = puVar11;
    puVar11 = DAT_30045894;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar14 = (&DAT_300458d8)[bVar5];
    iVar15 = (&DAT_300458d8)[*pbVar2];
    uVar7 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar15);
    uVar8 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar15);
    uVar9 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar15);
    puVar12 = DAT_30045894 + 2;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar14) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar14) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar14);
    DAT_30045894 = puVar12;
    puVar11[1] = uVar7 | uVar8 | uVar9;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar14 = (&DAT_30045ce8)[bVar3];
    iVar15 = (&DAT_300468e8)[bVar4];
    iVar13 = (&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4];
    bVar3 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar6 = (&DAT_300458d8)[bVar3];
    puVar11 = DAT_30045894 + 1;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + iVar14 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c + iVar13 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + iVar15 * 4 + iVar6);
    DAT_30045894 = puVar11;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}



/* === FUN_30028390 @ 0x30028390 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30028390 @ 0x30028390 */



void FUN_30028390(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 uVar12;
  ulonglong uVar11;
  ushort uVar14;
  undefined8 uVar13;
  ushort uVar16;
  undefined8 uVar15;
  short sVar17;
  short sVar19;
  ushort uVar20;
  short sVar21;
  undefined8 uVar18;
  short sVar22;
  uint uVar23;
  
  puVar8 = DAT_30045890 + param_1 * 6;
  pbVar6 = DAT_300458a4;
  pbVar7 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = puVar8;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar7;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar6;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar17))),
                    DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  puVar8 = DAT_30045894 + param_1 * 6;
  puVar10 = DAT_30045894;
  DAT_30045894 = puVar8;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar6 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar7 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar6] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar6] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar17))),
                    DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar6] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar7] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar6] +
                                      (short)(&DAT_300470e8)[*pbVar7] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar7] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar7] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  return;
}



/* === FUN_300287a0 @ 0x300287a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300287a0 @ 0x300287A0 */



void FUN_300287a0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 uVar12;
  ulonglong uVar11;
  ushort uVar14;
  undefined8 uVar13;
  ushort uVar16;
  undefined8 uVar15;
  short sVar17;
  short sVar19;
  ushort uVar20;
  short sVar21;
  undefined8 uVar18;
  short sVar22;
  uint uVar23;
  
  puVar8 = DAT_30045890 + param_1 * 6;
  pbVar6 = DAT_300458a4;
  pbVar7 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = puVar8;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar7;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar6;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*pbVar7] + sVar22,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar1] + sVar19,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)(&DAT_300474e8)[*pbVar7] + (short)(&DAT_300470e8)[*pbVar6] +
                             sVar22,CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) +
                                             sVar21,CONCAT22((short)(&DAT_300474e8)[*pbVar1] +
                                                             (short)(&DAT_300470e8)[*pbVar2] +
                                                             sVar19,(short)((uint)(&DAT_300474e8)
                                                                                  [bVar3] >> 0x10) +
                                                                    (short)((uint)(&DAT_300470e8)
                                                                                  [bVar4] >> 0x10) +
                                                                    sVar17))),DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)(&DAT_300478e8)[*pbVar6] + sVar22,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar2] + sVar19,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  puVar8 = DAT_30045894 + param_1 * 6;
  puVar10 = DAT_30045894;
  DAT_30045894 = puVar8;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar6 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar7 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*DAT_300458a0] + sVar22,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar6] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar6] + sVar19,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)(&DAT_300474e8)[*DAT_300458a0] +
                             (short)(&DAT_300470e8)[*DAT_300458a4] + sVar22,
                             CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar6] >> 0x10) +
                                      (short)((uint)(&DAT_300470e8)[*pbVar7] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_300474e8)[*pbVar6] +
                                               (short)(&DAT_300470e8)[*pbVar7] + sVar19,
                                               (short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)(&DAT_300478e8)[*DAT_300458a4] + sVar22,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar7] >> 0x10) + sVar21,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar7] + sVar19,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17))),DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  return;
}



/* === FUN_30028fc0 @ 0x30028fc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30028fc0 @ 0x30028FC0 */



void FUN_30028fc0(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int local_1c;
  
  pbVar10 = DAT_300458a4;
  pbVar9 = DAT_300458a0;
  local_1c = param_1;
  bVar1 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar2 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar15 = (&DAT_30045ce8)[bVar1];
  iVar16 = (&DAT_300468e8)[bVar2];
  iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    puVar7 = DAT_30045890;
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045890 + 6);
    *DAT_30045890 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045890 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    pbVar8 = DAT_30045898;
    puVar7 = DAT_30045890;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar15 = (&DAT_30045ce8)[bVar1];
    iVar16 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1];
    iVar4 = (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 2;
    iVar5 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar5 + iVar16 * 4),
                     *(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4));
    uVar3 = *(undefined1 *)(iVar5 + iVar15 * 4);
    puVar11 = DAT_30045890 + 3;
    *DAT_30045890 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045890 = puVar11;
    iVar5 = (&DAT_3004b118)[pbVar8[1]];
    uVar14 = CONCAT13(*(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4),
                      CONCAT12(*(undefined1 *)(iVar5 + iVar15 * 4),uVar6));
    puVar7[1] = uVar14;
    uVar12 = (uint)*(byte *)(iVar5 + iVar16 * 4);
    puVar7[2] = uVar12 << 0x18 | (uVar14 >> 0x10) << 8 | uVar12;
    puVar7 = DAT_30045890;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar15 = (&DAT_30045ce8)[bVar1];
    iVar16 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045890 + 6);
    *DAT_30045890 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045890 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar1 = *pbVar9;
  DAT_300458a0 = pbVar9 + 1;
  bVar2 = *pbVar10;
  DAT_300458a4 = pbVar10 + 1;
  iVar15 = (&DAT_30045ce8)[bVar1];
  iVar16 = (&DAT_300468e8)[bVar2];
  iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    puVar7 = DAT_30045894;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045894 + 6);
    *DAT_30045894 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045894 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    pbVar9 = DAT_3004589c;
    puVar7 = DAT_30045894;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar15 = (&DAT_30045ce8)[bVar1];
    iVar16 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1];
    iVar4 = (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    iVar5 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar5 + iVar16 * 4),
                     *(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4));
    uVar3 = *(undefined1 *)(iVar5 + iVar15 * 4);
    puVar11 = DAT_30045894 + 3;
    *DAT_30045894 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045894 = puVar11;
    iVar5 = (&DAT_3004b118)[pbVar9[1]];
    uVar14 = CONCAT13(*(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4),
                      CONCAT12(*(undefined1 *)(iVar5 + iVar15 * 4),uVar6));
    puVar7[1] = uVar14;
    uVar12 = (uint)*(byte *)(iVar5 + iVar16 * 4);
    puVar7[2] = uVar12 << 0x18 | (uVar14 >> 0x10) << 8 | uVar12;
    puVar7 = DAT_30045894;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar15 = (&DAT_30045ce8)[bVar1];
    iVar16 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045894 + 6);
    *DAT_30045894 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045894 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}



/* === FUN_300293f0 @ 0x300293f0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300293f0 @ 0x300293F0 */



void FUN_300293f0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8b8;
  pbVar6 = DAT_300458a4;
  pbVar7 = DAT_300458a0;
  puVar9 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 4;
  do {
    uVar10 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar7;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar10 >> 0x10),uVar10)) >>
                                                  0x20),uVar10) >> 0x18),
                                              CONCAT12((char)((uint)uVar10 >> 8),(short)uVar10)) >>
                                    0x10),(short)uVar10) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar6;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar17);
    uVar13 = psubusw(uVar13,uVar17);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar13 >> 0x10) << 0x10,(int)uVar13 << 0x10);
    puVar8 = puVar9 + 4;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    *puVar9 = CONCAT44(uVar10,uVar10);
    puVar9[1] = CONCAT44(uVar14,uVar14);
    puVar5 = DAT_30045890;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar16 >> 0x30),(uint)(ushort)((ulonglong)uVar16 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar13 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar13 >> 0x20)) << 0x10;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    puVar9[2] = CONCAT44(uVar10,uVar10);
    puVar9[3] = CONCAT44(uVar14,uVar14);
    uVar16 = DAT_3003e8b8;
    puVar9 = puVar8;
  } while (puVar8 < puVar5);
  puVar9 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 4;
  do {
    uVar10 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar6 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar10 >> 0x10),uVar10)) >>
                                                  0x20),uVar10) >> 0x18),
                                              CONCAT12((char)((uint)uVar10 >> 8),(short)uVar10)) >>
                                    0x10),(short)uVar10) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar7 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar6] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar6] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar6] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar6] +
                                      (short)(&DAT_300470e8)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar16);
    uVar13 = psubusw(uVar13,uVar16);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar17 >> 0x10),(int)uVar17) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar13 >> 0x10) << 0x10,(int)uVar13 << 0x10);
    puVar8 = puVar9 + 4;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    *puVar9 = CONCAT44(uVar10,uVar10);
    puVar9[1] = CONCAT44(uVar14,uVar14);
    puVar5 = DAT_30045894;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar17 >> 0x30),(uint)(ushort)((ulonglong)uVar17 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar13 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar13 >> 0x20)) << 0x10;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    puVar9[2] = CONCAT44(uVar10,uVar10);
    puVar9[3] = CONCAT44(uVar14,uVar14);
    puVar9 = puVar8;
  } while (puVar8 < puVar5);
  return;
}



/* === FUN_3002a0a0 @ 0x3002a0a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a0a0 @ 0x3002A0A0 */



void FUN_3002a0a0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  
  uVar2 = DAT_3003e8d8;
  puVar3 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar1 = *DAT_3004589c;
    uVar13 = (undefined1)((uint)uVar1 >> 0x18);
    uVar12 = (undefined1)((uint)uVar1 >> 0x10);
    uVar11 = (undefined1)((uint)uVar1 >> 8);
    uVar10 = (undefined1)((ulonglong)uVar2 >> 0x18);
    uVar9 = (undefined1)((ulonglong)uVar2 >> 0x10);
    uVar8 = (undefined1)((ulonglong)uVar2 >> 8);
    uVar4 = (undefined1)((ulonglong)uVar2 >> 0x20);
    uVar5 = (undefined1)((ulonglong)uVar2 >> 0x28);
    uVar6 = (undefined1)((ulonglong)uVar2 >> 0x30);
    uVar7 = (undefined1)((ulonglong)uVar2 >> 0x38);
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar11,uVar10),uVar11),uVar9),
                                    (char)uVar1),uVar8),CONCAT11((char)uVar1,(char)uVar2));
    DAT_30045894[1] =
         CONCAT17(uVar13,CONCAT16(uVar7,CONCAT15(uVar13,CONCAT14(uVar6,CONCAT13(uVar12,CONCAT12(
                                                  uVar5,CONCAT11(uVar12,uVar4)))))));
    DAT_30045894 = DAT_30045894 + 2;
    uVar1 = *DAT_30045898;
    uVar13 = (undefined1)((uint)uVar1 >> 0x18);
    uVar12 = (undefined1)((uint)uVar1 >> 0x10);
    uVar11 = (undefined1)((uint)uVar1 >> 8);
    DAT_30045898 = DAT_30045898 + 1;
    *puVar3 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar11,uVar10),uVar11),uVar9),
                                         (char)uVar1),uVar8),CONCAT11((char)uVar1,(char)uVar2));
    puVar3[1] = CONCAT17(uVar13,CONCAT16(uVar7,CONCAT15(uVar13,CONCAT14(uVar6,CONCAT13(uVar12,
                                                  CONCAT12(uVar5,CONCAT11(uVar12,uVar4)))))));
    puVar3 = puVar3 + 2;
  } while (puVar3 < DAT_30045890);
  return;
}



/* === FUN_3002a140 @ 0x3002a140 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a140 @ 0x3002A140 */



void FUN_3002a140(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  
  iVar3 = param_1 << 1;
  puVar4 = DAT_30045890;
  pbVar5 = DAT_30045898;
  do {
    DAT_30045890 = puVar4 + 2;
    bVar1 = pbVar5[1];
    DAT_30045898 = pbVar5 + 2;
    bVar2 = pbVar5[1];
    *puVar4 = (uint)*pbVar5 << 0x18 | 0x800080 | (uint)*pbVar5 << 8;
    iVar3 = iVar3 + -1;
    puVar4[1] = (uint)bVar1 << 0x18 | 0x800080 | (uint)bVar2 << 8;
    puVar4 = DAT_30045890;
    pbVar5 = DAT_30045898;
  } while (iVar3 != 0);
  iVar3 = param_1 << 1;
  do {
    puVar4 = DAT_30045894 + 2;
    bVar1 = DAT_3004589c[1];
    pbVar5 = DAT_3004589c + 2;
    bVar2 = DAT_3004589c[1];
    *DAT_30045894 = (uint)*DAT_3004589c << 0x18 | 0x800080 | (uint)*DAT_3004589c << 8;
    iVar3 = iVar3 + -1;
    DAT_30045894[1] = (uint)bVar1 << 0x18 | 0x800080 | (uint)bVar2 << 8;
    DAT_30045894 = puVar4;
    DAT_3004589c = pbVar5;
  } while (iVar3 != 0);
  return;
}



/* === FUN_3002a220 @ 0x3002a220 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a220 @ 0x3002A220 */



void FUN_3002a220(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  
  uVar2 = DAT_3003e8d8;
  puVar3 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar5 = (undefined1)((uint)uVar1 >> 0x18);
    uVar4 = (undefined1)((uint)uVar1 >> 0x10);
    uVar11 = (undefined1)((uint)uVar1 >> 8);
    uVar7 = (undefined1)((ulonglong)uVar2 >> 0x20);
    uVar8 = (undefined1)((ulonglong)uVar2 >> 0x28);
    uVar9 = (undefined1)((ulonglong)uVar2 >> 0x30);
    uVar10 = (undefined1)((ulonglong)uVar2 >> 0x38);
    DAT_30045894[1] =
         CONCAT17(uVar10,CONCAT16(uVar5,CONCAT15(uVar9,CONCAT14(uVar5,CONCAT13(uVar8,CONCAT12(uVar4,
                                                  CONCAT11(uVar7,uVar4)))))));
    uVar6 = (undefined1)((ulonglong)uVar2 >> 0x18);
    uVar5 = (undefined1)((ulonglong)uVar2 >> 0x10);
    uVar4 = (undefined1)((ulonglong)uVar2 >> 8);
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,uVar11),uVar5),uVar11),uVar4),
                           (char)uVar1),CONCAT11((char)uVar2,(char)uVar1));
    DAT_30045894 = DAT_30045894 + 2;
    uVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar13 = (undefined1)((uint)uVar1 >> 0x18);
    uVar12 = (undefined1)((uint)uVar1 >> 0x10);
    uVar11 = (undefined1)((uint)uVar1 >> 8);
    puVar3[1] = CONCAT17(uVar10,CONCAT16(uVar13,CONCAT15(uVar9,CONCAT14(uVar13,CONCAT13(uVar8,
                                                  CONCAT12(uVar12,CONCAT11(uVar7,uVar12)))))));
    *puVar3 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,uVar11),uVar5),uVar11),
                                         uVar4),(char)uVar1),CONCAT11((char)uVar2,(char)uVar1));
    puVar3 = puVar3 + 2;
  } while (puVar3 < DAT_30045890);
  return;
}



/* === FUN_3002a390 @ 0x3002a390 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a390 @ 0x3002A390 */



void FUN_3002a390(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar15;
  short sVar16;
  undefined8 uVar13;
  short sVar17;
  undefined8 uVar14;
  short sVar18;
  short sVar20;
  short sVar21;
  undefined8 uVar19;
  short sVar22;
  
  uVar5 = DAT_3003e8d0;
  uVar4 = DAT_3003e8c8;
  uVar14 = DAT_3003e8c0;
  uVar3 = DAT_3003e8a8;
  puVar6 = DAT_30045890 + param_1 * 2;
  puVar7 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar2 = DAT_30045898[1];
    uVar13 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar19 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar13 = pmulhw(uVar13,uVar4);
    uVar19 = pmulhw(uVar19,uVar4);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar7 + 4;
    uVar13 = paddsw(uVar13,uVar5);
    uVar13 = psubusw(uVar13,uVar5);
    uVar19 = paddsw(uVar19,uVar5);
    sVar8 = (short)uVar14;
    sVar12 = (short)uVar13 * sVar8;
    sVar9 = (short)((ulonglong)uVar14 >> 0x10);
    sVar15 = (short)((ulonglong)uVar13 >> 0x10) * sVar9;
    sVar10 = (short)((ulonglong)uVar14 >> 0x20);
    sVar16 = (short)((ulonglong)uVar13 >> 0x20) * sVar10;
    sVar11 = (short)((ulonglong)uVar14 >> 0x30);
    sVar17 = (short)((ulonglong)uVar13 >> 0x30) * sVar11;
    uVar13 = psubusw(uVar19,uVar5);
    sVar18 = (short)uVar13 * sVar8;
    sVar20 = (short)((ulonglong)uVar13 >> 0x10) * sVar9;
    sVar21 = (short)((ulonglong)uVar13 >> 0x20) * sVar10;
    sVar22 = (short)((ulonglong)uVar13 >> 0x30) * sVar11;
    *puVar7 = CONCAT44(CONCAT22(sVar15,sVar15),CONCAT22(sVar12,sVar12));
    puVar7[1] = CONCAT26(sVar17,CONCAT24(sVar17,CONCAT22(sVar16,sVar16)));
    puVar7[2] = CONCAT44(CONCAT22(sVar20,sVar20),CONCAT22(sVar18,sVar18));
    puVar7[3] = CONCAT26(sVar22,CONCAT24(sVar22,CONCAT22(sVar21,sVar21)));
    puVar7 = DAT_30045890;
  } while (DAT_30045890 < puVar6);
  puVar7 = DAT_30045894;
  do {
    uVar1 = *DAT_3004589c;
    uVar2 = DAT_3004589c[1];
    uVar14 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar13 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar14 = pmulhw(uVar14,uVar4);
    uVar13 = pmulhw(uVar13,uVar4);
    DAT_3004589c = DAT_3004589c + 2;
    puVar6 = puVar7 + 4;
    uVar14 = paddsw(uVar14,uVar5);
    uVar14 = psubusw(uVar14,uVar5);
    uVar13 = paddsw(uVar13,uVar5);
    sVar12 = (short)uVar14 * sVar8;
    sVar15 = (short)((ulonglong)uVar14 >> 0x10) * sVar9;
    sVar16 = (short)((ulonglong)uVar14 >> 0x20) * sVar10;
    sVar17 = (short)((ulonglong)uVar14 >> 0x30) * sVar11;
    uVar14 = psubusw(uVar13,uVar5);
    sVar18 = (short)uVar14 * sVar8;
    sVar20 = (short)((ulonglong)uVar14 >> 0x10) * sVar9;
    sVar21 = (short)((ulonglong)uVar14 >> 0x20) * sVar10;
    sVar22 = (short)((ulonglong)uVar14 >> 0x30) * sVar11;
    *puVar7 = CONCAT44(CONCAT22(sVar15,sVar15),CONCAT22(sVar12,sVar12));
    puVar7[1] = CONCAT26(sVar17,CONCAT24(sVar17,CONCAT22(sVar16,sVar16)));
    puVar7[2] = CONCAT44(CONCAT22(sVar20,sVar20),CONCAT22(sVar18,sVar18));
    puVar7[3] = CONCAT26(sVar22,CONCAT24(sVar22,CONCAT22(sVar21,sVar21)));
    puVar7 = puVar6;
  } while (puVar6 < DAT_30045894 + param_1 * 2);
  DAT_30045894 = puVar6;
  return;
}



/* === FUN_3002a5a0 @ 0x3002a5a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a5a0 @ 0x3002A5A0 */



void FUN_3002a5a0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar11;
  undefined6 uVar10;
  short sVar12;
  int iVar13;
  short sVar14;
  undefined6 uVar15;
  short sVar18;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8f0;
  uVar2 = DAT_3003e8b8;
  puVar3 = DAT_30045890 + param_1 * 6;
  puVar4 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                              CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >>
                                    0x10),(short)uVar1) & 0xffffffff00ff00ff,DAT_3003e8a8);
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    uVar16 = paddsw(uVar16,uVar2);
    uVar16 = psubusw(uVar16,uVar2);
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar14 = (short)uVar16;
    sVar6 = (short)uVar17;
    sVar7 = (short)((ulonglong)uVar17 >> 0x10);
    sVar8 = (short)((ulonglong)uVar17 >> 0x20);
    uVar15 = CONCAT24(sVar14 * sVar8,CONCAT22(sVar14 * sVar7,sVar14 * sVar6));
    sVar9 = (short)((ulonglong)uVar17 >> 0x30);
    iVar13 = CONCAT22(sVar18 * sVar7,sVar18 * sVar6);
    sVar11 = (short)((ulonglong)uVar16 >> 0x20);
    sVar12 = (short)((ulonglong)uVar16 >> 0x30);
    uVar10 = CONCAT24(sVar11 * sVar8,CONCAT22(sVar11 * sVar7,sVar11 * sVar6));
    *puVar4 = (int)((uint6)uVar15 >> 8);
    iVar5 = CONCAT22(sVar12 * sVar7,sVar12 * sVar6);
    puVar4[1] = (uint)(CONCAT26(sVar14 * sVar9,uVar15) >> 0x28) | iVar13 << 8;
    puVar4[2] = (int)(CONCAT26(sVar18 * sVar9,CONCAT24(sVar18 * sVar8,iVar13)) >> 0x18);
    puVar4[3] = (int)((uint6)uVar10 >> 8);
    DAT_30045890 = puVar4 + 6;
    puVar4[4] = (uint)(CONCAT26(sVar11 * sVar9,uVar10) >> 0x28) | iVar5 << 8;
    puVar4[5] = (int)(CONCAT26(sVar12 * sVar9,CONCAT24(sVar12 * sVar8,iVar5)) >> 0x18);
    puVar4 = DAT_30045890;
  } while (DAT_30045890 < puVar3);
  puVar4 = DAT_30045894;
  do {
    uVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                              CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >>
                                    0x10),(short)uVar1) & 0xffffffff00ff00ff,DAT_3003e8a8);
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    uVar17 = paddsw(uVar17,uVar2);
    uVar17 = psubusw(uVar17,uVar2);
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar14 = (short)uVar17;
    uVar15 = CONCAT24(sVar14 * sVar8,CONCAT22(sVar14 * sVar7,sVar14 * sVar6));
    iVar13 = CONCAT22(sVar18 * sVar7,sVar18 * sVar6);
    sVar11 = (short)((ulonglong)uVar17 >> 0x20);
    sVar12 = (short)((ulonglong)uVar17 >> 0x30);
    uVar10 = CONCAT24(sVar11 * sVar8,CONCAT22(sVar11 * sVar7,sVar11 * sVar6));
    *puVar4 = (int)((uint6)uVar15 >> 8);
    iVar5 = CONCAT22(sVar12 * sVar7,sVar12 * sVar6);
    puVar4[1] = (uint)(CONCAT26(sVar14 * sVar9,uVar15) >> 0x28) | iVar13 << 8;
    puVar4[2] = (int)(CONCAT26(sVar18 * sVar9,CONCAT24(sVar18 * sVar8,iVar13)) >> 0x18);
    puVar4[3] = (int)((uint6)uVar10 >> 8);
    puVar3 = puVar4 + 6;
    puVar4[4] = (uint)(CONCAT26(sVar11 * sVar9,uVar10) >> 0x28) | iVar5 << 8;
    puVar4[5] = (int)(CONCAT26(sVar12 * sVar9,CONCAT24(sVar12 * sVar8,iVar5)) >> 0x18);
    puVar4 = puVar3;
  } while (puVar3 < DAT_30045894 + param_1 * 6);
  DAT_30045894 = puVar3;
  return;
}



/* === FUN_3002a8d0 @ 0x3002a8d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a8d0 @ 0x3002A8D0 */



void FUN_3002a8d0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar14;
  undefined8 uVar12;
  undefined4 uVar15;
  undefined8 uVar13;
  undefined4 uVar16;
  short sVar17;
  short sVar20;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar21;
  
  uVar13 = DAT_3003e900;
  uVar2 = DAT_3003e8b0;
  uVar1 = DAT_3003e8a8;
  puVar3 = DAT_30045890 + param_1 * 4;
  puVar4 = DAT_30045890;
  do {
    uVar5 = *DAT_30045898;
    uVar15 = DAT_30045898[1];
    uVar12 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),(char)((uint)uVar5 >> 8)),
                              (ushort)(byte)uVar5) & 0xffffffff00ffffff,uVar1);
    uVar19 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar15 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar15 >> 0x10),uVar15)) >>
                                                  0x20),uVar15) >> 0x18),
                                              CONCAT12((char)((uint)uVar15 >> 8),(short)uVar15)) >>
                                    0x10),(short)uVar15) & 0xffffffff00ff00ff,uVar1);
    uVar12 = psllw(uVar12,2);
    uVar12 = pmulhw(uVar12,uVar2);
    uVar19 = psllw(uVar19,2);
    uVar19 = pmulhw(uVar19,uVar2);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar4 + 8;
    uVar12 = paddsw(uVar12,DAT_3003e8b8);
    uVar12 = psubusw(uVar12,DAT_3003e8b8);
    uVar19 = paddsw(uVar19,DAT_3003e8b8);
    sVar14 = (short)((ulonglong)uVar12 >> 0x10);
    sVar6 = (short)((ulonglong)uVar12 >> 0x20);
    sVar7 = (short)((ulonglong)uVar12 >> 0x30);
    sVar8 = (short)uVar13;
    sVar9 = (short)((ulonglong)uVar13 >> 0x10);
    uVar15 = CONCAT22((short)uVar12 * sVar9,(short)uVar12 * sVar8);
    sVar10 = (short)((ulonglong)uVar13 >> 0x20);
    sVar11 = (short)((ulonglong)uVar13 >> 0x30);
    uVar5 = CONCAT22(sVar6 * sVar9,sVar6 * sVar8);
    uVar12 = psubusw(uVar19,DAT_3003e8b8);
    sVar20 = (short)((ulonglong)uVar12 >> 0x10);
    sVar6 = (short)((ulonglong)uVar12 >> 0x20);
    sVar17 = (short)((ulonglong)uVar12 >> 0x30);
    uVar18 = CONCAT22((short)uVar12 * sVar9,(short)uVar12 * sVar8);
    uVar21 = (undefined4)(CONCAT26(sVar14 * sVar11,CONCAT24(sVar14 * sVar10,uVar15)) >> 0x20);
    uVar16 = CONCAT22(sVar6 * sVar9,sVar6 * sVar8);
    *puVar4 = CONCAT44(uVar15,uVar15);
    puVar4[1] = CONCAT44(uVar21,uVar21);
    uVar15 = (undefined4)(CONCAT26(sVar7 * sVar11,CONCAT24(sVar7 * sVar10,uVar5)) >> 0x20);
    puVar4[2] = CONCAT44(uVar5,uVar5);
    puVar4[3] = CONCAT44(uVar15,uVar15);
    uVar5 = (undefined4)(CONCAT26(sVar20 * sVar11,CONCAT24(sVar20 * sVar10,uVar18)) >> 0x20);
    puVar4[4] = CONCAT44(uVar18,uVar18);
    puVar4[5] = CONCAT44(uVar5,uVar5);
    uVar5 = (undefined4)(CONCAT26(sVar17 * sVar11,CONCAT24(sVar17 * sVar10,uVar16)) >> 0x20);
    puVar4[6] = CONCAT44(uVar16,uVar16);
    puVar4[7] = CONCAT44(uVar5,uVar5);
    puVar4 = DAT_30045890;
  } while (DAT_30045890 < puVar3);
  puVar4 = DAT_30045894;
  do {
    uVar5 = *DAT_3004589c;
    uVar15 = DAT_3004589c[1];
    uVar13 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),(char)((uint)uVar5 >> 8)),
                              (ushort)(byte)uVar5) & 0xffffffff00ffffff,uVar1);
    uVar12 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar15 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar15 >> 0x10),uVar15)) >>
                                                  0x20),uVar15) >> 0x18),
                                              CONCAT12((char)((uint)uVar15 >> 8),(short)uVar15)) >>
                                    0x10),(short)uVar15) & 0xffffffff00ff00ff,uVar1);
    uVar13 = psllw(uVar13,2);
    uVar13 = pmulhw(uVar13,uVar2);
    uVar12 = psllw(uVar12,2);
    uVar12 = pmulhw(uVar12,uVar2);
    DAT_3004589c = DAT_3004589c + 2;
    puVar3 = puVar4 + 8;
    uVar13 = paddsw(uVar13,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = paddsw(uVar12,DAT_3003e8b8);
    sVar14 = (short)((ulonglong)uVar13 >> 0x10);
    sVar6 = (short)((ulonglong)uVar13 >> 0x20);
    sVar7 = (short)((ulonglong)uVar13 >> 0x30);
    uVar15 = CONCAT22((short)uVar13 * sVar9,(short)uVar13 * sVar8);
    uVar5 = CONCAT22(sVar6 * sVar9,sVar6 * sVar8);
    uVar13 = psubusw(uVar12,DAT_3003e8b8);
    sVar20 = (short)((ulonglong)uVar13 >> 0x10);
    sVar6 = (short)((ulonglong)uVar13 >> 0x20);
    sVar17 = (short)((ulonglong)uVar13 >> 0x30);
    uVar18 = CONCAT22((short)uVar13 * sVar9,(short)uVar13 * sVar8);
    uVar21 = (undefined4)(CONCAT26(sVar14 * sVar11,CONCAT24(sVar14 * sVar10,uVar15)) >> 0x20);
    uVar16 = CONCAT22(sVar6 * sVar9,sVar6 * sVar8);
    *puVar4 = CONCAT44(uVar15,uVar15);
    puVar4[1] = CONCAT44(uVar21,uVar21);
    uVar15 = (undefined4)(CONCAT26(sVar7 * sVar11,CONCAT24(sVar7 * sVar10,uVar5)) >> 0x20);
    puVar4[2] = CONCAT44(uVar5,uVar5);
    puVar4[3] = CONCAT44(uVar15,uVar15);
    uVar5 = (undefined4)(CONCAT26(sVar20 * sVar11,CONCAT24(sVar20 * sVar10,uVar18)) >> 0x20);
    puVar4[4] = CONCAT44(uVar18,uVar18);
    puVar4[5] = CONCAT44(uVar5,uVar5);
    uVar5 = (undefined4)(CONCAT26(sVar17 * sVar11,CONCAT24(sVar17 * sVar10,uVar16)) >> 0x20);
    puVar4[6] = CONCAT44(uVar16,uVar16);
    puVar4[7] = CONCAT44(uVar5,uVar5);
    puVar4 = puVar3;
  } while (puVar3 < DAT_30045894 + param_1 * 4);
  DAT_30045894 = puVar3;
  return;
}



/* === FUN_3002ab80 @ 0x3002ab80 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ab80 @ 0x3002AB80 */



undefined4 FUN_3002ab80(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_EAX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar1 = DAT_30045890 + param_1 + -2;
  puVar5 = DAT_300458a4;
  puVar6 = DAT_300458a0;
  do {
    uVar3 = *puVar6;
    uVar4 = *puVar5;
    uVar2 = *DAT_30045898;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *DAT_30045890 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar4 >> 8),
                                                               (char)((ulonglong)uVar2 >> 0x18)),
                                                      (char)((uint)uVar3 >> 8)),
                                             (char)((ulonglong)uVar2 >> 0x10)),(char)uVar4),
                           (char)((ulonglong)uVar2 >> 8)),CONCAT11((char)uVar3,(char)uVar2));
    DAT_30045898 = DAT_30045898 + 1;
    bVar7 = DAT_30045890 < puVar1;
    DAT_30045890[1] =
         CONCAT17((char)((uint)uVar4 >> 0x18),
                  CONCAT16((char)((ulonglong)uVar2 >> 0x38),
                           CONCAT15((char)((uint)uVar3 >> 0x18),
                                    CONCAT14((char)((ulonglong)uVar2 >> 0x30),
                                             CONCAT13((char)((uint)uVar4 >> 0x10),
                                                      CONCAT12((char)((ulonglong)uVar2 >> 0x28),
                                                               CONCAT11((char)((uint)uVar3 >> 0x10),
                                                                        (char)((ulonglong)uVar2 >>
                                                                              0x20))))))));
    DAT_30045890 = DAT_30045890 + 2;
  } while (bVar7);
  puVar1 = DAT_30045894 + param_1 + -2;
  do {
    uVar3 = *DAT_300458a0;
    uVar4 = *DAT_300458a4;
    uVar2 = *DAT_3004589c;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_300458a4 = DAT_300458a4 + 1;
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar4 >> 8),
                                                               (char)((ulonglong)uVar2 >> 0x18)),
                                                      (char)((uint)uVar3 >> 8)),
                                             (char)((ulonglong)uVar2 >> 0x10)),(char)uVar4),
                           (char)((ulonglong)uVar2 >> 8)),CONCAT11((char)uVar3,(char)uVar2));
    DAT_3004589c = DAT_3004589c + 1;
    bVar7 = DAT_30045894 < puVar1;
    DAT_30045894[1] =
         CONCAT17((char)((uint)uVar4 >> 0x18),
                  CONCAT16((char)((ulonglong)uVar2 >> 0x38),
                           CONCAT15((char)((uint)uVar3 >> 0x18),
                                    CONCAT14((char)((ulonglong)uVar2 >> 0x30),
                                             CONCAT13((char)((uint)uVar4 >> 0x10),
                                                      CONCAT12((char)((ulonglong)uVar2 >> 0x28),
                                                               CONCAT11((char)((uint)uVar3 >> 0x10),
                                                                        (char)((ulonglong)uVar2 >>
                                                                              0x20))))))));
    DAT_30045894 = DAT_30045894 + 2;
  } while (bVar7);
  return in_EAX;
}



/* === FUN_3002ad30 @ 0x3002ad30 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ad30 @ 0x3002AD30 */



undefined4 FUN_3002ad30(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_EAX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar1 = DAT_30045890 + param_1 + -2;
  puVar5 = DAT_300458a4;
  puVar6 = DAT_300458a0;
  do {
    uVar3 = *puVar6;
    uVar4 = *puVar5;
    uVar2 = *DAT_30045898;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *DAT_30045890 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar2 >> 0x18),
                                                               (char)((uint)uVar4 >> 8)),
                                                      (char)((ulonglong)uVar2 >> 0x10)),
                                             (char)((uint)uVar3 >> 8)),(char)((ulonglong)uVar2 >> 8)
                                   ),(char)uVar4),CONCAT11((char)uVar2,(char)uVar3));
    DAT_30045898 = DAT_30045898 + 1;
    bVar7 = DAT_30045890 < puVar1;
    DAT_30045890[1] =
         CONCAT17((char)((ulonglong)uVar2 >> 0x38),
                  CONCAT16((char)((uint)uVar4 >> 0x18),
                           CONCAT15((char)((ulonglong)uVar2 >> 0x30),
                                    CONCAT14((char)((uint)uVar3 >> 0x18),
                                             CONCAT13((char)((ulonglong)uVar2 >> 0x28),
                                                      CONCAT12((char)((uint)uVar4 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar2 >>
                                                                              0x20),
                                                                        (char)((uint)uVar3 >> 0x10))
                                                              ))))));
    DAT_30045890 = DAT_30045890 + 2;
  } while (bVar7);
  puVar1 = DAT_30045894 + param_1 + -2;
  do {
    uVar3 = *DAT_300458a0;
    uVar4 = *DAT_300458a4;
    uVar2 = *DAT_3004589c;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_300458a4 = DAT_300458a4 + 1;
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar2 >> 0x18),
                                                               (char)((uint)uVar4 >> 8)),
                                                      (char)((ulonglong)uVar2 >> 0x10)),
                                             (char)((uint)uVar3 >> 8)),(char)((ulonglong)uVar2 >> 8)
                                   ),(char)uVar4),CONCAT11((char)uVar2,(char)uVar3));
    DAT_3004589c = DAT_3004589c + 1;
    bVar7 = DAT_30045894 < puVar1;
    DAT_30045894[1] =
         CONCAT17((char)((ulonglong)uVar2 >> 0x38),
                  CONCAT16((char)((uint)uVar4 >> 0x18),
                           CONCAT15((char)((ulonglong)uVar2 >> 0x30),
                                    CONCAT14((char)((uint)uVar3 >> 0x18),
                                             CONCAT13((char)((ulonglong)uVar2 >> 0x28),
                                                      CONCAT12((char)((uint)uVar4 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar2 >>
                                                                              0x20),
                                                                        (char)((uint)uVar3 >> 0x10))
                                                              ))))));
    DAT_30045894 = DAT_30045894 + 2;
  } while (bVar7);
  return in_EAX;
}



/* === FUN_3002aee0 @ 0x3002aee0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002aee0 @ 0x3002AEE0 */



void FUN_3002aee0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar5 = DAT_3003e8d0;
  uVar4 = DAT_3003e8c8;
  uVar13 = DAT_3003e8c0;
  uVar3 = DAT_3003e8a8;
  puVar6 = DAT_30045890 + param_1;
  puVar7 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar2 = DAT_30045898[1];
    uVar12 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar14 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar12 = pmulhw(uVar12,uVar4);
    uVar14 = pmulhw(uVar14,uVar4);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar7 + 2;
    uVar12 = paddsw(uVar12,uVar5);
    uVar12 = psubusw(uVar12,uVar5);
    uVar14 = paddsw(uVar14,uVar5);
    sVar8 = (short)uVar13;
    sVar9 = (short)((ulonglong)uVar13 >> 0x10);
    sVar10 = (short)((ulonglong)uVar13 >> 0x20);
    sVar11 = (short)((ulonglong)uVar13 >> 0x30);
    uVar14 = psubusw(uVar14,uVar5);
    *puVar7 = CONCAT26((short)((ulonglong)uVar12 >> 0x30) * sVar11,
                       CONCAT24((short)((ulonglong)uVar12 >> 0x20) * sVar10,
                                CONCAT22((short)((ulonglong)uVar12 >> 0x10) * sVar9,
                                         (short)uVar12 * sVar8)));
    puVar7[1] = CONCAT26((short)((ulonglong)uVar14 >> 0x30) * sVar11,
                         CONCAT24((short)((ulonglong)uVar14 >> 0x20) * sVar10,
                                  CONCAT22((short)((ulonglong)uVar14 >> 0x10) * sVar9,
                                           (short)uVar14 * sVar8)));
    puVar7 = DAT_30045890;
  } while (DAT_30045890 < puVar6);
  puVar7 = DAT_30045894;
  do {
    uVar1 = *DAT_3004589c;
    uVar2 = DAT_3004589c[1];
    uVar13 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar12 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar13 = pmulhw(uVar13,uVar4);
    uVar12 = pmulhw(uVar12,uVar4);
    DAT_3004589c = DAT_3004589c + 2;
    puVar6 = puVar7 + 2;
    uVar13 = paddsw(uVar13,uVar5);
    uVar13 = psubusw(uVar13,uVar5);
    uVar12 = paddsw(uVar12,uVar5);
    uVar12 = psubusw(uVar12,uVar5);
    *puVar7 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) * sVar11,
                       CONCAT24((short)((ulonglong)uVar13 >> 0x20) * sVar10,
                                CONCAT22((short)((ulonglong)uVar13 >> 0x10) * sVar9,
                                         (short)uVar13 * sVar8)));
    puVar7[1] = CONCAT26((short)((ulonglong)uVar12 >> 0x30) * sVar11,
                         CONCAT24((short)((ulonglong)uVar12 >> 0x20) * sVar10,
                                  CONCAT22((short)((ulonglong)uVar12 >> 0x10) * sVar9,
                                           (short)uVar12 * sVar8)));
    puVar7 = puVar6;
  } while (puVar6 < DAT_30045894 + param_1);
  DAT_30045894 = puVar6;
  return;
}



/* === FUN_3002b0e0 @ 0x3002b0e0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b0e0 @ 0x3002B0E0 */



void FUN_3002b0e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  short sVar9;
  short sVar10;
  ulonglong uVar8;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar16;
  undefined8 uVar15;
  short sVar19;
  undefined8 uVar17;
  ulonglong uVar18;
  
  uVar5 = DAT_3003e8b8;
  uVar4 = DAT_3003e8b0;
  uVar3 = DAT_3003e8a8;
  puVar6 = (ulonglong *)((int)DAT_30045890 + param_1 * 0xc);
  puVar7 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar2 = DAT_30045898[1];
    uVar15 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,uVar4);
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,uVar4);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar7 + 3;
    uVar15 = paddsw(uVar15,uVar5);
    uVar15 = psubusw(uVar15,uVar5);
    uVar17 = paddsw(uVar17,uVar5);
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar9 = (short)((ulonglong)uVar15 >> 0x20);
    sVar10 = (short)((ulonglong)uVar15 >> 0x30);
    sVar11 = (short)DAT_3003e910;
    sVar12 = (short)((ulonglong)DAT_3003e910 >> 0x10);
    sVar13 = (short)((ulonglong)DAT_3003e910 >> 0x20);
    sVar14 = (short)((ulonglong)DAT_3003e910 >> 0x30);
    uVar8 = CONCAT26(sVar10 * sVar14,
                     CONCAT24(sVar10 * sVar13,CONCAT22(sVar9 * sVar12,sVar9 * sVar11)));
    uVar17 = psubusw(uVar17,uVar5);
    sVar19 = (short)((ulonglong)uVar17 >> 0x10);
    sVar9 = (short)((ulonglong)uVar17 >> 0x20);
    sVar10 = (short)((ulonglong)uVar17 >> 0x30);
    uVar18 = CONCAT26(sVar19 * sVar14,
                      CONCAT24(sVar19 * sVar13,
                               CONCAT22((short)uVar17 * sVar12,(short)uVar17 * sVar11)));
    *puVar7 = CONCAT26(sVar16 * sVar14,
                       CONCAT24(sVar16 * sVar13,
                                CONCAT22((short)uVar15 * sVar12,(short)uVar15 * sVar11))) >> 8 |
              uVar8 << 0x28;
    puVar7[1] = uVar8 >> 0x18 | uVar18 << 0x18;
    puVar7[2] = CONCAT26(sVar10 * sVar14,
                         CONCAT24(sVar10 * sVar13,CONCAT22(sVar9 * sVar12,sVar9 * sVar11))) << 8 |
                uVar18 >> 0x28;
    puVar7 = DAT_30045890;
  } while (DAT_30045890 < puVar6);
  puVar7 = DAT_30045894;
  do {
    uVar1 = *DAT_3004589c;
    uVar2 = DAT_3004589c[1];
    uVar15 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,uVar4);
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,uVar4);
    DAT_3004589c = DAT_3004589c + 2;
    puVar6 = puVar7 + 3;
    uVar15 = paddsw(uVar15,uVar5);
    uVar15 = psubusw(uVar15,uVar5);
    uVar17 = paddsw(uVar17,uVar5);
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar9 = (short)((ulonglong)uVar15 >> 0x20);
    sVar10 = (short)((ulonglong)uVar15 >> 0x30);
    sVar11 = (short)DAT_3003e910;
    sVar12 = (short)((ulonglong)DAT_3003e910 >> 0x10);
    sVar13 = (short)((ulonglong)DAT_3003e910 >> 0x20);
    sVar14 = (short)((ulonglong)DAT_3003e910 >> 0x30);
    uVar8 = CONCAT26(sVar10 * sVar14,
                     CONCAT24(sVar10 * sVar13,CONCAT22(sVar9 * sVar12,sVar9 * sVar11)));
    uVar17 = psubusw(uVar17,uVar5);
    sVar19 = (short)((ulonglong)uVar17 >> 0x10);
    sVar9 = (short)((ulonglong)uVar17 >> 0x20);
    sVar10 = (short)((ulonglong)uVar17 >> 0x30);
    uVar18 = CONCAT26(sVar19 * sVar14,
                      CONCAT24(sVar19 * sVar13,
                               CONCAT22((short)uVar17 * sVar12,(short)uVar17 * sVar11)));
    *puVar7 = CONCAT26(sVar16 * sVar14,
                       CONCAT24(sVar16 * sVar13,
                                CONCAT22((short)uVar15 * sVar12,(short)uVar15 * sVar11))) >> 8 |
              uVar8 << 0x28;
    puVar7[1] = uVar8 >> 0x18 | uVar18 << 0x18;
    puVar7[2] = CONCAT26(sVar10 * sVar14,
                         CONCAT24(sVar10 * sVar13,CONCAT22(sVar9 * sVar12,sVar9 * sVar11))) << 8 |
                uVar18 >> 0x28;
    puVar7 = puVar6;
  } while (puVar6 < (ulonglong *)((int)DAT_30045894 + param_1 * 0xc));
  DAT_30045894 = puVar6;
  return;
}



/* === FUN_3002b289 @ 0x3002b289 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b289 @ 0x3002B289 */



undefined4 FUN_3002b289(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar6 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 3;
  do {
    puVar5 = puVar6 + 3;
    uVar1 = (&DAT_30048d04)[DAT_30045898[1]];
    uVar2 = (&DAT_30048d04)[DAT_30045898[2]];
    iVar3 = (&DAT_30048d04)[DAT_30045898[3]];
    *puVar6 = (&DAT_30048d04)[*DAT_30045898] | uVar1 << 0x18;
    puVar6[1] = uVar1 >> 8 | uVar2 << 0x10;
    puVar4 = DAT_30045890;
    DAT_30045898 = DAT_30045898 + 4;
    puVar6[2] = uVar2 >> 0x10 | iVar3 << 8;
    puVar6 = puVar5;
  } while (puVar5 < puVar4);
  puVar6 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 3;
  do {
    puVar5 = puVar6 + 3;
    uVar1 = (&DAT_30048d04)[DAT_3004589c[1]];
    uVar2 = (&DAT_30048d04)[DAT_3004589c[2]];
    iVar3 = (&DAT_30048d04)[DAT_3004589c[3]];
    *puVar6 = (&DAT_30048d04)[*DAT_3004589c] | uVar1 << 0x18;
    puVar6[1] = uVar1 >> 8 | uVar2 << 0x10;
    puVar4 = DAT_30045894;
    DAT_3004589c = DAT_3004589c + 4;
    puVar6[2] = uVar2 >> 0x10 | iVar3 << 8;
    puVar6 = puVar5;
  } while (puVar5 != puVar4);
  return 0;
}



/* === FUN_3002b3b0 @ 0x3002b3b0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b3b0 @ 0x3002B3B0 */



void FUN_3002b3b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar16;
  undefined8 uVar14;
  undefined8 uVar15;
  short sVar17;
  short sVar18;
  short sVar20;
  undefined8 uVar19;
  
  uVar15 = DAT_3003e920;
  uVar5 = DAT_3003e8b8;
  uVar4 = DAT_3003e8b0;
  uVar3 = DAT_3003e8a8;
  puVar6 = DAT_30045890 + param_1 * 2;
  puVar7 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar2 = DAT_30045898[1];
    uVar14 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar19 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar14 = psllw(uVar14,2);
    uVar14 = pmulhw(uVar14,uVar4);
    uVar19 = psllw(uVar19,2);
    uVar19 = pmulhw(uVar19,uVar4);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar7 + 4;
    uVar14 = paddsw(uVar14,uVar5);
    uVar14 = psubusw(uVar14,uVar5);
    uVar19 = paddsw(uVar19,uVar5);
    sVar16 = (short)((ulonglong)uVar14 >> 0x10);
    sVar8 = (short)((ulonglong)uVar14 >> 0x20);
    sVar9 = (short)((ulonglong)uVar14 >> 0x30);
    sVar10 = (short)uVar15;
    sVar11 = (short)((ulonglong)uVar15 >> 0x10);
    sVar12 = (short)((ulonglong)uVar15 >> 0x20);
    sVar13 = (short)((ulonglong)uVar15 >> 0x30);
    uVar19 = psubusw(uVar19,uVar5);
    sVar20 = (short)((ulonglong)uVar19 >> 0x10);
    sVar17 = (short)((ulonglong)uVar19 >> 0x20);
    sVar18 = (short)((ulonglong)uVar19 >> 0x30);
    *puVar7 = CONCAT26(sVar16 * sVar13,
                       CONCAT24(sVar16 * sVar12,
                                CONCAT22((short)uVar14 * sVar11,(short)uVar14 * sVar10)));
    puVar7[1] = CONCAT26(sVar9 * sVar13,
                         CONCAT24(sVar9 * sVar12,CONCAT22(sVar8 * sVar11,sVar8 * sVar10)));
    puVar7[2] = CONCAT26(sVar20 * sVar13,
                         CONCAT24(sVar20 * sVar12,
                                  CONCAT22((short)uVar19 * sVar11,(short)uVar19 * sVar10)));
    puVar7[3] = CONCAT26(sVar18 * sVar13,
                         CONCAT24(sVar18 * sVar12,CONCAT22(sVar17 * sVar11,sVar17 * sVar10)));
    puVar7 = DAT_30045890;
  } while (DAT_30045890 < puVar6);
  puVar7 = DAT_30045894;
  do {
    uVar1 = *DAT_3004589c;
    uVar2 = DAT_3004589c[1];
    uVar15 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar14 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,uVar4);
    uVar14 = psllw(uVar14,2);
    uVar14 = pmulhw(uVar14,uVar4);
    DAT_3004589c = DAT_3004589c + 2;
    puVar6 = puVar7 + 4;
    uVar15 = paddsw(uVar15,uVar5);
    uVar15 = psubusw(uVar15,uVar5);
    uVar14 = paddsw(uVar14,uVar5);
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar8 = (short)((ulonglong)uVar15 >> 0x20);
    sVar9 = (short)((ulonglong)uVar15 >> 0x30);
    uVar14 = psubusw(uVar14,uVar5);
    sVar20 = (short)((ulonglong)uVar14 >> 0x10);
    sVar17 = (short)((ulonglong)uVar14 >> 0x20);
    sVar18 = (short)((ulonglong)uVar14 >> 0x30);
    *puVar7 = CONCAT26(sVar16 * sVar13,
                       CONCAT24(sVar16 * sVar12,
                                CONCAT22((short)uVar15 * sVar11,(short)uVar15 * sVar10)));
    puVar7[1] = CONCAT26(sVar9 * sVar13,
                         CONCAT24(sVar9 * sVar12,CONCAT22(sVar8 * sVar11,sVar8 * sVar10)));
    puVar7[2] = CONCAT26(sVar20 * sVar13,
                         CONCAT24(sVar20 * sVar12,
                                  CONCAT22((short)uVar14 * sVar11,(short)uVar14 * sVar10)));
    puVar7[3] = CONCAT26(sVar18 * sVar13,
                         CONCAT24(sVar18 * sVar12,CONCAT22(sVar17 * sVar11,sVar17 * sVar10)));
    puVar7 = puVar6;
  } while (puVar6 < DAT_30045894 + param_1 * 2);
  DAT_30045894 = puVar6;
  return;
}



/* === FUN_3002b5e0 @ 0x3002b5e0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b5e0 @ 0x3002B5E0 */



void FUN_3002b5e0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  uVar2 = DAT_3003e8d8;
  puVar3 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar7 = (undefined1)((ulonglong)uVar2 >> 0x18);
    uVar6 = (undefined1)((ulonglong)uVar2 >> 0x10);
    uVar5 = (undefined1)((ulonglong)uVar2 >> 8);
    puVar4 = puVar3 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *puVar3 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar7,(char)((uint)uVar1
                                                                                      >> 0x18)),
                                                                 uVar6),
                                                        CONCAT14((char)((uint)uVar1 >> 0x10),uVar1))
                                              >> 0x20),uVar5),(char)((uint)uVar1 >> 8)),
                       CONCAT11((char)uVar2,(char)uVar1));
    puVar3 = puVar4;
  } while (puVar4 < DAT_30045890 + param_1);
  puVar3 = DAT_30045894;
  DAT_30045890 = DAT_30045890 + param_1;
  do {
    uVar1 = *DAT_3004589c;
    puVar4 = puVar3 + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *puVar3 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar7,(char)((uint)uVar1
                                                                                      >> 0x18)),
                                                                 uVar6),
                                                        CONCAT14((char)((uint)uVar1 >> 0x10),uVar1))
                                              >> 0x20),uVar5),(char)((uint)uVar1 >> 8)),
                       CONCAT11((char)uVar2,(char)uVar1));
    puVar3 = puVar4;
  } while (puVar4 < DAT_30045894 + param_1);
  DAT_30045894 = puVar4;
  return;
}



/* === FUN_3002b710 @ 0x3002b710 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b710 @ 0x3002B710 */



void FUN_3002b710(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  uVar4 = DAT_3003e8d8;
  puVar1 = DAT_30045890 + param_1;
  do {
    uVar3 = *DAT_30045898;
    uVar7 = (undefined1)((ulonglong)uVar4 >> 0x18);
    uVar6 = (undefined1)((ulonglong)uVar4 >> 0x10);
    uVar5 = (undefined1)((ulonglong)uVar4 >> 8);
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar3 >> 0x18),uVar7),
                                                      (char)((uint)uVar3 >> 0x10)),uVar6),
                                    (char)((uint)uVar3 >> 8)),uVar5),
                  CONCAT11((char)uVar3,(char)uVar4));
    DAT_30045890 = DAT_30045890 + 1;
  } while (DAT_30045890 < puVar1);
  puVar2 = DAT_30045894 + param_1;
  DAT_30045890 = puVar1;
  do {
    uVar3 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar3 >> 0x18),uVar7),
                                                      (char)((uint)uVar3 >> 0x10)),uVar6),
                                    (char)((uint)uVar3 >> 8)),uVar5),
                  CONCAT11((char)uVar3,(char)uVar4));
    DAT_30045894 = DAT_30045894 + 1;
  } while (DAT_30045894 < puVar2);
  return;
}



/* === _malloc @ 0x3002b857 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _malloc @ 0x3002B857 */



/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_3004f204);
  return pvVar1;
}



/* === __nh_malloc @ 0x3002b869 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __nh_malloc @ 0x3002B869 */



/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_3002b895((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_3002c3f5(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



/* === FUN_3002b895 @ 0x3002b895 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b895 @ 0x3002B895 */



void __cdecl FUN_3002b895(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  
  if (DAT_3004f754 == 3) {
    if ((param_1 <= DAT_3004f74c) && (piVar1 = FUN_3002ca26(param_1), piVar1 != (int *)0x0)) {
      return;
    }
  }
  else if (DAT_3004f754 == 2) {
    if (param_1 == (uint *)0x0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
    }
    if ((dwBytes <= DAT_3004099c) && (piVar1 = FUN_3002d1d3(dwBytes >> 4), piVar1 != (int *)0x0)) {
      return;
    }
    goto LAB_3002b8f8;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_3002b8f8:
  HeapAlloc(DAT_3004f750,0,dwBytes);
  return;
}



/* === FUN_3002b909 @ 0x3002b909 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b909 @ 0x3002B909 */



void __cdecl FUN_3002b909(undefined *param_1)

{
  undefined *lpMem;
  uint *puVar1;
  byte *pbVar2;
  int local_8;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    if (DAT_3004f754 == 3) {
      puVar1 = (uint *)FUN_3002c6d2((int)param_1);
      if (puVar1 != (uint *)0x0) {
        FUN_3002c6fd(puVar1,(int)lpMem);
        return;
      }
    }
    else if ((DAT_3004f754 == 2) &&
            (pbVar2 = (byte *)FUN_3002d137(param_1,&local_8,(uint *)&param_1), pbVar2 != (byte *)0x0
            )) {
      FUN_3002d18e(local_8,(int)param_1,pbVar2);
      return;
    }
    HeapFree(DAT_3004f750,0,lpMem);
  }
  return;
}



/* === __strcmpi @ 0x3002b980 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __strcmpi @ 0x3002B980 */



/* Library Function - Single Match
    __strcmpi
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl __strcmpi(char *_Str1,char *_Str2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar7;
  void *in_ECX;
  void *this;
  void *extraout_ECX;
  uint uVar8;
  int iVar6;
  
  if (DAT_3004f218 == 0) {
    bVar4 = 0xff;
    do {
      do {
        cVar5 = '\0';
        if (bVar4 == 0) goto LAB_3002b9ce;
        bVar4 = *_Str2;
        _Str2 = _Str2 + 1;
        bVar3 = *_Str1;
        _Str1 = _Str1 + 1;
      } while (bVar3 == bVar4);
      bVar2 = bVar4 + 0xbf + (-((byte)(bVar4 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar3 = bVar3 + 0xbf;
      bVar4 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
    } while (bVar4 == bVar2);
    cVar5 = (bVar4 < bVar2) * -2 + '\x01';
LAB_3002b9ce:
    iVar6 = (int)cVar5;
  }
  else {
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') {
          return uVar7;
        }
        cVar5 = *_Str2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),cVar5);
        _Str2 = _Str2 + 1;
        cVar1 = *_Str1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),cVar1);
        _Str1 = _Str1 + 1;
      } while (cVar5 == cVar1);
      uVar8 = FUN_3002d4ff(in_ECX,uVar8);
      uVar7 = FUN_3002d4ff(this,uVar7);
      in_ECX = extraout_ECX;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar7 = (uint)((byte)uVar8 < (byte)uVar7);
    iVar6 = (1 - uVar7) - (uint)(uVar7 != 0);
  }
  return iVar6;
}



/* === FUN_3002ba10 @ 0x3002ba10 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ba10 @ 0x3002BA10 */



undefined4 * __cdecl FUN_3002ba10(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_3002bbc7_caseD_2;
        case 3:
          goto switchD_3002bbc7_caseD_3;
        }
        goto switchD_3002bbc7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_3002bbc7_caseD_0;
      case 1:
        goto switchD_3002bbc7_caseD_1;
      case 2:
        goto switchD_3002bbc7_caseD_2;
      case 3:
        goto switchD_3002bbc7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_3002bbc7_caseD_2;
            case 3:
              goto switchD_3002bbc7_caseD_3;
            }
            goto switchD_3002bbc7_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_3002bbc7_caseD_2;
            case 3:
              goto switchD_3002bbc7_caseD_3;
            }
            goto switchD_3002bbc7_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_3002bbc7_caseD_2;
            case 3:
              goto switchD_3002bbc7_caseD_3;
            }
            goto switchD_3002bbc7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_3002bbc7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_3002bbc7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_3002bbc7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_3002bbc7_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_3002ba45_caseD_2;
      case 3:
        goto switchD_3002ba45_caseD_3;
      }
      goto switchD_3002ba45_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_3002ba45_caseD_0;
    case 1:
      goto switchD_3002ba45_caseD_1;
    case 2:
      goto switchD_3002ba45_caseD_2;
    case 3:
      goto switchD_3002ba45_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_3002ba45_caseD_2;
          case 3:
            goto switchD_3002ba45_caseD_3;
          }
          goto switchD_3002ba45_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_3002ba45_caseD_2;
          case 3:
            goto switchD_3002ba45_caseD_3;
          }
          goto switchD_3002ba45_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_3002ba45_caseD_2;
          case 3:
            goto switchD_3002ba45_caseD_3;
          }
          goto switchD_3002ba45_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_3002ba45_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_3002ba45_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_3002ba45_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_3002ba45_caseD_0:
  return param_1;
}



/* === __aulldiv @ 0x3002bd50 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __aulldiv @ 0x3002BD50 */



/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



/* === __allmul @ 0x3002bdc0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __allmul @ 0x3002BDC0 */



/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



/* === __global_unwind2 @ 0x3002bdf4 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __global_unwind2 @ 0x3002BDF4 */



/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x3002be0c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* === __local_unwind2 @ 0x3002be36 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __local_unwind2 @ 0x3002BE36 */



/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_3002be14;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_3002beca();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* === FUN_3002beca @ 0x3002beca === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002beca @ 0x3002BECA */



void FUN_3002beca(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_3003e938 = *(undefined4 *)(unaff_EBP + 8);
  DAT_3003e934 = in_EAX;
  DAT_3003e93c = unaff_EBP;
  return;
}



/* === __seh_longjmp_unwind@4 @ 0x3002bfa9 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __seh_longjmp_unwind@4 @ 0x3002BFA9 */



/* Library Function - Single Match
    __seh_longjmp_unwind@4
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __seh_longjmp_unwind_4(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* === FUN_3002bfc4 @ 0x3002bfc4 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002bfc4 @ 0x3002BFC4 */



void FUN_3002bfc4(void)

{
  void *extraout_ECX;
  
  FUN_3002bfdc();
  DAT_3004f1ec = FUN_3002d61a();
  FUN_3002d5ca(extraout_ECX);
  return;
}



/* === FUN_3002bfdc @ 0x3002bfdc === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002bfdc @ 0x3002BFDC */



void FUN_3002bfdc(void)

{
  PTR_LAB_300409a4 = &LAB_3002d69d;
  PTR_LAB_300409a0 = __cfltcvt;
  PTR_LAB_300409a8 = __fassign;
  PTR_LAB_300409ac = FUN_3002d643;
  PTR_LAB_300409b0 = &LAB_3002d6eb;
  PTR_LAB_300409b4 = __cfltcvt;
  return;
}



/* === FUN_3002c020 @ 0x3002c020 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c020 @ 0x3002C020 */



/* WARNING: Unable to track spacebase fully for stack */

void FUN_3002c020(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



/* === FUN_3002c050 @ 0x3002c050 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c050 @ 0x3002C050 */



void FUN_3002c050(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_3002c072(SUB84((double)in_ST1,0),(uint)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}



/* === FUN_3002c245 @ 0x3002c245 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c245 @ 0x3002C245 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3002c245(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}



/* === FUN_3002c26d @ 0x3002c26d === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c26d @ 0x3002C26D */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_3002c26d(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    DAT_3004f24c = GetVersion();
    iVar1 = FUN_3002c585(0);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_3004f258 = DAT_3004f24c >> 8 & 0xff;
    _DAT_3004f254 = DAT_3004f24c & 0xff;
    DAT_3004f24c = DAT_3004f24c >> 0x10;
    _DAT_3004f250 = _DAT_3004f254 * 0x100 + _DAT_3004f258;
    DAT_3004f758 = GetCommandLineA();
    DAT_3004f1f4 = FUN_3002ee95();
    FUN_3002e9c1();
    FUN_3002ec48();
    FUN_3002eb8f();
    FUN_3002e8c1();
    DAT_3004f1f0 = DAT_3004f1f0 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_3004f1f0 < 1) {
      return 0;
    }
    DAT_3004f1f0 = DAT_3004f1f0 + -1;
    if (DAT_3004f284 == 0) {
      FUN_3002e8ff();
    }
    FUN_3002eb6c();
    FUN_3002c5e2();
  }
  return 1;
}



/* === entry @ 0x3002c325 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: entry @ 0x3002C325 */



int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_3004f1f0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_3002c36d;
    if ((DAT_3004f75c != (code *)0x0) &&
       (iVar2 = (*DAT_3004f75c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_3002c26d(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_3002c36d:
  iVar2 = FUN_300010d0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_3002c26d(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_3002c26d(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_3004f75c != (code *)0x0) {
      iVar2 = (*DAT_3004f75c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



/* === __amsg_exit @ 0x3002c3c2 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __amsg_exit @ 0x3002C3C2 */



/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_3004f1fc == 1) || ((DAT_3004f1fc == 0 && (DAT_3004f200 == 1)))) {
    FUN_3002efc7();
  }
  FUN_3002f000(param_1);
  (*(code *)PTR___exit_3003e96c)(0xff);
  return;
}



/* === FUN_3002c3f5 @ 0x3002c3f5 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c3f5 @ 0x3002C3F5 */



undefined4 __cdecl FUN_3002c3f5(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_3004f208 != (code *)0x0) {
    iVar1 = (*DAT_3004f208)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* === FUN_3002c410 @ 0x3002c410 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c410 @ 0x3002C410 */



void __cdecl FUN_3002c410(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}



/* === FUN_3002c43d @ 0x3002c43d === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c43d @ 0x3002C43D */



int FUN_3002c43d(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *this;
  byte unaff_BL;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_3002c020();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x69;
    aCStackY_18[1] = -0x3c;
    aCStackY_18[2] = '\x02';
    aCStackY_18[3] = '0';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar7 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar7;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar7 = cVar1 + -0x20;
        }
        pcVar7 = pcVar7 + 1;
        local_1230[0] = *pcVar7;
      }
      aCStackY_18[0] = -0x2b;
      aCStackY_18[1] = -0x3c;
      aCStackY_18[2] = '\x02';
      aCStackY_18[3] = '0';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -9;
        aCStackY_18[1] = -0x3c;
        aCStackY_18[2] = '\x02';
        aCStackY_18[3] = '0';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar7 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar7;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar7 = cVar1 + -0x20;
          }
          pcVar7 = pcVar7 + 1;
          local_1a0[0] = *pcVar7;
        }
        pcVar7 = _strstr(local_1230,local_1a0);
      }
      if ((pcVar7 != (char *)0x0) && (pcVar7 = _strchr(pcVar7,0x2c), pcVar7 != (char *)0x0)) {
        pbVar6 = (byte *)(pcVar7 + 1);
        bVar2 = *pbVar6;
        this = pbVar6;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = ']';
        aCStackY_18[1] = -0x3b;
        aCStackY_18[2] = '\x02';
        aCStackY_18[3] = '0';
        iVar5 = FUN_3002f153(this,pbVar6,(int *)0x0,(void *)0xa);
        if (iVar5 == 2) {
          return 2;
        }
        if (iVar5 == 3) {
          return 3;
        }
        if (iVar5 == 1) {
          return 1;
        }
      }
    }
    FUN_3002c410((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



/* === FUN_3002c585 @ 0x3002c585 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c585 @ 0x3002C585 */



undefined4 __cdecl FUN_3002c585(int param_1)

{
  undefined **ppuVar1;
  
  DAT_3004f750 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_3004f750 != (HANDLE)0x0) {
    DAT_3004f754 = FUN_3002c43d();
    if (DAT_3004f754 == 3) {
      ppuVar1 = (undefined **)FUN_3002c68a(0x3f8);
    }
    else {
      if (DAT_3004f754 != 2) {
        return 1;
      }
      ppuVar1 = FUN_3002cedb();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_3004f750);
  }
  return 0;
}



/* === FUN_3002c5e2 @ 0x3002c5e2 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c5e2 @ 0x3002C5E2 */



void FUN_3002c5e2(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_3004f754 == 3) {
    iVar1 = 0;
    if (0 < DAT_3004f744) {
      puVar2 = (undefined4 *)((int)DAT_3004f748 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_3004f750,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_3004f744);
    }
    HeapFree(DAT_3004f750,0,DAT_3004f748);
  }
  else if (DAT_3004f754 == 2) {
    ppuVar3 = &PTR_LOOP_3003e978;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_3003e978);
  }
  HeapDestroy(DAT_3004f750);
  return;
}



/* === FUN_3002c68a @ 0x3002c68a === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c68a @ 0x3002C68A */



undefined4 __cdecl FUN_3002c68a(undefined4 param_1)

{
  DAT_3004f748 = HeapAlloc(DAT_3004f750,0,0x140);
  if (DAT_3004f748 == (LPVOID)0x0) {
    return 0;
  }
  DAT_3004f740 = 0;
  DAT_3004f744 = 0;
  DAT_3004f73c = DAT_3004f748;
  DAT_3004f74c = param_1;
  DAT_3004f734 = 0x10;
  return 1;
}



/* === FUN_3002c6d2 @ 0x3002c6d2 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c6d2 @ 0x3002C6D2 */



uint __cdecl FUN_3002c6d2(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_3004f748;
  while( true ) {
    if (DAT_3004f748 + DAT_3004f744 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* === FUN_3002c6fd @ 0x3002c6fd === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c6fd @ 0x3002C6FD */



void __cdecl FUN_3002c6fd(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) =
           *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) =
           *(undefined4 *)((int)puVar12 + uVar13 + 7);
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_3004f740 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_3004f738 * 0x8000 + DAT_3004f740[3]),0x8000,0x4000);
        DAT_3004f740[2] = DAT_3004f740[2] | 0x80000000U >> ((byte)DAT_3004f738 & 0x1f);
        *(undefined4 *)(DAT_3004f740[4] + 0xc4 + DAT_3004f738 * 4) = 0;
        *(char *)(DAT_3004f740[4] + 0x43) = *(char *)(DAT_3004f740[4] + 0x43) + -1;
        if (*(char *)(DAT_3004f740[4] + 0x43) == '\0') {
          DAT_3004f740[1] = DAT_3004f740[1] & 0xfffffffe;
        }
        if (DAT_3004f740[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_3004f740[3],0,0x8000);
          HeapFree(DAT_3004f750,0,(LPVOID)DAT_3004f740[4]);
          FUN_3002ba10(DAT_3004f740,DAT_3004f740 + 5,
                       (DAT_3004f744 * 0x14 - (int)DAT_3004f740) + -0x14 + DAT_3004f748);
          DAT_3004f744 = DAT_3004f744 + -1;
          if (DAT_3004f740 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_3004f73c = DAT_3004f748;
        }
      }
      DAT_3004f740 = param_1;
      DAT_3004f738 = uVar14;
    }
  }
  return;
}



/* === FUN_3002ca26 @ 0x3002ca26 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ca26 @ 0x3002CA26 */



int * __cdecl FUN_3002ca26(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_3004f748 + DAT_3004f744 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_3004f73c;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_3004f748;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_3004f73c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_3004f73c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_3004f748;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_3004f73c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_3004f73c) && (param_1 = FUN_3002cd2f(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_3002cde0((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_3004f73c = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_3002ccec;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_3002ccec:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_3004f740)) && (local_8 == DAT_3004f738)) {
    DAT_3004f740 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



/* === FUN_3002cd2f @ 0x3002cd2f === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002cd2f @ 0x3002CD2F */



undefined4 * FUN_3002cd2f(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_3004f744 == DAT_3004f734) {
    pvVar2 = HeapReAlloc(DAT_3004f750,0,DAT_3004f748,(DAT_3004f734 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_3004f734 = DAT_3004f734 + 0x10;
    DAT_3004f748 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_3004f748 + DAT_3004f744 * 0x14);
  pvVar2 = HeapAlloc(DAT_3004f750,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_3004f744 = DAT_3004f744 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_3004f750,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* === FUN_3002cde0 @ 0x3002cde0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002cde0 @ 0x3002CDE0 */



int __cdecl FUN_3002cde0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}



/* === FUN_3002cedb @ 0x3002cedb === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002cedb @ 0x3002CEDB */



undefined ** FUN_3002cedb(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_3003e988 == -1) {
    lpMem = &PTR_LOOP_3003e978;
  }
  else {
    lpMem = HeapAlloc(DAT_3004f750,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_3003e978) {
        if (PTR_LOOP_3003e978 == (undefined *)0x0) {
          PTR_LOOP_3003e978 = (undefined *)&PTR_LOOP_3003e978;
        }
        if (PTR_LOOP_3003e97c == (undefined *)0x0) {
          PTR_LOOP_3003e97c = (undefined *)&PTR_LOOP_3003e978;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_3003e978;
        lpMem[1] = PTR_LOOP_3003e97c;
        PTR_LOOP_3003e97c = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_3003e978) {
    HeapFree(DAT_3004f750,0,lpMem);
  }
  return (undefined **)0x0;
}



/* === FUN_3002d01f @ 0x3002d01f === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d01f @ 0x3002D01F */



void __cdecl FUN_3002d01f(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_30040998 == param_1) {
    PTR_LOOP_30040998 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_3003e978) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_3004f750,0,param_1);
    return;
  }
  DAT_3003e988 = 0xffffffff;
  return;
}



/* === FUN_3002d075 @ 0x3002d075 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d075 @ 0x3002D075 */



void __cdecl FUN_3002d075(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_3003e97c;
  do {
    ppuVar5 = ppuVar4;
    if (ppuVar4[4] != (undefined *)0xffffffff) {
      local_8 = 0;
      ppuVar5 = ppuVar4 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar4[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_3004f20c = DAT_3004f20c + -1;
            if (((undefined **)ppuVar4[3] == (undefined **)0x0) || (ppuVar5 < ppuVar4[3])) {
              ppuVar4[3] = (undefined *)ppuVar5;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar4[1];
      if ((local_8 != 0) && (ppuVar4[6] == (undefined *)0xffffffff)) {
        ppuVar2 = ppuVar4 + 8;
        iVar3 = 1;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_3002d01f(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_3003e97c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* === FUN_3002d137 @ 0x3002d137 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d137 @ 0x3002D137 */



int __cdecl FUN_3002d137(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_3003e978;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_3003e978) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



/* === FUN_3002d18e @ 0x3002d18e === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d18e @ 0x3002D18E */



void __cdecl FUN_3002d18e(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_3004f20c = DAT_3004f20c + 1, DAT_3004f20c == 0x20)) {
    FUN_3002d075(0x10);
  }
  return;
}



/* === FUN_3002d1d3 @ 0x3002d1d3 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d1d3 @ 0x3002D1D3 */



/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_3002d1d3(uint param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar7 = (int *)PTR_LOOP_30040998;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_3002d3db(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_3002d29e;
            puVar8[1] = param_1;
          }
          puVar8 = puVar8 + 2;
          piVar4 = piVar4 + 0x400;
        } while (puVar8 < piVar7 + 0x806);
      }
      puVar1 = (uint *)piVar7[2];
      piVar4 = (int *)piVar7[4];
      for (puVar8 = (uint *)(piVar7 + 6); puVar8 < puVar1; puVar8 = puVar8 + 2) {
        if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
          piVar5 = (int *)FUN_3002d3db(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_3002d29e:
            PTR_LOOP_30040998 = (undefined *)piVar7;
            *puVar8 = *puVar8 - param_1;
            piVar7[2] = (int)puVar8;
            return piVar5;
          }
          puVar8[1] = param_1;
        }
        piVar4 = piVar4 + 0x400;
      }
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)PTR_LOOP_30040998) {
      ppuVar9 = &PTR_LOOP_3003e978;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_3003e978) {
          ppuVar9 = FUN_3002cedb();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_30040998 = (undefined *)ppuVar9;
          *piVar7 = (int)piVar7 + param_1 + 8;
          piVar7[1] = 0xf0 - param_1;
          ppuVar9[6] = ppuVar9[6] + -(param_1 & 0xff);
          return piVar7 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar7 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar3 = *ppuVar2;
      ppuVar6 = ppuVar2;
      for (; (puVar3 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar6 = ppuVar6 + 2;
        puVar3 = *ppuVar6;
      }
      piVar4 = VirtualAlloc(piVar7,local_8 << 0xc,0x1000,4);
      if (piVar4 != piVar7) {
        return (int *)0x0;
      }
      _memset(piVar7,local_8 << 0xc,0);
      ppuVar6 = ppuVar2;
      if (0 < local_8) {
        piVar4 = piVar7 + 1;
        do {
          *(undefined1 *)(piVar4 + 0x3d) = 0xff;
          piVar4[-1] = (int)(piVar4 + 1);
          *piVar4 = 0xf0;
          *ppuVar6 = (undefined *)0xf0;
          ppuVar6[1] = (undefined *)0xf1;
          piVar4 = piVar4 + 0x400;
          ppuVar6 = ppuVar6 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar6 < ppuVar9 + 0x806 && (*ppuVar6 != (undefined *)0xffffffff));
          ppuVar6 = ppuVar6 + 2) {
      }
      PTR_LOOP_30040998 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar6 < ppuVar9 + 0x806) & (uint)ppuVar6);
      *(char *)(piVar7 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar7[1] = piVar7[1] - param_1;
      *piVar7 = (int)piVar7 + param_1 + 8;
      return piVar7 + 0x40;
    }
  } while( true );
}



/* === FUN_3002d3db @ 0x3002d3db === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d3db @ 0x3002D3DB */



int __cdecl FUN_3002d3db(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar3 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar6 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar6 = pbVar2 + param_1[1];
    }
    while( true ) {
      while( true ) {
        if (pbVar1 <= pbVar6 + param_3) {
          pbVar6 = (byte *)(param_1 + 2);
          while( true ) {
            while( true ) {
              if (pbVar2 <= pbVar6) {
                return 0;
              }
              if (pbVar1 <= pbVar6 + param_3) {
                return 0;
              }
              if (*pbVar6 == 0) break;
              pbVar6 = pbVar6 + *pbVar6;
            }
            uVar5 = 1;
            pbVar4 = pbVar6;
            while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
              uVar5 = uVar5 + 1;
            }
            if (param_3 <= uVar5) break;
            param_2 = param_2 - uVar5;
            pbVar6 = pbVar4;
            if (param_2 < param_3) {
              return 0;
            }
          }
          if (pbVar6 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar6 = bVar3;
          pbVar2 = pbVar6 + 8;
          goto LAB_3002d4ee;
        }
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + *pbVar6;
      }
      uVar5 = 1;
      pbVar4 = pbVar6;
      while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
        uVar5 = uVar5 + 1;
      }
      if (param_3 <= uVar5) break;
      if (pbVar6 == pbVar2) {
        param_1[1] = uVar5;
        pbVar6 = pbVar4;
      }
      else {
        param_2 = param_2 - uVar5;
        pbVar6 = pbVar4;
        if (param_2 < param_3) {
          return 0;
        }
      }
    }
    if (pbVar6 + param_3 < pbVar1) {
      *param_1 = (int)(pbVar6 + param_3);
      param_1[1] = uVar5 - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    *pbVar6 = bVar3;
    pbVar2 = pbVar6 + 8;
  }
  else {
    *pbVar2 = bVar3;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
  }
LAB_3002d4ee:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



/* === FUN_3002d4ff @ 0x3002d4ff === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d4ff @ 0x3002D4FF */



uint __thiscall FUN_3002d4ff(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_3004f218 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_30040e1c < 2) {
        uVar2 = (byte)PTR_DAT_30040c10[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_3002f7b7(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_30040c10[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_3002f568(DAT_3004f218,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



/* === FUN_3002d5ca @ 0x3002d5ca === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d5ca @ 0x3002D5CA */



void __fastcall FUN_3002d5ca(void *param_1)

{
  FUN_3002f861(param_1,0x10000,0x30000);
  return;
}



/* === FUN_3002d5dc @ 0x3002d5dc === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d5dc @ 0x3002D5DC */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_3002d5dc(void)

{
  if (_DAT_30033fb0 < _DAT_30038350 - (_DAT_30038350 / _DAT_30038358) * _DAT_30038358) {
    return 1;
  }
  return 0;
}



/* === FUN_3002d61a @ 0x3002d61a === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d61a @ 0x3002D61A */



void FUN_3002d61a(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_3002d5dc();
  return;
}



/* === FUN_3002d643 @ 0x3002d643 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d643 @ 0x3002D643 */



void __thiscall FUN_3002d643(void *this,char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this_00;
  uint uVar3;
  undefined *puVar4;
  
  this_00 = (undefined *)(int)*param_1;
  uVar3 = FUN_3002d4ff(this,(uint)this_00);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_30040e1c < 2) {
        uVar3 = (byte)PTR_DAT_30040c10[*param_1 * 2] & 4;
        this_00 = PTR_DAT_30040c10;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_3002f7b7(this_00,(int)*param_1,4);
        this_00 = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_30040e20;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



/* === __fassign @ 0x3002d703 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __fassign @ 0x3002D703 */



/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_3002fd24(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_3002fd51(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



/* === FUN_3002d741 @ 0x3002d741 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d741 @ 0x3002D741 */



undefined1 * __cdecl FUN_3002d741(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  
  piVar1 = DAT_3004f230;
  if (DAT_3004f234 == '\0') {
    piVar1 = (int *)FUN_3002fee7();
    FUN_3002fe70(param_2 + (uint)(0 < param_3) + (uint)(*piVar1 == 0x2d),param_3 + 1,(int)piVar1);
  }
  else {
    FUN_3002da59(param_2 + (*DAT_3004f230 == 0x2d),(uint)(0 < param_3));
  }
  puVar2 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  puVar3 = puVar2;
  if (0 < param_3) {
    puVar3 = puVar2 + 1;
    *puVar2 = puVar2[1];
    *puVar3 = DAT_30040e20;
  }
  puVar4 = FUN_3002fd80((uint *)(puVar3 + param_3 + (uint)(DAT_3004f234 == '\0')),(uint *)"e+000");
  if (param_4 != 0) {
    *(undefined1 *)puVar4 = 0x45;
  }
  if (*(char *)piVar1[3] != '0') {
    iVar5 = piVar1[1] + -1;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
      *(undefined1 *)((int)puVar4 + 1) = 0x2d;
    }
    if (99 < iVar5) {
      *(char *)((int)puVar4 + 2) = *(char *)((int)puVar4 + 2) + (char)(iVar5 / 100);
      iVar5 = iVar5 % 100;
    }
    if (9 < iVar5) {
      *(char *)((int)puVar4 + 3) = *(char *)((int)puVar4 + 3) + (char)(iVar5 / 10);
      iVar5 = iVar5 % 10;
    }
    *(char *)(puVar4 + 1) = (char)puVar4[1] + (char)iVar5;
  }
  return param_2;
}



/* === FUN_3002d845 @ 0x3002d845 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d845 @ 0x3002D845 */



char * __cdecl FUN_3002d845(undefined4 param_1,char *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = DAT_3004f230;
  if (DAT_3004f234 == '\0') {
    piVar1 = (int *)FUN_3002fee7();
    FUN_3002fe70(param_2 + (*piVar1 == 0x2d),piVar1[1] + param_3,(int)piVar1);
  }
  else if (DAT_3004f238 == param_3) {
    iVar2 = (*DAT_3004f230 == 0x2d) + DAT_3004f238;
    param_2[iVar2] = '0';
    (param_2 + iVar2)[1] = '\0';
  }
  pcVar3 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = '-';
    pcVar3 = param_2 + 1;
  }
  if (piVar1[1] < 1) {
    FUN_3002da59(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + piVar1[1];
  }
  if (0 < (int)param_3) {
    FUN_3002da59(pcVar3,1);
    *pcVar3 = DAT_30040e20;
    iVar2 = piVar1[1];
    if (iVar2 < 0) {
      if ((DAT_3004f234 != '\0') || (-iVar2 <= (int)param_3)) {
        param_3 = -iVar2;
      }
      FUN_3002da59(pcVar3 + 1,param_3);
      _memset(pcVar3 + 1,0x30,param_3);
    }
  }
  return param_2;
}



/* === FUN_3002d923 @ 0x3002d923 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d923 @ 0x3002D923 */



void __cdecl FUN_3002d923(undefined4 param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_3004f230 = (int *)FUN_3002fee7();
  DAT_3004f238 = DAT_3004f230[1] + -1;
  iVar1 = *DAT_3004f230;
  FUN_3002fe70(param_2 + (iVar1 == 0x2d),param_3,(int)DAT_3004f230);
  DAT_3004f23c = DAT_3004f238 < DAT_3004f230[1] + -1;
  DAT_3004f238 = DAT_3004f230[1] + -1;
  if ((DAT_3004f238 < -4) || ((int)param_3 <= DAT_3004f238)) {
    FUN_3002d9be(param_1,param_2,param_3,param_4);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_3004f23c) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_3002d9e5(param_1,param_2,param_3);
  }
  return;
}



/* === FUN_3002d9be @ 0x3002d9be === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d9be @ 0x3002D9BE */



void __cdecl FUN_3002d9be(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  DAT_3004f234 = 1;
  FUN_3002d741(param_1,param_2,param_3,param_4);
  DAT_3004f234 = 0;
  return;
}



/* === FUN_3002d9e5 @ 0x3002d9e5 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d9e5 @ 0x3002D9E5 */



void __cdecl FUN_3002d9e5(undefined4 param_1,char *param_2,size_t param_3)

{
  DAT_3004f234 = 1;
  FUN_3002d845(param_1,param_2,param_3);
  DAT_3004f234 = 0;
  return;
}



/* === __cfltcvt @ 0x3002da08 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __cfltcvt @ 0x3002DA08 */



/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_3002d741(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_3002d845(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_3002d923(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



/* === FUN_3002da59 @ 0x3002da59 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002da59 @ 0x3002DA59 */



void __cdecl FUN_3002da59(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_3002ba10((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



/* === FUN_3002da7e @ 0x3002da7e === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002da7e @ 0x3002DA7E */



void __cdecl
FUN_3002da7e(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_3 = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((uVar3 & 2) != 0) {
    param_3 = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((uVar3 & 1) != 0) {
    param_3 = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((uVar3 & 4) != 0) {
    param_3 = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_3 = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = (~*param_2 & 1) << 4 | param_1[2] & 0xffffffef;
  param_1[2] = (~*param_2 & 4) << 1 | param_1[2] & 0xfffffff7;
  param_1[2] = ~*param_2 >> 1 & 4 | param_1[2] & 0xfffffffb;
  param_1[2] = ~*param_2 >> 3 & 2 | param_1[2] & 0xfffffffd;
  param_1[2] = ~*param_2 >> 5 & 1 | param_1[2] & 0xfffffffe;
  uVar3 = FUN_3002e0c4();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_3002dbf3;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_3002dbf3:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_3002dc29:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_3002dc29;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = (param_4 & 0xfff) << 5 | *param_1 & 0xfffe001f;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 4) = *param_5;
  param_1[0x14] = param_1[0x14] | 1;
  param_1[0x14] = param_1[0x14] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 0x10) = *param_6;
  FUN_3002e0d2();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 0xc;
        }
        goto LAB_3002dcfe;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_3002dcfe:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_3002dd27;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_3002dd27:
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* === FUN_3002dd31 @ 0x3002dd31 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002dd31 @ 0x3002DD31 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_3002dd31(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_10;
  int local_8;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_3002e104();
    uVar3 = param_1 & 0x17;
    goto LAB_3002df26;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_3002e104();
    uVar3 = param_1 & 0x1b;
    goto LAB_3002df26;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      dVar1 = *param_2;
      if (dVar1 != _DAT_30033fc8) {
        fVar5 = FUN_3002e003(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20),&local_8);
        local_8 = local_8 + -0x600;
        if (local_8 < -0x432) {
          local_10 = 0.0;
          bVar4 = bVar2;
        }
        else {
          local_10 = (double)(ulonglong)
                             (SUB87((double)fVar5,0) & 0xfffffffffffff | 0x10000000000000);
          if (local_8 < -0x3fd) {
            local_8 = -0x3fd - local_8;
            do {
              if ((((ulonglong)local_10 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_10 >> 1;
              if (((ulonglong)local_10 & 0x100000000) != 0) {
                local_10._3_1_ = (byte)((ulonglong)local_10 >> 0x18) >> 1;
                local_10._0_3_ = (undefined3)uVar3;
                local_10._0_4_ = CONCAT13(local_10._3_1_,(undefined3)local_10) | 0x80000000;
                uVar3 = (uint)local_10;
              }
              local_10._0_4_ = uVar3;
              local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
          }
          if ((double)fVar5 < _DAT_30033fc8) {
            local_10 = -local_10;
          }
        }
        *param_2 = local_10;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_3002e104();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_3002df26;
  }
  FUN_3002e104();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_30040a90;
  if (uVar3 == 0) {
    if (*param_2 <= _DAT_30033fc8) {
      dVar1 = -_DAT_30040a90;
    }
LAB_3002de46:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_30040aa0;
      if (*param_2 <= _DAT_30033fc8) {
        dVar1 = -_DAT_30040a90;
      }
      goto LAB_3002de46;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= _DAT_30033fc8) {
        dVar1 = -_DAT_30040aa0;
      }
      goto LAB_3002de46;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_30040aa0;
      if (*param_2 <= _DAT_30033fc8) {
        dVar1 = -_DAT_30040aa0;
      }
      goto LAB_3002de46;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_3002df26:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_3002e104();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}



/* === FUN_3002df48 @ 0x3002df48 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002df48 @ 0x3002DF48 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3002df48(int param_1)

{
  if (param_1 == 1) {
    _DAT_3004f240 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    _DAT_3004f240 = 0x22;
    return;
  }
  return;
}



/* === __frnd @ 0x3002df6e === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __frnd @ 0x3002DF6E */



/* Library Function - Single Match
    __frnd
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

float10 __cdecl __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}



/* === FUN_3002df80 @ 0x3002df80 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002df80 @ 0x3002DF80 */



float10 __cdecl FUN_3002df80(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}



/* === FUN_3002dfa9 @ 0x3002dfa9 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002dfa9 @ 0x3002DFA9 */



undefined4 __cdecl FUN_3002dfa9(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}



/* === FUN_3002e003 @ 0x3002e003 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e003 @ 0x3002E003 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_3002e003(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  undefined8 local_c;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      _DAT_30033fc8) {
    iVar4 = 0;
    local_c = 0.0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar4 = -0x3fd;
    if (_DAT_30033fc8 <=
        (double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar2 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar2;
      param_2._2_1_ = (byte)((uint)iVar2 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar2 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
      iVar4 = iVar4 + -1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar3) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    fVar5 = FUN_3002df80(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
  }
  else {
    fVar5 = FUN_3002df80(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
    iVar4 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  }
  *param_3 = iVar4;
  return (float10)local_c;
}



/* === FUN_3002e0c4 @ 0x3002e0c4 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e0c4 @ 0x3002E0C4 */



int FUN_3002e0c4(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* === FUN_3002e0d2 @ 0x3002e0d2 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e0d2 @ 0x3002E0D2 */



int FUN_3002e0d2(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* === FUN_3002e0e1 @ 0x3002e0e1 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e0e1 @ 0x3002E0E1 */



int FUN_3002e0e1(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



/* === FUN_3002e104 @ 0x3002e104 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e104 @ 0x3002E104 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3002e104(void)

{
  return;
}



/* === FUN_3002e2be @ 0x3002e2be === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e2be @ 0x3002E2BE */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined5 __fastcall FUN_3002e2be(undefined4 param_1,undefined1 param_2)

{
  undefined4 extraout_EAX;
  undefined4 in_EAX;
  undefined1 extraout_DL;
  int unaff_EBP;
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  fVar1 = ABS(in_ST0);
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(_DAT_30040aee < fVar1) << 8 | (ushort)(NAN(_DAT_30040aee) || NAN(fVar1)) << 10 |
       (ushort)(_DAT_30040aee == fVar1) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 0x41) == 0) {
    fVar2 = ROUND(in_ST0);
    fVar1 = (float10)0;
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
         (ushort)(fVar2 == fVar1) << 0xe;
    fVar2 = in_ST0 - fVar2;
    fVar1 = (float10)0;
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
         (ushort)(fVar2 == fVar1) << 0xe;
    f2xm1(ABS(fVar2));
    return CONCAT14(*(undefined1 *)(unaff_EBP + -0x9f),in_EAX);
  }
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(in_ST0 < fVar1) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar1)) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) == 0) {
    return CONCAT14(param_2,unaff_retaddr);
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 4;
  FUN_3002e476();
  return CONCAT14(extraout_DL,extraout_EAX);
}



/* === FUN_3002e468 @ 0x3002e468 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e468 @ 0x3002E468 */



void FUN_3002e468(void)

{
  return;
}



/* === FUN_3002e476 @ 0x3002e476 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e476 @ 0x3002E476 */



float10 FUN_3002e476(void)

{
  return (float10)0;
}



/* === FUN_3002e540 @ 0x3002e540 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e540 @ 0x3002E540 */



float10 __fastcall
FUN_3002e540(undefined4 param_1,uint param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  FUN_30030e2b(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}



/* === __startOneArgErrorHandling @ 0x3002e557 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __startOneArgErrorHandling @ 0x3002E557 */



/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,uint param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  FUN_30030e2b(param_2,&local_24,&param_3);
  return (float10)local_c;
}



/* === FUN_3002e5a0 @ 0x3002e5a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e5a0 @ 0x3002E5A0 */



undefined1  [10] FUN_3002e5a0(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}



/* === FUN_3002e5b5 @ 0x3002e5b5 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e5b5 @ 0x3002E5B5 */



void FUN_3002e5b5(void)

{
  return;
}



/* === __fload_withFB @ 0x3002e5e5 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __fload_withFB @ 0x3002E5E5 */



/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}



/* === FUN_3002e63e @ 0x3002e63e === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e63e @ 0x3002E63E */



void FUN_3002e63e(void)

{
  return;
}



/* === FUN_3002e689 @ 0x3002e689 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e689 @ 0x3002E689 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_3002e689(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  ushort unaff_retaddr;
  uint uStack_4;
  
  uStack_4 = (uint)((ulonglong)(double)in_ST0 >> 0x20);
  if (((ulonglong)(double)in_ST0 & 0x7ff0000000000000) == 0) {
    fscale(in_ST0,(float10)_DAT_3003847c);
  }
  else if ((uStack_4 & 0x7ff00000) == 0x7ff00000) {
    fscale(in_ST0,(float10)_DAT_30038474);
  }
  else if (((unaff_retaddr == 0x27f) || ((unaff_retaddr & 0x20) != 0)) ||
          ((in_FPUStatusWord & 0x20) == 0)) {
    return;
  }
  if (param_2 == 0x1d) {
    FUN_3002e540(param_1,0x1d,unaff_retaddr,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
  return;
}



/* === FUN_3002e72c @ 0x3002e72c === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e72c @ 0x3002E72C */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_3002e72c(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < _DAT_30033fc8) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_30040a90;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_3002e7b7:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (_DAT_30033fc8 < param_3) goto LAB_3002e852;
        if (param_3 < _DAT_30033fc8) goto LAB_3002e7e9;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_3002e85c(param_3);
        if (_DAT_30033fc8 < param_3) {
          dVar2 = _DAT_30040a90;
          if (iVar3 == 1) {
            dVar2 = -_DAT_30040a90;
          }
          goto LAB_3002e852;
        }
        if (param_3 < _DAT_30033fc8) {
          dVar2 = _DAT_30040ab0;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_3002e852;
        }
      }
      dVar2 = 1.0;
      goto LAB_3002e852;
    }
    if (_DAT_30033fb0 < dVar1) goto LAB_3002e852;
    if (_DAT_30033fb0 <= dVar1) {
LAB_3002e77c:
      *param_4 = _DAT_30040a98;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_3002e7b7;
    if (dVar1 <= _DAT_30033fb0) {
      if (_DAT_30033fb0 <= dVar1) goto LAB_3002e77c;
      goto LAB_3002e852;
    }
  }
LAB_3002e7e9:
  dVar2 = 0.0;
LAB_3002e852:
  *param_4 = dVar2;
  return 0;
}



/* === FUN_3002e85c @ 0x3002e85c === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e85c @ 0x3002E85C */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_3002e85c(double param_1)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_30030efb(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
  if ((uVar2 & 0x90) == 0) {
    fVar3 = __frnd(param_1);
    if ((double)fVar3 == param_1) {
      dVar1 = param_1 / _DAT_30038498;
      fVar3 = __frnd(dVar1);
      if (fVar3 == (float10)dVar1) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      return uVar4;
    }
  }
  return 0;
}



/* === FUN_3002e8c1 @ 0x3002e8c1 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e8c1 @ 0x3002E8C1 */



void FUN_3002e8c1(void)

{
  if (PTR_FUN_3003e948 != (undefined *)0x0) {
    (*(code *)PTR_FUN_3003e948)();
  }
  FUN_3002e9a7((undefined4 *)&DAT_3003a008,(undefined4 *)&DAT_3003a010);
  FUN_3002e9a7((undefined4 *)&DAT_3003a000,(undefined4 *)&DAT_3003a004);
  return;
}



/* === __exit @ 0x3002e8ee === */
/* Ghidra decompiled: binkw32.dll */
/* Function: __exit @ 0x3002E8EE */



/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_3002e90e(_Code,1,0);
  return;
}



/* === FUN_3002e8ff @ 0x3002e8ff === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e8ff @ 0x3002E8FF */



void FUN_3002e8ff(void)

{
  FUN_3002e90e(0,0,1);
  return;
}



/* === FUN_3002e90e @ 0x3002e90e === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e90e @ 0x3002E90E */



void __cdecl FUN_3002e90e(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_3004f288 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_3004f284 = 1;
  DAT_3004f280 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_3004f730 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_3004f72c - 4), DAT_3004f730 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_3004f730 <= puVar1);
    }
    FUN_3002e9a7((undefined4 *)&DAT_3003a014,(undefined4 *)&DAT_3003a018);
  }
  FUN_3002e9a7((undefined4 *)&DAT_3003a01c,(undefined4 *)&DAT_3003a020);
  if (param_3 != 0) {
    return;
  }
  DAT_3004f288 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* === FUN_3002e9a7 @ 0x3002e9a7 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e9a7 @ 0x3002E9A7 */



void __cdecl FUN_3002e9a7(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* === FUN_3002e9c1 @ 0x3002e9c1 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e9c1 @ 0x3002E9C1 */



void FUN_3002e9c1(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  byte *pbVar5;
  int iVar6;
  UINT *pUVar7;
  UINT UVar8;
  UINT UVar9;
  uint uVar10;
  _STARTUPINFOA local_44;
  
  puVar2 = _malloc(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_3004f720 = 0x20;
  DAT_3004f620 = puVar2;
  for (; puVar2 < DAT_3004f620 + 0x40; puVar2 = puVar2 + 2) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_44.lpReserved2;
    pUVar7 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar5 = (byte *)(UVar8 + (int)pUVar7);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_3004f720 < (int)UVar8) {
      puVar2 = &DAT_3004f624;
      do {
        puVar3 = _malloc(0x100);
        UVar9 = DAT_3004f720;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_3004f720 = DAT_3004f720 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x40; puVar3 = puVar3 + 2) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_3004f720 < (int)UVar8);
    }
    uVar10 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)pbVar5 != (HANDLE)0xffffffff) && ((*pUVar7 & 1) != 0)) &&
           (((*pUVar7 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)pbVar5), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_3004f620)[(int)uVar10 >> 5] + (uVar10 & 0x1f) * 8);
          *puVar2 = *(undefined4 *)pbVar5;
          *(byte *)(puVar2 + 1) = (byte)*pUVar7;
        }
        uVar10 = uVar10 + 1;
        pUVar7 = (UINT *)((int)pUVar7 + 1);
        pbVar5 = pbVar5 + 4;
      } while ((int)uVar10 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_3004f620 + iVar6 * 2;
    if (DAT_3004f620[iVar6 * 2] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_3002eb52;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_3002eb52:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_3004f720);
      return;
    }
  } while( true );
}



/* === FUN_3002eb6c @ 0x3002eb6c === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002eb6c @ 0x3002EB6C */



void FUN_3002eb6c(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_3004f620;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      FUN_3002b909((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x3004f720);
  return;
}



/* === FUN_3002eb8f @ 0x3002eb8f === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002eb8f @ 0x3002EB8F */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3002eb8f(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_3004f728 == 0) {
    FUN_30031351();
  }
  iVar5 = 0;
  for (puVar6 = DAT_3004f1f4; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_3004f268 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_3004f1f4;
  puVar6 = DAT_3004f1f4;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_3002fd80((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_3002b909((undefined *)DAT_3004f1f4);
  DAT_3004f1f4 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_3004f724 = 1;
  return;
}



/* === FUN_3002ec48 @ 0x3002ec48 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ec48 @ 0x3002EC48 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3002ec48(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_3004f728 == 0) {
    FUN_30031351();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_3004f28c,0x104);
  _DAT_3004f278 = &DAT_3004f28c;
  pbVar2 = &DAT_3004f28c;
  if (*DAT_3004f758 != 0) {
    pbVar2 = DAT_3004f758;
  }
  FUN_3002ece1(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_3002ece1(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_3004f260 = puVar1;
  _DAT_3004f25c = local_8 + -1;
  return;
}



/* === FUN_3002ece1 @ 0x3002ece1 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ece1 @ 0x3002ECE1 */



void __cdecl FUN_3002ece1(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_3004f500 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_3004f500 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_3002ed8c;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_3002ed8c:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_3004f500 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_3004f500 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* === FUN_3002ee95 @ 0x3002ee95 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ee95 @ 0x3002EE95 */



LPSTR FUN_3002ee95(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_3004f390 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_3004f390 = 1;
LAB_3002eeec:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_3002b909(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_3004f390 = 2;
  }
  else {
    if (DAT_3004f390 == 1) goto LAB_3002eeec;
    if (DAT_3004f390 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_30031370((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



/* === FUN_3002efc7 @ 0x3002efc7 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002efc7 @ 0x3002EFC7 */



void FUN_3002efc7(void)

{
  if ((DAT_3004f1fc == 1) || ((DAT_3004f1fc == 0 && (DAT_3004f200 == 1)))) {
    FUN_3002f000(0xfc);
    if (DAT_3004f394 != (code *)0x0) {
      (*DAT_3004f394)();
    }
    FUN_3002f000(0xff);
  }
  return;
}



/* === FUN_3002f000 @ 0x3002f000 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f000 @ 0x3002F000 */



void __cdecl FUN_3002f000(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_30040b78;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while (pDVar2 < &DAT_30040c08);
  if (param_1 == (&DAT_30040b78)[iVar5 * 2]) {
    if ((DAT_3004f1fc == 1) || ((DAT_3004f1fc == 0 && (DAT_3004f200 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x30040b7c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_3002fd80(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_3002fd80(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_3002fd90(local_a4,_Dest);
      FUN_3002fd90(local_a4,(uint *)&DAT_30038754);
      FUN_3002fd90(local_a4,*(uint **)(iVar5 * 8 + 0x30040b7c));
      auStackY_1e3._3_4_ = 0x3002f124;
      FUN_300316a5(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* === FUN_3002f153 @ 0x3002f153 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f153 @ 0x3002F153 */



void __thiscall FUN_3002f153(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_3002f16a(this,param_1,param_2,param_3,0);
  return;
}



/* === FUN_3002f16a @ 0x3002f16a === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f16a @ 0x3002F16A */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall FUN_3002f16a(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  void *this_00;
  byte bVar6;
  undefined *puVar7;
  void *local_c;
  byte *local_8;
  
  local_c = (void *)0x0;
  bVar6 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_30040e1c < 2) {
      uVar3 = (byte)PTR_DAT_30040c10[(uint)bVar6 * 2] & 8;
      this = PTR_DAT_30040c10;
    }
    else {
      puVar7 = (undefined *)0x8;
      uVar3 = FUN_3002f7b7(this,(uint)bVar6,8);
      this = puVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar6 == 0x2d) {
    param_4 = param_4 | 2;
LAB_3002f1c5:
    bVar6 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar6 == 0x2b) goto LAB_3002f1c5;
  if ((((int)param_3 < 0) || (param_3 == (void *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (void *)0x0;
  }
  this_00 = (void *)0x10;
  if (param_3 == (void *)0x0) {
    if (bVar6 != 0x30) {
      param_3 = (void *)0xa;
      goto LAB_3002f22f;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_3002f22f;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar6 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar6 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_3002f22f:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar6;
    if (DAT_30040e1c < 2) {
      uVar5 = (byte)PTR_DAT_30040c10[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_3002f7b7(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_30040e1c < 2) {
        uVar3 = *(ushort *)(PTR_DAT_30040c10 + uVar3 * 2) & 0x103;
      }
      else {
        pvVar2 = (void *)0x103;
        uVar3 = FUN_3002f7b7(this_00,uVar3,0x103);
        this_00 = pvVar2;
      }
      if (uVar3 == 0) {
LAB_3002f2db:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (void *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((void *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((void *)0x7fffffff < local_c)))))))) {
          _DAT_3004f240 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (void *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (void *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (void *)-(int)local_c;
      }
      uVar3 = FUN_3003182e(this_00,(int)(char)bVar6);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar6 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_3002f2db;
    if ((local_c < pvVar4) ||
       ((local_c == pvVar4 && (this_00 <= (void *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = (void *)((int)local_c * (int)param_3 + (int)this_00);
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar6 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}



/* === _strchr @ 0x3002f390 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _strchr @ 0x3002F390 */



/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



/* === _strstr @ 0x3002f450 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _strstr @ 0x3002F450 */



/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  
  cVar3 = *_SubStr;
  if (cVar3 == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    while (((uint)_Str & 3) != 0) {
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      _Str = (char *)((int)_Str + 1);
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = *(uint *)_Str;
        uVar7 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar6 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar9 = (uint *)((int)_Str + 4);
        if (((uVar7 ^ 0xffffffff ^ uVar7 + 0x7efefeff) & 0x81010100) != 0) break;
        _Str = (char *)puVar9;
        if ((uVar6 & 0x81010100) != 0) {
          if ((uVar6 & 0x1010100) != 0) {
            return (char *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (char *)0x0;
          }
        }
      }
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 8);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 1);
      }
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 0x10);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 2);
      }
      if (cVar5 == '\0') break;
      cVar5 = (char)(uVar4 >> 0x18);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 3);
      }
      _Str = (char *)puVar9;
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
    }
    return (char *)0x0;
  }
  do {
    cVar5 = *_Str;
    do {
      while (_Str = _Str + 1, cVar5 != cVar3) {
        if (cVar5 == '\0') {
          return (char *)0x0;
        }
        cVar5 = *_Str;
      }
      cVar5 = *_Str;
      pcVar10 = _Str + 1;
      pcVar8 = _SubStr;
    } while (cVar5 != _SubStr[1]);
    do {
      if (pcVar8[2] == '\0') {
LAB_3002f4c3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_3002f4c3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* === _strncmp @ 0x3002f4d0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _strncmp @ 0x3002F4D0 */



/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}



/* === _memset @ 0x3002f510 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _memset @ 0x3002F510 */



/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/* === FUN_3002f568 @ 0x3002f568 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f568 @ 0x3002F568 */



int __cdecl
FUN_3002f568(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_30038798;
  puStack_10 = &LAB_3002beec;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_3004f398 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_3004f398 = 2;
    }
    else {
      DAT_3004f398 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_3002f78c(param_3,param_4);
  }
  if (DAT_3004f398 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_3004f398 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_3004f228;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_3002c020();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_3002c020();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* === FUN_3002f78c @ 0x3002f78c === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f78c @ 0x3002F78C */



int __cdecl FUN_3002f78c(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



/* === FUN_3002f7b7 @ 0x3002f7b7 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f7b7 @ 0x3002F7B7 */



uint __thiscall FUN_3002f7b7(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_30040c10 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_30040c10[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_300318fa(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



/* === FUN_3002f82c @ 0x3002f82c === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f82c @ 0x3002F82C */



uint __thiscall FUN_3002f82c(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_3002f877(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_3002f909(uVar1);
  return uVar1;
}



/* === FUN_3002f861 @ 0x3002f861 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f861 @ 0x3002F861 */



void __thiscall FUN_3002f861(void *this,uint param_1,uint param_2)

{
  FUN_3002f82c(this,param_1,param_2 & 0xfff7ffff);
  return;
}



/* === FUN_3002f877 @ 0x3002f877 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f877 @ 0x3002F877 */



uint __cdecl FUN_3002f877(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



/* === FUN_3002f909 @ 0x3002f909 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f909 @ 0x3002F909 */



uint __cdecl FUN_3002f909(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



/* === FUN_3002f992 @ 0x3002f992 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f992 @ 0x3002F992 */



undefined4 __cdecl FUN_3002f992(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}



/* === FUN_3002f9db @ 0x3002f9db === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f9db @ 0x3002F9DB */



void __cdecl FUN_3002f9db(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_30031a43(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_30031a43(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



/* === FUN_3002fa31 @ 0x3002fa31 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fa31 @ 0x3002FA31 */



undefined4 __cdecl FUN_3002fa31(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_3002f992(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_3002f9db(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}



/* === FUN_3002fabd @ 0x3002fabd === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fabd @ 0x3002FABD */



void __cdecl FUN_3002fabd(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* === FUN_3002fad8 @ 0x3002fad8 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fad8 @ 0x3002FAD8 */



void __cdecl FUN_3002fad8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* === FUN_3002fae4 @ 0x3002fae4 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fae4 @ 0x3002FAE4 */



undefined4 __cdecl FUN_3002fae4(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}



/* === FUN_3002faff @ 0x3002faff === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002faff @ 0x3002FAFF */



void __cdecl FUN_3002faff(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}



/* === FUN_3002fb8c @ 0x3002fb8c === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fb8c @ 0x3002FB8C */



undefined4 __cdecl FUN_3002fb8c(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_3002fae4((int *)&local_10);
    if (iVar2 != 0) {
LAB_3002fcb8:
      uVar5 = 0;
      goto LAB_3002fcba;
    }
    FUN_3002fad8(&local_10);
  }
  else {
    FUN_3002fabd((int)local_1c,&local_10);
    iVar2 = FUN_3002fa31((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_3002fad8(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_3002fad8(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_3002faff(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_3002fcba;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_3002faff(&local_10,param_3[3]);
        goto LAB_3002fcb8;
      }
      FUN_3002fabd((int)&local_10,local_1c);
      FUN_3002faff(&local_10,iVar2 - iVar4);
      FUN_3002fa31((int)&local_10,param_3[2]);
      FUN_3002faff(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_3002fcba:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}



/* === FUN_3002fcf8 @ 0x3002fcf8 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fcf8 @ 0x3002FCF8 */



void __cdecl FUN_3002fcf8(ushort *param_1,uint *param_2)

{
  FUN_3002fb8c(param_1,param_2,(int *)&DAT_30040e28);
  return;
}



/* === FUN_3002fd0e @ 0x3002fd0e === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fd0e @ 0x3002FD0E */



void __cdecl FUN_3002fd0e(ushort *param_1,uint *param_2)

{
  FUN_3002fb8c(param_1,param_2,(int *)&DAT_30040e40);
  return;
}



/* === FUN_3002fd24 @ 0x3002fd24 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fd24 @ 0x3002FD24 */



void __thiscall FUN_3002fd24(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_30031be4(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_3002fcf8(local_10,param_1);
  return;
}



/* === FUN_3002fd51 @ 0x3002fd51 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fd51 @ 0x3002FD51 */



void __thiscall FUN_3002fd51(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_30031be4(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_3002fd0e(local_10,param_1);
  return;
}



/* === FUN_3002fd80 @ 0x3002fd80 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fd80 @ 0x3002FD80 */



uint * __cdecl FUN_3002fd80(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_3002fe68;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_3002fe68:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



/* === FUN_3002fd90 @ 0x3002fd90 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fd90 @ 0x3002FD90 */



uint * __cdecl FUN_3002fd90(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_3002fdac;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_3002fddf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x3002fdfb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_3002fdac:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x3002fdfb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x3002fdfb;
    }
  }
LAB_3002fddf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x3002fdfb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_3002fe68:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_3002fe68;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* === FUN_3002fe70 @ 0x3002fe70 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fe70 @ 0x3002FE70 */



void __cdecl FUN_3002fe70(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_3002ba10((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



/* === FUN_3002fee7 @ 0x3002fee7 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fee7 @ 0x3002FEE7 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_3002fee7(void)

{
  undefined4 in_stack_ffffffd8;
  undefined2 uVar1;
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar1 = (undefined2)((uint)in_stack_ffffffd8 >> 0x10);
  FUN_3002ff4b(&local_10,(uint *)&stack0x00000004);
  _DAT_3004f3c8 = FUN_300320b5(local_10,uStack_c,CONCAT22(uVar1,uStack_8),0x11,0,&DAT_3004f3a0);
  _DAT_3004f3c0 = (int)DAT_3004f3a2;
  _DAT_3004f3c4 = (int)DAT_3004f3a0;
  _DAT_3004f3cc = &DAT_3004f3a4;
  return &DAT_3004f3c0;
}



/* === FUN_3002ff4b @ 0x3002ff4b === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ff4b @ 0x3002FF4B */



void __cdecl FUN_3002ff4b(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}



/* === _strlen @ 0x30030010 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _strlen @ 0x30030010 */



/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_30030030;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_30030063:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_30030030:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_30030063;
}



/* === FUN_30030094 @ 0x30030094 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30030094 @ 0x30030094 */



undefined4 FUN_30030094(void)

{
  return 0;
}



/* === FUN_300300a0 @ 0x300300a0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300300a0 @ 0x300300A0 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl
FUN_300300a0(int param_1,uint param_2,ushort param_3,undefined4 param_4,uint param_5,uint param_6)

{
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)CONCAT28(param_3,CONCAT44(param_2,param_1));
  while (!CARRY4(param_2,param_2)) {
    if (param_1 == 0 && param_2 == 0) {
      return 0;
    }
    if ((param_3 & 0x7fff) != 0) {
      return param_3 & 0x7fff;
    }
    uVar2 = param_6 & 0x7fff;
    if (uVar2 == 0) {
      if (CARRY4(param_5,param_5)) {
        return param_5 * 2;
      }
    }
    else if ((uVar2 == 0x7fff) || (uVar2 = param_5 * 2, !CARRY4(param_5,param_5))) {
      return uVar2;
    }
    fVar3 = fVar1 * (float10)_DAT_30040e88;
    param_1 = SUB104(fVar3,0);
    param_3 = (ushort)((unkuint10)fVar3 >> 0x40);
    param_2 = (uint)((unkuint10)fVar3 >> 0x20);
  }
  uVar2 = param_2 * 2 ^ 0xe000000;
  if ((uVar2 & 0xe000000) != 0) {
    return uVar2;
  }
  uVar2 = (param_2 & 0x7fffffff) >> 0x1b;
  if ((&DAT_30040e70)[uVar2] != '\0') {
    if (((param_3 & 0x7fff) != 0) && ((param_3 & 0x7fff) != 0x7fff)) {
      if ((param_6 & 0x7fff) != 1) {
        return param_6 & 0x7fff;
      }
      return 1;
    }
    return param_3 & 0x7fff;
  }
  return uVar2;
}



/* === FUN_30030891 @ 0x30030891 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30030891 @ 0x30030891 */



undefined4 FUN_30030891(void)

{
  undefined4 in_EAX;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined2 in_stack_ffffffe6;
  
  FUN_300300a0((int)in_ST1,(uint)((unkuint10)in_ST1 >> 0x20),(ushort)((unkuint10)in_ST1 >> 0x40),
               (int)in_ST0,(uint)((unkuint10)in_ST0 >> 0x20),
               CONCAT22(in_stack_ffffffe6,(short)((unkuint10)in_ST0 >> 0x40)));
  return in_EAX;
}



/* === FUN_30030e2b @ 0x30030e2b === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30030e2b @ 0x30030E2B */



void __cdecl FUN_30030e2b(uint param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  param_3 = (ushort *)(uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_30030e70:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_30030e70;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_30030ec6;
    }
    if (iVar2 != 8) goto LAB_30030ec6;
    uVar3 = 0x10;
  }
  bVar1 = FUN_3002dd31(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_3002da7e(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_30030ec6:
  FUN_3002e0e1();
  if (((*param_2 != 8) && (DAT_30040e60 == 0)) && (iVar2 = FUN_30030094(), iVar2 != 0)) {
    return;
  }
  FUN_3002df48(*param_2);
  return;
}



/* === FUN_30030efb @ 0x30030efb === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30030efb @ 0x30030EFB */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_30030efb(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_3002dfa9(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ) >> 0x20));
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar1 = 4;
      }
      else if (iVar1 == 3) {
        iVar1 = 2;
      }
      else {
        iVar1 = 1;
      }
      return iVar1;
    }
    return 0x200;
  }
  if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff90) + 0x80;
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == _DAT_30033fc8) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff08) + 0x100;
}



/* === FUN_30030f8d @ 0x30030f8d === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30030f8d @ 0x30030F8D */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_30030f8d(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  BYTE *pBVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  _cpinfo local_1c;
  uint local_8;
  
  CodePage = FUN_30031126(param_1);
  if (CodePage == DAT_3004f3ec) {
    return 0;
  }
  if (CodePage != 0) {
    iVar11 = 0;
    pUVar5 = &DAT_30040fd8;
    do {
      if (*pUVar5 == CodePage) {
        puVar13 = &DAT_3004f500;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_8 = 0;
        iVar11 = iVar11 * 0x30;
        *(undefined1 *)puVar13 = 0;
        pbVar12 = (byte *)(iVar11 + 0x30040fe8);
        do {
          bVar3 = *pbVar12;
          pbVar10 = pbVar12;
          while ((bVar3 != 0 && (bVar3 = pbVar10[1], bVar3 != 0))) {
            uVar7 = (uint)*pbVar10;
            if (uVar7 <= bVar3) {
              bVar4 = (&DAT_30040fd0)[local_8];
              do {
                pbVar2 = (byte *)((int)&DAT_3004f500 + uVar7 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar7 = uVar7 + 1;
              } while (uVar7 <= bVar3);
            }
            pbVar10 = pbVar10 + 2;
            bVar3 = *pbVar10;
          }
          local_8 = local_8 + 1;
          pbVar12 = pbVar12 + 8;
        } while (local_8 < 4);
        _DAT_3004f3fc = 1;
        DAT_3004f3ec = CodePage;
        DAT_3004f604 = FUN_30031170(CodePage);
        DAT_3004f3f0 = *(undefined4 *)(iVar11 + 0x30040fdc);
        DAT_3004f3f4 = *(undefined4 *)(iVar11 + 0x30040fe0);
        DAT_3004f3f8 = *(undefined4 *)(iVar11 + 0x30040fe4);
        goto LAB_30031115;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar11 = iVar11 + 1;
    } while (pUVar5 < (UINT *)0x300410c8);
    BVar6 = GetCPInfo(CodePage,&local_1c);
    if (BVar6 == 1) {
      puVar13 = &DAT_3004f500;
      DAT_3004f3ec = CodePage;
      for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_3004f604 = 0;
      if (local_1c.MaxCharSize < 2) {
        _DAT_3004f3fc = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar8 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar8;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar8[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              pbVar12 = (byte *)((int)&DAT_3004f500 + uVar7 + 1);
              *pbVar12 = *pbVar12 | 4;
            }
            pBVar1 = pBVar8 + 1;
            pBVar8 = pBVar8 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          pbVar12 = (byte *)((int)&DAT_3004f500 + uVar7 + 1);
          *pbVar12 = *pbVar12 | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_3004f604 = FUN_30031170(CodePage);
        _DAT_3004f3fc = 1;
      }
      DAT_3004f3f0 = 0;
      DAT_3004f3f4 = 0;
      DAT_3004f3f8 = 0;
      goto LAB_30031115;
    }
    if (DAT_3004f3d0 == 0) {
      return 0xffffffff;
    }
  }
  FUN_300311a3();
LAB_30031115:
  FUN_300311cc();
  return 0;
}



/* === FUN_30031126 @ 0x30031126 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031126 @ 0x30031126 */



int __cdecl FUN_30031126(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_3004f3d0 = 1;
                    /* WARNING: Could not recover jumptable at 0x30031140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_3004f3d0 = 1;
                    /* WARNING: Could not recover jumptable at 0x30031155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_3004f228;
  }
  DAT_3004f3d0 = (uint)bVar2;
  return param_1;
}



/* === FUN_30031170 @ 0x30031170 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031170 @ 0x30031170 */



undefined4 __cdecl FUN_30031170(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}



/* === FUN_300311a3 @ 0x300311a3 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300311a3 @ 0x300311A3 */



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_300311a3(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_3004f500;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_3004f3ec = 0;
  _DAT_3004f3fc = 0;
  DAT_3004f604 = 0;
  DAT_3004f3f0 = 0;
  DAT_3004f3f4 = 0;
  DAT_3004f3f8 = 0;
  return;
}



/* === FUN_300311cc @ 0x300311cc === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300311cc @ 0x300311CC */



void FUN_300311cc(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_3004f3ec,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_300318fa(1,local_118,0x100,local_518,DAT_3004f3ec,DAT_3004f604,0);
    FUN_3002f568(DAT_3004f604,0x100,local_118,0x100,local_218,0x100,DAT_3004f3ec,0);
    FUN_3002f568(DAT_3004f604,0x200,local_118,0x100,local_318,0x100,DAT_3004f3ec,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_3004f500 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_300312d8;
        }
        (&DAT_3004f400)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_3004f500 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_300312d8:
        (&DAT_3004f400)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_3004f500 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_30031322;
        }
        (&DAT_3004f400)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_3004f500 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_30031322:
        (&DAT_3004f400)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* === FUN_30031351 @ 0x30031351 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031351 @ 0x30031351 */



void FUN_30031351(void)

{
  if (DAT_3004f728 == 0) {
    FUN_30030f8d(-3);
    DAT_3004f728 = 1;
  }
  return;
}



/* === FUN_30031370 @ 0x30031370 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031370 @ 0x30031370 */



undefined4 * __cdecl FUN_30031370(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_30031527_caseD_2;
        case 3:
          goto switchD_30031527_caseD_3;
        }
        goto switchD_30031527_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_30031527_caseD_0;
      case 1:
        goto switchD_30031527_caseD_1;
      case 2:
        goto switchD_30031527_caseD_2;
      case 3:
        goto switchD_30031527_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_30031527_caseD_2;
            case 3:
              goto switchD_30031527_caseD_3;
            }
            goto switchD_30031527_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_30031527_caseD_2;
            case 3:
              goto switchD_30031527_caseD_3;
            }
            goto switchD_30031527_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_30031527_caseD_2;
            case 3:
              goto switchD_30031527_caseD_3;
            }
            goto switchD_30031527_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_30031527_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_30031527_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_30031527_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_30031527_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_300313a5_caseD_2;
      case 3:
        goto switchD_300313a5_caseD_3;
      }
      goto switchD_300313a5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_300313a5_caseD_0;
    case 1:
      goto switchD_300313a5_caseD_1;
    case 2:
      goto switchD_300313a5_caseD_2;
    case 3:
      goto switchD_300313a5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_300313a5_caseD_2;
          case 3:
            goto switchD_300313a5_caseD_3;
          }
          goto switchD_300313a5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_300313a5_caseD_2;
          case 3:
            goto switchD_300313a5_caseD_3;
          }
          goto switchD_300313a5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_300313a5_caseD_2;
          case 3:
            goto switchD_300313a5_caseD_3;
          }
          goto switchD_300313a5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_300313a5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_300313a5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_300313a5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_300313a5_caseD_0:
  return param_1;
}



/* === FUN_300316a5 @ 0x300316a5 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300316a5 @ 0x300316A5 */



int __cdecl FUN_300316a5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_3004f3d4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_3004f3d4 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_3004f3d4 != (FARPROC)0x0) {
        DAT_3004f3d8 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_3004f3dc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_300316f4;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_300316f4:
    if (DAT_3004f3d8 != (FARPROC)0x0) {
      iVar1 = (*DAT_3004f3d8)();
      if ((iVar1 != 0) && (DAT_3004f3dc != (FARPROC)0x0)) {
        iVar1 = (*DAT_3004f3dc)(iVar1);
      }
    }
    iVar1 = (*DAT_3004f3d4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



/* === _strncpy @ 0x30031730 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: _strncpy @ 0x30031730 */



/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x3003176e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_300317ab;
        goto LAB_30031819;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x30031815:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_30031819:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_300317ab;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x30031815;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x30031815;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x30031815;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x3003176e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_300317ab:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* === FUN_3003182e @ 0x3003182e === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3003182e @ 0x3003182E */



uint __thiscall FUN_3003182e(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_3004f218 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_30040e1c < 2) {
        uVar2 = (byte)PTR_DAT_30040c10[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_3002f7b7(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_30040c10[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_3002f568(DAT_3004f218,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



/* === FUN_300318fa @ 0x300318fa === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300318fa @ 0x300318FA */



BOOL __cdecl
FUN_300318fa(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_300387f0;
  puStack_10 = &LAB_3002beec;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_3004f3e0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_3004f3e0 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_3004f3e0 = iVar3;
  if (DAT_3004f3e0 != 2) {
    if (DAT_3004f3e0 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_3004f228;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_3002c020();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_3004f218;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



/* === FUN_30031a43 @ 0x30031a43 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031a43 @ 0x30031A43 */



undefined4 __cdecl FUN_30031a43(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



/* === ___add_12 @ 0x30031a64 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: ___add_12 @ 0x30031A64 */



/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_30031a43(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_30031a43(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_30031a43(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_30031a43(param_1[2],param_2[2],param_1 + 2);
  return;
}



/* === FUN_30031ac2 @ 0x30031ac2 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031ac2 @ 0x30031AC2 */



void __cdecl FUN_30031ac2(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}



/* === FUN_30031af0 @ 0x30031af0 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031af0 @ 0x30031AF0 */



void __cdecl FUN_30031af0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



/* === FUN_30031b1d @ 0x30031b1d === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031b1d @ 0x30031B1D */



void __cdecl FUN_30031b1d(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_30031ac2(puVar1);
      FUN_30031ac2(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_30031ac2(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_30031ac2(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



/* === FUN_30031be4 @ 0x30031be4 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031be4 @ 0x30031BE4 */



undefined4 __thiscall
FUN_30031be4(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_30031c3b:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_30031c58:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_30031e7d;
    }
    if (bVar6 == DAT_30040e20) goto LAB_30031c67;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_30031f57;
    }
    goto LAB_30031c3b;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_30031c58;
    iVar9 = iVar1;
    if (bVar6 != DAT_30040e20) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_30031cec;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_30031cc5;
    }
    goto LAB_30031c3b;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_30031c58;
    if (bVar6 == DAT_30040e20) {
LAB_30031c67:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_30031f5c;
    }
    goto LAB_30031c3b;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_30040e1c < 2) {
        uVar3 = (byte)PTR_DAT_30040c10[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_30040c10;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_3002f7b7(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_30040e20) goto LAB_30031dd9;
    goto LAB_30031c3b;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_30040e1c < 2) {
        uVar3 = (byte)PTR_DAT_30040c10[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_30040c10;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_3002f7b7(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_30031dd9:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_30031cec:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_30031cc5:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_30031f57;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_30031c3b;
  case 5:
    local_28 = iVar5;
    if (DAT_30040e1c < 2) {
      uVar3 = (byte)PTR_DAT_30040c10[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_30040c10;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_3002f7b7(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_30031e7d;
    goto LAB_30031f5c;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_30031eb2;
      if (bVar6 == 0x2d) goto LAB_30031ea6;
      if (bVar6 != 0x30) goto LAB_30031f5c;
LAB_30031e4b:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_30031c3b;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_30031e4b;
      goto LAB_30031f5c;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_30031f57;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_30031edd;
  default:
    goto switchD_30031c47_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_30031eb2:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_30031f5c;
LAB_30031ea6:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_30031c3b;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_30031c47_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_30031c3b;
    goto LAB_30031f5c;
  }
  iVar9 = 9;
LAB_30031e7d:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_30031c3b;
LAB_30031edd:
  if (DAT_30040e1c < 2) {
    uVar3 = (byte)PTR_DAT_30040c10[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_30040c10;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_3002f7b7(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_30031f27;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_30031f1f;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_30031edd;
LAB_30031f1f:
  pbVar7 = (byte *)0x1451;
LAB_30031f27:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_30040e1c < 2) {
      uVar3 = (byte)PTR_DAT_30040c10[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_30040c10;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_3002f7b7(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_30031f57:
  pbVar7 = pbVar8 + -1;
LAB_30031f5c:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_3003206a;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_30031b1d(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_30032568((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_30031fef;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_30031fef:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_3003206a:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



/* === FUN_300320b5 @ 0x300320b5 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300320b5 @ 0x300320B5 */



undefined4 __cdecl
FUN_300320b5(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_300321aa;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_300321aa:
            pcVar11 = "1#QNAN";
            goto LAB_300321af;
          }
          pcVar11 = "1#IND";
        }
        FUN_3002fd80((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_300321af:
        FUN_3002fd80((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                   0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_30032568((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_30032348((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_30031ac2((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_30031af0((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_30031ac2((uint *)&local_14);
          FUN_30031ac2((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_30031ac2((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_30032307;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_30032307:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_30032309:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_30032309;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_3003233f;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_3003233f:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



/* === FUN_30032348 @ 0x30032348 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30032348 @ 0x30032348 */



void __cdecl FUN_30032348(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_300323eb:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_300323eb;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_30031a43(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 (uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_3003249f:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_30031af0((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_30031ac2((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_3003249f;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22),
         iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_30032548;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_30032548:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



/* === FUN_30032568 @ 0x30032568 === */
/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30032568 @ 0x30032568 */



void __cdecl FUN_30032568(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  int iStack_8;
  
  iVar3 = 0x300410f8;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x30041258;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      iVar3 = iVar3 + 0x54;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        piVar4 = (int *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *(ushort *)(iVar3 + uVar2 * 0xc)) {
          local_10 = (undefined2)*piVar4;
          local_e._0_2_ = (undefined2)((uint)*piVar4 >> 0x10);
          local_e._2_2_ = (undefined2)piVar4[1];
          uStack_a = (undefined2)((uint)piVar4[1] >> 0x10);
          iStack_8 = piVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          piVar4 = (int *)&local_10;
        }
        FUN_30032348(param_1,piVar4);
      }
    }
  }
  return;
}



