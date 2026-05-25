/* Ghidra decompiled: sound.dll */
/* Function: FUN_100318a0 @ 0x100318A0 */


LPMMIOINFO __fastcall FUN_100318a0(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  LPMMIOINFO pmmioinfo;
  int iVar3;
  LPMMIOINFO p_Var4;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    return (LPMMIOINFO)0x0;
  }
  puVar1 = *(undefined **)(param_1 + 0x5c);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      *puVar2 = 0;
      *(undefined4 **)(param_1 + 0x5c) = puVar2;
    }
    puVar2 = *(undefined4 **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    if (puVar2 != (undefined4 *)0x0) {
      pmmioinfo = operator_new(0x48);
      p_Var4 = pmmioinfo;
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        p_Var4->dwFlags = 0;
        p_Var4 = (LPMMIOINFO)&p_Var4->fccIOProc;
      }
      mmioGetInfo((HMMIO)*puVar2,pmmioinfo,0);
      FUN_1004249a((undefined *)puVar2);
      *(LPMMIOINFO *)(param_1 + 0x70) = pmmioinfo;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      return pmmioinfo;
    }
  }
  return (LPMMIOINFO)0x0;
}

