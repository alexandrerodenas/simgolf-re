/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005330 @ 0x10005330 */
/* Body size: 39 addresses */


undefined4 __fastcall FUN_10005330(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

