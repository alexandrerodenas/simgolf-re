/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003cfd0 @ 0x1003CFD0 */


void FUN_1003cfd0(void)

{
  if (DAT_10057d98 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_10057d98);
    DAT_10057d98 = (HGDIOBJ)0x0;
  }
  return;
}

