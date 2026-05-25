/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a52c2 @ 0x004A52C2 */


undefined4
FUN_004a52c2(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_004a5316;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  *unaff_FS_OFFSET = local_18;
  return uVar1;
}

