/* Ghidra decompiled: golf.exe */
/* Function: FUN_004853d0 @ 0x004853D0 */
/* Body size: 117 addresses */


void __fastcall FUN_004853d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7e68;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  *param_1 = &PTR_FUN_004badf8;
  local_4 = 0;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
    param_1[0x10] = 0;
  }
  if (param_1[0x14] != 0) {
    FUN_004a4ffc(param_1[0x14]);
    param_1[0x14] = 0;
  }
  local_4 = 0xffffffff;
  FUN_004841e0();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

