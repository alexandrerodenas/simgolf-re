/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100159c8 @ 0x100159C8 */
/* Body size: 56 addresses */


undefined4 FUN_100159c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *this;
  int unaff_EBP;
  
  if ((*(int *)(unaff_EBP + -0x1c) == 0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
    iVar2 = __callnewh(*(size_t *)(unaff_EBP + 8));
    if (iVar2 != 0) {
      FUN_10019e10(this,9);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puVar1 = FUN_10015a20(*(uint *)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),
                            *(int *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18));
      *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_100159bd();
      uVar3 = FUN_100159c8();
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

