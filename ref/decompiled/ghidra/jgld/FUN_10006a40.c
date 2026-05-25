/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006a40 @ 0x10006A40 */


void FUN_10006a40(void)

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
  if ((DAT_10128444 & 1) == 0) {
    DAT_10128444 = DAT_10128444 | 1;
    thunk_FUN_10006cf0((undefined4 *)&DAT_10128428);
  }
  uStack_8 = 0x10006a8c;
  __chkesp();
  return;
}

