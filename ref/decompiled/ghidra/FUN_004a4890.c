/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4890 @ 0x004A4890 */
/* Body size: 91 addresses */


undefined4 __thiscall FUN_004a4890(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x80);
    if (0 < *(int *)(param_1 + 0x88)) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x84) + 4) == param_2) break;
        iVar1 = iVar1 + 1;
        *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x84) + 0xc);
      } while (iVar1 < *(int *)(param_1 + 0x88));
    }
  }
  return *(undefined4 *)(param_1 + 0x8c);
}

