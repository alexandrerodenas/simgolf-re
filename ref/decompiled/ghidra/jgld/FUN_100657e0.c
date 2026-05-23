/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100657e0 @ 0x100657E0 */
/* Body size: 545 addresses */


void FUN_100657e0(undefined4 param_1,LPCSTR param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int nWidth;
  int iVar3;
  undefined4 *puVar4;
  HWND hWndParent;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  undefined4 local_74 [16];
  DWORD local_34;
  WNDCLASSA local_30;
  int local_8;
  
  puVar4 = local_74;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  GetModuleHandleA((LPCSTR)0x0);
  uVar1 = __chkesp();
  *(undefined4 *)(local_8 + 0x140) = uVar1;
  DAT_1012872c = param_1;
  *(undefined4 **)(local_8 + 0x148) = param_3;
  local_30.style = 0x2b;
  local_30.lpfnWndProc = (WNDPROC)&LAB_10001302;
  local_30.cbClsExtra = 0;
  local_30.cbWndExtra = 0;
  local_30.hInstance = *(HINSTANCE *)(local_8 + 0x140);
  LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_30.hIcon = (HICON)__chkesp();
  local_30.hCursor = (HCURSOR)0x0;
  GetStockObject(4);
  local_30.hbrBackground = (HBRUSH)__chkesp();
  local_30.lpszMenuName = (LPCSTR)0x0;
  local_30.lpszClassName = "JackalClass";
  RegisterClassA(&local_30);
  uVar2 = __chkesp();
  if ((uVar2 & 0xffff) != 0) {
    local_34 = 0x86000000;
    lpParam = (LPVOID)0x0;
    hInstance = *(HINSTANCE *)(local_8 + 0x140);
    hMenu = (HMENU)0x0;
    hWndParent = (HWND)0x0;
    GetSystemMetrics(1);
    iVar3 = __chkesp();
    GetSystemMetrics(0);
    nWidth = __chkesp();
    CreateWindowExA(0x40000,"JackalClass",param_2,local_34,0,0,nWidth,iVar3,hWndParent,hMenu,
                    hInstance,lpParam);
    uVar1 = __chkesp();
    *(undefined4 *)(local_8 + 0x144) = uVar1;
    if (*(int *)(local_8 + 0x144) != 0) {
      GetSystemMetrics(0);
      uVar1 = __chkesp();
      *(undefined4 *)(local_8 + 300) = uVar1;
      GetSystemMetrics(1);
      uVar1 = __chkesp();
      *(undefined4 *)(local_8 + 0x130) = uVar1;
      *(undefined4 *)(local_8 + 0x134) = 8;
      GetDC(*(HWND *)(local_8 + 0x144));
      uVar1 = __chkesp();
      *(undefined4 *)(local_8 + 0x138) = uVar1;
      SetBkMode(*(HDC *)(local_8 + 0x138),1);
      __chkesp();
      (**(code **)*param_3)
                (*(undefined4 *)(local_8 + 300),*(undefined4 *)(local_8 + 0x130),
                 *(undefined4 *)(local_8 + 0x134),1);
      __chkesp();
    }
  }
  local_8 = 0x100659fb;
  __chkesp();
  return;
}

