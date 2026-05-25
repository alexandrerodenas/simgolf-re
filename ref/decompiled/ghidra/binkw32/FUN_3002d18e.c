/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d18e @ 0x3002D18E */


void __cdecl FUN_3002d18e(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_3004f20c = DAT_3004f20c + 1, DAT_3004f20c == 0x20)) {
    FUN_3002d075(0x10);
  }
  return;
}

