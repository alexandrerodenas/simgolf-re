/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079410 @ 0x10079410 */
/* Body size: 83 addresses */


int __cdecl FUN_10079410(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 +
         (uint)param_1[3];
}

