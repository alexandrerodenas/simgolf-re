/* Ghidra decompiled: golf.exe */
/* Function: FUN_00466370 @ 0x00466370 */


undefined4 FUN_00466370(uint param_1,int param_2)

{
  byte *pbVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar8 = param_1 * 0x100;
  if (((&DAT_00579568)[param_1 * 0x80] == -1) ||
     (((param_2 == 0 && ((char)(&DAT_005794d9)[iVar8] < '\x02')) && ((&DAT_005794da)[iVar8] == '\0')
      ))) {
    return 0;
  }
  sVar2 = (&DAT_0057956a)[param_1 * 0x80];
  DAT_0051a068._0_1_ = 0;
  if ((3 < sVar2) && (3 < (short)(&DAT_0057956a)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x80])) {
    DAT_0051a068._0_1_ = 0;
    return 0;
  }
  if (((int)*(short *)(&DAT_0057956c + iVar8) <= sVar2 * 4 + 4) && (param_2 == 0)) {
    DAT_0051a068._0_1_ = 0;
    return 0;
  }
  (&DAT_0057956a)[param_1 * 0x80] = sVar2 + 1;
  (&DAT_00579502)[iVar8 + (char)(&DAT_005794d9)[iVar8]] =
       *(undefined1 *)(&DAT_0057956a + param_1 * 0x80);
  (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x800000;
  (&DAT_005794c8)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x40] =
       (&DAT_005794c8)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x40] | 0x800000;
  DAT_0059b048 = DAT_00834170;
  iVar6 = FUN_004668f0((int)(short)(&DAT_00579568)[param_1 * 0x80],(int)(char)(&DAT_005794d9)[iVar8]
                       ,param_1);
  if (iVar6 != 0) {
    FUN_00467a00(param_1,0x32,DAT_00838a94 * 0x10 + (int)(short)(&DAT_0057956a)[param_1 * 0x80]);
    iVar6 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar6 + 0x58);
  }
  uVar7 = param_1 ^ 1;
  iVar6 = FUN_004668f0((int)(short)(&DAT_00579568)[param_1 * 0x80],(int)(char)(&DAT_005794d9)[iVar8]
                       ,uVar7);
  if (iVar6 != 0) {
    FUN_00467a00(uVar7,0x32,DAT_00838a94 * 0x10 + (int)(short)(&DAT_0057956a)[param_1 * 0x80]);
    (&DAT_0057953c)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] =
         (&DAT_0057953c)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] + '\x03';
    iVar6 = (int)(short)(&DAT_0057955a)[param_1 * 0x80];
    if ((short)(&DAT_0057956a)[iVar6 * 0x80] < (short)(&DAT_0057956a)[param_1 * 0x80]) {
      if ((int)(short)(&DAT_0057956a)[iVar6 * 0x80] == (short)(&DAT_0057956a)[param_1 * 0x80] + -1)
      {
        iVar6 = FUN_0046c940(iVar6,(&DAT_005794b8)[iVar6 * 0x40],(&DAT_005794bc)[iVar6 * 0x40],0x5dc
                            );
        FUN_0040c500(iVar6 + 0xa4);
      }
      else {
        iVar6 = FUN_0046c940(iVar6,(&DAT_005794b8)[iVar6 * 0x40],(&DAT_005794bc)[iVar6 * 0x40],0x5dc
                            );
        FUN_0040c500(iVar6 + 0x5a);
        (&DAT_0057955c)[param_1 * 0x80] = (&DAT_0057955c)[param_1 * 0x80] + -1;
      }
      goto LAB_004666bf;
    }
    iVar6 = FUN_0046c940(iVar6,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0x5dc
                        );
    FUN_0040c500(iVar6 + 0xa6);
    if ((&DAT_0057956a)[param_1 * 0x80] == 1) {
      switch(DAT_005a34e0) {
      case 0:
        cVar4 = (-((*(byte *)(&DAT_00579568 + param_1 * 0x80) & 1) != 0) & 2U) + 0x32;
        break;
      case 1:
        cVar4 = (*(byte *)(&DAT_00579568 + param_1 * 0x80) & 1 | 0x3c) << 1;
        break;
      case 2:
        cVar4 = (-((*(byte *)(&DAT_00579568 + param_1 * 0x80) & 1) != 0) & 2U) + 0x6e;
        break;
      case 3:
        cVar4 = (-((*(byte *)(&DAT_00579568 + param_1 * 0x80) & 1) != 0) & 2U) + 0x73;
        break;
      default:
        goto switchD_0046656d_default;
      }
      FUN_004481b0(cVar4,100,0,0,0);
switchD_0046656d_default:
      (&DAT_0057953c)[iVar8] = (&DAT_0057953c)[iVar8] + '\x01';
      (&DAT_0057953c)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] =
           (&DAT_0057953c)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] + '\x01';
    }
    (&DAT_0057955c)[param_1 * 0x80] = (&DAT_0057955c)[param_1 * 0x80] + 1;
    if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 2) != 0) {
      FUN_004a0890(param_1);
    }
    if (((&DAT_004d60a8)
         [(short)(&DAT_0057956e)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x80] * 0x230] & 2) != 0)
    {
      FUN_004a0890(uVar7);
    }
  }
