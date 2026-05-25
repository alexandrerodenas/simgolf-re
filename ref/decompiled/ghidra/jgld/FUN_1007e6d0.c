/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007e6d0 @ 0x1007E6D0 */


void __cdecl FUN_1007e6d0(void *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_100833f0(9);
    if (((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_10081f90(2,0x1011eb68,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    __free_dbg(param_1,*(int *)((int)param_1 + -0xc));
    FUN_10083490(9);
  }
  return;
}

