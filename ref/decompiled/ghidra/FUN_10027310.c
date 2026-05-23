/* Ghidra decompiled: sound.dll */
/* Function: FUN_10027310 @ 0x10027310 */
/* Body size: 363 addresses */


int __cdecl FUN_10027310(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int local_14;
  uint local_10;
  uint local_8;
  
  if (param_5 == 1) {
    local_10 = *(uint *)(param_4 + 0x220);
    local_14 = param_4 + 0x1358;
    iVar4 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar4 + 0x20);
    if (local_8 < *(uint *)(iVar4 + 0x1c)) {
      local_8 = *(uint *)(iVar4 + 0x24);
    }
  }
  else {
    local_14 = param_4 + 0xb8;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((*(byte *)(param_4 + 0x9c) & 1) == 0) && (bVar3)) {
      local_8 = *(uint *)(param_4 + 0xd4);
    }
    else {
      local_8 = *(uint *)(param_4 + 0x20);
    }
    local_10 = *(uint *)(param_4 + 0x4c);
  }
  puVar6 = (undefined4 *)*param_1;
  puVar5 = (uint *)(*param_2 + *(int *)(local_14 + 4) * 4);
  iVar4 = param_3;
  do {
    uVar7 = psubsw((ulonglong)puVar5[1],(ulonglong)*puVar5);
    uVar7 = pmulhw(uVar7,(ulonglong)
                         CONCAT22(*(short *)(local_14 + 2) + -0x8000,
                                  *(short *)(local_14 + 2) + -0x8000));
    uVar7 = paddsw((ulonglong)*puVar5,uVar7);
    *puVar6 = (int)uVar7;
    puVar6 = puVar6 + 1;
    puVar5 = (uint *)(local_14 + 2);
    uVar1 = *puVar5;
    *puVar5 = *puVar5 + local_10;
    *(short *)(local_14 + 6) = *(short *)(local_14 + 6) + (ushort)CARRY4(uVar1,local_10);
    puVar5 = (uint *)(*param_2 + *(int *)(local_14 + 4) * 4);
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) break;
  } while ((int)puVar5 < (int)local_8);
  iVar2 = *(int *)(local_14 + 4);
  *param_1 = puVar6;
  if (param_5 != 1) {
    *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar2;
    return param_3 - iVar4;
  }
  *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar2;
  return param_3 - iVar4;
}

