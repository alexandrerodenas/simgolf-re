/* Ghidra decompiled: Terrain.dll */
/* Function: initSystem @ 0x100012E4 */
/* Body size: 5 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::initSystem(int,int,struct HDC__ *,bool) */

void __thiscall
Terrain::initSystem(Terrain *this,int param_1,int param_2,HDC__ *param_3,bool param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_4c [16];
  int iStack_c;
  Terrain *pTStack_8;
  
                    /* 0x12e4  18  ?initSystem@Terrain@@QAEXHHPAUHDC__@@_N@Z */
  puVar2 = auStack_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)this == 0) {
    pTStack_8 = this;
    if (param_3 != (HDC__ *)0x0) {
      ChoosePixelFormat(param_3,(PIXELFORMATDESCRIPTOR *)&DAT_10063e10);
      iStack_c = __chkesp();
      if (iStack_c == 0) {
        MessageBoxA((HWND)0x0,"Can\'t Find A Suitable PixelFormat.","ERROR",0x30);
        __chkesp();
      }
      SetPixelFormat(param_3,iStack_c,(PIXELFORMATDESCRIPTOR *)&DAT_10063e10);
      iVar1 = __chkesp();
      if (iVar1 == 0) {
        MessageBoxA((HWND)0x0,"Can\'t Set The PixelFormat.","ERROR",0x30);
        __chkesp();
      }
      wglCreateContext(param_3);
      iVar1 = __chkesp();
      *(int *)pTStack_8 = iVar1;
      if (*(int *)pTStack_8 == 0) {
        MessageBoxA((HWND)0x0,"Can\'t Create A GL Rendering Context.","ERROR",0x30);
        __chkesp();
      }
      wglMakeCurrent(param_3,*(HGLRC *)pTStack_8);
      iVar1 = __chkesp();
      if (iVar1 == 0) {
        MessageBoxA((HWND)0x0,"Can\'t Activate The GL Rendering Context.","ERROR",0x30);
        __chkesp();
      }
    }
    pTStack_8[0x28] = (Terrain)param_4;
    thunk_FUN_100033e0();
    thunk_FUN_100037e0();
    thunk_FUN_100076e0((int)pTStack_8);
    resize(pTStack_8,param_1,param_2);
    *(int *)(pTStack_8 + 0x20) = param_1;
    *(int *)(pTStack_8 + 0x24) = param_2;
    if ((*(int *)(pTStack_8 + 0x20) == 800) && (*(int *)(pTStack_8 + 0x24) == 600)) {
      _DAT_10070a10 = 0x421aba8f;
    }
    else if ((*(int *)(pTStack_8 + 0x20) == 0x400) && (*(int *)(pTStack_8 + 0x24) == 0x300)) {
      _DAT_10070a10 = 0x42222a9a;
    }
    else if ((*(int *)(pTStack_8 + 0x20) == 0x500) && (*(int *)(pTStack_8 + 0x24) == 0x400)) {
      _DAT_10070a10 = 0x42235431;
    }
  }
  pTStack_8 = (Terrain *)0x10009e60;
  __chkesp();
  return;
}

