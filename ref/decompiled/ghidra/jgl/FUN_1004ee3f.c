/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004ee3f @ 0x1004EE3F */
/* Body size: 69 addresses */


undefined * __cdecl FUN_1004ee3f(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &DAT_10056de0;
  if (DAT_10056de4 != param_1) {
    puVar3 = puVar2;
    do {
      puVar2 = puVar3 + 0xc;
      if (&DAT_10056de0 + DAT_10056e60 * 0xc <= puVar2) break;
      piVar1 = (int *)(puVar3 + 0x10);
      puVar3 = puVar2;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_10056de0 + DAT_10056e60 * 0xc <= puVar2) || (*(int *)(puVar2 + 4) != param_1)) {
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

