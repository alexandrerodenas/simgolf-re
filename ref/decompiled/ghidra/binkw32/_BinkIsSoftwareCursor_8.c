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

