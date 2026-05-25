/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049c940 @ 0x0049C940 */


undefined4 __fastcall FUN_0049c940(int param_1)

{
  LPMMCKINFO pmmcki;
  int cch;
  DWORD DVar1;
  MMRESULT MVar2;
  int iVar3;
  LONG LVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar5 = timeGetTime_exref;
  if (*(int *)(param_1 + 0xbc) == 0) {
    return 7;
  }
  uVar7 = 0;
  uVar6 = 0;
  DVar1 = timeGetTime();
  FUN_004a0320(s_Entering_advance_frame_004e4924,&DAT_004e9a84,DVar1,uVar6,uVar7);
  pmmcki = (LPMMCKINFO)(param_1 + 0xd4);
  if ((*(int *)(param_1 + 0xd4) == 0) ||
     (MVar2 = mmioAscend(*(HMMIO *)(param_1 + 0xbc),pmmcki,0), MVar2 == 0)) {
    pmmcki->ckid = 0;
    do {
      MVar2 = mmioDescend(*(HMMIO *)(param_1 + 0xbc),pmmcki,(MMCKINFO *)(param_1 + 0xc0),0);
      if (MVar2 != 0) {
        return 1;
      }
      if (pmmcki->ckid == *(FOURCC *)(param_1 + 0x1a4)) {
        *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
        uVar6 = (*pcVar5)(0,0);
        FUN_004a0320(s_Exiting_advance_frame_004e48dc,&DAT_004e9a84,uVar6);
        return 0;
      }
      if (pmmcki->ckid == *(FOURCC *)(param_1 + 0x1a8)) {
        uVar6 = (*pcVar5)();
        FUN_004a0320(s_advance_frame___004e4900,s_Advancing_audio__004e4910,uVar6,
                     *(undefined4 *)(param_1 + 0xd8),0);
        iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x8c))(*(undefined4 *)(param_1 + 0xd8));
        if (iVar3 == 0) {
          FUN_004a0320(s_No_mmio____004e48f4,&DAT_004e9a84,0,0,0);
        }
        else {
          cch = *(int *)(param_1 + 0xd8);
          LVar4 = mmioRead(*(HMMIO *)(param_1 + 0xbc),*(HPSTR *)(iVar3 + 0x18),cch);
          if (cch != LVar4) {
            return 1;
          }
          *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x18) + cch;
          (**(code **)(*(int *)(param_1 + 4) + 0x90))(iVar3);
        }
      }
      pcVar5 = timeGetTime_exref;
    } while ((pmmcki->ckid == 0x5453494c) ||
            (MVar2 = mmioAscend(*(HMMIO *)(param_1 + 0xbc),pmmcki,0), pcVar5 = timeGetTime_exref,
            MVar2 == 0));
  }
  return 1;
}

