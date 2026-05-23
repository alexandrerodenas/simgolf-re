/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049c8b0 @ 0x0049C8B0 */
/* Body size: 1 addresses */


void FUN_0049c8b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_00483010();
    FUN_004a4ffc(iVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

