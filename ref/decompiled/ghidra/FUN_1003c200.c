/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003c200 @ 0x1003C200 */
/* Body size: 63 addresses */


void __fastcall FUN_1003c200(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0x18) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(LPCSTR *)(param_1 + 0x20) != (LPCSTR)0x0) {
    RemoveFontResourceA(*(LPCSTR *)(param_1 + 0x20));
    if (*(LPVOID *)(param_1 + 0x20) != (LPVOID)0x0) {
      FUN_10046abc(*(LPVOID *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

