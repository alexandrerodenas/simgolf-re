/* Ghidra decompiled: golf.exe */
/* Function: FUN_00490a40 @ 0x00490A40 */
/* Body size: 126 addresses */


undefined4 __fastcall FUN_00490a40(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x1f68) & 0x4000) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  if ((*(int *)(param_1 + 0x1654) != -1) &&
     (*(int *)(*(int *)(*(int *)(param_1 + 0x1464) + 8) + 0x1534 + param_1) != 0)) {
    if (*(int *)(param_1 + 0x1654) == 1) {
      *(undefined4 *)(param_1 + 0x5c0) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14d8) + 8) + 0x15c8 + param_1);
      return 1;
    }
    uVar1 = FUN_00489950();
    *(undefined4 *)(param_1 + 0x5c0) = uVar1;
  }
  return 1;
}

