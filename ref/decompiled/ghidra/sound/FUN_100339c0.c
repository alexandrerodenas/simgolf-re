/* Ghidra decompiled: sound.dll */
/* Function: FUN_100339c0 @ 0x100339C0 */
/* Body size: 369 addresses */


undefined4 __fastcall FUN_100339c0(undefined4 *param_1)

{
  LPMMIOINFO pmmioinfo;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (((HMMIO)*param_1 == (HMMIO)0x0) && ((*(byte *)(param_1 + 0x17) & 4) == 0)) {
    return 0x14;
  }
  uVar1 = param_1[0x16];
  param_1[0x16] = uVar1 & 0xfffffedf;
  param_1[0x5b] = param_1[0x59];
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x17) & 4) == 0) {
      mmioSeek((HMMIO)*param_1,(uint)*(ushort *)(param_1 + 99) * param_1[0x59] + param_1[0x5d],0);
      pmmioinfo = (LPMMIOINFO)(param_1 + 3);
      mmioGetInfo((HMMIO)*param_1,pmmioinfo,0);
      mmioAdvance((HMMIO)*param_1,pmmioinfo,0);
      *(undefined4 *)(param_1[2] + 0x20) = *(undefined4 *)(param_1[2] + 0x18);
      *(undefined4 *)(param_1[2] + 0x1c) = *(undefined4 *)(param_1[2] + 0x20);
      param_1[0x5c] = 0;
      param_1[0x4de] = *(undefined4 *)(param_1[2] + 0x18);
      thunk_FUN_10033300(param_1);
      mmioAdvance((HMMIO)*param_1,pmmioinfo,0);
    }
  }
  else {
    param_1[10] = param_1[9];
    param_1[0xb] = param_1[0x5e] + param_1[9];
  }
  param_1[0x76] = param_1[0x82];
  param_1[0x17] = param_1[0x17] & 0xfffffffc;
  param_1[0x78] = param_1[0x84];
  param_1[0x79] = param_1[0x85];
  param_1[0x8a] = 0;
  param_1[0x16] = param_1[0x16] & 0xf0000f67;
  thunk_FUN_10035460(param_1,param_1[0x70]);
  thunk_FUN_10035340(param_1,param_1[0x89]);
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    puVar2 = param_1 + 0x95;
    iVar3 = 0x10;
    do {
      *(byte *)(puVar2 + 0x20) = *(byte *)(puVar2 + 0x20) & 0xf1;
      *puVar2 = puVar2[-1];
      puVar2[0x35] = puVar2[0x37];
      puVar2[0x1b] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x29] = 0;
      puVar2[0x36] = puVar2[0x38];
      *(byte *)(puVar2 + 0x20) = *(byte *)(puVar2 + 0x20) & 0xfd;
      puVar2 = puVar2 + 0x44;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

