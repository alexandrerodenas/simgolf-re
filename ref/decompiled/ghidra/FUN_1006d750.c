/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006d750 @ 0x1006D750 */
/* Body size: 72 addresses */


undefined4 __cdecl FUN_1006d750(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [16];
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (*(char *)(param_1 + 0x123) == '\0') {
    uVar1 = 1;
  }
  else {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
    uVar1 = 7;
  }
  return uVar1;
}

