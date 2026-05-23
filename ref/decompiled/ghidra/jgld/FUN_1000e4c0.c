/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000e4c0 @ 0x1000E4C0 */
/* Body size: 98 addresses */


void FUN_1000e4c0(void)

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
  (**(code **)(*DAT_10128420 + 0xb4))();
  __chkesp();
  uStack_8 = 0x1000e51e;
  __chkesp();
  return;
}

