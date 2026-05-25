/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046180 @ 0x10046180 */


void __cdecl
FUN_10046180(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x70) = param_3;
    *(undefined1 *)(param_2 + 0x78) = param_5;
    *(undefined4 *)(param_2 + 0x74) = param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
  }
  return;
}

