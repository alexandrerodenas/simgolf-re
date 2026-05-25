/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008890 @ 0x10008890 */


void __fastcall FUN_10008890(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1001] = 0;
  param_1[0x1000] = 0;
  return;
}

