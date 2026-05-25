/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100461e0 @ 0x100461E0 */


void __cdecl FUN_100461e0(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x44) = *param_3;
    *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  }
  return;
}

