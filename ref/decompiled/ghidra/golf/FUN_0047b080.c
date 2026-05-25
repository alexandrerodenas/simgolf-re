/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047b080 @ 0x0047B080 */


undefined4 __thiscall FUN_0047b080(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x22c))) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x224) + iVar2 * 4) == param_2) {
        return 1;
      }
      iVar1 = FUN_0047b080(param_2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x22c));
  }
  return 0;
}

