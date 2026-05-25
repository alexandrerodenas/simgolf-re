/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049ccc0 @ 0x0049CCC0 */


undefined4 __fastcall FUN_0049ccc0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_4;
  
  iStack_4 = param_1;
  if ((*(uint *)(param_1 + 0xb8) & 0x10) != 0) goto LAB_0049ceef;
  if ((*(uint *)(param_1 + 0xb8) & 1) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x94))();
  }
  else {
    DVar2 = timeGetTime();
    iVar1 = (int)(((ulonglong)(*(int *)(param_1 + 0x13c) * (DVar2 - *(int *)(param_1 + 0x93c))) /
                  (ulonglong)*(uint *)(param_1 + 0x138)) / 1000);
  }
  if (iVar1 < *(int *)(param_1 + 0x944)) {
    return 0;
  }
  if ((iVar1 == *(int *)(param_1 + 0x944)) && ((*(uint *)(param_1 + 0xb8) & 0x1000) == 0)) {
    return 0;
  }
  DVar2 = timeGetTime();
  FUN_004a0320(s_play_frame___004e49e4,s_Entering_004e4954,DVar2,iVar1 - *(int *)(param_1 + 0x944),0
              );
  if (iVar1 <= *(int *)(param_1 + 0x944)) goto LAB_0049ceef;
  if (iVar1 == *(int *)(param_1 + 0x944) + 1) {
    if (*(int *)(param_1 + 0x674) == 0) {
      FUN_0049cb90();
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffffefff;
      goto LAB_0049ceef;
    }
LAB_0049cee0:
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffffefff;
  }
  else {
    iVar3 = FUN_0049cf50(iVar1);
    if (iVar3 == -1) {
      iVar4 = *(int *)(param_1 + 0x944);
      while (iVar4 < iVar1) {
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffffefff;
        iVar4 = FUN_0049cb80(0);
        if (iVar4 == 0) {
          FUN_0049cb90();
          FUN_0049cb80(0);
        }
        iVar4 = *(int *)(param_1 + 0x944);
      }
    }
    FUN_004a0320(s_play_frame___004e49e4,s_BEHIND_AUDIO_004e49d4,iVar1,
                 *(undefined4 *)(param_1 + 0x944),iVar3);
    iVar4 = *(int *)(param_1 + 0x944);
    if (iVar3 - iVar1 <= iVar1 - iVar4) {
      if (*(int *)(param_1 + 0x940) + -1 < iVar3) {
        FUN_004a4d30(0x28);
        iVar1 = *(int *)(param_1 + 0x940);
        while (iVar1 < iVar3) {
          FUN_0049c940();
          iVar1 = *(int *)(param_1 + 0x940);
        }
        FUN_0049cb90();
      }
      else {
        iStack_4 = 0;
        FUN_004a4ea0(&iStack_4,0);
        while (iStack_4 < iVar3) {
          FUN_004a4ed0();
          FUN_004a4ea0(&iStack_4,0);
        }
      }
      goto LAB_0049cee0;
    }
    while (iVar4 < iVar1 + -1) {
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffffefff;
      iVar3 = FUN_0049cb80(1);
      if (iVar3 == 0) {
        FUN_0049cb90();
      }
      iVar4 = *(int *)(param_1 + 0x944);
    }
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffffefff;
    iVar1 = FUN_0049cb80(0);
    if (iVar1 != 0) goto LAB_0049ceef;
    FUN_0049cb90();
  }
  FUN_0049cb80(0);
LAB_0049ceef:
  if (*(int *)(param_1 + 0x944) == *(int *)(param_1 + 0x938) + -1) {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffff7fff;
  }
  uVar6 = 0;
  uVar5 = 0;
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xffffefff;
  DVar2 = timeGetTime();
  FUN_004a0320(s_play_frame___004e49e4,s_Exiting_004e49cc,DVar2,uVar5,uVar6);
  return 1;
}

