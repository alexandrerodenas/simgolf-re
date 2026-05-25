/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10069d50 @ 0x10069D50 */


void __cdecl FUN_10069d50(undefined4 param_1,undefined1 param_2)

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
  (**(code **)(*DAT_1012872c + 0x10))(CONCAT31(0xcccccc,param_2));
  __chkesp();
  uStack_c = 0x10069d93;
  __chkesp();
  return;
}

