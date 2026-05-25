/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4ed0 @ 0x004A4ED0 */


void __fastcall FUN_004a4ed0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_004a5007(*(int *)(iVar1 + 8));
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
    if (iVar1 != 0) {
      FUN_004a5007(iVar1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}

