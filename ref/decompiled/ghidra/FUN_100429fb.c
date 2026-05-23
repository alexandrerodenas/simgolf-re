/* Ghidra decompiled: sound.dll */
/* Function: FUN_100429fb @ 0x100429FB */
/* Body size: 116 addresses */


undefined4 FUN_100429fb(LPVOID param_1)

{
  BOOL BVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005ed38;
  puStack_10 = &LAB_10045744;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  BVar1 = TlsSetValue(DAT_100651b0,param_1);
  if (BVar1 == 0) {
    __amsg_exit(0x10);
  }
  if (PTR_FUN_10064ecc != (undefined *)0x0) {
    (*(code *)PTR_FUN_10064ecc)();
  }
  local_8 = 0;
  (**(code **)((int)param_1 + 0x48))(*(undefined4 *)((int)param_1 + 0x4c));
  FUN_10042a8e();
  ExceptionList = local_14;
  return 0;
}

