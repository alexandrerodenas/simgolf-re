/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100069b0 @ 0x100069B0 */
/* Body size: 51 addresses */


void FUN_100069b0(void)

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
  thunk_FUN_10006c80((undefined4 *)&DAT_10128428);
  uStack_8 = 0x100069df;
  __chkesp();
  return;
}

