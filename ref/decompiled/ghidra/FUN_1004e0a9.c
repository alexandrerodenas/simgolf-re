/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004e0a9 @ 0x1004E0A9 */
/* Body size: 43 addresses */


void __cdecl FUN_1004e0a9(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10042c07((undefined *)param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

