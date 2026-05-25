/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040bf60 @ 0x0040BF60 */


undefined4 FUN_0040bf60(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 0x32)) && (-1 < param_2)) &&
     ((param_2 < 0x32 && (*(char *)((int)&DAT_005722e8 + param_1 * 0x32 + param_2) != '\x14')))) {
    return 0;
  }
  return 1;
}

