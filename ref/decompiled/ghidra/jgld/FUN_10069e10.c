/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10069e10 @ 0x10069E10 */
/* Body size: 75 addresses */


void __cdecl FUN_10069e10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [13];
  undefined4 uStack_10;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(*DAT_1012872c + 8))(param_2,param_3);
  __chkesp();
  uStack_10 = 0x10069e57;
  __chkesp();
  return;
}

