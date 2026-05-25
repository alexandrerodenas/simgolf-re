/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009e630 @ 0x1009E630 */


void FUN_1009e630(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [14];
  undefined4 uStack_c;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10083010((undefined **)&DAT_101233f0,&DAT_10120950);
  FUN_1007f1a0(1);
  uStack_c = 0x1009e672;
  __chkesp();
  return;
}

