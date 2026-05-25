/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10066780 @ 0x10066780 */


void FUN_10066780(LONG *param_1,LONG *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  tagPOINT local_10;
  int local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  GetCursorPos(&local_10);
  __chkesp();
  ScreenToClient(*(HWND *)(local_8 + 0x144),&local_10);
  __chkesp();
  *param_1 = local_10.x;
  *param_2 = local_10.y;
  local_8 = 0x100667ea;
  __chkesp();
  return;
}

