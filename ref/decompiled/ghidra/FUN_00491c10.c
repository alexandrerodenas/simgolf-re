/* Ghidra decompiled: golf.exe */
/* Function: FUN_00491c10 @ 0x00491C10 */
/* Body size: 90 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00491c10(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int local_4;
  
  local_4 = 0;
  puVar2 = &DAT_0083b9f4;
  do {
    fsin((float10)local_4 * (float10)_DAT_004bba50);
    uVar1 = __ftol();
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    local_4 = local_4 + 1;
  } while ((int)puVar2 < 0x83bdf4);
  FUN_00491c70(0x40000000,100);
  FUN_00491d80(0xa02d82d8,100);
  return;
}

