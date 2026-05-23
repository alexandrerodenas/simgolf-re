/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474c40 @ 0x00474C40 */
/* Body size: 99 addresses */


void __fastcall FUN_00474c40(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b7b7c;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_LAB_004ba858;
  local_4 = 1;
  FUN_00474cb0();
  local_4 = local_4 & 0xffffff00;
  FUN_004928d0();
  local_4 = 0xffffffff;
  FUN_004928d0();
  *unaff_FS_OFFSET = local_c;
  return;
}

