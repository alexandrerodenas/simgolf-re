/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007fc28 @ 0x1007FC28 */


undefined4 FUN_1007fc28(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  if ((*(int *)(unaff_EBP + -0x1c) == 0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
    iVar2 = __callnewh(*(size_t *)(unaff_EBP + 8));
    if (iVar2 != 0) {
      FUN_100833f0(9);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puVar1 = FUN_1007fc80(*(uint *)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),
                            *(int *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18));
      *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_1007fc1d();
      uVar3 = FUN_1007fc28();
      return uVar3;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(unaff_EBP + -0x1c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar3;
}

