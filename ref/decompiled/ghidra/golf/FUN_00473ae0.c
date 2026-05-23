/* Ghidra decompiled: golf.exe */
/* Function: FUN_00473ae0 @ 0x00473AE0 */
/* Body size: 100 addresses */


void __fastcall FUN_00473ae0(int param_1)

{
  int iVar1;
  
  if (DAT_0083ad50 != (int *)0x0) {
    if (*(int *)(param_1 + 4) != 0) {
      (**(code **)(*DAT_0083ad50 + 0x94))(*(int *)(param_1 + 4));
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_004a5007(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      FUN_00483010();
      FUN_004a4ffc(iVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

