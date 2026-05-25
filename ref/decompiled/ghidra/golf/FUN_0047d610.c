/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047d610 @ 0x0047D610 */


void __fastcall FUN_0047d610(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0047b9a0();
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    if (((param_1[0x27] & 0x10U) == 0) || ((param_1[0x27] & 0x400000U) != 0)) {
      iVar1 = param_1[0x61];
    }
    else {
      iVar1 = param_1[0x60];
    }
    iVar2 = param_1[0x62];
    if (iVar2 == -1) {
      iVar2 = param_1[0x61];
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    FUN_00474dd0(param_1[0x71] - param_1[0x6f],iVar1,0,1,0,0);
    FUN_004789f0(DAT_0083ad10);
    FUN_00478b30(DAT_004e432c);
    if (param_1[0x62] != 0) {
      FUN_00474dd0(param_1[0x71] - param_1[0x6f],iVar2,0,1,0,0);
      FUN_004789f0(DAT_0083ad10);
      FUN_00478b30(DAT_004e432c);
    }
    if (param_1[0x61] != 0) {
      FUN_00474dd0(param_1[0x61],((param_1[0x72] - param_1[0x70]) - iVar2) - iVar1,0,1,0,0);
      FUN_004789f0(DAT_0083ad10);
      FUN_00478b30(DAT_004e432c);
      FUN_00474dd0(param_1[0x61],((param_1[0x72] - param_1[0x70]) - iVar2) - iVar1,0,1,0,0);
      FUN_004789f0(DAT_0083ad10);
      FUN_00478b30(DAT_004e432c);
    }
    (**(code **)(*param_1 + 0x134))(0xffffffff);
  }
  return;
}

