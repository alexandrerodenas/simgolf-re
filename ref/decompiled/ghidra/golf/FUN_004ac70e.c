/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac70e @ 0x004AC70E */


void FUN_004ac70e(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00840f00;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00840dd8 = 0;
  DAT_00840dec = 0;
  DAT_00841004 = 0;
  DAT_00840de0 = 0;
  DAT_00840de4 = 0;
  DAT_00840de8 = 0;
  return;
}

