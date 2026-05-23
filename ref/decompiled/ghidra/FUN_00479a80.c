/* Ghidra decompiled: golf.exe */
/* Function: FUN_00479a80 @ 0x00479A80 */
/* Body size: 156 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00479a80(int param_1,undefined4 *param_2)

{
  int iVar1;
  HWND pHVar2;
  HWND pHVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    _DAT_0083aa78 = *(undefined4 *)(param_1 + 0x1ac);
    _DAT_0083aa7c = *(undefined4 *)(param_1 + 0x1b0);
    _DAT_0083aa80 = *(undefined4 *)(param_1 + 0x1b4);
    _DAT_0083aa84 = *(undefined4 *)(param_1 + 0x1b8);
    FUN_0047b0d0(&DAT_0083aa78);
  }
  else {
    _DAT_0083aa78 = *param_2;
    _DAT_0083aa7c = param_2[1];
    _DAT_0083aa80 = param_2[2];
    _DAT_0083aa84 = param_2[3];
  }
  DAT_0083aa98 = param_1;
  iVar1 = FUN_004801f0();
  if (iVar1 != 0) {
    pHVar2 = (HWND)(**(code **)(*DAT_0083ad50 + 0x20))();
    pHVar3 = GetForegroundWindow();
    if (pHVar3 == pHVar2) {
      ClipCursor((RECT *)&DAT_0083aa78);
    }
  }
  return;
}

