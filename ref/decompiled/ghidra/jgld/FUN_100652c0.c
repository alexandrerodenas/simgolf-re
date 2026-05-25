/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100652c0 @ 0x100652C0 */


void FUN_100652c0(void)

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
  thunk_FUN_10066b00((undefined4 *)&DAT_101286f8);
  uStack_8 = 0x100652ef;
  __chkesp();
  return;
}

