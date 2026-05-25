/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10045f20 @ 0x10045F20 */


void __cdecl FUN_10045f20(int param_1,int param_2,undefined4 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x7c) = param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
  }
  return;
}

