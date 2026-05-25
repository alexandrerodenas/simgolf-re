/* Ghidra decompiled: golf.exe */
/* Function: FUN_004898d0 @ 0x004898D0 */


void __thiscall FUN_004898d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 200);
    if (*(int *)(param_1 + 0xd0) < 1) {
LAB_00489931:
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xd4);
      return;
    }
    do {
      if (*(int *)(*(int *)(param_1 + 0xcc) + 4) == param_2) goto LAB_00489931;
      iVar1 = iVar1 + 1;
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0xc);
    } while (iVar1 < *(int *)(param_1 + 0xd0));
  }
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xd4);
  return;
}

