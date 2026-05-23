/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044b450 @ 0x0044B450 */
/* Body size: 96 addresses */


int __fastcall FUN_0044b450(int param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7703;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00473ab0();
  local_4 = 0;
  FUN_00473ab0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004a55d2(param_1 + 0x58,0x2c,0x12,FUN_00473ab0,&LAB_004041f0);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

