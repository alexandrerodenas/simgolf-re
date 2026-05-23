/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475050 @ 0x00475050 */
/* Body size: 433 addresses */


undefined4 __thiscall FUN_00475050(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  undefined4 uStack_8;
  
  iVar8 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    FUN_00475410(param_3,param_2);
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
  }
  if (*(int *)(param_2 + 4) <= iVar4) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
    }
    uVar5 = (int)*(uint *)(param_2 + 8) >> 0x1f;
    if ((int)((*(uint *)(param_2 + 8) ^ uVar5) - uVar5) <= iVar4) goto LAB_004750c6;
  }
  uVar5 = (int)*(uint *)(param_2 + 8) >> 0x1f;
  FUN_00474dd0(*(undefined4 *)(param_2 + 4),(*(uint *)(param_2 + 8) ^ uVar5) - uVar5,0,1,0,0);
LAB_004750c6:
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    uStack_8 = 0;
  }
  else {
    uStack_8 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  }
  uVar6 = (int)*(uint *)(param_2 + 8) >> 0x1f;
  uVar5 = *(uint *)(param_2 + 8) ^ uVar6;
  if (uVar5 != uVar6 && -1 < (int)(uVar5 - uVar6)) {
    do {
      iVar4 = *(int *)(param_2 + 4);
      iVar7 = 0;
      if (0 < iVar4) {
        do {
          uVar5 = (uint)*(byte *)(iVar4 * iVar8 + iVar7 + param_3);
          bVar1 = *(byte *)(param_2 + 0x28 + uVar5 * 4);
          bVar2 = *(byte *)(param_2 + 0x29 + uVar5 * 4);
          bVar3 = *(byte *)(param_2 + 0x2a + uVar5 * 4);
          iVar4 = (**(code **)(*DAT_0083ad50 + 0xb4))();
          if (iVar4 == 1) {
            uVar9 = ((ushort)(bVar3 >> 3) << 6 | (ushort)(bVar2 >> 2)) << 5 | (ushort)(bVar1 >> 3);
          }
          else {
            uVar9 = ((ushort)(bVar3 >> 3) << 5 | (ushort)(bVar2 >> 3)) << 5 | (ushort)(bVar1 >> 3);
          }
          if (*(int **)(param_1 + 4) == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
          }
          iVar4 = iVar4 * iVar8 + iVar7;
          iVar7 = iVar7 + 1;
          *(ushort *)(uStack_8 + iVar4 * 2) = uVar9;
          iVar4 = *(int *)(param_2 + 4);
        } while (iVar7 < iVar4);
      }
      iVar8 = iVar8 + 1;
      uVar5 = (int)*(uint *)(param_2 + 8) >> 0x1f;
    } while (iVar8 < (int)((*(uint *)(param_2 + 8) ^ uVar5) - uVar5));
  }
  FUN_004a5007(param_3);
  FUN_004a5007(param_2);
  return 0;
}

