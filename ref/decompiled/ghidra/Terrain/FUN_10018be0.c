/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10018be0 @ 0x10018BE0 */


void __thiscall FUN_10018be0(void *this,void *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_10019e10(this,9);
    if (((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1001a320(2,0x1005fe84,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    __free_dbg(param_1,*(int *)((int)param_1 + -0xc));
    FUN_10019eb0(9);
  }
  return;
}

