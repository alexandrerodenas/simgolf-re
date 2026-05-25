/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015270 @ 0x30015270 */


int __cdecl FUN_30015270(int param_1,int param_2)

{
  byte bVar1;
  uint3 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = param_1;
  do {
    iVar6 = iVar6 + -2;
    uVar2 = CONCAT21(CONCAT11(*DAT_300458a4,*DAT_30045898),*DAT_300458a0);
    uVar4 = CONCAT31(uVar2,*DAT_30045898);
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    uVar5 = (uVar2 & 0xff00ff) << 8;
    uVar3 = (uint)(byte)DAT_30045898[1] << 0x10 | uVar5 | (uint)(byte)DAT_30045898[1];
    *DAT_30045890 = uVar4;
    DAT_30045890[1] = uVar3;
    *(undefined4 *)(DAT_300458d4 + (int)DAT_30045890) = uVar4;
    *(uint *)(DAT_300458d4 + 4 + (int)DAT_30045890) = uVar3;
    uVar3 = (uint)*DAT_3004589c << 0x10 | (uint)*DAT_3004589c | uVar5;
    bVar1 = DAT_3004589c[1];
    *DAT_30045894 = uVar3;
    uVar5 = (uint)bVar1 << 0x10 | uVar5 | (uint)bVar1;
    DAT_30045894[1] = uVar5;
    *(uint *)((int)DAT_30045894 + DAT_300458d4) = uVar3;
    *(uint *)((int)DAT_30045894 + DAT_300458d4 + 4) = uVar5;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
  } while (0 < iVar6);
  return param_1 + param_2;
}

