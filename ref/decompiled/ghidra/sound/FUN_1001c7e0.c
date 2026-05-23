/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c7e0 @ 0x1001C7E0 */
/* Body size: 38 addresses */


void __fastcall FUN_1001c7e0(int *param_1)

{
  if ((uint)param_1[0xf] <= (uint)param_1[0xc]) {
    (**(code **)(*param_1 + 0x14))();
  }
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_1[0xb] + param_1[0xc]);
  param_1[0xc] = param_1[0xc] + 1;
  return;
}

