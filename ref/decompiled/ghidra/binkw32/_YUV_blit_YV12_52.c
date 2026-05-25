/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_blit_YV12@52 @ 0x300165A0 */


void _YUV_blit_YV12_52(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                      uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                      int param_12,uint param_13)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
                    /* 0x165a0  78  _YUV_blit_YV12@52 */
  uVar6 = param_4;
  if ((param_2 & 1) == 0) {
    if ((param_7 & 1) != 0) {
      param_7 = param_7 + 1;
      goto LAB_300165c5;
    }
  }
  else {
    if ((param_7 & 1) != 0) {
      param_7 = param_7 + 1;
    }
    param_2 = param_2 + 1;
LAB_300165c5:
    param_9 = param_9 - 1;
  }
  if ((param_9 & 1) != 0) {
    param_9 = param_9 - 1;
  }
  if ((param_3 & 1) == 0) {
    if ((param_8 & 1) == 0) goto LAB_30016600;
    param_8 = param_8 + 1;
  }
  else {
    if ((param_8 & 1) != 0) {
      param_8 = param_8 + 1;
    }
    param_3 = param_3 + 1;
  }
  param_10 = param_10 - 1;
LAB_30016600:
  if ((param_10 & 1) != 0) {
    param_10 = param_10 - 1;
  }
  puVar1 = (undefined4 *)(param_8 * param_11 + param_6 + param_7);
  puVar7 = (undefined4 *)(param_3 * param_4 + param_1 + param_2);
  if (param_10 != 0) {
    param_4 = param_10;
    do {
      puVar11 = puVar1;
      puVar12 = puVar7;
      for (uVar3 = param_9 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar3 = param_9 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + param_11);
      puVar7 = (undefined4 *)((int)puVar7 + uVar6);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if ((param_13 & 0x10000) == 0) {
    iVar2 = param_11 * param_12;
  }
  else {
    iVar2 = (param_11 * param_12 >> 2) + param_11 * param_12;
  }
  uVar3 = param_10 >> 1;
  uVar10 = param_9 >> 1;
  uVar8 = param_11 >> 1;
  iVar4 = (param_8 >> 1) * uVar8;
  puVar1 = (undefined4 *)(iVar2 + param_6 + iVar4 + (param_7 >> 1));
  uVar9 = uVar6 >> 1;
  puVar7 = (undefined4 *)(uVar6 * param_5 + param_1 + (param_3 >> 1) * uVar9 + (param_2 >> 1));
  uVar6 = uVar3;
  if ((param_13 & 0x20000) == 0) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar11 = puVar1;
      puVar12 = puVar7;
      for (uVar5 = param_9 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar5 = uVar10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + uVar8);
      puVar7 = (undefined4 *)((int)puVar7 + uVar9);
    }
  }
  else {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar1 = puVar7;
      for (uVar5 = param_9 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = 0x80808080;
        puVar1 = puVar1 + 1;
      }
      for (uVar5 = uVar10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar1 = 0x80;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      puVar7 = (undefined4 *)((int)puVar7 + uVar9);
    }
  }
  if ((param_13 & 0x10000) == 0) {
    iVar2 = param_6 + (uVar8 * param_12 >> 1) + uVar8 * param_12 * 2;
  }
  else {
    iVar2 = param_6 + uVar8 * param_12 * 2;
  }
  puVar1 = (undefined4 *)(iVar2 + iVar4 + (param_7 >> 1));
  puVar7 = (undefined4 *)
           ((uVar9 * param_5 >> 1) + param_1 + ((param_3 >> 1) + param_5 * 2) * uVar9 +
           (param_2 >> 1));
  if ((param_13 & 0x20000) == 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar11 = puVar1;
      puVar12 = puVar7;
      for (uVar6 = param_9 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = uVar10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + uVar8);
      puVar7 = (undefined4 *)((int)puVar7 + uVar9);
    }
  }
  else if (uVar3 != 0) {
    do {
      puVar1 = puVar7;
      for (uVar6 = param_9 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar1 = 0x80808080;
        puVar1 = puVar1 + 1;
      }
      puVar7 = (undefined4 *)((int)puVar7 + uVar9);
      uVar3 = uVar3 - 1;
      for (uVar6 = uVar10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar1 = 0x80;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    } while (uVar3 != 0);
    return;
  }
  return;
}

