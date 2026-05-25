/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084aa1e @ 0x0084AA1E */


/* WARNING: Instruction at (ram,0x0084aaa4) overlaps instruction at (ram,0x0084aaa3)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0084aa87) */
/* WARNING: Removing unreachable block (ram,0x0084aaa4) */
/* WARNING: Removing unreachable block (ram,0x0084aa89) */
/* WARNING: Removing unreachable block (ram,0x0084abcb) */
/* WARNING: Removing unreachable block (ram,0x0084abe4) */

char * FUN_0084aa1e(int param_1)

{
  char *local_c;
  
  local_c = "~\x1b\x03V\v\x0eWM[\x1a\x1e";
  while( true ) {
    if (param_1 == 0) {
      return local_c;
    }
    for (; (*local_c != '\0' && (local_c < (char *)0x84ad06)); local_c = local_c + 1) {
    }
    if ("" < local_c) break;
    local_c = local_c + 1;
    param_1 = param_1 + -1;
  }
  return (char *)0x0;
}

