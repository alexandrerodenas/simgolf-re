/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d01f @ 0x3002D01F */


void __cdecl FUN_3002d01f(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_30040998 == param_1) {
    PTR_LOOP_30040998 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_3003e978) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_3004f750,0,param_1);
    return;
  }
  DAT_3003e988 = 0xffffffff;
  return;
}

