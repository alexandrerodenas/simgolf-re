/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100656c0 @ 0x100656C0 */


void __fastcall FUN_100656c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  ChangeDisplaySettingsA((DEVMODEA *)(param_1 + 4),0);
  __chkesp();
  if (*(int *)(local_8 + 0x144) != 0) {
    DestroyWindow(*(HWND *)(local_8 + 0x144));
    __chkesp();
    *(undefined4 *)(local_8 + 0x144) = 0;
  }
  if (*(int *)(local_8 + 0x148) != 0) {
    (**(code **)(**(int **)(local_8 + 0x148) + 8))();
    __chkesp();
    *(undefined4 *)(local_8 + 0x148) = 0;
  }
  UnregisterClassA("JackalClass",*(HINSTANCE *)(local_8 + 0x140));
  __chkesp();
  *(undefined4 *)(local_8 + 0x140) = 0;
  local_8 = 0x10065798;
  __chkesp();
  return;
}

