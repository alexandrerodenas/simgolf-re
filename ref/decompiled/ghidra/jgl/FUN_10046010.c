/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046010 @ 0x10046010 */


void __cdecl
FUN_10046010(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 100) = param_3;
    *(undefined1 *)(param_2 + 0x6c) = param_5;
    *(undefined4 *)(param_2 + 0x68) = param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
  }
  return;
}

