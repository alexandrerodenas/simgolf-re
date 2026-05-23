/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b0f60 @ 0x004B0F60 */
/* Body size: 282 addresses */


void FUN_004b0f60(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int local_50c;
  char local_508 [260];
  int aiStack_404 [257];
  
  if (*param_3 == 0) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x500);
    *param_3 = iVar3;
  }
  iVar3 = *param_3;
  iVar8 = 0;
  local_50c = 1;
  do {
    bVar1 = *(byte *)(local_50c + param_2);
    if (bVar1 != 0) {
      cVar2 = (char)local_50c;
      pcVar10 = local_508 + iVar8;
      for (uVar5 = (uint)(bVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)pcVar10 = CONCAT22(CONCAT11(cVar2,cVar2),CONCAT11(cVar2,cVar2));
        pcVar10 = pcVar10 + 4;
      }
      iVar8 = iVar8 + (uint)bVar1;
      for (uVar5 = bVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = cVar2;
        pcVar10 = pcVar10 + 1;
      }
    }
    local_50c = local_50c + 1;
  } while (local_50c < 0x11);
  local_508[iVar8] = '\0';
  iVar6 = 0;
  iVar4 = 0;
  iVar9 = (int)local_508[0];
  while (local_508[0] != '\0') {
    if (local_508[iVar4] == iVar9) {
      piVar7 = aiStack_404 + iVar4;
      do {
        cVar2 = local_508[iVar4 + 1];
        iVar4 = iVar4 + 1;
        *piVar7 = iVar6;
        piVar7 = piVar7 + 1;
        iVar6 = iVar6 + 1;
      } while (cVar2 == iVar9);
    }
    iVar6 = iVar6 << 1;
    iVar9 = iVar9 + 1;
    local_508[0] = local_508[iVar4];
  }
  puVar11 = (undefined4 *)(iVar3 + 0x400);
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  if (0 < iVar8) {
    piVar7 = aiStack_404;
    iVar6 = 0;
    do {
      iVar4 = *piVar7;
      piVar7 = piVar7 + 1;
      *(int *)(iVar3 + (uint)*(byte *)(param_2 + 0x11 + iVar6) * 4) = iVar4;
      iVar4 = iVar6 + 1;
      *(char *)(*(byte *)(param_2 + 0x11 + iVar6) + 0x400 + iVar3) = local_508[iVar6];
      iVar6 = iVar4;
    } while (iVar4 < iVar8);
  }
  return;
}

