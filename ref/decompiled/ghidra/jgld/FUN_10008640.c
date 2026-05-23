/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008640 @ 0x10008640 */
/* Body size: 84 addresses */


undefined4 __fastcall FUN_10008640(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x4bc);
  *(int *)(param_1 + 0x4c4) = *(int *)(param_1 + 0x4c4) + 1;
  return *(undefined4 *)(param_1 + 0x4b8);
}

