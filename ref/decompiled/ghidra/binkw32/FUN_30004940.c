/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004940 @ 0x30004940 */


void __cdecl FUN_30004940(char *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
  for (uVar2 = param_3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = (char)((ushort)uVar1 >> 8) + -0x80;
    param_1 = param_1 + 1;
  }
  return;
}

