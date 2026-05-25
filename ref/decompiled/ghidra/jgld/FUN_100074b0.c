/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100074b0 @ 0x100074B0 */


void FUN_100074b0(void)

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
  FUN_100074f0();
  uStack_8 = 0x100074da;
  __chkesp();
  return;
}

