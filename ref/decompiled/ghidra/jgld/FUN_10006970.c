/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006970 @ 0x10006970 */


void FUN_10006970(void)

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
  FUN_100069b0();
  FUN_100069f0();
  uStack_8 = 0x1000699f;
  __chkesp();
  return;
}

