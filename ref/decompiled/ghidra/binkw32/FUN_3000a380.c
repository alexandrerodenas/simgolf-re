/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000a380 @ 0x3000A380 */


void __cdecl
FUN_3000a380(int *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,int param_5)

{
  uint uVar1;
  int local_4;
  
  local_4 = param_5;
  while( true ) {
    if (param_1[3] == 0) {
      uVar1 = *(uint *)*param_1;
      *param_1 = (int)((uint *)*param_1 + 1);
      param_1[2] = uVar1 >> 1;
      param_1[3] = 0x1f;
    }
    else {
      uVar1 = param_1[2];
      param_1[2] = uVar1 >> 1;
      param_1[3] = param_1[3] + -1;
    }
    if ((uVar1 & 1) == 0) {
      *param_2 = *param_3;
      param_3 = param_3 + 1;
      param_5 = param_5 + -1;
    }
    else {
      *param_2 = *param_4;
      param_4 = param_4 + 1;
      local_4 = local_4 + -1;
    }
    param_2 = param_2 + 1;
    if (param_5 == 0) break;
    if (local_4 == 0) {
      if (param_5 == 0) {
        return;
      }
      do {
        *param_2 = *param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return;
    }
  }
  for (; local_4 != 0; local_4 = local_4 + -1) {
    *param_2 = *param_4;
    param_2 = param_2 + 1;
    param_4 = param_4 + 1;
  }
  return;
}

