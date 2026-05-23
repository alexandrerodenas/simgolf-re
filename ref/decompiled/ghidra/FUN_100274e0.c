/* Ghidra decompiled: sound.dll */
/* Function: FUN_100274e0 @ 0x100274E0 */
/* Body size: 457 addresses */


int __cdecl FUN_100274e0(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  int local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  if (param_5 == 1) {
    local_14 = *(uint *)(param_4 + 0x220);
    local_18 = param_4 + 0x1358;
    iVar8 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar8 + 0x20);
    if (local_8 < *(uint *)(iVar8 + 0x1c)) {
      local_8 = *(uint *)(iVar8 + 0x24);
    }
  }
  else {
    local_18 = param_4 + 0xb8;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (((*(byte *)(param_4 + 0x9c) & 1) == 0) && (bVar7)) {
      local_8 = *(uint *)(param_4 + 0xd4);
    }
    else {
      local_8 = *(uint *)(param_4 + 0x20);
    }
    local_14 = *(uint *)(param_4 + 0x4c);
  }
  puVar11 = (undefined8 *)*param_1;
  puVar10 = (undefined4 *)(*param_2 + *(int *)(local_18 + 4) * 4);
  iVar8 = param_3;
  do {
    uVar5 = *puVar10;
    uVar6 = puVar10[1];
    sVar3 = *(short *)(local_18 + 2);
    sVar4 = *(short *)(local_18 + 2);
    puVar1 = (uint *)(local_18 + 2);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + local_14;
    *(short *)(local_18 + 6) = *(short *)(local_18 + 6) + (ushort)CARRY4(uVar2,local_14);
    puVar10 = (undefined4 *)(*param_2 + *(int *)(local_18 + 4) * 4);
    local_c = 4;
    iVar9 = 0;
    if (iVar8 != 1) {
      uStack_30 = *puVar10;
      uStack_28 = puVar10[1];
      uStack_20 = CONCAT22(*(short *)(local_18 + 2) + -0x8000,*(short *)(local_18 + 2) + -0x8000);
      puVar1 = (uint *)(local_18 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + local_14;
      *(short *)(local_18 + 6) = *(short *)(local_18 + 6) + (ushort)CARRY4(uVar2,local_14);
      puVar10 = (undefined4 *)(*param_2 + *(int *)(local_18 + 4) * 4);
      local_c = 8;
      iVar9 = iVar8 + -2;
    }
    uVar12 = psubsw(CONCAT44(uStack_28,uVar6),CONCAT44(uStack_30,uVar5));
    uVar12 = pmulhw(uVar12,CONCAT44(uStack_20,CONCAT22(sVar3 + -0x8000,sVar4 + -0x8000)));
    uVar12 = paddsw(CONCAT44(uStack_30,uVar5),uVar12);
    *puVar11 = uVar12;
    puVar11 = (undefined8 *)((int)puVar11 + local_c);
  } while (((int)puVar10 < (int)local_8) && (iVar8 = iVar9, 0 < iVar9));
  iVar8 = *(int *)(local_18 + 4);
  *param_1 = (int)puVar11;
  if (param_5 != 1) {
    *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar8;
    return param_3 - iVar9;
  }
  *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar8;
  return param_3 - iVar9;
}

