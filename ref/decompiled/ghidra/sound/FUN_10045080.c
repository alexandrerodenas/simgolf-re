/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045080 @ 0x10045080 */


void __cdecl FUN_10045080(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1004504b(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

