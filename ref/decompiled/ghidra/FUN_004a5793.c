/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a5793 @ 0x004A5793 */
/* Body size: 81 addresses */


void FUN_004a5793(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004bc458;
  puStack_10 = &LAB_004a8f7c;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)();
  }
  *unaff_FS_OFFSET = local_14;
  return;
}

