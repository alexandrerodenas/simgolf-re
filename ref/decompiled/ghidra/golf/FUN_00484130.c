/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484130 @ 0x00484130 */
/* Body size: 17 addresses */


void FUN_00484130(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0083af6c;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

