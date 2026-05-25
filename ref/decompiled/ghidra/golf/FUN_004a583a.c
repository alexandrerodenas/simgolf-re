/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a583a @ 0x004A583A */


undefined4 FUN_004a583a(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_00842140) &&
     ((*(byte *)((&DAT_00842040)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_004a937e(param_1);
    uVar1 = FUN_004a589f(param_1,param_2,param_3);
    FUN_004a93dd(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_004a910c();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a9115();
  *puVar2 = 0;
  return 0xffffffff;
}

