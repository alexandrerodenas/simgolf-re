/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084b350 @ 0x0084B350 */


undefined4 FUN_0084b350(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_120 [256];
  char local_20 [16];
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = *param_1;
  iVar2 = (**(code **)(local_c + 0x7c))(0x1300,0,param_2,0x400,&local_8,0,0);
  if (iVar2 == 0) {
    pcVar6 = local_120;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + 4;
    }
    local_20[0] = '\0';
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[4] = '\0';
    local_20[5] = '\0';
    local_20[6] = '\0';
    local_20[7] = '\0';
    local_20[8] = '\0';
    local_20[9] = '\0';
    local_20[10] = '\0';
    local_20[0xb] = '\0';
    local_20[0xc] = '\0';
    local_20[0xd] = '\0';
    local_20[0xe] = '\0';
    local_20[0xf] = '\0';
    __itoa(param_2,local_20,0x10);
    uVar3 = FUN_0084aa1e(0x22);
    FUN_0084ad10(local_120,uVar3);
    uVar4 = 0xffffffff;
    pcVar6 = local_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_120[~uVar4 - 1] = '(';
    uVar4 = 0xffffffff;
    pcVar6 = local_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_120[~uVar4 - 1] = ')';
    uVar4 = 0xffffffff;
    pcVar6 = local_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_120[~uVar4 - 1] = ' ';
    uVar4 = 0xffffffff;
    pcVar6 = local_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_120[~uVar4 - 1] = '=';
    uVar4 = 0xffffffff;
    pcVar6 = local_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_120[~uVar4 - 1] = ' ';
    uVar4 = 0xffffffff;
    pcVar6 = local_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_120[~uVar4 - 1] = '0';
    uVar4 = 0xffffffff;
    pcVar6 = local_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_120[~uVar4 - 1] = 'x';
    uVar4 = 0xffffffff;
    pcVar6 = local_20;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = -1;
    pcVar6 = local_120;
    do {
      pcVar7 = pcVar6;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_10 = FUN_0084b516(*(undefined4 *)param_1[1],param_3,local_120,0x10);
  }
  else {
    local_10 = FUN_0084b516(*(undefined4 *)param_1[1],param_3,local_8,0x10);
    (**(code **)(local_c + 0x34))(local_8);
  }
  return local_10;
}

