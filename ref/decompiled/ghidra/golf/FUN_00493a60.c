/* Ghidra decompiled: golf.exe */
/* Function: FUN_00493a60 @ 0x00493A60 */
/* Body size: 290 addresses */


void __fastcall FUN_00493a60(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  
  pcVar6 = (char *)FUN_004941e0();
  uVar7 = FUN_004942a0();
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  FUN_00493f50();
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    (**(code **)(*DAT_0083ad50 + 0xb4))();
    FUN_00476310(0x8000001f,0xffffffff,2,2);
    FUN_004762d0(DAT_0083b9c0,0,0,0);
  }
  iVar2 = *(int *)(param_1 + 0x22e8);
  iVar3 = *(int *)(param_1 + 0x22ec);
  iVar4 = *(int *)(param_1 + 0x22f0);
  iVar5 = *(int *)(param_1 + 0x22f4);
  if (*(int **)(param_1 + 0x293c) == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x293c) + 0xd4))();
  }
  if ((*(byte *)(param_1 + 4) & 8) == 0) {
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      pcVar10 = pcVar6;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_00477e60(pcVar6,0,0,(iVar4 + (*piVar8 - piVar8[2])) - iVar2,iVar5 - iVar3,~uVar9 - 1);
    }
  }
  else if (pcVar6 != (char *)0x0) {
    uVar9 = 0xffffffff;
    pcVar10 = pcVar6;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_00477c30(pcVar6,4,4,~uVar9 - 1);
    FUN_00480ce0();
    return;
  }
  FUN_00480ce0();
  return;
}

