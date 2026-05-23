/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10081bcc @ 0x10081BCC */
/* Body size: 55 addresses */


void FUN_10081bcc(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = FUN_10081f90(0,0,0,0,&DAT_1011d528);
  if (iVar2 != 1) {
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

