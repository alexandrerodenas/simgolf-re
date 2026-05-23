/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c7a0 @ 0x1001C7A0 */
/* Body size: 44 addresses */


undefined1 __fastcall FUN_1001c7a0(int *param_1)

{
  undefined1 uVar1;
  
  if ((uint)param_1[0xf] <= (uint)param_1[0xc]) {
    (**(code **)(*param_1 + 0x14))();
  }
  uVar1 = *(undefined1 *)(param_1[0xb] + param_1[0xc]);
  param_1[0xc] = param_1[0xc] + 1;
  *(undefined1 *)((int)param_1 + 0x19) = uVar1;
  return uVar1;
}

