/* Ghidra decompiled: golf.exe */
/* Function: FUN_00485260 @ 0x00485260 */
/* Body size: 42 addresses */


undefined4 * __fastcall FUN_00485260(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_004badec;
  param_1[1] = 0x7f;
  param_1[2] = 0;
  puVar2 = param_1 + 3;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xc] = 0;
  return param_1;
}

