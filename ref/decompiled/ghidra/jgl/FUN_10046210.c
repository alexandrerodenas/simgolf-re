/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046210 @ 0x10046210 */


void __cdecl FUN_10046210(int param_1,int param_2,undefined1 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined1 *)(param_2 + 0x2c) = param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
  }
  return;
}

