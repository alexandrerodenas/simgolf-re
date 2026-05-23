/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047b200 @ 0x0047B200 */
/* Body size: 133 addresses */


void __thiscall FUN_0047b200(int param_1,int *param_2,int *param_3)

{
  *param_2 = *param_2 - (*(int *)(param_1 + 0x1bc) + *(int *)(param_1 + 0x1ac));
  *param_3 = *param_3 - (*(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1b0));
  if (((*(byte *)(param_1 + 0x9c) & 0x20) != 0) && (*(int *)(param_1 + 0x130) != 0)) {
    FUN_0047b200(param_2,param_3);
    if ((*(uint *)(param_1 + 0x9c) & 0x8000) != 0) {
      *param_2 = *param_2 + *(int *)(*(int *)(param_1 + 0x130) + 0x1ac);
      *param_3 = *param_3 + *(int *)(*(int *)(param_1 + 0x130) + 0x1b0);
    }
  }
  return;
}

