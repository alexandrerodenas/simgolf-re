/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100203c0 @ 0x100203C0 */


void __cdecl FUN_100203c0(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint local_10;
  char local_c;
  
  uVar2 = FUN_10027100((int)*param_1);
  if (uVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10066268 < 2) {
        local_10 = *(ushort *)(PTR_DAT_1006605c + *param_1 * 2) & 4;
      }
      else {
        local_10 = FUN_1001e6d0((int)*param_1,4);
      }
    } while (local_10 != 0);
  }
  local_c = *param_1;
  *param_1 = DAT_1006626c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = local_c;
    local_c = cVar1;
  } while (*param_1 != '\0');
  return;
}

