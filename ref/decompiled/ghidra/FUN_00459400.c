/* Ghidra decompiled: golf.exe */
/* Function: FUN_00459400 @ 0x00459400 */
/* Body size: 989 addresses */


int FUN_00459400(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  uint local_18;
  undefined **local_14;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_10 = 0;
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  uVar9 = local_4;
  do {
    FUN_0047ab50(&local_8,&local_c);
    if ((local_c < 0xab) || (0xd2 < local_c)) {
      if ((local_c < 0xf2) || (0x119 < local_c)) {
        if ((local_c < 0x139) || (0x160 < local_c)) {
          if ((local_c < 0x180) || (0x1a7 < local_c)) {
            local_18 = 0xffffffff;
          }
          else {
            local_18 = (0x193 < local_c) + 6;
          }
        }
        else {
          local_18 = (0x14c < local_c) + 4;
        }
      }
      else {
        local_18 = (0x105 < local_c) + 2;
      }
    }
    else {
      local_18 = (uint)(0xbe < local_c);
    }
    FUN_00473f60(&DAT_0082109c,&DAT_00519cd4,0,0,0);
    FUN_00473e60(&DAT_00519cd4,0x229,0x1a6,0);
    FUN_004762d0(&DAT_00821020,0,0,0);
    FUN_00404b70(s_HIRE_AN_EMPLOYEE_004d372c,0x179,0x6b,0x80000000);
    FUN_004762d0(&DAT_00821ee8,0,0,0);
    uVar7 = 0;
    local_14 = &PTR_s_Club_Pro_004c1464;
    do {
      local_4 = uVar7 & 1;
      uVar8 = uVar9;
      if (local_4 == 0) {
        switch((int)uVar7 / 2) {
        case 0:
          uVar8 = 0x97;
          uVar2 = 0x97;
          pcVar13 = s_Greeters____004d3720;
          break;
        case 1:
          uVar8 = 0xde;
          uVar2 = 0xde;
          pcVar13 = s_Speed_up_play____004d370c;
          break;
        case 2:
          uVar8 = 0x125;
          uVar2 = 0x125;
          pcVar13 = s_Weed_Killers____004d36fc;
          break;
        case 3:
          uVar8 = 0x16c;
          uVar2 = 0x16c;
          pcVar13 = s_Thirst_quenchers____004d36e8;
          break;
        default:
          goto LAB_00459634;
        }
        FUN_004049d0(pcVar13,0xe7,uVar2,0x80000000);
      }
LAB_00459634:
      uVar9 = uVar8 + 0x14;
      uVar3 = 0xffffffff;
      pcVar13 = *local_14;
      do {
        pcVar11 = pcVar13;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar11 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar11;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar13 = pcVar11 + -uVar3;
      pcVar11 = (char *)&DAT_0051a068;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar11 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar13 = &DAT_004d2958;
      do {
        pcVar11 = pcVar13;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar11 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar11;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar13 = (char *)&DAT_0051a068;
      do {
        pcVar10 = pcVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar10 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar10;
      } while (cVar1 != '\0');
      cVar1 = (&DAT_004c2e2c)[uVar7];
      pcVar13 = pcVar11 + -uVar3;
      pcVar11 = pcVar10 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar11 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_0042dc00(cVar1 * 100);
      uVar3 = 0xffffffff;
      pcVar13 = s_per_week_004d36dc;
      do {
        pcVar11 = pcVar13;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar11 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar11;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar13 = (char *)&DAT_0051a068;
      do {
        pcVar10 = pcVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar10 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar10;
      } while (cVar1 != '\0');
      pcVar13 = pcVar11 + -uVar3;
      pcVar11 = pcVar10 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar11 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar11 = pcVar11 + 1;
      }
      if (local_18 == uVar7) {
        iVar5 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        FUN_00480b00(0xe7,uVar8 + 0x12,0x123,0x10,(-(uint)(iVar5 != 1) & 0xffff80a0) + 0x8000fea0);
      }
      FUN_004049d0(&DAT_0051a068,0xf6,uVar9,0x80000000);
      if (local_4 != 0) {
        uVar9 = uVar8 + 0x1c;
      }
      uVar7 = uVar7 + 1;
      local_14 = local_14 + 1;
    } while ((int)local_14 < 0x4c1484);
    local_14 = (undefined **)0xc0;
    local_10 = local_10 + 1;
    iVar5 = 0;
    uVar7 = 1;
    do {
      iVar6 = iVar5 * 4;
      iVar12 = iVar5;
      if (local_18 == uVar7) {
        iVar12 = iVar5 + 4;
        iVar6 = iVar6 + 0x10;
      }
      uVar2 = FUN_0043d6f0(iVar12 + 0x20e,local_10 % *(int *)((int)&DAT_0053fc20 + iVar6),iVar5);
      FUN_004628d0(0x240,local_14,uVar9,0x28,0x28,uVar2,4,iVar12 + 0x82);
      uVar7 = uVar7 + 2;
      iVar5 = iVar5 + 1;
      local_14 = (undefined **)((int)local_14 + 0x46);
    } while ((int)uVar7 < 9);
    FUN_00480c80(0);
    FUN_0045c030();
    FUN_0045bf80(1,0);
    if (DAT_00822d68 != 0) goto LAB_00459808;
    iVar5 = FUN_0045ae70();
  } while (iVar5 == 0);
  if (DAT_00822d68 == 0) {
    return -1;
  }
LAB_00459808:
  FUN_0045c150();
  if (((int)local_18 < 0) || (0xc < (int)local_18)) {
    local_18 = 0xffffffff;
  }
  return ((int)local_18 / 2) * 3 + 1 + (local_18 & 1);
}

