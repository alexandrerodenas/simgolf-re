/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a5654 @ 0x004A5654 */


undefined4 FUN_004a5654(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_004a51cf();
  uVar1 = FUN_004a9054(DAT_00842170);
  if (uVar1 < (uint)((int)DAT_0084216c + (4 - DAT_00842170))) {
    iVar2 = FUN_004a9054(DAT_00842170);
    iVar2 = FUN_004a6980(DAT_00842170,iVar2 + 0x10);
    if (iVar2 == 0) {
      param_1 = 0;
      goto LAB_004a56c9;
    }
    DAT_0084216c = (undefined4 *)(iVar2 + ((int)DAT_0084216c - DAT_00842170 >> 2) * 4);
    DAT_00842170 = iVar2;
  }
  *DAT_0084216c = param_1;
  DAT_0084216c = DAT_0084216c + 1;
LAB_004a56c9:
  FUN_004a51d8();
  return param_1;
}

