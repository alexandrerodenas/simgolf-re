/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10016ae0 @ 0x10016AE0 */
/* Body size: 189 addresses */


void __thiscall FUN_10016ae0(void *this,int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005f938;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_10019e10(this,9);
  local_8 = 0;
  BVar2 = FUN_10017150(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)(param_1 + -0xc) != 3 &&
        (iVar3 = FUN_1001a320(2,0x1005f60c,0x4ff,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)")
        , iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  local_8 = 0xffffffff;
  FUN_10016b9d();
  FUN_10016ba8();
  return;
}

