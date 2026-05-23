/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003cc10 @ 0x1003CC10 */
/* Body size: 90 addresses */


void __fastcall FUN_1003cc10(int param_1)

{
  ulonglong uVar1;
  uint local_4;
  
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x810) = 0;
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x818));
  local_4 = (((LARGE_INTEGER *)(param_1 + 0x818))->s).LowPart;
  if (*(int *)(param_1 + 0x810) == 0) {
    do {
      uVar1 = FUN_100015d0(&local_4);
      *(uint *)(param_1 + 0x810) = (uint)uVar1 & 0xffff;
    } while ((uVar1 & 0xffff) == 0);
  }
  FUN_1003cc70(param_1);
  return;
}

