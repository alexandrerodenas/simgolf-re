/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068f30 @ 0x10068F30 */
/* Body size: 86 addresses */


void FUN_10068f30(void)

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
  thunk_FUN_10068fa0();
  CreateCompatibleDC((HDC)0x0);
  DAT_10128724 = __chkesp();
  uStack_8 = 0x10068f82;
  __chkesp();
  return;
}

