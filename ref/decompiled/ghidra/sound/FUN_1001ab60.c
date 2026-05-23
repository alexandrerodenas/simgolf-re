/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ab60 @ 0x1001AB60 */
/* Body size: 67 addresses */


undefined4 * __fastcall FUN_1001ab60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  puVar2 = param_1;
  for (iVar1 = 0x80; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  param_1[0x85] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x86] = 0xfa;
  return param_1;
}

