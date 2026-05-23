/* Ghidra decompiled: golf.exe */
/* Function: FUN_00434140 @ 0x00434140 */
/* Body size: 526 addresses */


undefined4 FUN_00434140(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (DAT_0055e928 != 0) {
    uVar2 = FUN_00433d30(param_1,param_2);
    return uVar2;
  }
  iVar3 = FUN_004340a0(param_1,param_2);
  if (iVar3 == -3) {
    uVar4 = 0xffffffff;
    pcVar6 = s_To_UNDO_a_previous_action__right_004c7ec4;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = (char *)&DAT_0051a068;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    DAT_004c2e08 = 0xffffffea;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar6 = s_Right_click_again_to_effect_the_c_004c7e7c;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar7 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
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
    FUN_0040d320(200,0x154,0x80007fff,0xfffffffe);
    FUN_00480c80(0);
    FUN_0045c0c0(0);
    return 0;
  }
  if (iVar3 == -2) {
    DAT_0055e928 = 1;
    DAT_00567afc = 1;
    return 0;
  }
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  DAT_004c2854 = iVar3 + 6;
  if ((((&DAT_005a8c50)[iVar3] != 0) && (iVar3 = FUN_0044faf0(DAT_005685f0 + -1), iVar3 < 2)) ||
     (1 < (int)(&DAT_005a8c38)[DAT_004c2854])) {
    FUN_004481b0(0x18,100,0,0,0);
    if ((int)(&DAT_005a8c38)[DAT_004c2854] < 2) {
      uVar4 = 0xffffffff;
      pcVar6 = s_Sorry__upgraded_buildings_are_no_004c8084;
      do {
        pcVar8 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar8 + -uVar4;
      pcVar8 = (char *)&DAT_0051a068;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
    }
    else {
      uVar4 = 0xffffffff;
      pcVar6 = s_You_cannot_upgrade_this_building_004c80d0;
      do {
        pcVar8 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar8 + -uVar4;
      pcVar8 = (char *)&DAT_0051a068;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_0040cb00(0x80006000,1,0xffffffff);
    DAT_004c2854 = -1;
  }
  if (DAT_005a6364 <= DAT_004c2854) {
    FUN_004481b0(0x18,100,0,0,0);
    uVar4 = 0xffffffff;
    pcVar6 = s_This_building_is_will_become_ava_004c803c;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = (char *)&DAT_0051a068;
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
    FUN_0040cb00(0x80006000,1,0xffffffff);
    DAT_004c2854 = -1;
  }
  return DAT_005a9f64;
}

