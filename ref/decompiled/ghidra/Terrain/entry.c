/* Ghidra decompiled: Terrain.dll */
/* Function: entry @ 0x10019B80 */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_10110788 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_10112320 != (code *)0x0) {
        local_8 = (*DAT_10112320)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_10019a40(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = FUN_10023eb0();
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_10019a40(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_10019a40(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_10112320 != (code *)0x0)) {
        local_8 = (*DAT_10112320)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}

