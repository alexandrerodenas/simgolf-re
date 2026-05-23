/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b70b8 @ 0x004B70B8 */
/* Body size: 26 addresses */


uint FUN_004b70b8(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_004aa9f5(param_1);
  return uVar3;
}

