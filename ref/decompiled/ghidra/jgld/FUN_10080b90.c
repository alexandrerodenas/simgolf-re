/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10080b90 @ 0x10080B90 */


void __cdecl FUN_10080b90(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f0e0;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((((DAT_10123350 & 4) != 0) &&
      (ExceptionList = &pvStack_14, iVar2 = FUN_10080ed0(), iVar2 == 0)) &&
     (iVar2 = FUN_10081f90(2,0x1011edf0,0x49d,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_100833f0(9);
  local_8 = 0;
  BVar3 = FUN_100813b0(param_1);
  if ((BVar3 == 0) &&
     (iVar2 = FUN_10081f90(2,0x1011edf0,0x4a9,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
     (((*(uint *)(param_1 + -0xc) & 0xffff) != 2 &&
      ((*(int *)(param_1 + -0xc) != 3 &&
       (iVar2 = FUN_10081f90(2,0x1011edf0,0x4af,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
       iVar2 == 1)))))) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_10081f90(2,0x1011edf0,0x4b6,0,(byte *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1
     )) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_8 = 0xffffffff;
  FUN_10080d01();
  FUN_10080d0c();
  return;
}

