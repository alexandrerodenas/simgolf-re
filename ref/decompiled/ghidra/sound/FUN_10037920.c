/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037920 @ 0x10037920 */


undefined4 __fastcall FUN_10037920(undefined4 *param_1)

{
  LPMMIOINFO pmmioinfo;
  uint uVar1;
  LPMMIOINFO p_Var2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  uVar1 = param_1[0x16];
  iVar7 = 0x10000;
  if ((uVar1 & 2) == 0) {
    param_1[0x16] = uVar1 | 1;
    return 0;
  }
  if (((uVar1 & 0x40) != 0) && ((uVar1 & 0x10) == 0)) {
    iVar5 = 0x10;
    param_1[0x16] = uVar1 | 0x10;
    pbVar3 = (byte *)(param_1 + 0xb5);
    do {
      iVar5 = iVar5 + -1;
      *pbVar3 = *pbVar3 & 0xfd | 4;
      pbVar3 = pbVar3 + 0x110;
    } while (iVar5 != 0);
  }
  while ((((param_1[0x16] & 0x40) != 0 && ((param_1[0x16] & 0x10) == 0)) &&
         (iVar7 = iVar7 + -1, iVar7 != 0))) {
    Sleep(1);
  }
  if (((param_1[0x16] & 0x40) != 0) && ((param_1[0x16] & 0x10) == 0)) {
    return 6;
  }
  pmmioinfo = (LPMMIOINFO)(param_1 + 3);
  mmioGetInfo((HMMIO)*param_1,pmmioinfo,0);
  mmioSetBuffer((HMMIO)*param_1,(LPSTR)0x0,param_1[0x5e],0);
  mmioGetInfo((HMMIO)*param_1,pmmioinfo,0);
  mmioSeek((HMMIO)*param_1,param_1[0x5d],0);
  mmioGetInfo((HMMIO)*param_1,pmmioinfo,0);
  mmioAdvance((HMMIO)*param_1,pmmioinfo,0);
  p_Var2 = (LPMMIOINFO)param_1[2];
  if ((p_Var2 != (LPMMIOINFO)0x0) && (p_Var2 != pmmioinfo)) {
    FUN_1004249a((undefined *)p_Var2);
    param_1[2] = pmmioinfo;
  }
  iVar7 = 0x10;
  param_1[0x16] = param_1[0x16] | 1;
  puVar4 = param_1 + 0xb1;
  do {
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)param_1[2];
      puVar8 = puVar4 + -0x23;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[5] = param_1[0x60];
    puVar4[6] = param_1[0x61];
    puVar4[7] = param_1[0x62];
    puVar4[8] = param_1[99];
    *(undefined2 *)(puVar4 + 9) = *(undefined2 *)(param_1 + 100);
    puVar4[1] = param_1[0x5a];
    *puVar4 = param_1[0x59];
    puVar4[-1] = 0;
    iVar7 = iVar7 + -1;
    *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xfd | 4;
    puVar4 = puVar4 + 0x44;
  } while (iVar7 != 0);
  return 0;
}

