/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100835a0 @ 0x100835A0 */
/* Body size: 168 addresses */


void __cdecl FUN_100835a0(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint local_10;
  char local_c;
  
  uVar2 = FUN_1008e8f0((int)*param_1);
  if (uVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10125998 < 2) {
        local_10 = *(ushort *)(PTR_DAT_1012578c + *param_1 * 2) & 4;
      }
      else {
        local_10 = FUN_10089800((int)*param_1,4);
      }
    } while (local_10 != 0);
  }
  local_c = *param_1;
  *param_1 = DAT_1012599c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = local_c;
    local_c = cVar1;
  } while (*param_1 != '\0');
  return;
}

