/* Ghidra decompiled: golf.exe */
/* Function: FUN_00849de9 @ 0x00849DE9 */


undefined2
FUN_00849de9(undefined4 param_1,int param_2,int *param_3,char *param_4,char *param_5,int param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_118;
  char local_114 [260];
  undefined2 local_10;
  int local_c;
  int local_8;
  
  local_c = *param_3;
  pcVar5 = local_114;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_4;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar7 = local_114;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_118 = (char *)FUN_0084b630(*(undefined4 *)(local_c + 0x8c),local_114,0x5c);
  uVar3 = 0xffffffff;
  pcVar5 = local_114;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (local_118 != local_114 + (~uVar3 - 2)) {
    uVar3 = 0xffffffff;
    pcVar5 = local_114;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_114[~uVar3 - 1] = '\\';
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_5 + 1;
      cVar1 = *param_5;
      param_5 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar2 = -1;
    pcVar7 = local_114;
    do {
      pcVar6 = pcVar7;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_118 = (char *)FUN_0084b630(*(undefined4 *)(local_c + 0x8c),local_114,0x5c);
    uVar3 = 0xffffffff;
    pcVar5 = local_114;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (local_118 != local_114 + (~uVar3 - 2)) {
      uVar3 = 0xffffffff;
      pcVar5 = local_114;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      local_114[~uVar3 - 1] = '\\';
    }
  }
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(param_2 + 0x1c);
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  pcVar5 = local_114;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_8 = (**(code **)(local_c + 0x10))(local_114,0xc0000000,0,0,2,0x10000000,0);
  if (local_8 == -1) {
    iVar2 = (**(code **)(local_c + 0x78))();
    if ((iVar2 == 0x20) && (*(int *)(param_2 + 0x14) == 1)) {
      local_10 = 1;
    }
    else {
      FUN_0084ae2d(param_3,iVar2,local_114);
      local_10 = 0;
    }
  }
  else {
    local_10 = FUN_0084a009(param_1,local_8,param_6 + *(int *)(param_2 + 0x10),
                            *(undefined4 *)(param_2 + 0xc),param_3);
    (**(code **)(local_c + 0x1c))(local_8);
  }
  return local_10;
}

