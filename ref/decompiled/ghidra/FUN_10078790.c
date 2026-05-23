/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078790 @ 0x10078790 */
/* Body size: 64 addresses */


void __cdecl FUN_10078790(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_1009ca70(0,(byte *)0x0,0);
  *(uint *)(param_1 + 0x110) = uVar1;
  uStack_8 = 0x100787cc;
  __chkesp();
  return;
}

