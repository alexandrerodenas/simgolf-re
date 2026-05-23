/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006d900 @ 0x1006D900 */
/* Body size: 122 addresses */


void __cdecl FUN_1006d900(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [17];
  uint local_c;
  byte *local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)(param_1 + 8) == '\0')) {
    local_8 = param_2;
    uVar1 = *(uint *)(param_1 + 4);
    for (local_c = 0; local_c < uVar1; local_c = local_c + 1) {
      *local_8 = ~*local_8;
      local_8 = local_8 + 1;
    }
  }
  return;
}

