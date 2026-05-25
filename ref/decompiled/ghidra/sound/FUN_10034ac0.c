/* Ghidra decompiled: sound.dll */
/* Function: FUN_10034ac0 @ 0x10034AC0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10034ac0(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 & 0x40) == 0) || ((uVar1 & 0x10) != 0)) {
    return 0x15;
  }
  if (((uVar1 & 1) == 0) || ((uVar1 & 0x10000000) != 0)) {
    *(uint *)(param_1 + 0x58) = uVar1 | 8;
    return 0;
  }
  iVar3 = 1;
  pbVar2 = (byte *)(param_1 + 0x2d4);
  iVar4 = 0x10;
  do {
    if ((iVar3 != 0) && ((*(uint *)(param_1 + 0x58) & 0xffff000) != 0)) {
      if (*(double *)(pbVar2 + -0x44) != _DAT_1005b498) {
        if (*(double *)(pbVar2 + 0x54) != _DAT_1005b498) {
          *pbVar2 = *pbVar2 | 8;
          goto LAB_10034b33;
        }
      }
      pbVar2[0x48] = 0;
      pbVar2[0x49] = 0;
      pbVar2[0x4a] = 0;
      pbVar2[0x4b] = 0;
      *pbVar2 = *pbVar2 | 4;
      pbVar2[-8] = pbVar2[-8] & 0xfe;
    }
LAB_10034b33:
    iVar3 = iVar3 << 1;
    pbVar2 = pbVar2 + 0x110;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
  } while( true );
}

