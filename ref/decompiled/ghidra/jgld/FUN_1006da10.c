/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006da10 @ 0x1006DA10 */
/* Body size: 169 addresses */


void __cdecl FUN_1006da10(int param_1,byte *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  undefined *local_10;
  byte *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(byte *)(param_1 + 9) < 8) {
    iVar1 = *(int *)(param_1 + 4);
    if (*(char *)(param_1 + 9) == '\x01') {
      local_10 = &DAT_10122e6c;
    }
    else if (*(char *)(param_1 + 9) == '\x02') {
      local_10 = &DAT_10122f6c;
    }
    else {
      if (*(char *)(param_1 + 9) != '\x04') {
        return;
      }
      local_10 = &DAT_1012306c;
    }
    for (local_8 = param_2; local_8 < param_2 + iVar1; local_8 = local_8 + 1) {
      *local_8 = local_10[*local_8];
    }
  }
  return;
}