LAB_004666bf:
  sVar2 = (&DAT_0057956a)[param_1 * 0x80];
  uVar9 = 0;
  if ((short)(&DAT_0057956a)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x80] < sVar2) {
    (&DAT_0057956a)[param_1 * 0x80] = sVar2 + -1;
    lVar3 = (longlong)(int)*(short *)(&DAT_0057956c + iVar8) * 0x55555556;
    *(short *)(&DAT_0057956c + iVar8) =
         *(short *)(&DAT_0057956c + iVar8) -
         ((short)((ulonglong)lVar3 >> 0x20) - (short)(lVar3 >> 0x3f));
    goto LAB_004667e9;
  }
  uVar9 = 1;
  if ((sVar2 != 4) || ((&DAT_0057956a)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x80] != 4))
  goto LAB_004667e9;
  switch(DAT_005a34e0) {
  case 0:
    uVar10 = 0x33;
    break;
  case 1:
    uVar10 = 0x78;
    break;
  case 2:
    uVar10 = 0x6e;
    break;
  case 3:
    uVar10 = 0x73;
    break;
  default:
    goto switchD_00466730_default;
  }
  FUN_004481b0(uVar10,100,0,0,0);
switchD_00466730_default:
  DAT_00561258 = DAT_00561258 + 1;
  FUN_0040c6f0(0x120,(int)(short)(&DAT_00579568)[param_1 * 0x80]);
  sVar2 = (&DAT_0057956e)[param_1 * 0x80];
  (&DAT_00584a09)[sVar2 * 0x2c] = *(undefined1 *)(&DAT_00579568 + param_1 * 0x80);
  cVar4 = (&DAT_005794d9)[iVar8];
  pbVar1 = (byte *)(sVar2 * 0x2c + 0x5849e3 + (int)cVar4);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)(cVar4 + 0x5849e3 +
                   (short)(&DAT_0057956e)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x80] * 0x2c);
  *pbVar1 = *pbVar1 | 2;
  FUN_004722c0(param_1,(int)(short)(&DAT_00579568)[param_1 * 0x80]);
LAB_004667e9:
  (&DAT_00579502)
  [(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100 + (int)(char)(&DAT_005794d9)[iVar8]] =
       *(undefined1 *)(&DAT_0057956a + (short)(&DAT_0057955a)[param_1 * 0x80] * 0x80);
  (&DAT_00579556)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x80] =
       (-4 - (&DAT_0057956a)[param_1 * 0x80]) * 4;
  (&DAT_00579556)[param_1 * 0x80] = (&DAT_00579556)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x80];
  iVar6 = FUN_004672d0((&DAT_005794b8)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x40] -
                       (&DAT_005794b8)[param_1 * 0x40],
                       (&DAT_005794bc)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x40] -
                       (&DAT_005794bc)[param_1 * 0x40]);
  bVar5 = (byte)((int)((iVar6 >> 0x1c & 0xfU) + 1) >> 1) & 7;
  (&DAT_005794d2)[iVar8] = bVar5;
  (&DAT_005794d2)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] = bVar5 ^ 4;
  (&DAT_005794d5)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] = 0xb;
  (&DAT_005794d5)[iVar8] = 0xb;
  *(undefined2 *)(&DAT_005794cc + (short)(&DAT_0057955a)[param_1 * 0x80] * 0x100) = 0;
  *(undefined2 *)(&DAT_005794cc + iVar8) = 0;
  return uVar9;
}

