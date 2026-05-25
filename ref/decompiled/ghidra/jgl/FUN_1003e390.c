/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003e390 @ 0x1003E390 */


undefined4 __cdecl FUN_1003e390(int param_1)

{
  if (*(char *)(param_1 + 0x123) != '\0') {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
    return 7;
  }
  return 1;
}

