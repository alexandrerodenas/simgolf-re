/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004650 @ 0x30004650 */


void __cdecl FUN_30004650(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    param_2 = param_2 + -1;
  }
  if (param_1[0x7b] != -1) {
    FUN_30004710(param_1);
  }
  param_1[4] = param_1[3];
  if (param_2 == 0) {
    if (param_1[0x8c] != 0) {
      _BinkSetSoundOnOff_8((int)param_1,0);
      _BinkSetSoundOnOff_8((int)param_1,1);
    }
    param_1[0x84] = 0;
  }
  if (param_1[0x42] == 0) {
    uVar1 = *(uint *)(param_1[0x43] + param_2 * 4);
    (*(code *)param_1[0x45])
              (param_1 + 0x44,param_2,uVar1 & 0xfffffffe,param_1[0x41],
               (*(uint *)(param_1[0x43] + 4 + param_2 * 4) & 0xfffffffe) - (uVar1 & 0xfffffffe));
  }
  else {
    param_1[0x41] =
         ((((uint *)param_1[0x43])[param_2] & 0xfffffffe) - (*(uint *)param_1[0x43] & 0xfffffffe)) +
         param_1[0x42];
  }
  if (param_1[0x7b] != -1) {
    FUN_30004710(param_1);
  }
  param_1[3] = param_2 + 1;
  return;
}

