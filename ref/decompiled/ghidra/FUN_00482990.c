/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482990 @ 0x00482990 */
/* Body size: 227 addresses */


undefined4 __thiscall FUN_00482990(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  
  pcVar7 = (char *)(param_2 + 6);
  pcVar3 = (char *)(**(code **)(**(int **)(param_4 + 4) + 0x20))();
  pcVar10 = pcVar3;
  for (uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 10); uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar7 = pcVar7 + 1;
    for (uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 8); uVar4 != 0; uVar4 = uVar4 - uVar9)
    {
      cVar1 = *pcVar7;
      pcVar8 = pcVar7 + 1;
      if (cVar1 < '\0') {
        uVar9 = (uint)-cVar1;
        pcVar7 = pcVar8;
        pcVar10 = pcVar3;
        for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar10 = pcVar10 + 4;
        }
        pcVar3 = pcVar3 + uVar9;
        for (uVar6 = uVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar10 = pcVar10 + 1;
        }
        pcVar7 = pcVar8 + uVar9;
      }
      else {
        cVar2 = *pcVar8;
        uVar9 = (uint)cVar1;
        pcVar8 = pcVar3;
        for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(uint *)pcVar8 = CONCAT22(CONCAT11(cVar2,cVar2),CONCAT11(cVar2,cVar2));
          pcVar8 = pcVar8 + 4;
        }
        pcVar7 = pcVar7 + 2;
        pcVar3 = pcVar10 + uVar9;
        for (uVar6 = uVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = cVar2;
          pcVar8 = pcVar8 + 1;
        }
      }
      pcVar10 = pcVar3;
    }
  }
  (**(code **)(**(int **)(param_4 + 4) + 0x24))(1);
  return 0;
}

