/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006d980 @ 0x1006D980 */
/* Body size: 134 addresses */


void __cdecl FUN_1006d980(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_54 [18];
  uint local_c;
  undefined1 *local_8;
  
  puVar4 = local_54;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (*(char *)((int)param_1 + 9) == '\x10') {
    local_8 = param_2;
    bVar1 = *(byte *)((int)param_1 + 10);
    iVar3 = *param_1;
    for (local_c = 0; local_c < iVar3 * (uint)bVar1; local_c = local_c + 1) {
      uVar2 = *local_8;
      *local_8 = local_8[1];
      local_8[1] = uVar2;
      local_8 = local_8 + 2;
    }
  }
  return;
}

