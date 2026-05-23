/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100463e0 @ 0x100463E0 */
/* Body size: 50 addresses */


void __cdecl FUN_100463e0(int param_1,int param_2,undefined4 *param_3)

{
  if (((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_1 + 0x6c) & 0x10000) == 0)) {
    *(undefined4 *)(param_2 + 0x3c) = *param_3;
    *(undefined4 *)(param_2 + 0x40) = param_3[1];
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
  }
  return;
}

