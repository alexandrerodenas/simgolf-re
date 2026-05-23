/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008730 @ 0x10008730 */
/* Body size: 96 addresses */


undefined4 __fastcall FUN_10008730(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4c0);
  if (*(int *)(param_1 + 0x4cc) != 0) {
    *(int *)(param_1 + 0x4c8) = *(int *)(param_1 + 0x4c8) + 1;
  }
  return *(undefined4 *)(param_1 + 0x4cc);
}

