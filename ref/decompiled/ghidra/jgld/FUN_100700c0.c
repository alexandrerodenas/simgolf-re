/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100700c0 @ 0x100700C0 */


void __cdecl FUN_100700c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x4000;
  return;
}

