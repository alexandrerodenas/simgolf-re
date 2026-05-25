/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047b420 @ 0x0047B420 */


undefined4 __thiscall FUN_0047b420(int param_1,int param_2,int param_3)

{
  if ((*(byte *)(param_1 + 0xa0) & 2) == 0) {
    param_3 = param_3 - *(int *)(param_1 + 0x1b0);
    param_2 = param_2 - *(int *)(param_1 + 0x1ac);
    *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + param_2;
    *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + param_2;
    *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + param_3;
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + param_3;
  }
  else {
    param_3 = param_3 - *(int *)(param_1 + 0x1c0);
    param_2 = param_2 - *(int *)(param_1 + 0x1bc);
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + param_2;
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + param_2;
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + param_3;
    *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + param_3;
  }
  FUN_0047e140(param_1,param_1 + 0x1dc);
  return 0;
}

