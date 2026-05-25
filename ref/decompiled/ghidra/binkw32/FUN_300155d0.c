/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300155d0 @ 0x300155D0 */


int __cdecl FUN_300155d0(int param_1,int param_2)

{
  uint3 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  do {
    iVar4 = iVar4 + -2;
    uVar1 = CONCAT21(CONCAT11(*DAT_300458a4,DAT_30045898[1]),*DAT_300458a0);
    uVar3 = CONCAT31(uVar1,*DAT_30045898);
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 = uVar3;
    *(undefined4 *)(DAT_300458d4 + (int)DAT_30045890) = uVar3;
    uVar2 = (uint)DAT_3004589c[1] << 0x10 | (uVar1 & 0xff00ff) << 8 | (uint)*DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 = uVar2;
    *(uint *)((int)DAT_30045894 + DAT_300458d4) = uVar2;
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
  } while (0 < iVar4);
  return param_2 + param_1;
}

