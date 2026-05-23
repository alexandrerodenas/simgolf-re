/* Ghidra decompiled: golf.exe */
/* Function: FUN_00462a30 @ 0x00462A30 */
/* Body size: 432 addresses */


void FUN_00462a30(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_004c2844;
  if (0x3fe < DAT_00838200) {
    return;
  }
  iVar3 = 0x10;
  if (1000 < DAT_00822c8c) {
    iVar3 = 0xd;
  }
  if (0x4af < DAT_00822c8c) {
    iVar3 = 10;
  }
  if ((param_8 & 0x100) != 0) {
    iVar3 = 0x10;
  }
  if (param_7 == 0) {
    param_5 = DAT_004c2844 * param_5;
    (&DAT_00830164)[DAT_00838200] =
         param_1 - ((int)(DAT_004c2844 * param_4 + (DAT_004c2844 * param_4 >> 0x1f & 3U)) >> 2);
    (&DAT_00831164)[DAT_00838200] = param_2 - ((int)(param_5 + (param_5 >> 0x1f & 3U)) >> 2);
  }
  else if (param_7 < 1) {
    (&DAT_00830164)[DAT_00838200] = (DAT_004c2844 * param_4 * param_7) / (iVar3 * 2) + param_1;
    (&DAT_00831164)[DAT_00838200] = (iVar2 * param_5 * param_7) / (iVar3 * 2) + param_2;
  }
  else {
    param_5 = DAT_004c2844 * param_5;
    (&DAT_00830164)[DAT_00838200] = param_1 - (DAT_004c2844 * param_4 * param_7) / iVar3;
    (&DAT_00831164)[DAT_00838200] = param_2 - (param_5 * param_7) / iVar3;
  }
  (&DAT_0082915c)[DAT_00838200] = param_7;
  (&DAT_0082c164)[DAT_00838200] = param_2;
  (&DAT_0082815c)[DAT_00838200] = param_8;
  iVar3 = DAT_0082c160;
  (&DAT_0082a15c)[DAT_00838200] = param_6;
  (&DAT_0082b160)[DAT_00838200] = param_1;
  (&DAT_0082415c)[DAT_00838200] = param_3;
  iVar2 = iVar3;
  if (iVar3 != -1) {
    do {
      iVar1 = iVar2;
      iVar2 = iVar1;
      if (param_3 <= (int)(&DAT_0082415c)[iVar1]) break;
      iVar2 = (&DAT_008361f4)[iVar1];
      param_4 = iVar1;
    } while (iVar2 != -1);
    if (iVar2 != iVar3) {
      (&DAT_008361f4)[DAT_00838200] = iVar2;
      (&DAT_008361f4)[param_4] = DAT_00838200;
      goto LAB_00462bc1;
    }
  }
  (&DAT_008361f4)[DAT_00838200] = iVar3;
  DAT_0082c160 = DAT_00838200;
LAB_00462bc1:
  DAT_00838200 = DAT_00838200 + 1;
  if (DAT_00838200 < 0x400) {
    (&DAT_00834174)[DAT_00838200] = 0;
  }
  return;
}

