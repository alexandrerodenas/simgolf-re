/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042bc0 @ 0x10042BC0 */


void __cdecl FUN_10042bc0(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  if (param_3 == 0) {
    *(code **)(param_1 + 0x50) = FUN_10042c20;
  }
  else {
    *(int *)(param_1 + 0x50) = param_3;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_10042dc0(param_1,s_It_s_an_error_to_set_both_read_d_100558bc);
    FUN_10042dc0(param_1,s_same_structure__Resetting_write__10055888);
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
  return;
}

