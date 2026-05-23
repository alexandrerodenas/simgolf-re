/* Ghidra decompiled: sound.dll */
/* Function: FUN_10033300 @ 0x10033300 */
/* Body size: 1203 addresses */


undefined4 __fastcall FUN_10033300(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  int local_4;
  
  if ((*(byte *)(param_1 + 0x16) & 0x20) != 0) {
    return 0x26;
  }
  iVar1 = param_1[2];
  local_c = *(undefined4 **)(iVar1 + 0x18);
  puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x1c) + -4);
  if (puVar2 < local_c) {
    puVar2 = (undefined4 *)((int)puVar2 + *(int *)(iVar1 + 0x14));
  }
  puVar5 = (undefined4 *)param_1[0x4de];
  uVar3 = (int)puVar2 - (int)puVar5 & param_1[0x4dd];
  if (uVar3 == 0) {
    uVar3 = *(uint *)(iVar1 + 0x14);
  }
  uVar4 = param_1[0x16] & 4;
  if (((uVar4 == 0) || (param_1[0x6e] != 0)) || (param_1[0x4e8] != 0)) {
    if (((uVar4 == 0) || (param_1[0x6e] == 0)) || ((*(byte *)(param_1 + 0x16) & 0x80) != 0)) {
      local_8 = param_1[0x5e] - param_1[0x5c];
    }
    else {
      local_8 = (param_1[0x4db] + param_1[0x4da]) - param_1[0x5c];
    }
  }
  else {
    local_8 = (param_1[0x4db] + param_1[0x4da]) - param_1[0x5c];
  }
  if (local_8 < uVar3) {
    if (((uVar4 == 0) || ((*(byte *)(param_1 + 0x16) & 0x80) != 0)) || (param_1[0x4e8] != 0)) {
      if (*(undefined1 **)(iVar1 + 0x24) < (undefined1 *)((int)puVar5 + local_8)) {
        uVar3 = (int)*(undefined1 **)(iVar1 + 0x24) - (int)puVar5;
        local_10 = local_8 - uVar3;
      }
      else {
        local_10 = 0;
        local_c = (undefined4 *)0x0;
        uVar3 = local_8;
      }
      uVar4 = param_1[0xb] - (int)param_1[10];
      local_4 = 0;
      if (uVar4 < uVar3) {
        local_4 = 0x2b;
        uVar3 = uVar4;
      }
      puVar2 = (undefined4 *)param_1[10];
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      param_1[10] = param_1[10] + uVar3;
      mmioSetInfo((HMMIO)*param_1,(LPCMMIOINFO)(param_1 + 3),0);
      if ((local_c == (undefined4 *)0x0) || (local_4 != 0)) {
        iVar1 = uVar3 + param_1[0x4de];
      }
      else {
        uVar4 = param_1[0xb] - (int)param_1[10];
        if (uVar4 < local_10) {
          local_4 = 0x2b;
          local_10 = uVar4;
        }
        puVar2 = (undefined4 *)param_1[10];
        for (uVar4 = local_10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *local_c = *puVar2;
          puVar2 = puVar2 + 1;
          local_c = local_c + 1;
        }
        for (uVar4 = local_10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)local_c = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          local_c = (undefined4 *)((int)local_c + 1);
        }
        param_1[10] = param_1[10] + local_10;
        mmioSetInfo((HMMIO)*param_1,(LPCMMIOINFO)(param_1 + 3),0);
        iVar1 = *(int *)(param_1[2] + 0x18) + local_10;
        uVar3 = uVar3 + local_10;
      }
      param_1[0x4de] = iVar1;
      param_1[0x5c] = param_1[0x5c] + uVar3;
      if (local_4 == 0x2b) {
        mmioAdvance((HMMIO)*param_1,(LPMMIOINFO)(param_1 + 3),0);
      }
      param_1[0x16] = param_1[0x16] & 0xfffffbff;
      *(int *)(param_1[2] + 0x20) = iVar1;
      if (param_1[0x5c] == param_1[0x5e]) {
        param_1[0x16] = param_1[0x16] | 0x20;
      }
      return 0;
    }
    if (*(undefined1 **)(iVar1 + 0x24) < (undefined1 *)((int)puVar5 + local_8)) {
      local_10 = (int)*(undefined1 **)(iVar1 + 0x24) - (int)puVar5;
      uVar3 = local_8 - local_10;
    }
    else {
      uVar3 = 0;
      local_c = (undefined4 *)0x0;
      local_10 = local_8;
    }
    uVar4 = param_1[0xb] - (int)param_1[10];
    local_4 = 0;
    if (uVar4 < local_10) {
      local_4 = 0x2b;
      local_10 = uVar4;
    }
    puVar2 = (undefined4 *)param_1[10];
    for (uVar4 = local_10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = local_10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    param_1[10] = param_1[10] + local_10;
    mmioSetInfo((HMMIO)*param_1,(LPCMMIOINFO)(param_1 + 3),0);
    if ((local_c == (undefined4 *)0x0) || (local_4 != 0)) {
      iVar1 = local_10 + param_1[0x4de];
      uVar4 = local_10;
    }
    else {
      uVar4 = param_1[0xb] - (int)param_1[10];
      if (uVar4 < uVar3) {
        local_4 = 0x2b;
        uVar3 = uVar4;
      }
      puVar2 = (undefined4 *)param_1[10];
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_c = *puVar2;
        puVar2 = puVar2 + 1;
        local_c = local_c + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)local_c = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        local_c = (undefined4 *)((int)local_c + 1);
      }
      param_1[10] = param_1[10] + uVar3;
      mmioSetInfo((HMMIO)*param_1,(LPCMMIOINFO)(param_1 + 3),0);
      iVar1 = *(int *)(param_1[2] + 0x18) + uVar3;
      uVar4 = local_10 + uVar3;
    }
    param_1[0x4de] = iVar1;
    param_1[0x5c] = param_1[0x5c] + uVar4;
    if (local_4 == 0) {
      if (local_10 + uVar3 == local_8) {
        mmioSeek((HMMIO)*param_1,-param_1[0x4da],1);
        mmioGetInfo((HMMIO)*param_1,(LPMMIOINFO)(param_1 + 3),0);
        mmioAdvance((HMMIO)*param_1,(LPMMIOINFO)(param_1 + 3),0);
        param_1[0x5c] = param_1[0x4db];
        param_1[0x16] = param_1[0x16] & 0xfffffbff;
        return 0;
      }
      goto LAB_1003366b;
    }
    if (local_4 != 0x2b) goto LAB_1003366b;
  }
  else {
    if (*(undefined1 **)(iVar1 + 0x24) < (undefined1 *)((int)puVar5 + uVar3)) {
      uVar4 = (int)*(undefined1 **)(iVar1 + 0x24) - (int)puVar5;
      local_10 = uVar3 - uVar4;
    }
    else {
      local_10 = 0;
      local_c = (undefined4 *)0x0;
      uVar4 = uVar3;
    }
    local_8 = 0;
    uVar3 = param_1[0xb] - (int)param_1[10];
    if (uVar3 < uVar4) {
      local_8 = 0x2b;
      uVar4 = uVar3;
    }
    puVar2 = (undefined4 *)param_1[10];
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    param_1[10] = param_1[10] + uVar4;
    mmioSetInfo((HMMIO)*param_1,(LPCMMIOINFO)(param_1 + 3),0);
    if ((local_c == (undefined4 *)0x0) || (local_8 != 0)) {
      iVar1 = uVar4 + param_1[0x4de];
    }
    else {
      uVar3 = param_1[0xb] - (int)param_1[10];
      if (uVar3 < local_10) {
        local_8 = 0x2b;
        local_10 = uVar3;
      }
      puVar2 = (undefined4 *)param_1[10];
      for (uVar3 = local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *local_c = *puVar2;
        puVar2 = puVar2 + 1;
        local_c = local_c + 1;
      }
      for (uVar3 = local_10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)local_c = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        local_c = (undefined4 *)((int)local_c + 1);
      }
      param_1[10] = param_1[10] + local_10;
      mmioSetInfo((HMMIO)*param_1,(LPCMMIOINFO)(param_1 + 3),0);
      iVar1 = *(int *)(param_1[2] + 0x18) + local_10;
      uVar4 = uVar4 + local_10;
    }
    param_1[0x4de] = iVar1;
    param_1[0x5c] = param_1[0x5c] + uVar4;
    *(undefined4 *)(param_1[2] + 0x20) = *(undefined4 *)(param_1[2] + 0x24);
    if (local_8 == 0) goto LAB_1003366b;
  }
  mmioAdvance((HMMIO)*param_1,(LPMMIOINFO)(param_1 + 3),0);
LAB_1003366b:
  param_1[0x16] = param_1[0x16] & 0xfffffbff;
  return 0;
}

