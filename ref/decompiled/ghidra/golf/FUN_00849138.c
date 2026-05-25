/* Ghidra decompiled: golf.exe */
/* Function: FUN_00849138 @ 0x00849138 */


uint FUN_00849138(uint param_1,uint param_2,uint param_3)

{
  int local_8;
  
  while( true ) {
    if (param_3 <= param_2) {
      return 0;
    }
    local_8 = *(int *)(param_2 + 8);
    if (local_8 == 0) {
      local_8 = *(int *)(param_2 + 0x10);
    }
    if ((*(uint *)(param_2 + 0xc) <= param_1) &&
       (param_1 < (uint)(*(int *)(param_2 + 0xc) + local_8))) break;
    param_2 = param_2 + 0x28;
  }
  return param_2;
}

