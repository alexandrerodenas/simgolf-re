/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006d8d0 @ 0x1006D8D0 */
/* Body size: 46 addresses */


void __cdecl FUN_1006d8d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x20;
  return;
}

