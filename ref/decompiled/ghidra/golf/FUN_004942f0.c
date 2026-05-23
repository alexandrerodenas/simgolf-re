/* Ghidra decompiled: golf.exe */
/* Function: FUN_004942f0 @ 0x004942F0 */
/* Body size: 517 addresses */


undefined4 FUN_004942f0(char *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char local_14e [2];
  char *local_14c;
  uint uStack_148;
  char *local_144;
  char acStack_140 [80];
  char acStack_f0 [80];
  char acStack_a0 [80];
  char acStack_50 [80];
  
  local_14e[0] = '\0';
  local_14e[1] = 0;
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    return 3;
  }
  local_144 = param_2;
LAB_00494326:
  pcVar3 = _strstr(param_1,&DAT_004c6158);
  if (pcVar3 != (char *)0x0) {
    local_14c = pcVar3 + 1;
    switch(*local_14c) {
    case '$':
      iVar6 = 1 - (int)param_1;
      iVar1 = 1 - (int)param_1;
      pcVar8 = param_1;
      pcVar9 = param_2;
      for (uVar5 = (uint)(pcVar3 + iVar6) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      param_1 = pcVar3 + 2;
      for (uVar5 = (uint)(pcVar3 + iVar6) & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      param_2[(int)(pcVar3 + iVar1)] = '\0';
      param_2 = param_2 + (int)(pcVar3 + iVar1);
      goto LAB_00494326;
    case '<':
      uVar5 = (int)pcVar3 - (int)param_1;
      pcVar8 = param_2 + uVar5;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)param_2 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_2 = *param_1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      *pcVar8 = '\0';
      param_1 = _strstr(pcVar3,&DAT_004e4710);
      param_2 = pcVar8;
      if (param_1 != (char *)0x0) {
        pcVar3 = pcVar3 + 2;
        param_1 = param_1 + 1;
        cVar2 = *pcVar3;
        while (cVar2 == ' ') {
          pcVar9 = pcVar3 + 1;
          pcVar3 = pcVar3 + 1;
          cVar2 = *pcVar9;
        }
        cVar2 = *pcVar3;
        iVar6 = -1;
        uVar5 = 0;
        if ((cVar2 == 'M') || (cVar2 == 'm')) {
          uStack_148 = 0;
        }
        else if ((cVar2 == 'F') || (cVar2 == 'f')) {
          uStack_148 = 1;
        }
        else if ((cVar2 == 'N') || (cVar2 == 'n')) {
          uStack_148 = 2;
        }
        else if (cVar2 == '#') {
          pcVar9 = pcVar3 + 1;
          pcVar3 = pcVar3 + 1;
          iVar6 = *pcVar9 + -0x30;
          uVar5 = (uint)(*(int *)(&DAT_0083dda8 + *pcVar9 * 4) != 1);
        }
        else {
          iVar6 = cVar2 + -0x30;
          if (9 < iVar6) goto LAB_00494326;
          uStack_148 = *(uint *)(&DAT_0083e8b8 + iVar6 * 4);
          uVar5 = *(uint *)(&DAT_0083d3c8 + iVar6 * 4);
        }
        pcVar9 = pcVar3 + 1;
        if (((iVar6 < 0) && (cVar2 = *pcVar9, '/' < cVar2)) && (cVar2 < ':')) {
          uVar5 = (int)cVar2 - 0x31;
          pcVar9 = pcVar3 + 2;
        }
        cVar2 = *pcVar9;
        while (cVar2 == ' ') {
          pcVar3 = pcVar9 + 1;
          pcVar9 = pcVar9 + 1;
          cVar2 = *pcVar3;
        }
        if (*pcVar9 == ':') {
          pcVar9 = pcVar9 + 1;
        }
        uVar7 = 0;
        pcVar3 = pcVar9;
        if (pcVar9 < param_1) {
          do {
            if (*pcVar3 == ':') {
              uVar7 = uVar7 + 1;
            }
            pcVar3 = pcVar3 + 1;
          } while (pcVar3 < param_1);
          if (uVar7 == 0) goto LAB_004946d5;
LAB_00494720:
          if (uVar7 == 1) {
            uVar10 = (uint)(uVar5 != 0);
          }
          else {
            uVar10 = uStack_148;
            if (uVar7 != 2) {
              if (uVar7 == 3) {
                uVar10 = (uint)(uStack_148 != 0) + (-(uint)(uVar5 != 0) & 2);
              }
              else {
                uVar10 = uVar7;
                if (uVar7 == 5) {
                  uVar10 = (-(uint)(uVar5 != 0) & 3) + uStack_148;
                }
              }
            }
          }
          while (uVar10 != 0) {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            if (cVar2 == ':') {
              uVar10 = uVar10 - 1;
            }
          }
        }
        else {
LAB_004946d5:
          iVar6 = FUN_004935f0(pcVar9);
          if (iVar6 != 0) {
            pcVar3 = (char *)FUN_004935f0(pcVar9);
            if (9 < *pcVar3 + -0x30) goto LAB_00494326;
            pcVar9 = &DAT_0083e8e0 + (*pcVar3 + -0x30) * 0x100;
            cVar2 = *pcVar9;
            pcVar3 = pcVar9;
            if (cVar2 != '\0') {
              do {
                if (cVar2 == ':') {
                  uVar7 = uVar7 + 1;
                }
                cVar2 = pcVar3[1];
                pcVar3 = pcVar3 + 1;
              } while (cVar2 != '\0');
              goto LAB_00494720;
            }
          }
        }
        cVar2 = *pcVar9;
        while (((cVar2 != '\0' && (cVar2 != ':')) && (cVar2 != '>'))) {
          *pcVar8 = cVar2;
          pcVar3 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
          cVar2 = *pcVar3;
        }
        *pcVar8 = '\0';
        param_2 = pcVar8;
        goto LAB_00494326;
      }
      param_1 = local_14c;
      goto LAB_00494326;
    case 'D':
      iVar6 = _strncmp(pcVar3,s__DROPDOWN_004e4248,9);
      if ((iVar6 == 0) || (iVar6 = _strncmp(pcVar3,s__DROPLINK_004e423c,9), iVar6 == 0)) {
        pcVar8 = (char *)(pcVar3[9] + -0x30);
        local_14c = pcVar8;
        if (9 < (int)pcVar8) {
          return 0xe;
        }
        uVar5 = (int)pcVar3 - (int)param_1;
        pcVar9 = param_2 + uVar5;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)param_2 = *(undefined4 *)param_1;
          param_1 = param_1 + 4;
          param_2 = param_2 + 4;
        }
        local_14e[0] = '[';
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_2 = *param_1;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar4 = local_14e;
        do {
          pcVar11 = pcVar4;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar11 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar11;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        *pcVar9 = '\0';
        iVar6 = -1;
        pcVar4 = pcVar9;
        do {
          pcVar12 = pcVar4;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar12 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar12;
        } while (cVar2 != '\0');
        pcVar4 = pcVar11 + -uVar5;
        pcVar11 = pcVar12 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar11 = pcVar11 + 1;
        }
        pcVar4 = pcVar9 + 0xb;
        param_1 = pcVar3 + 10;
        *(undefined4 *)(pcVar9 + 1) = *(undefined4 *)pcVar3;
        *(undefined4 *)(pcVar9 + 5) = *(undefined4 *)(pcVar3 + 4);
        *(undefined2 *)(pcVar9 + 9) = *(undefined2 *)(pcVar3 + 8);
        *pcVar4 = '\0';
        if ((&DAT_0083fe08)[(int)pcVar8 * 2] == 0) {
          iVar6 = func_0x004a4ad0(*(undefined4 *)((int)pcVar8 * 8 + 0x83fdbc));
          if (iVar6 < 0x100) {
            pcVar3 = *(char **)(*(int *)((int)pcVar8 * 8 + 0x83fdb8) + 0x578 + iVar6 * 0x18);
          }
          else {
            pcVar3 = (char *)0x0;
          }
        }
        else {
          pcVar3 = (char *)func_0x004940e0(*(undefined4 *)((&DAT_0083fe08)[(int)pcVar8 * 2] + 0x1c))
          ;
        }
        uVar5 = 0xffffffff;
        do {
          pcVar8 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar8;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        local_14e[0] = '^';
        iVar6 = -1;
        pcVar3 = pcVar4;
        do {
          pcVar9 = pcVar3;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar9 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar2 != '\0');
        pcVar3 = pcVar8 + -uVar5;
        pcVar8 = pcVar9 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar8 = pcVar8 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar3 = local_14e;
        do {
          pcVar8 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar8;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar3 = pcVar4;
        do {
          pcVar9 = pcVar3;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar9 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar2 != '\0');
        pcVar3 = pcVar8 + -uVar5;
        pcVar8 = pcVar9 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar8 = pcVar8 + 1;
        }
        uVar5 = 0xffffffff;
        local_14e[0] = ']';
        pcVar3 = local_14e;
        do {
          pcVar8 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar8;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar3 = pcVar4;
        do {
          pcVar9 = pcVar3;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar9 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar2 != '\0');
        pcVar3 = pcVar8 + -uVar5;
        pcVar8 = pcVar9 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar8 = pcVar8 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar3 = pcVar4;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        param_2 = pcVar4 + (~uVar5 - 1);
        goto LAB_00494326;
      }
      break;
    case 'H':
      iVar6 = _strncmp(pcVar3,&DAT_004e4714,4);
      if (iVar6 == 0) {
        local_14c = (char *)(pcVar3[4] + -0x30);
        if (9 < (int)local_14c) {
          return 0xe;
        }
        uVar5 = (int)pcVar3 - (int)param_1;
        pcVar9 = param_2 + uVar5;
        pcVar8 = param_1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)param_2 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          param_2 = param_2 + 4;
        }
        param_1 = pcVar3 + 5;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          param_2 = param_2 + 1;
        }
        *pcVar9 = '\0';
        FUN_004ad425(*(undefined4 *)(&DAT_0083de68 + (int)local_14c * 4),acStack_f0,10);
        uVar5 = 0xffffffff;
        pcVar3 = acStack_f0;
        do {
          pcVar8 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar8;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar3 = pcVar9;
        do {
          pcVar4 = pcVar3;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar4 = pcVar3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar4;
        } while (cVar2 != '\0');
        pcVar3 = pcVar8 + -uVar5;
        pcVar8 = pcVar4 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar8 = pcVar8 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar3 = pcVar9;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        param_2 = pcVar9 + (~uVar5 - 1);
        goto LAB_00494326;
      }
      break;
    case 'L':
      iVar6 = _strncmp(pcVar3,s__LINK<_004e4254,6);
      if (iVar6 == 0) {
        iVar6 = 1 - (int)param_1;
        pcVar8 = param_1;
        pcVar9 = param_2;
        for (uVar5 = (uint)(pcVar3 + (1 - (int)param_1)) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar5 = (uint)(pcVar3 + (1 - (int)param_1)) & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        param_2[(int)(pcVar3 + iVar6)] = '\0';
        param_1 = local_14c;
        param_2 = param_2 + (int)(pcVar3 + iVar6);
        goto LAB_00494326;
      }
      iVar6 = _strncmp(pcVar3,s__LINK_004e4708,5);
      if (iVar6 == 0) {
        local_14c = (char *)(pcVar3[5] + -0x30);
        if (9 < (int)local_14c) {
          return 0xe;
        }
        pcVar8 = param_2 + (int)(pcVar3 + (5 - (int)param_1));
        pcVar9 = param_1;
        for (uVar5 = (uint)(pcVar3 + (5 - (int)param_1)) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)param_2 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          param_2 = param_2 + 4;
        }
        for (uVar5 = (uint)(pcVar3 + (5 - (int)param_1)) & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          param_2 = param_2 + 1;
        }
        uVar5 = 0xffffffff;
        *pcVar8 = '\0';
        pcVar9 = &DAT_004e4704;
        do {
          pcVar4 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar4 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar4;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar9 = pcVar8;
        do {
          pcVar11 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        pcVar9 = pcVar4 + -uVar5;
        pcVar4 = pcVar11 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar9 = &DAT_0083f368 + (int)local_14c * 0x108;
        do {
          pcVar4 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar4 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar4;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar9 = pcVar8;
        do {
          pcVar11 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        pcVar9 = pcVar4 + -uVar5;
        pcVar4 = pcVar11 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar9 = &DAT_004e4700;
        do {
          pcVar4 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar4 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar4;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar9 = pcVar8;
        do {
          pcVar11 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        pcVar9 = pcVar4 + -uVar5;
        pcVar4 = pcVar11 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
        }
        FUN_004ad425(*(undefined4 *)(&DAT_0083f46c + (int)local_14c * 0x108),acStack_50,10);
        uVar5 = 0xffffffff;
        pcVar9 = acStack_50;
        do {
          pcVar4 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar4 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar4;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar9 = pcVar8;
        do {
          pcVar11 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        pcVar9 = pcVar4 + -uVar5;
        pcVar4 = pcVar11 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar9 = &DAT_004e4710;
        do {
          pcVar4 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar4 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar4;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar9 = pcVar8;
        do {
          pcVar11 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        pcVar9 = pcVar4 + -uVar5;
        pcVar4 = pcVar11 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar9 = pcVar8;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        param_2 = pcVar8 + (~uVar5 - 1);
        param_1 = pcVar3 + 6;
        goto LAB_00494326;
      }
      break;
    case 'N':
      iVar6 = _strncmp(pcVar3,s__NUMBER_004e4724,7);
      if (iVar6 == 0) {
        local_14c = (char *)(pcVar3[7] + -0x30);
        if (9 < (int)local_14c) {
          return 0xe;
        }
        uVar5 = (int)pcVar3 - (int)param_1;
        pcVar8 = param_2 + uVar5;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)param_2 = *(undefined4 *)param_1;
          param_1 = param_1 + 4;
          param_2 = param_2 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_2 = *param_1;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
        }
        *pcVar8 = '\0';
        FUN_004ad425(*(undefined4 *)(&DAT_0083de68 + (int)local_14c * 4),acStack_a0,10);
        uVar5 = 0xffffffff;
        pcVar9 = acStack_a0;
        do {
          pcVar4 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar4 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar4;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar9 = pcVar8;
        do {
          pcVar11 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        pcVar9 = pcVar4 + -uVar5;
        pcVar4 = pcVar11 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar9 = pcVar8;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        param_2 = pcVar8 + (~uVar5 - 1);
        param_1 = pcVar3 + 8;
      }
      else {
        iVar6 = _strncmp(pcVar3,&DAT_004e471c,4);
        if (iVar6 != 0) break;
        local_14c = (char *)(pcVar3[4] + -0x30);
        if (9 < (int)local_14c) {
          return 0xe;
        }
        uVar5 = (int)pcVar3 - (int)param_1;
        pcVar8 = param_2 + uVar5;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)param_2 = *(undefined4 *)param_1;
          param_1 = param_1 + 4;
          param_2 = param_2 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_2 = *param_1;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
        }
        *pcVar8 = '\0';
        FUN_004ad425(*(undefined4 *)(&DAT_0083de68 + (int)local_14c * 4),acStack_140,10);
        uVar5 = 0xffffffff;
        pcVar9 = acStack_140;
        do {
          pcVar4 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar4 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar4;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar9 = pcVar8;
        do {
          pcVar11 = pcVar9;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        pcVar9 = pcVar4 + -uVar5;
        pcVar4 = pcVar11 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar9 = pcVar8;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        param_2 = pcVar8 + (~uVar5 - 1);
        param_1 = pcVar3 + 5;
      }
      goto LAB_00494326;
    }
    local_14c = (char *)FUN_004935f0(pcVar3);
    if ((local_14c == (char *)0x0) || (cVar2 = *local_14c, 9 < cVar2 + -0x30)) {
      return 0xe;
    }
    uVar7 = (int)pcVar3 - (int)param_1;
    pcVar3 = param_2 + uVar7;
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    *pcVar3 = '\0';
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_0083e8e0 + (cVar2 + -0x30) * 0x100;
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar8 = pcVar3;
    do {
      pcVar4 = pcVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar4 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar4;
    } while (cVar2 != '\0');
    pcVar8 = pcVar9 + -uVar5;
    pcVar9 = pcVar4 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar8 = pcVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    param_2 = pcVar3 + (~uVar5 - 1);
    param_1 = local_14c + 1;
    goto LAB_00494326;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar3 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = param_1 + 1;
    cVar2 = *param_1;
    param_1 = pcVar3;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  do {
    pcVar8 = param_2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar8;
  } while (cVar2 != '\0');
  pcVar3 = pcVar3 + -uVar5;
  pcVar8 = pcVar8 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar3 = local_144;
  if (DAT_0083fe5c == 1) {
    do {
      pcVar8 = (char *)0x0;
      iVar6 = 0;
      pcVar9 = &DAT_004e4688;
      do {
        pcVar4 = _strstr(pcVar3,pcVar9);
        if ((pcVar4 != (char *)0x0) && ((pcVar8 == (char *)0x0 || (pcVar4 < pcVar8)))) {
          local_144 = (char *)((iVar6 < 3) + 1);
          pcVar8 = pcVar4;
        }
        pcVar9 = pcVar9 + 0x14;
        iVar6 = iVar6 + 1;
      } while ((int)pcVar9 < 0x4e4700);
      if (pcVar8 == (char *)0x0) {
        return 0;
      }
      pcVar3 = local_144 + (int)pcVar8;
      cVar2 = pcVar3[2];
      if (((((cVar2 == 'a') || (cVar2 == 'e')) || (cVar2 == 'i')) ||
          ((cVar2 == 'o' || (cVar2 == 'u')))) ||
         ((((cVar2 == 'y' || ((cVar2 == 'h' || (cVar2 == 'H')))) || (cVar2 == 'A')) ||
          ((((cVar2 == 'E' || (cVar2 == 'I')) || (cVar2 == 'O')) ||
           ((cVar2 == 'U' || (cVar2 == 'Y')))))))) {
        *pcVar3 = '\'';
        do {
          pcVar9 = pcVar3 + 2;
          pcVar3 = pcVar3 + 1;
          *pcVar3 = *pcVar9;
        } while (*pcVar9 != '\0');
      }
      pcVar3 = pcVar8 + 1;
    } while (pcVar8 + 1 != (char *)0x0);
  }
  return 0;
}

