/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039ce0 @ 0x10039CE0 */


undefined4 __fastcall FUN_10039ce0(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x32] & 0x40U) != 0) && ((param_1[0x32] & 1U) == 0)) {
    return 0xe;
  }
  if (DAT_100b4a20 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_100b4a20 + 0x6c))();
    if (iVar1 == 0) {
      if ((*(byte *)(param_1 + 0x50a) & 1) != 0) {
        return 0x28;
      }
      if ((*(byte *)(param_1 + 0x32) & 2) == 0) {
        thunk_FUN_10033ba0(param_1 + 0x1c);
        if ((*(byte *)(param_1 + 0x16) & 2) == 0) {
          return 0x14;
        }
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1[0x14]);
        if (iVar1 != 0) {
          return 8;
        }
      }
      if ((*(byte *)(param_1 + 0x32) & 1) != 0) {
        iVar1 = (**(code **)(*param_1 + 0xcc))();
        if (iVar1 == 0) {
          thunk_FUN_10034430(param_1 + 0x1c);
        }
      }
      if ((*(byte *)(param_1 + 0x32) & 0x40) != 0) {
        return 0;
      }
      if (((param_1[0x33] & 4U) != 0) || (((uint)param_1[0x33] >> 6 & 1) != 0)) {
        thunk_FUN_10035150(param_1 + 0x1c,param_1[1]);
        thunk_FUN_10034430(param_1 + 0x1c);
      }
      if ((*(byte *)(param_1 + 0x32) & 1) != 0) {
        iVar1 = (**(code **)(*param_1 + 0xcc))();
        if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x16) & 2) != 0)) {
          thunk_FUN_1000c2f0(DAT_100b4a20,param_1,1);
        }
      }
      iVar1 = (**(code **)(*param_1 + 0xcc))();
      if (((iVar1 == 0) || (((uint)param_1[0x16] >> 4 & 1) != 0)) ||
         (((uint)param_1[0x33] >> 6 & 1) != 0)) {
        thunk_FUN_1000c2f0(DAT_100b4a20,param_1,1);
      }
      return 0;
    }
  }
  return 1;
}

