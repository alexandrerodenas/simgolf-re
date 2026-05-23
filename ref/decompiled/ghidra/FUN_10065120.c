/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065120 @ 0x10065120 */
/* Body size: 51 addresses */


void FUN_10065120(void)

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
  thunk_FUN_100680a0((undefined4 *)&DAT_101286c8);
  uStack_8 = 0x1006514f;
  __chkesp();
  return;
}

