/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10009ba0 @ 0x10009BA0 */


void __fastcall FUN_10009ba0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*param_1 != 0) {
    local_8 = param_1;
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    iVar1 = __chkesp();
    if (iVar1 == 0) {
      MessageBoxA((HWND)0x0,"Release of RC failed!","SHUTDOWN ERROR",0x40);
      __chkesp();
    }
    wglDeleteContext((HGLRC)*local_8);
    iVar1 = __chkesp();
    if (iVar1 == 0) {
      MessageBoxA((HWND)0x0,"Deletion of RC failed!","SHUTDOWN ERROR",0x40);
      __chkesp();
    }
    *local_8 = 0;
    thunk_FUN_100380a0((int)local_8);
  }
  local_8 = (int *)0x10009c4f;
  __chkesp();
  return;
}

