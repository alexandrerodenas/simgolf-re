/* Ghidra decompiled: sound.dll */
/* Function: FUN_10034b90 @ 0x10034B90 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10034b90(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 & 0x40) != 0) && ((uVar1 & 0x10) == 0)) {
    if ((uVar1 & 1) != 0) {
      iVar5 = 1;
      pbVar3 = (byte *)(param_1 + 0x2d4);
      iVar4 = 0x10;
      do {
        if ((iVar5 != 0) && ((*(uint *)(param_1 + 0x58) & 0xffff000) != 0)) {
          if (*(double *)(pbVar3 + 0x54) < _DAT_1005b498) {
            if ((*pbVar3 & 0x28) == 0) {
              *pbVar3 = *pbVar3 | 0x28;
              *(undefined4 *)(pbVar3 + -0x3c) = *(undefined4 *)(pbVar3 + -0x44);
              pbVar3[-0xffffffff00000044] = 0;
              pbVar3[-0xffffffff00000043] = 0;
              pbVar3[-0xffffffff00000042] = 0;
              pbVar3[-0xffffffff00000041] = 0;
              *(undefined4 *)(pbVar3 + -0x38) = *(undefined4 *)(pbVar3 + -0x40);
              pbVar3[-0xffffffff00000040] = 0;
              pbVar3[-0xffffffff0000003f] = 0;
              pbVar3[-0xffffffff0000003e] = 0;
              pbVar3[-0xffffffff0000003d] = 0;
            }
          }
        }
        iVar5 = iVar5 << 1;
        pbVar3 = pbVar3 + 0x110;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return 0;
    }
    *(uint *)(param_1 + 0x58) = uVar1 | 8;
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x1e0);
    uVar2 = *(undefined4 *)(param_1 + 0x1e4);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 8;
    *(undefined4 *)(param_1 + 0x214) = uVar2;
    return 0;
  }
  return 0x15;
}

