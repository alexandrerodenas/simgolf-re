/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001adc0 @ 0x1001ADC0 */
/* Body size: 40 addresses */


void __fastcall FUN_1001adc0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20c) + 1;
  *(uint *)(param_1 + 0x20c) = uVar1;
  if (*(uint *)(param_1 + 0x204) < uVar1) {
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x208);
  }
  return;
}

