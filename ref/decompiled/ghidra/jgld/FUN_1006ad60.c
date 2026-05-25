/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006ad60 @ 0x1006AD60 */


void FUN_1006ad60(void)

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
  if (DAT_10128738 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_10128738);
    __chkesp();
    DAT_10128738 = (HGDIOBJ)0x0;
  }
  uStack_8 = 0x1006adad;
  __chkesp();
  return;
}

