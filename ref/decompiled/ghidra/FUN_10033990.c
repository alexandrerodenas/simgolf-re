/* Ghidra decompiled: sound.dll */
/* Function: FUN_10033990 @ 0x10033990 */
/* Body size: 18 addresses */


void __fastcall FUN_10033990(void *param_1)

{
  *(uint *)((int)param_1 + 0x58) = *(uint *)((int)param_1 + 0x58) & 0xfffffffd;
  thunk_FUN_100326a0(param_1,(uint *)((int)param_1 + 100));
  return;
}

