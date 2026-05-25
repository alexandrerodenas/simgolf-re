/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10072430 @ 0x10072430 */


void __cdecl FUN_10072430(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_54 [17];
  uint local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puVar3 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (*(char *)((int)param_1 + 9) == '\x10') {
    local_8 = param_2;
    local_c = param_2;
    bVar1 = *(byte *)((int)param_1 + 10);
    iVar2 = *param_1;
    for (local_10 = 0; local_10 < iVar2 * (uint)bVar1; local_10 = local_10 + 1) {
      *local_c = *local_8;
      local_8 = local_8 + 2;
      local_c = local_c + 1;
    }
    *(undefined1 *)((int)param_1 + 9) = 8;
    *(char *)((int)param_1 + 0xb) = *(char *)((int)param_1 + 10) << 3;
    param_1[1] = *param_1 * (uint)*(byte *)((int)param_1 + 10);
  }
  return;
}

