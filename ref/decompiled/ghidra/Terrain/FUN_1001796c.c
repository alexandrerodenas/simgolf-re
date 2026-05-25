/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001796c @ 0x1001796C */


void FUN_1001796c(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
  if (iVar2 != 1) {
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

