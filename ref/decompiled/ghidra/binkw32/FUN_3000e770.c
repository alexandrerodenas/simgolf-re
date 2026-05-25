/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000e770 @ 0x3000E770 */


void __cdecl FUN_3000e770(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0x1fU & 0xffffffe0;
  uVar1 = uVar2 * 2;
  if (DAT_3004f1d8 < uVar1) {
    if (DAT_3004f1dc != 0) {
      radfree(DAT_3004f1dc);
      DAT_3004f1dc = 0;
    }
    DAT_3004f1dc = radmalloc(uVar1);
    DAT_3004f1d8 = uVar1;
    DAT_3004f1e0 = DAT_3004f1dc + uVar2;
    return;
  }
  DAT_3004f1e0 = DAT_3004f1dc + uVar2;
  return;
}

