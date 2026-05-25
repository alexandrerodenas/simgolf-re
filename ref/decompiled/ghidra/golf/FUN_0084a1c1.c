/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084a1c1 @ 0x0084A1C1 */


void FUN_0084a1c1(undefined4 param_1,int param_2,int param_3,char *param_4,char *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int local_240;
  undefined4 local_23c;
  char local_238 [260];
  int *local_134;
  undefined1 local_130 [4];
  uint local_12c;
  int local_128 [73];
  
  local_240 = *(int *)(param_2 + 0x18);
  local_134 = local_128;
  local_12c = (**(code **)(param_3 + 0x28))(param_1,0);
  if (local_12c != 0xffffffff) {
    while (uVar2 = (**(code **)(param_3 + 0x24))(param_1,local_240,0,0), uVar2 < local_12c) {
      iVar3 = (**(code **)(param_3 + 0x14))(param_1,local_128,0x121,local_130,0);
      if (iVar3 != 0) {
        if ((*local_134 != 1) || (local_134[1] != 0)) break;
        pcVar6 = local_238;
        for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar6[0] = '\0';
          pcVar6[1] = '\0';
          pcVar6[2] = '\0';
          pcVar6[3] = '\0';
          pcVar6 = pcVar6 + 4;
        }
        uVar2 = 0xffffffff;
        pcVar6 = param_4;
        do {
          pcVar4 = pcVar6;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar4 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar4;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        pcVar6 = pcVar4 + -uVar2;
        pcVar4 = local_238;
        for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar4 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar4 = pcVar4 + 1;
        }
        pcVar4 = (char *)FUN_0084b630(*(undefined4 *)(param_3 + 0x8c),local_238,0x5c);
        uVar2 = 0xffffffff;
        pcVar6 = local_238;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 != local_238 + (~uVar2 - 2)) {
          uVar2 = 0xffffffff;
          pcVar6 = local_238;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          local_238[~uVar2 - 1] = '\\';
        }
        uVar2 = 0xffffffff;
        pcVar6 = param_5;
        do {
          pcVar4 = pcVar6;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar4 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar4;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        iVar3 = -1;
        pcVar6 = local_238;
        do {
          pcVar7 = pcVar6;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        pcVar6 = pcVar4 + -uVar2;
        pcVar4 = pcVar7 + -1;
        for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar4 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar4 = pcVar4 + 1;
        }
        pcVar4 = (char *)FUN_0084b630(*(undefined4 *)(param_3 + 0x8c),local_238,0x5c);
        uVar2 = 0xffffffff;
        pcVar6 = local_238;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 != local_238 + (~uVar2 - 2)) {
          uVar2 = 0xffffffff;
          pcVar6 = local_238;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          local_238[~uVar2 - 1] = '\\';
        }
        uVar2 = 0xffffffff;
        piVar8 = local_134 + 7;
        do {
          piVar9 = piVar8;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          piVar9 = (int *)((int)piVar8 + 1);
          iVar3 = *piVar8;
          piVar8 = piVar9;
        } while ((char)iVar3 != '\0');
        uVar2 = ~uVar2;
        iVar3 = -1;
        pcVar6 = local_238;
        do {
          pcVar4 = pcVar6;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar4 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar4;
        } while (cVar1 != '\0');
        pcVar6 = (char *)((int)piVar9 - uVar2);
        pcVar4 = pcVar4 + -1;
        for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar4 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar4 = pcVar4 + 1;
        }
        (**(code **)(param_3 + 0x20))(local_238);
      }
      local_240 = local_240 + local_134[3] + local_134[4];
    }
    pcVar6 = local_238;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + 4;
    }
    uVar2 = 0xffffffff;
    do {
      pcVar6 = param_4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = param_4 + 1;
      cVar1 = *param_4;
      param_4 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar6 = pcVar6 + -uVar2;
    pcVar4 = local_238;
    for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar4 = pcVar4 + 1;
    }
    local_23c = (char *)FUN_0084b630(*(undefined4 *)(param_3 + 0x8c),local_238,0x5c);
    uVar2 = 0xffffffff;
    pcVar6 = local_238;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (local_23c != local_238 + (~uVar2 - 2)) {
      uVar2 = 0xffffffff;
      pcVar6 = local_238;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_238[~uVar2 - 1] = '\\';
    }
    uVar2 = 0xffffffff;
    do {
      pcVar6 = param_5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = param_5 + 1;
      cVar1 = *param_5;
      param_5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar4 = local_238;
    do {
      pcVar7 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -uVar2;
    pcVar4 = pcVar7 + -1;
    for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar4 = pcVar4 + 1;
    }
    (**(code **)(param_3 + 0x48))(local_238);
  }
  return;
}

