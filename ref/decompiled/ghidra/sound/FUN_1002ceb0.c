/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ceb0 @ 0x1002CEB0 */


undefined4 * __fastcall FUN_1002ceb0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 3;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 1;
  return param_1;
}

