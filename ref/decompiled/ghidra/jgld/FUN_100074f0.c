/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100074f0 @ 0x100074F0 */
/* Body size: 51 addresses */


void FUN_100074f0(void)

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
  thunk_FUN_10007620((undefined4 *)&DAT_1012844c);
  uStack_8 = 0x1000751f;
  __chkesp();
  return;
}

