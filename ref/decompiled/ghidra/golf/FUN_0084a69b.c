/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084a69b @ 0x0084A69B */


bool FUN_0084a69b(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int _Radix;
  undefined4 local_588;
  undefined4 local_584;
  char acStack_57a [2];
  undefined4 local_578 [65];
  char local_474 [19];
  char cStack_461;
  undefined4 local_460 [256];
  char local_60 [20];
  int local_4c;
  undefined4 local_48 [11];
  undefined4 local_1c;
  undefined2 local_18;
  
  local_4c = *param_1;
  uVar2 = FUN_0084aa1e(0x17);
  FUN_0084ad10(local_474,uVar2);
  puVar9 = local_578;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = param_2;
  do {
    pcVar3 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar3 + -uVar5;
  pcVar3 = (char *)local_578;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = (char *)FUN_0084b630(*(undefined4 *)(local_4c + 0x8c),local_578,0x5c);
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_578;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != acStack_57a + ~uVar5) {
    uVar5 = 0xffffffff;
    pcVar7 = (char *)local_578;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    acStack_57a[~uVar5 + 1] = '\\';
  }
  uVar5 = 0xffffffff;
  pcVar7 = local_474;
  do {
    pcVar3 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar7 = (char *)local_578;
  do {
    pcVar8 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar3 + -uVar5;
  pcVar3 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  local_60[0] = '\0';
  local_60[1] = '\0';
  local_60[2] = '\0';
  local_60[3] = '\0';
  local_60[4] = '\0';
  local_60[5] = '\0';
  local_60[6] = '\0';
  local_60[7] = '\0';
  local_60[8] = '\0';
  local_60[9] = '\0';
  local_60[10] = '\0';
  local_60[0xb] = '\0';
  local_60[0xc] = '\0';
  local_60[0xd] = '\0';
  local_60[0xe] = '\0';
  local_60[0xf] = '\0';
  local_60[0x10] = '\0';
  local_60[0x11] = '\0';
  local_60[0x12] = '\0';
  local_60[0x13] = '\0';
  _Radix = 10;
  pcVar7 = local_60;
  iVar4 = (**(code **)(local_4c + 0x58))();
  __itoa(iVar4,pcVar7,_Radix);
  puVar9 = local_460;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_460;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)local_460 + (~uVar5 - 1)) = 0x22;
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_578;
  do {
    pcVar3 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar7 = (char *)local_460;
  do {
    pcVar8 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar3 + -uVar5;
  pcVar3 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_460;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)local_460 + (~uVar5 - 1)) = 0x22;
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_460;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)local_460 + (~uVar5 - 1)) = 0x20;
  uVar5 = 0xffffffff;
  pcVar7 = local_60;
  do {
    pcVar3 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar7 = (char *)local_460;
  do {
    pcVar8 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar3 + -uVar5;
  pcVar3 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_460;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)local_460 + (~uVar5 - 1)) = 0x20;
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_460;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)local_460 + (~uVar5 - 1)) = 0x22;
  uVar5 = 0xffffffff;
  pcVar7 = param_2;
  do {
    pcVar3 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar7 = (char *)local_460;
  do {
    pcVar8 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar3 + -uVar5;
  pcVar3 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_460;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)local_460 + (~uVar5 - 1)) = 0x22;
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_460;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)local_460 + (~uVar5 - 1)) = 0x22;
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar3 = (char *)local_460;
  do {
    pcVar8 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar5;
  pcVar3 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_460;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)local_460 + (~uVar5 - 1)) = 0x22;
  puVar9 = local_48;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_48[0] = 0x44;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_1c = 1;
  local_18 = 0;
  iVar4 = (**(code **)(local_4c + 0x5c))
                    (local_578,local_460,0,0,0,0x30,0,param_2,local_48,&local_588);
  if (iVar4 == 0) {
    uVar2 = (**(code **)(local_4c + 0x78))(local_578);
    FUN_0084b0fc(param_1,uVar2);
  }
  else {
    (**(code **)(local_4c + 0x1c))(local_588);
    (**(code **)(local_4c + 0x1c))(local_584);
  }
  return iVar4 != 0;
}

