/* Ghidra decompiled: golf.exe */
/* Function: FUN_004628d0 @ 0x004628D0 */
/* Body size: 345 addresses */


void FUN_004628d0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00838200;
  iVar1 = DAT_004c2844;
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
    (&DAT_00831164)[iVar2] = param_2 - ((int)(param_5 + (param_5 >> 0x1f & 3U)) >> 2);
  }
  else if (param_7 < 1) {
    (&DAT_00830164)[DAT_00838200] = (DAT_004c2844 * param_4 * param_7) / (iVar3 * 2) + param_1;
    (&DAT_00831164)[iVar2] = (iVar1 * param_5 * param_7) / (iVar3 * 2) + param_2;
  }
  else {
    param_5 = DAT_004c2844 * param_5;
    (&DAT_00830164)[DAT_00838200] = param_1 - (DAT_004c2844 * param_4 * param_7) / iVar3;
    (&DAT_00831164)[iVar2] = param_2 - (param_5 * param_7) / iVar3;
  }
  (&DAT_0082c164)[iVar2] = param_2;
  (&DAT_0082915c)[iVar2] = param_7;
  (&DAT_0082b160)[iVar2] = param_1;
  (&DAT_0082415c)[iVar2] = param_3;
  (&DAT_0082a15c)[iVar2] = param_6;
  (&DAT_0082815c)[iVar2] = param_8;
  FUN_00462be0(iVar2);
  return;
}

