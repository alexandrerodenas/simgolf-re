/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a611c @ 0x004A611C */


undefined4 FUN_004a611c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a9c19();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_004a9aa9(param_1,param_2,param_3,iVar1);
  FUN_004a98c6(iVar1);
  return uVar2;
}

