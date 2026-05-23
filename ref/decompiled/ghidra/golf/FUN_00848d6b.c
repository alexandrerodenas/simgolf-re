/* Ghidra decompiled: golf.exe */
/* Function: FUN_00848d6b @ 0x00848D6B */
/* Body size: 85 addresses */


void FUN_00848d6b(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  local_8 = *param_3;
  FUN_00848fd3(param_1,local_10,&local_c);
  uVar1 = param_2[1];
  *(undefined4 *)(local_c + 0x80) = *param_2;
  *(undefined4 *)(local_c + 0x84) = uVar1;
  uVar1 = param_2[3];
  *(undefined4 *)(local_c + 0xd8) = param_2[2];
  *(undefined4 *)(local_c + 0xdc) = uVar1;
  return;
}

