/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068fa0 @ 0x10068FA0 */


void FUN_10068fa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10128724 != (HDC)0x0) {
    DeleteDC(DAT_10128724);
    __chkesp();
    DAT_10128724 = (HDC)0x0;
  }
  uStack_8 = 0x10068fed;
  __chkesp();
  return;
}

