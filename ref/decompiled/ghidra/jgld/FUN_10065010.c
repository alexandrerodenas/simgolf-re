/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065010 @ 0x10065010 */


void FUN_10065010(void)

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
  thunk_FUN_10067fa0((undefined4 *)&DAT_101286e0);
  uStack_8 = 0x1006503f;
  __chkesp();
  return;
}

