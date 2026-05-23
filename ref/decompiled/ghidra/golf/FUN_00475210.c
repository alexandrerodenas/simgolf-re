/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475210 @ 0x00475210 */
/* Body size: 508 addresses */


undefined4 __thiscall FUN_00475210(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  int iStack_8;
  
  iVar4 = FUN_00474ee0(param_2,&param_2);
  iVar10 = 0;
  if (iVar4 == 0) {
    return 6;
  }
  if (*(short *)(param_2 + 0xe) == 8) {
    uVar5 = FUN_00475050(param_2,iVar4);
    return uVar5;
  }
  if (0 < *(int *)(param_2 + 8)) {
    FUN_00475410(iVar4,param_2);
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
  }
  if (*(int *)(param_2 + 4) <= iVar6) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
    }
    uVar8 = (int)*(uint *)(param_2 + 8) >> 0x1f;
    if ((int)((*(uint *)(param_2 + 8) ^ uVar8) - uVar8) <= iVar6) goto LAB_004752d3;
  }
  uVar8 = (int)*(uint *)(param_2 + 8) >> 0x1f;
  FUN_00474dd0(*(undefined4 *)(param_2 + 4),(*(uint *)(param_2 + 8) ^ uVar8) - uVar8,0,1,0,0);
LAB_004752d3:
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iStack_8 = 0;
  }
  else {
    iStack_8 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  }
  uVar9 = (int)*(uint *)(param_2 + 8) >> 0x1f;
  uVar8 = *(uint *)(param_2 + 8) ^ uVar9;
  iVar6 = param_2;
  if (uVar8 != uVar9 && -1 < (int)(uVar8 - uVar9)) {
    do {
      iVar7 = *(int *)(iVar6 + 4);
      iVar12 = 0;
      if (0 < iVar7) {
        do {
          iVar6 = (iVar7 * iVar10 + iVar12) * 3;
          bVar1 = *(byte *)(iVar6 + iVar4);
          bVar2 = *(byte *)(iVar4 + 1 + iVar6);
          bVar3 = *(byte *)(iVar4 + 2 + iVar6);
          iVar6 = (**(code **)(*DAT_0083ad50 + 0xb4))();
          if (iVar6 == 1) {
            uVar11 = ((ushort)(bVar3 >> 3) << 6 | (ushort)(bVar2 >> 2)) << 5 | (ushort)(bVar1 >> 3);
          }
          else {
            uVar11 = ((ushort)(bVar3 >> 3) << 5 | (ushort)(bVar2 >> 3)) << 5 | (ushort)(bVar1 >> 3);
          }
          if (*(int **)(param_1 + 4) == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
          }
          iVar6 = iVar6 * iVar10 + iVar12;
          iVar12 = iVar12 + 1;
          *(ushort *)(iStack_8 + iVar6 * 2) = uVar11;
          iVar7 = *(int *)(param_2 + 4);
          iVar6 = param_2;
        } while (iVar12 < iVar7);
      }
      iVar10 = iVar10 + 1;
      uVar8 = (int)*(uint *)(iVar6 + 8) >> 0x1f;
    } while (iVar10 < (int)((*(uint *)(iVar6 + 8) ^ uVar8) - uVar8));
  }
  FUN_004a5007(iVar4);
  FUN_004a5007(param_2);
  return 0;
}

