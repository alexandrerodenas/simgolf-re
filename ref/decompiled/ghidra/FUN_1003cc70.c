/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003cc70 @ 0x1003CC70 */
/* Body size: 143 addresses */


void __fastcall FUN_1003cc70(int param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x814) != *(int *)(param_1 + 0x810)) {
    *(int *)(param_1 + 0x814) = *(int *)(param_1 + 0x810);
    iVar3 = 0x100;
    pbVar1 = (byte *)(param_1 + 0xd);
    puVar2 = (ushort *)(param_1 + 0x60c);
    do {
      puVar2[-0x100] =
           ((pbVar1[-1] & 0xfff8) << 5 | (ushort)(*pbVar1 & 0xf8)) << 2 | (ushort)(pbVar1[1] >> 3);
      iVar3 = iVar3 + -1;
      *puVar2 = ((ushort)(pbVar1[-1] & 0xf8) << 5 | (ushort)(*pbVar1 & 0xfc)) << 3 |
                (ushort)(pbVar1[1] >> 3);
      pbVar1 = pbVar1 + 4;
      puVar2 = puVar2 + 1;
    } while (iVar3 != 0);
  }
  return;
}

