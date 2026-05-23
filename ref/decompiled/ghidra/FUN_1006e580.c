/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006e580 @ 0x1006E580 */
/* Body size: 100 addresses */


undefined4 __cdecl FUN_1006e580(int param_1,int param_2)

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
  if (((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 0x80) == 0)) {
    uVar1 = 0;
  }
  else if ((*(char *)(param_2 + 0x78) == '\x01') &&
          (*(int *)(param_2 + 0x70) == *(int *)(param_2 + 0x74))) {
    uVar1 = *(undefined4 *)(param_2 + 0x70);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

