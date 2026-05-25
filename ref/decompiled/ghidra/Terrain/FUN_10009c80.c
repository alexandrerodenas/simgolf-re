/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10009c80 @ 0x10009C80 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10009c80(void *param_1,int param_2,int param_3,HDC param_4,Terrain param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  Terrain *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)param_1 == 0) {
    local_8 = param_1;
    if (param_4 != (HDC)0x0) {
      ChoosePixelFormat(param_4,(PIXELFORMATDESCRIPTOR *)&DAT_10063e10);
      local_c = __chkesp();
      if (local_c == 0) {
        MessageBoxA((HWND)0x0,"Can\'t Find A Suitable PixelFormat.","ERROR",0x30);
        __chkesp();
      }
      SetPixelFormat(param_4,local_c,(PIXELFORMATDESCRIPTOR *)&DAT_10063e10);
      iVar1 = __chkesp();
      if (iVar1 == 0) {
        MessageBoxA((HWND)0x0,"Can\'t Set The PixelFormat.","ERROR",0x30);
        __chkesp();
      }
      wglCreateContext(param_4);
      iVar1 = __chkesp();
      *(int *)local_8 = iVar1;
      if (*(int *)local_8 == 0) {
        MessageBoxA((HWND)0x0,"Can\'t Create A GL Rendering Context.","ERROR",0x30);
        __chkesp();
      }
      wglMakeCurrent(param_4,*(HGLRC *)local_8);
      iVar1 = __chkesp();
      if (iVar1 == 0) {
        MessageBoxA((HWND)0x0,"Can\'t Activate The GL Rendering Context.","ERROR",0x30);
        __chkesp();
      }
    }
    local_8[0x28] = param_5;
    thunk_FUN_100033e0();
    thunk_FUN_100037e0();
    thunk_FUN_100076e0((int)local_8);
    Terrain::resize(local_8,param_2,param_3);
    *(int *)(local_8 + 0x20) = param_2;
    *(int *)(local_8 + 0x24) = param_3;
    if ((*(int *)(local_8 + 0x20) == 800) && (*(int *)(local_8 + 0x24) == 600)) {
      _DAT_10070a10 = 0x421aba8f;
    }
    else if ((*(int *)(local_8 + 0x20) == 0x400) && (*(int *)(local_8 + 0x24) == 0x300)) {
      _DAT_10070a10 = 0x42222a9a;
    }
    else if ((*(int *)(local_8 + 0x20) == 0x500) && (*(int *)(local_8 + 0x24) == 0x400)) {
      _DAT_10070a10 = 0x42235431;
    }
  }
  local_8 = (Terrain *)0x10009e60;
  __chkesp();
  return;
}

