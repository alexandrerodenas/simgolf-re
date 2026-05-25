/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100662a0 @ 0x100662A0 */


void __thiscall FUN_100662a0(void *this,int param_1)

{
  HWND hWnd;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *lpText;
  char *lpCaption;
  UINT uType;
  undefined4 local_e0 [16];
  undefined4 local_a0;
  undefined4 local_9c [9];
  WORD local_78;
  DWORD local_74;
  DWORD local_34;
  DWORD local_30;
  DWORD local_2c;
  void *local_8;
  
  puVar2 = local_e0;
  for (iVar1 = 0x37; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_a0 = 0x1c0000;
  local_8 = this;
  EnumDisplaySettingsA((LPCSTR)0x0,0xffffffff,(DEVMODEA *)((int)this + 4));
  __chkesp();
  if (*(int *)((int)local_8 + 0x70) == 0x280) {
    uType = 0;
    lpCaption = "Display Request";
    lpText = 
    "Sid Meier\'s SimGolf must be played in 800x600 or higher resolution.  Please change your Windows desktop resolution to 800x600 or higher and restart the game."
    ;
    (**(code **)(*DAT_10128420 + 0x20))();
    hWnd = (HWND)__chkesp();
    MessageBoxA(hWnd,lpText,lpCaption,uType);
    __chkesp();
  }
  else {
    iVar1 = thunk_FUN_10066b50(0x101286f8);
    if (param_1 < iVar1) {
      puVar2 = (undefined4 *)(DAT_101286fc + param_1 * 0x94);
      puVar3 = local_9c;
      for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      local_78 = 0x94;
      local_74 = 0x5c0000;
      ChangeDisplaySettingsA((DEVMODEA *)local_9c,4);
      iVar1 = __chkesp();
      if (iVar1 == 0) {
        *(DWORD *)((int)local_8 + 300) = local_30;
        *(DWORD *)((int)local_8 + 0x130) = local_2c;
        *(DWORD *)((int)local_8 + 0x134) = local_34;
        (**(code **)**(undefined4 **)((int)local_8 + 0x148))
                  (*(undefined4 *)((int)local_8 + 300),*(undefined4 *)((int)local_8 + 0x130),
                   *(undefined4 *)((int)local_8 + 0x134),1);
        __chkesp();
      }
    }
  }
  local_8 = (void *)0x1006640d;
  __chkesp();
  return;
}

