/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079300 @ 0x10079300 */


void FUN_10079300(void)

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
  FUN_10083010((undefined **)&DAT_101233f0,(byte *)"libpng warning: %s\n");
  uStack_8 = 0x1007933b;
  __chkesp();
  return;
}

