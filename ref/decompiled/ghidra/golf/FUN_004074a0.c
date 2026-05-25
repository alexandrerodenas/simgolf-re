/* Ghidra decompiled: golf.exe */
/* Function: FUN_004074a0 @ 0x004074A0 */


void FUN_004074a0(undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  switch(param_1) {
  case 0:
    pcVar5 = s_garden_sundial_004c4c44;
    if (param_2 == 0) {
      pcVar5 = s_sundial_004c4c3c;
    }
    break;
  case 1:
    pcVar5 = s_traditional_barn_004c4c28;
    if (param_2 == 0) {
      pcVar5 = &DAT_004c4c20;
    }
    break;
  case 2:
    pcVar5 = s_n_authentic_Civil_War_cannon_004c4c00;
    if (param_2 == 0) {
      pcVar5 = s_Civil_War_cannon_004c4bec;
    }
    break;
  case 3:
    pcVar5 = s_ancient_stonehenge_rock_004c4bd0;
    if (param_2 == 0) {
      pcVar5 = s_stonehenge_004c4bc4;
    }
    break;
  case 4:
    pcVar5 = s_n_operating_water_mill_004c4bac;
    if (param_2 == 0) {
      pcVar5 = s_water_mill_004c4ba0;
    }
    break;
  case 5:
    pcVar5 = s_n_unusual_rock_face_004c4b8c;
    if (param_2 == 0) {
      pcVar5 = s_rock_face_004c4b80;
    }
    break;
  case 6:
    pcVar5 = s_n_authentic_Civil_War_statue_004c4b60;
    if (param_2 == 0) {
      pcVar5 = s_Civil_War_statue_004c4b4c;
    }
    break;
  case 7:
    pcVar5 = s_scenic_New_England_lighthouse_004c4b2c;
    if (param_2 == 0) {
      pcVar5 = s_lighthouse_004c4b20;
    }
    break;
  case 8:
    pcVar5 = s_peaceful_Buddha_004c4b0c;
    if (param_2 == 0) {
      pcVar5 = s_Buddha_004c4b04;
    }
    break;
  case 9:
    pcVar5 = s_Dutch_windmill_004c4af4;
    if (param_2 == 0) {
      pcVar5 = s_windmill_004c4ae8;
    }
    break;
  case 10:
    pcVar5 = s_historic_statue_004c4ad4;
    break;
  case 0xb:
    pcVar5 = s_haunting_Easter_Island_head_004c4ab4;
    if (param_2 == 0) {
      pcVar5 = s_Easter_Island_head_004c4aa0;
    }
    break;
  case 0xc:
    pcVar5 = s_exquisite_pagoda_004c4a8c;
    if (param_2 == 0) {
      pcVar5 = s_pagoda_004c4a84;
    }
    break;
  case 0xd:
    pcVar5 = s_n_historic_Hatteras_lighthouse_004c4a64;
    if (param_2 == 0) {
      pcVar5 = s_historic_lighthouse_004c4a50;
    }
    break;
  case 0xe:
    pcVar5 = s_n_ornate_oriental_house_004c4a38;
    if (param_2 == 0) {
      pcVar5 = s_oriental_house_004c4a28;
    }
    break;
  case 0xf:
    pcVar5 = s_dusty_dinosaur_tarpit_004c4a10;
    if (param_2 == 0) {
      pcVar5 = s_dinosaur_tarpit_004c4a00;
    }
    break;
  case 0x10:
    pcVar5 = s_n_unsightly_water_tower_004c49e8;
    if (param_2 == 0) {
      pcVar5 = s_water_tower_004c49dc;
    }
    break;
  case 0x11:
    pcVar5 = s_n_unsightly_radio_antenna_004c49c0;
    if (param_2 == 0) {
      pcVar5 = s_radio_antenna_004c49b0;
    }
    break;
  case 0x12:
    pcVar5 = s_n_unsightly_oil_pump_004c4998;
    if (param_2 == 0) {
      pcVar5 = s_oil_pump_004c498c;
    }
    break;
  default:
    pcVar5 = s_landmark_004c4980;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}

