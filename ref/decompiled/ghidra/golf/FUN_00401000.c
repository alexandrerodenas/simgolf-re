/* Ghidra decompiled: golf.exe */
/* Function: FUN_00401000 @ 0x00401000 */
/* Body size: 54 addresses */


void FUN_00401000(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(&DAT_004e6d20 + param_1 * 0x74);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(&DAT_004e6d70 + param_1 * 0x74);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  return;
}

