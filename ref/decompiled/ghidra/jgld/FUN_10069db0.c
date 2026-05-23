/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10069db0 @ 0x10069DB0 */
/* Body size: 74 addresses */


void __cdecl
FUN_10069db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  (**(code **)*DAT_1012872c)(param_3,param_4);
  __chkesp();
  uStack_10 = 0x10069df6;
  __chkesp();
  return;
}

