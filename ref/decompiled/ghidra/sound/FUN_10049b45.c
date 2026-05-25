/* Ghidra decompiled: sound.dll */
/* Function: FUN_10049b45 @ 0x10049B45 */


undefined4 __cdecl FUN_10049b45(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}

