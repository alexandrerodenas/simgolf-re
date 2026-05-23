/* Ghidra decompiled: sound.dll */
/* Function: FUN_10046f94 @ 0x10046F94 */
/* Body size: 86 addresses */


void __cdecl FUN_10046f94(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_100673f8 == param_1) {
    PTR_LOOP_100673f8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_100653d8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_100b5d10,0,param_1);
    return;
  }
  DAT_100653e8 = 0xffffffff;
  return;
}

