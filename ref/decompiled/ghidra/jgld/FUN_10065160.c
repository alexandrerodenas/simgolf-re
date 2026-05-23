/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065160 @ 0x10065160 */
/* Body size: 54 addresses */


void FUN_10065160(void)

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
  FUN_1007f080(0x100651b0);
  uStack_8 = 0x10065192;
  __chkesp();
  return;
}

