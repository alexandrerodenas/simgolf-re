/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100651f0 @ 0x100651F0 */
/* Body size: 51 addresses */


void FUN_100651f0(void)

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
  FUN_10065230();
  FUN_10065270();
  uStack_8 = 0x1006521f;
  __chkesp();
  return;
}

