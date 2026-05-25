/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10016930 @ 0x10016930 */


void __thiscall FUN_10016930(void *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005f928;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((DAT_10063e5c & 4) != 0) {
    ExceptionList = &pvStack_14;
    iVar2 = FUN_10016c70();
    if ((iVar2 == 0) &&
       (iVar2 = FUN_1001a320(2,0x1005f60c,0x49d,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this = (void *)0x0;
  }
  FUN_10019e10(this,9);
  local_8 = 0;
  BVar3 = FUN_10017150(param_1);
  if ((BVar3 == 0) &&
     (iVar2 = FUN_1001a320(2,0x1005f60c,0x4a9,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
      ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
     ((*(int *)(param_1 + -0xc) != 3 &&
      (iVar2 = FUN_1001a320(2,0x1005f60c,0x4af,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
      iVar2 == 1)))) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_1001a320(2,0x1005f60c,0x4b6,0,(byte *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1
     )) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_8 = 0xffffffff;
  FUN_10016aa1();
  FUN_10016aac();
  return;
}

