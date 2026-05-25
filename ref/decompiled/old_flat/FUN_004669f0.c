/* Ghidra decompiled: golf.exe */
/* Function: FUN_004669f0 @ 0x004669F0 */


void FUN_004669f0(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  short *psVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = FUN_00467130((byte)(&DAT_005794ef)[param_3 + (param_4 ^ 1) * 0x100] >> 3,0,param_2);
  iVar6 = (int)(short)(&DAT_0057955a)[param_4 * 0x80];
  psVar1 = &DAT_0057955a + param_4 * 0x80;
  iVar7 = iVar6 * 0x100;
  if (((char)(&DAT_005794d9)[iVar7] == param_3) && ((&DAT_005794ef)[param_3 + iVar7] == '\0')) {
    cVar2 = (&DAT_00579528)[iVar7];
    puVar5 = &DAT_00579528 + iVar7;
    for (iVar8 = 0; (cVar2 == '\x13' && (iVar8 < 4)); iVar8 = iVar8 + 1) {
      cVar2 = puVar5[1];
      puVar5 = puVar5 + 1;
    }
    iVar6 = FUN_00467130((int)(short)(&DAT_0057955c)[iVar6 * 0x80],
                         (int)*(short *)(&DAT_0057956c + iVar7),99);
    iVar6 = (iVar6 + -1) / 2;
    if ((1 < param_2) && (param_2 + -1 < iVar6)) {
      iVar6 = param_2 + -1;
    }
    iVar7 = (int)*psVar1;
    uVar3 = (&DAT_00579540)[iVar7 * 0x80 + iVar8] & 0xc000;
    if (uVar3 == 0x4000) {
      iVar6 = iVar6 + 1;
    }
    else if (iVar6 != 0) {
      if (uVar3 != 0) {
        iVar6 = iVar6 + -1;
      }
      if ((iVar6 != 0) && (uVar3 == 0xc000)) {
        iVar6 = iVar6 + -1;
      }
    }
    iVar7 = FUN_00407000((&DAT_005794b8)[iVar7 * 0x40],(&DAT_005794bc)[iVar7 * 0x40],8);
    if (iVar7 != 0) {
      iVar6 = param_2;
    }
    uVar4 = FUN_00467130(iVar6,0,param_2);
    (&DAT_0057956a)[*psVar1 * 0x80] = (short)uVar4;
    (&DAT_005794ef)[param_3 + *psVar1 * 0x100] = (char)uVar4 * '\b' + '\x01';
  }
  else {
    (&DAT_0057956a)[iVar6 * 0x80] = (short)uVar4;
    (&DAT_005794ef)[param_3 + *psVar1 * 0x100] = (char)uVar4 * '\b' + '\x01';
  }
  DAT_00838a94 = uVar4;
  FUN_00466b70(param_1,param_2,uVar4,0xffffffff);
  return;
}

