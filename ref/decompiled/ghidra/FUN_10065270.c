/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065270 @ 0x10065270 */
/* Body size: 54 addresses */


void FUN_10065270(void)

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
  FUN_1007f080(0x100652c0);
  uStack_8 = 0x100652a2;
  __chkesp();
  return;
}

