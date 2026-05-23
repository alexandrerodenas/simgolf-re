/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100650e0 @ 0x100650E0 */
/* Body size: 51 addresses */


void FUN_100650e0(void)

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
  FUN_10065120();
  FUN_10065160();
  uStack_8 = 0x1006510f;
  __chkesp();
  return;
}

