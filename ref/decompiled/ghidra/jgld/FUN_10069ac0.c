/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10069ac0 @ 0x10069AC0 */
/* Body size: 161 addresses */


void __cdecl FUN_10069ac0(HWND param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_98 [16];
  LONG local_58;
  LONG local_54;
  LONG local_50;
  LONG local_4c;
  int local_48;
  tagPAINTSTRUCT local_44;
  
  puVar2 = local_98;
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  BeginPaint(param_1,&local_44);
  local_48 = __chkesp();
  if (local_48 != 0) {
    local_58 = local_44.rcPaint.left;
    local_54 = local_44.rcPaint.top;
    local_50 = local_44.rcPaint.right;
    local_4c = local_44.rcPaint.bottom;
    (**(code **)(*DAT_1012872c + 4))(&local_58);
    __chkesp();
    EndPaint(param_1,&local_44);
    __chkesp();
  }
  local_44.rgbReserved[0x1c] = ']';
  local_44.rgbReserved[0x1d] = 0x9b;
  local_44.rgbReserved[0x1e] = '\x06';
  local_44.rgbReserved[0x1f] = '\x10';
  __chkesp();
  return;
}

