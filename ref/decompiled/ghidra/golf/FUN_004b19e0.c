/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b19e0 @ 0x004B19E0 */


undefined4 FUN_004b19e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1[8] + 0x14);
  iVar2 = (*(code *)puVar1[3])(param_1[8]);
  if (iVar2 == 0) {
    return 0;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  return 1;
}

