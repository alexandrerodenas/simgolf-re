/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a933c @ 0x004A933C */
/* Body size: 66 addresses */


undefined4 FUN_004a933c(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_00842140) &&
     ((*(byte *)((&DAT_00842040)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00842040)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_004a910c();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_004a9115();
  *puVar1 = 0;
  return 0xffffffff;
}

