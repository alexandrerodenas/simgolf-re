/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045fd80 @ 0x0045FD80 */


void FUN_0045fd80(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (DAT_00834170 != 0x20) goto LAB_004603e5;
  if ((DAT_0059e7b8 & 0x1000000) != 0) {
    return;
  }
  switch(DAT_005a34e0) {
  case 0:
    uVar2 = 0xffffffff;
    pcVar7 = s_Welcome_to_004d44d4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_0051a068;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040daa0(0xffffffff);
    uVar2 = 0xffffffff;
    pcVar7 = s_Golf_Club__The_unexpected_passin_004d44a4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_great_uncle_Harry_has_left_you_i_004d4470;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040daa0(0xffffffff);
    uVar2 = 0xffffffff;
    pcVar7 = s___The_property_includes_rolling_h_004d4430;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_sparkling_waters__However__uncle_004d43f4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_lazy_slacker_and_never_built_004d43d4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_any_golf_holes__004d43c0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = &DAT_004d43b4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; iVar4 = DAT_00571fd4, uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    pcVar7 = (char *)FUN_004ad425((iVar4 * 100) / 1000,&DAT_00824134,10);
    uVar2 = 0xffffffff;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s__000_he_left_you_can_you_turn_004d4394;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040daa0(0xffffffff);
    pcVar7 = s_into_a_world_class_golf_course__G_004d4364;
    break;
  case 1:
    uVar2 = 0xffffffff;
    pcVar7 = s_Welcome_to_the_004d4354;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_0051a068;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040daa0(0xffffffff);
    uVar2 = 0xffffffff;
    pcVar7 = s_Country_Club__What_was_once_a_va_004d4324;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_featureless_desert_is_now_a_vast_004d42d8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_by_a_lonely_golf_clubhouse__004d42bc;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_This_area_is_blessed_with_sunshi_004d4288;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_the_year__A_rapidly_growing_popu_004d4240;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = &DAT_004d4200;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; iVar4 = DAT_00571fd4, uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    pcVar7 = (char *)FUN_004ad425((iVar4 * 100) / 1000,&DAT_00824134,10);
    uVar2 = 0xffffffff;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s__000_budget_to_turn_004d41e8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040daa0(0xffffffff);
    pcVar7 = s_into_a_world_class_golf_resort__004d41c4;
    break;
  case 2:
    uVar2 = 0xffffffff;
    pcVar7 = s_Welcome_to_004d44d4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_0051a068;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040daa0(0xffffffff);
    uVar2 = 0xffffffff;
    pcVar7 = s_Golf_Course__This_delightful_sli_004d3fc0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_needs_only_your_help_to_become_a_004d3f7c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_After_all__who_doesn_t_enjoy_a_l_004d3f10;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_With_the_successful_conclusion_o_004d3ebc;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_dedication_of_the_new__El_Presid_004d3e7c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040daa0(0xffffffff);
    pcVar7 = s_is_bursting_with_potential__004d3e5c;
    break;
  case 3:
    uVar2 = 0xffffffff;
    pcVar7 = s_Welcome_to_004d44d4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_0051a068;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040daa0(0xffffffff);
    uVar2 = 0xffffffff;
    pcVar7 = s_Golf_Links__This_ancient_and_ven_004d418c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_has_fallen_upon_hard_times__The_s_004d4138;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_whereupon_kings_and_princes_did_p_004d40f0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_But_all_is_not_lost__with_a_tidy_004d4094;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_butterfly_collection_and_a_royal_004d4030;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040daa0(0xffffffff);
    pcVar7 = s_to_it_s_former_preeminence_in_th_004d3ffc;
    break;
  default:
    goto switchD_0045fdb0_default;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar6 = pcVar7;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar7 = (char *)&DAT_0051a068;
  do {
    pcVar5 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar5 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar1 != '\0');
  pcVar7 = pcVar6 + -uVar2;
  pcVar6 = pcVar5 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
switchD_0045fdb0_default:
  FUN_0040cb00(0x8000211f,1,0xfffffffc);
  DAT_005a7144 = 0x80;
LAB_004603e5:
  if (DAT_00834170 == 0x1400) {
    uVar2 = 0xffffffff;
    pcVar7 = s_Building_a_great_golf_course_req_004d3dfc;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_0051a068;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_The_basic_idea_is_to_present_the_004d3da0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_and_require_strategic_thinking__b_004d3d58;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_This_philosophy_is_known_as__loo_004d3d20;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = s_Players_who_enjoy_your_course_wi_004d3cb8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0040cb00(0x80002190,0,0xfffffffc);
  }
  return;
}

