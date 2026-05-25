/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100434b0 @ 0x100434B0 */


void __cdecl FUN_100434b0(int *param_1,int param_2,uint param_3)

{
  if ((((param_1[0x1a] & 1U) == 0) || ((param_1[0x1a] & 4U) == 0)) &&
     (FUN_10042d90(param_1,s_No_image_in_file_10055b2c), param_2 == 0)) {
    return;
  }
  param_1[0x1a] = param_1[0x1a] | 0x18;
  if (param_3 != 0) {
    FUN_10042dc0((int)param_1,s_Incorrect_IEND_chunk_length_10055b10);
  }
  FUN_10042fd0(param_1,param_3);
  return;
}

