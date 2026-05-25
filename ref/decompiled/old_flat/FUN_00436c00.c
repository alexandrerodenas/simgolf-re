/* Ghidra decompiled: golf.exe */
/* Function: FUN_00436c00 @ 0x00436C00 */


undefined4 FUN_00436c00(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = FUN_00436b00(param_1,param_2);
  if (iVar2 == -3) {
    DAT_00561254 = 0;
    DAT_00567afc = 4;
    return 0xffffffff;
  }
  if (iVar2 == -2) {
    DAT_00561254 = 0;
    DAT_00567afc = 2;
    return 0xffffffff;
  }
  switch(iVar2) {
  case 0:
  case 1:
    DAT_004c7aec = 0xffffffff;
    DAT_0059ca54 = 0;
    return 0xffffffff;
  case 2:
    if (DAT_005aa558 != 0) {
      DAT_004c7aec = 0xffffffff;
      DAT_005aa558 = DAT_005aa558 + -2;
      return 0xffffffff;
    }
    break;
  case 3:
    DAT_004c7aec = 0xffffffff;
    DAT_005aa558 = DAT_005aa558 + 2;
    return 0xffffffff;
  case 4:
    if ((DAT_0059ca54 != 0) && (DAT_004c7aec != -1)) {
      DAT_004c2e10 = *(undefined4 *)(&DAT_005aa5b8 + DAT_004c7aec * 4);
      return 0xffffffff;
    }
    break;
  case 5:
    if ((DAT_0059ca54 != 0) && (DAT_004c7aec != -1)) {
      iVar2 = *(int *)(&DAT_005aa5b8 + DAT_004c7aec * 4);
      DAT_00571fd4 = DAT_00571fd4 + -0x19;
      (&DAT_00585862)[iVar2 * 0x4c] = 0;
      FUN_0040c890(0xffffffe7,(&DAT_00585850)[iVar2 * 0x13],(&DAT_00585854)[iVar2 * 0x13],0xffffffff
                  );
      DAT_004c2e10 = 0xffffffff;
      *(short *)(&DAT_0058421a + ((int)DAT_005a6d3c % 100) * 0x14) =
           *(short *)(&DAT_0058421a + ((int)DAT_005a6d3c % 100) * 0x14) + -0x19;
      return 0xffffffff;
    }
    break;
  case 6:
    if ((DAT_0059ca54 != 0) && (DAT_004c7aec != -1)) {
      iVar2 = *(int *)(&DAT_005aa5b8 + DAT_004c7aec * 4);
      DAT_0051a068._0_1_ = 0;
      FUN_00467600(iVar2);
      FUN_0045b2c0(s_Rename_Employee____004c837c,200,0x1b0,0x1f);
      uVar3 = 0xffffffff;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      pcVar6 = &DAT_0058587a + iVar2 * 0x4c;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return 0xffffffff;
    }
    break;
  default:
    if (7 < iVar2) {
      DAT_004c7aec = iVar2 + -8;
      if (DAT_005aa6c0 <= DAT_004c7aec) {
        DAT_004c7aec = 0xffffffff;
        return 0xffffffff;
      }
      DAT_004c2ba0 = (int)(&DAT_00585850)[*(int *)(&DAT_005aa5b8 + DAT_004c7aec * 4) * 0x13] >> 10;
      DAT_004c2ba4 = (int)(&DAT_00585854)[*(int *)(&DAT_005aa5b8 + DAT_004c7aec * 4) * 0x13] >> 10;
    }
  }
  return 0xffffffff;
}

