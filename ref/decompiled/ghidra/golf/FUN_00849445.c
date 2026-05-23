/* Ghidra decompiled: golf.exe */
/* Function: FUN_00849445 @ 0x00849445 */
/* Body size: 527 addresses */


undefined4 FUN_00849445(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_134 [4];
  char local_130 [260];
  char local_2c [12];
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  char local_10 [12];
  
  local_14 = *param_1;
  local_1c = 0;
  local_134[0] = '0';
  local_134[1] = 0;
  do {
    if (9999 < local_1c) {
      FUN_0084b076(param_1,0xb7,local_130);
      return 0;
    }
    local_18 = (**(code **)(local_14 + 0x40))();
    local_18 = local_18 & 0xffff;
    __itoa(local_18,local_10,0x10);
    local_2c[0] = '\0';
    local_2c[1] = '\0';
    local_2c[2] = '\0';
    local_2c[3] = '\0';
    local_2c[4] = '\0';
    local_2c[5] = '\0';
    local_2c[6] = '\0';
    local_2c[7] = '\0';
    local_2c[8] = '\0';
    local_2c[9] = '\0';
    pcVar2 = (char *)FUN_0084aa1e(0x18);
    uVar3 = 0xffffffff;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = local_2c;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar2 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    for (local_20 = 4 - (~uVar3 - 1); local_20 != 0; local_20 = local_20 + -1) {
      uVar3 = 0xffffffff;
      pcVar2 = local_134;
      do {
        pcVar7 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar2 = local_2c;
      do {
        pcVar6 = pcVar2;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      pcVar2 = pcVar7 + -uVar3;
      pcVar7 = pcVar6 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    uVar3 = 0xffffffff;
    pcVar2 = local_10;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = local_2c;
    do {
      pcVar6 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = local_130;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00849654(param_1,local_130,local_2c);
    iVar5 = (**(code **)(local_14 + 0x54))(local_130);
    if (iVar5 == -1) {
      uVar3 = 0xffffffff;
      pcVar2 = local_2c + 1;
      do {
        pcVar7 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar2 = pcVar7 + -uVar3;
      pcVar7 = param_3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar7 + 1;
      }
      iVar5 = (**(code **)(local_14 + 0x44))(local_130,0);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(local_14 + 0x78))();
      if (iVar5 != 0xb7) {
        FUN_0084b076(param_1,iVar5,local_130);
        return 0;
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}

