/* Ghidra decompiled: Terrain.dll */
/* Function: closeSystem @ 0x10001217 */
/* Body size: 5 addresses */


/* public: void __thiscall Terrain::closeSystem(void) */

void __thiscall Terrain::closeSystem(Terrain *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x1217  5  ?closeSystem@Terrain@@QAEXXZ */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)this != 0) {
    pTStack_8 = this;
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    iVar1 = __chkesp();
    if (iVar1 == 0) {
      MessageBoxA((HWND)0x0,"Release of RC failed!","SHUTDOWN ERROR",0x40);
      __chkesp();
    }
    wglDeleteContext(*(HGLRC *)pTStack_8);
    iVar1 = __chkesp();
    if (iVar1 == 0) {
      MessageBoxA((HWND)0x0,"Deletion of RC failed!","SHUTDOWN ERROR",0x40);
      __chkesp();
    }
    *(undefined4 *)pTStack_8 = 0;
    thunk_FUN_100380a0((int)pTStack_8);
  }
  pTStack_8 = (Terrain *)0x10009c4f;
  __chkesp();
  return;
}

