/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30005710 @ 0x30005710 */


void __cdecl FUN_30005710(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x210) == 0) {
    uVar1 = _RADTimerRead_0();
    *(int *)(param_1 + 0x210) = (int)uVar1;
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x200) + -1;
  }
  return;
}

