/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049bf70 @ 0x0049BF70 */
/* Body size: 65 addresses */


int __thiscall FUN_0049bf70(int param_1,byte param_2)

{
  thunk_FUN_004853d0();
  DAT_00839650 = *(int *)(param_1 + 0x60);
  *(undefined ***)(param_1 + 0x5c) = &PTR_FUN_004ba278;
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    if (DAT_00839650 == 0) {
      FUN_004a5007(param_1);
    }
    DAT_00839650 = 0;
  }
  return param_1;
}

