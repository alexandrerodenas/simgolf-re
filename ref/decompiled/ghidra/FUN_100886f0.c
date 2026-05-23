/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100886f0 @ 0x100886F0 */
/* Body size: 115 addresses */


void __cdecl FUN_100886f0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10125780 == param_1) {
    PTR_LOOP_10125780 = param_1[1];
  }
  if (param_1 == &PTR_LOOP_10123760) {
    DAT_10123770 = 0xffffffff;
  }
  else {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10129fa0,0,param_1);
  }
  return;
}

