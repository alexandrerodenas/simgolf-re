/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a010 @ 0x1006A010 */
/* Body size: 78 addresses */


void __cdecl
FUN_1006a010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [12];
  undefined4 uStack_14;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(*DAT_1012872c + 0x24))(param_2,param_3,param_4);
  __chkesp();
  uStack_14 = 0x1006a05a;
  __chkesp();
  return;
}

