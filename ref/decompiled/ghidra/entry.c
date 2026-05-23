/* Ghidra decompiled: jgld.dll */
/* Function: entry @ 0x10082770 */
/* Body size: 243 addresses */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_101287b0 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_1012b360 != (code *)0x0) {
        local_8 = (*DAT_1012b360)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_10082630(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = thunk_FUN_10065300(param_1,param_2);
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_10082630(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_10082630(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_1012b360 != (code *)0x0)) {
        local_8 = (*DAT_1012b360)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}

