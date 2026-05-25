/* Ghidra decompiled: golf.exe */
/* Function: entry @ 0x004A682F */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004bc468;
  puStack_10 = &LAB_004a8f7c;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_1c = &stack0xffffff88;
  DVar1 = GetVersion();
  _DAT_00840a78 = DVar1 >> 8 & 0xff;
  _DAT_00840a74 = DVar1 & 0xff;
  _DAT_00840a70 = _DAT_00840a74 * 0x100 + _DAT_00840a78;
  _DAT_00840a6c = DVar1 >> 0x10;
  iVar2 = FUN_004a794d(1);
  if (iVar2 == 0) {
    FUN_004a695c(0x1c);
  }
  iVar2 = FUN_004a8dec();
  if (iVar2 == 0) {
    FUN_004a695c(0x10);
  }
  local_8 = 0;
  FUN_004a93ff();
  DAT_00842160 = GetCommandLineA();
  DAT_00840aac = FUN_004ab240();
  FUN_004aaff3();
  FUN_004aaf3a();
  FUN_004a50db();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_004aaee2();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_0045baf0(pHVar5,uVar6,uVar3,uVar4);
  FUN_004a5108(uVar3);
  FUN_004aad6a(*(undefined4 *)*local_18,local_18);
  return;
}

