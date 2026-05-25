/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045af30 @ 0x0045AF30 */


int FUN_0045af30(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int local_214;
  uint local_210;
  int local_20c;
  int local_208;
  char local_200 [512];
  
  iVar2 = -1;
  uVar7 = 0;
  local_208 = 0;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_214 = 0;
  local_20c = 0;
  local_210 = 0xffffffff;
  if (iVar2 == -2) {
    return 0;
  }
  do {
    uVar5 = local_210;
    uVar3 = 0xffffffff;
    pcVar6 = (char *)((int)&DAT_0051a068 + uVar7);
    if (*(char *)((int)&DAT_0051a068 + uVar7) == '^') {
      local_208 = uVar7 + 2;
      *pcVar6 = ' ';
      local_214 = local_214 + 1;
      *(undefined1 *)((int)&DAT_0051a068 + uVar7 + 1) = 10;
      local_20c = -1;
    }
    if (*pcVar6 == '\n') {
      local_208 = uVar7 + 1;
      local_214 = local_214 + 1;
      local_20c = -1;
    }
    if (local_208 < (int)uVar7) {
      pcVar8 = (char *)((int)&DAT_0051a068 + local_208);
      do {
        pcVar9 = pcVar8;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar8 = pcVar9 + -uVar3;
      pcVar9 = local_200;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_200[uVar7 - local_208] = '\0';
      iVar2 = FUN_00477250(local_200);
      if ((param_1 * 8 < iVar2) && (local_210 != 0xffffffff)) {
        local_214 = local_214 + 1;
        local_20c = 0;
        pcVar6 = (char *)((int)&DAT_0051a068 + local_210);
        local_208 = local_210 + 1;
        local_210 = 0xffffffff;
        *pcVar6 = '\n';
        uVar7 = uVar5;
      }
    }
    if (*pcVar6 == '_') {
      *pcVar6 = ' ';
    }
    if (*pcVar6 == ' ') {
      local_210 = uVar7;
    }
    uVar5 = 0xffffffff;
    uVar7 = uVar7 + 1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  } while (uVar7 < ~uVar5 - 1);
  if (local_20c < 1) {
    return local_214;
  }
  uVar7 = 0xffffffff;
  pcVar6 = &DAT_004d3880;
  do {
    pcVar8 = pcVar6;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar2 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar9 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar7;
  pcVar8 = pcVar9 + -1;
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return local_214 + 1;
}

