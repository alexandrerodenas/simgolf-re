/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079470 @ 0x10079470 */


short __cdecl FUN_10079470(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return (ushort)*param_1 * 0x100 + (ushort)param_1[1];
}

