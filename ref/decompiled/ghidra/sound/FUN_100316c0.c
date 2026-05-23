/* Ghidra decompiled: sound.dll */
/* Function: FUN_100316c0 @ 0x100316C0 */
/* Body size: 341 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100316c0(void *this,undefined4 *param_1)

{
  short sVar1;
  byte bVar2;
  undefined4 *puVar3;
  HMMIO pHVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  short *psVar8;
  byte *pbVar9;
  byte bVar10;
  int *piVar11;
  _MMIOINFO *p_Var12;
  _MMIOINFO local_48;
  
  if (param_1 == (undefined4 *)0x0) {
    return 10;
  }
  if (100 < *(uint *)((int)this + 0x68)) {
    return 0x10;
  }
  p_Var12 = &local_48;
  for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
    p_Var12->dwFlags = 0;
    p_Var12 = (_MMIOINFO *)&p_Var12->fccIOProc;
  }
  local_48.fccIOProc = 0x204d454d;
  local_48.cchBuffer = 0x36;
  local_48.adwInfo[0] = 0;
  local_48.pchBuffer = (HPSTR)0x0;
  puVar3 = operator_new(4);
  pHVar4 = mmioOpenA((LPSTR)0x0,&local_48,0x11002);
  *puVar3 = pHVar4;
  if (pHVar4 == (HMMIO)0x0) {
    return 6;
  }
  DAT_100b4a08 = DAT_100b4a08 + 1;
  mmioGetInfo((HMMIO)*puVar3,&local_48,0);
  psVar8 = (short *)*param_1;
  pfVar5 = (float *)&DAT_100b515c;
  do {
    sVar1 = *psVar8;
    pfVar6 = pfVar5 + 1;
    psVar8 = psVar8 + 1;
    *pfVar5 = (float)(int)sVar1 * _DAT_1005c5e0;
    pfVar5 = pfVar6;
  } while ((int)pfVar6 < 0x100b542c);
  FUN_1003b150(0x100b515c,0x100b5084,*(float **)((int)this + 0x90));
  bVar10 = 0x80;
  bVar2 = 0;
  piVar11 = &DAT_100b5084;
  pbVar9 = (byte *)local_48.pchBuffer;
  do {
    if (*piVar11 != 0) {
      bVar2 = bVar2 | bVar10;
    }
    bVar10 = bVar10 >> 1;
    if ((bVar10 == 0) || (piVar11 == (int *)&DAT_100b5158)) {
      *pbVar9 = bVar2;
      pbVar9 = pbVar9 + 1;
      bVar2 = 0;
      bVar10 = 0x80;
    }
    piVar11 = piVar11 + 1;
  } while ((int)piVar11 < 0x100b515c);
  *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + 1;
  local_48.pchEndRead = local_48.pchBuffer + 7;
  mmioSetInfo((HMMIO)*puVar3,&local_48,0);
  thunk_FUN_10031b60((void *)((int)this + 0x5c),puVar3);
  return 0;
}

