/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003c8a0 @ 0x1003C8A0 */
/* Body size: 89 addresses */


void __cdecl FUN_1003c8a0(HWND param_1)

{
  HDC pHVar1;
  LONG local_50;
  LONG local_4c;
  LONG local_48;
  undefined1 local_44 [12];
  LONG local_38;
  LONG local_34;
  LONG local_30;
  HDC local_2c;
  
  pHVar1 = BeginPaint(param_1,(LPPAINTSTRUCT)(local_44 + 4));
  if (pHVar1 != (HDC)0x0) {
    local_50 = local_38;
    local_48 = local_30;
    local_44._0_4_ = local_2c;
    local_4c = local_34;
    (**(code **)(*DAT_10057d90 + 4))(&local_50);
    EndPaint(param_1,(PAINTSTRUCT *)local_44);
  }
  return;
}

