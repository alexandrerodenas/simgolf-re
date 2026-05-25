/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a4a0 @ 0x1006A4A0 */


void __fastcall FUN_1006a4a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 0x814) != *(int *)(param_1 + 0x810)) {
    *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_1 + 0x810);
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      *(ushort *)(param_1 + 0x40c + local_c * 2) =
           (ushort)((int)(uint)*(byte *)(param_1 + 0xe + local_c * 4) >> 3) |
           (*(byte *)(param_1 + 0xd + local_c * 4) & 0xf8) << 2 |
           (*(byte *)(param_1 + 0xc + local_c * 4) & 0x1f8) << 7;
      *(ushort *)(param_1 + 0x60c + local_c * 2) =
           (ushort)((int)(uint)*(byte *)(param_1 + 0xe + local_c * 4) >> 3) |
           (*(byte *)(param_1 + 0xd + local_c * 4) & 0xfc) << 3 |
           (*(byte *)(param_1 + 0xc + local_c * 4) & 0xf8) << 8;
    }
  }
  return;
}

