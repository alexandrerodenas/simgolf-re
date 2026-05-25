/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100017a0 @ 0x100017A0 */


void __fastcall FUN_100017a0(int param_1)

{
  if (*(HDC *)(param_1 + 0x4bc) != (HDC)0x0) {
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    if (*(HGDIOBJ *)(param_1 + 0x4b0) != (HGDIOBJ)0x0) {
      SelectObject(*(HDC *)(param_1 + 0x4bc),*(HGDIOBJ *)(param_1 + 0x4b0));
      *(undefined4 *)(param_1 + 0x4b0) = 0;
    }
    DeleteDC(*(HDC *)(param_1 + 0x4bc));
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x4b4) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x4b4));
    *(undefined4 *)(param_1 + 0x4b4) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x4ac) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x4ac));
    *(undefined4 *)(param_1 + 0x4ac) = 0;
  }
  return;
}

