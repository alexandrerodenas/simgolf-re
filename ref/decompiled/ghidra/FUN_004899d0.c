/* Ghidra decompiled: golf.exe */
/* Function: FUN_004899d0 @ 0x004899D0 */
/* Body size: 91 addresses */


undefined4 __thiscall FUN_004899d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 200);
    if (0 < *(int *)(param_1 + 0xd0)) {
      do {
        if (*(int *)(*(int *)(param_1 + 0xcc) + 4) == param_2) break;
        iVar1 = iVar1 + 1;
        *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0xc);
      } while (iVar1 < *(int *)(param_1 + 0xd0));
    }
  }
  return *(undefined4 *)(param_1 + 0xd4);
}

