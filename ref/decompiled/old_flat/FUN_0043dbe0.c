/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043dbe0 @ 0x0043DBE0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043dbe0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar13;
  int local_2c8;
  undefined1 local_2c4 [696];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b749b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00474ae0();
  local_4 = 0;
  FUN_00474dd0(0x400,800,0,1,0,0);
  if (DAT_005a34e0 == '\x01') {
    FUN_00475840(s_flics_bldgs_desert_dessignPal_004cc2e0,&DAT_0081cf38,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_des_drpal_004cc2c0,&DAT_0081d300,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Desert_DESSnackPal_004cc2a0,&DAT_0081cf90,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Desert_DESCartPal_004cc280,&DAT_0081d1f8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Desert_DESHotelPal_004cc260,&DAT_0081cfe8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Desert_DEScasPal_004cc240,&DAT_0081d040,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Desert_heliPal_004cc224,&DAT_0081d358,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Desert_dproPal_004cc208,&DAT_0081cee0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Desert_DESclubPal_004cc1e8,&DAT_0081d2a8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Desert_spaPal_004cc1cc,&DAT_0081d3b0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_dputtPal_004cc1b0,&DAT_0081d0f0,0,0x100,0);
    FUN_00475840(s_flics_scenic_Desert_watersprayPa_004cc18c,&DAT_0081d408,0,0x100,0);
    FUN_00475840(s_flics_scenic_SailboatDesert_Pale_004cc168,&DAT_0081e698,0,0x100,0);
    FUN_00475840(s_flics_scenic_DolphinDesert_Palet_004cc144,&DAT_0081e900,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_DESSnackL2Pal_004cc120,&DAT_0081fdf8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_flowers_DesertFlower_004cc0f4,&DAT_00820a58,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_DesProL2pal_004cc0d4,&DAT_0081fe50,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_DESputt_platL_004cc0ac,&DAT_0081ff00,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_DesCartL2pal_004cc08c,&DAT_0081ff58,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_SpaL2pal_004cc070,&DAT_0081fea8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_HelL2pal_004cc054,&DAT_0081ffb0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_DesHoL2pal_004cc034,&DAT_00820008,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_DesCasL2pal_004cc014,&DAT_00820060,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_DesClubL2pal_004cbff4,&DAT_008200b8,0,0x100,0);
    FUN_00475840(s_flics_flowers_OilSlickPal_004cbfd8,&DAT_0081e488,0,0x100,0);
    FUN_00475840(s_flics_tees_flag_desertpal_004cbfbc,&DAT_0081ec18,0,0x100,0);
    FUN_00475840(s_flics_homes_regular_desert_A_Des_004cbf8c,&DAT_0081eb10,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_dhouseconpal_004cbf6c,&DAT_0081d098,0,0x100,0);
    FUN_00475840(s_flics_bldgs_desert_house_Apal_004cbf4c,&DAT_0081ea08,0,0x100,0);
    pcVar13 = s_flics_water_DesWater_Palette_004cbf2c;
  }
  else if (DAT_005a34e0 == '\x02') {
    FUN_00475840(s_flics_bldgs_Tropical_TropHouseSi_004cc748,&DAT_0081cf38,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropDriving_004cc724,&DAT_0081d300,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropSnackL1_004cc6f8,&DAT_0081cf90,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropCartL1P_004cc6d4,&DAT_0081d1f8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropHotelL1_004cc6b0,&DAT_0081cfe8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TROPthemeL1_004cc684,&DAT_0081d040,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropMarL1_p_004cc65c,&DAT_0081d358,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropProShop_004cc630,&DAT_0081cee0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropclubL1P_004cc60c,&DAT_0081d2a8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropSwimL1P_004cc5e8,&DAT_0081d3b0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropPutting_004cc5c4,&DAT_0081d0f0,0,0x100,0);
    FUN_00475840(s_flics_scenic_Trop_watersprayPal_004cc5a4,&DAT_0081d408,0,0x100,0);
    FUN_00475840(s_flics_scenic_sailboatTropical_Pa_004cc57c,&DAT_0081e698,0,0x100,0);
    FUN_00475840(s_flics_scenic_DolphinTropical_Pal_004cc554,&DAT_0081e900,0,0x100,0);
    FUN_00475840(s_flics_bldgs_tropical_SnackL2_pal_004cc52c,&DAT_0081fdf8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_flowers_TropicalFlow_004cc500,&DAT_00820a58,0,0x100,0);
    FUN_00475840(s_flics_bldgs_tropical_TropProShop_004cc4d4,&DAT_0081fe50,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropSwimL2__004cc4ac,&DAT_0081fea8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_tropical_TropDRL2_pa_004cc484,&DAT_0081ff00,0,0x100,0);
    FUN_00475840(s_flics_bldgs_tropical_TropCartL2__004cc45c,&DAT_0081ff58,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropMarL2_p_004cc434,&DAT_0081ffb0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropHotelL2_004cc408,&DAT_00820008,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TROPthemeL2_004cc3dc,&DAT_00820060,0,0x100,0);
    FUN_00475840(s_flics_bldgs_Tropical_TropClubL2__004cc3b4,&DAT_008200b8,0,0x100,0);
    FUN_00475840(s_flics_flowers_DryGrassPal_004cc398,&DAT_0081e488,0,0x100,0);
    FUN_00475840(s_flics_tees_flag_troppal_004cc380,&DAT_0081ec18,0,0x100,0);
    FUN_00475840(s_flics_bldgs_tropical_TropHouseCo_004cc354,&DAT_0081d098,0,0x100,0);
    FUN_00475840(s_flics_homes_regular_tropical_B_T_004cc320,&DAT_0081eb10,0,0x100,0);
    pcVar13 = s_flics_water_TropWater_Palette_004cc300;
  }
  else if (DAT_005a34e0 == '\x03') {
    FUN_00475840(s_flics_bldgs_links_sign_links_Pal_004ccb28,&DAT_0081cf38,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_driving_rangeL_004ccafc,&DAT_0081d300,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_PubPal_004ccae0,&DAT_0081cf90,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_HotelPal_004ccac4,&DAT_0081cfe8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_CastlePal_004ccaa8,&DAT_0081d040,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_ClubL1_Palette_004cca84,&DAT_0081d2a8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_ChurchPal_004cca68,&DAT_0081d358,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_Pro_shopPal_004cca48,&DAT_0081cee0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_Cart_GaragePal_004cca24,&DAT_0081d1f8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_StableL1_palet_004cca00,&DAT_0081d3b0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_PG_L1_and_L2_P_004cc9d8,&DAT_0081d0f0,0,0x100,0);
    FUN_00475840(s_flics_scenic_Links_watersprayPal_004cc9b4,&DAT_0081d408,0,0x100,0);
    FUN_00475840(s_flics_scenic_SailboatLinks_Palet_004cc990,&DAT_0081e698,0,0x100,0);
    FUN_00475840(s_flics_scenic_DolphinLinks_Palett_004cc96c,&DAT_0081e900,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_PubL2_Palette_004cc94c,&DAT_0081fdf8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_flowers_FlowerbedA_I_004ccd1c,&DAT_00820a58,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_DRL2_palette_004cc92c,&DAT_0081ff00,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_ProShopL2_pale_004cc908,&DAT_0081fe50,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_Cart_GarageL2__004cc8e0,&DAT_0081ff58,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_StableL2_palet_004cc8bc,&DAT_0081fea8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_ChurchL2_palet_004cc898,&DAT_0081ffb0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_HotelL2_palett_004cc874,&DAT_00820008,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_CastleL2_palet_004cc850,&DAT_00820060,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_ClubL2_Palette_004cc82c,&DAT_008200b8,0,0x100,0);
    FUN_00475840(s_flics_flowers_dandelionPal_004ccbf8,&DAT_0081e488,0,0x100,0);
    FUN_00475840(s_flics_tees_flag_linkspal_004cc810,&DAT_0081ec18,0,0x100,0);
    FUN_00475840(s_flics_homes_regular_links_B_Link_004cc7e0,&DAT_0081eb10,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_housecon_palet_004cc7bc,&DAT_0081d098,0,0x100,0);
    FUN_00475840(s_flics_bldgs_links_house_A_links__004cc794,&DAT_0081ea08,0,0x100,0);
    pcVar13 = s_flics_water_LinksWater_Palette_004cc774;
  }
  else {
    FUN_00475840(s_flics_bldgs_park_signPal_004ccf0c,&DAT_0081cf38,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_DRL1_palette_004cceec,&DAT_0081d300,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_ParkSnackL1_pal_004ccec4,&DAT_0081cf90,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_HotelL1_palette_004ccea0,&DAT_0081cfe8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_AirL1_Palette_004cce80,&DAT_0081d040,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_ClubL1_palette_004cce60,&DAT_0081d2a8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_MarL1_Palette_004cce40,&DAT_0081d358,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_ParkProL1_Palet_004cce1c,&DAT_0081cee0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_CartL1_Palette_004ccdfc,&DAT_0081d1f8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_TenL1_Palette_004ccddc,&DAT_0081d3b0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_PuttL1_Palette_004ccdbc,&DAT_0081d0f0,0,0x100,0);
    FUN_00475840(s_flics_scenic_watersprayPal_004ccda0,&DAT_0081d408,0,0x100,0);
    FUN_00475840(s_flics_scenic_Sail_MovePal_004ccd84,&DAT_0081e698,0,0x100,0);
    FUN_00475840(s_flics_scenic_DolphinPal_004ccd6c,&DAT_0081e900,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_ParkSnackL2_Pal_004ccd44,&DAT_0081fdf8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_flowers_FlowerbedA_I_004ccd1c,&DAT_00820a58,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_ParkProL2_palet_004cccf8,&DAT_0081fe50,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_DRL2_palette_004cccd8,&DAT_0081ff00,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_CartL2_palette_004cccb8,&DAT_0081ff58,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_TenL2_palette_004ccc98,&DAT_0081fea8,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_MarL2_palette_004ccc78,&DAT_0081ffb0,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_HotelL2_Palette_004ccc54,&DAT_00820008,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_AirL2_Palette_004ccc34,&DAT_00820060,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_clubL2_Palette_004ccc14,&DAT_008200b8,0,0x100,0);
    FUN_00475840(s_flics_flowers_dandelionPal_004ccbf8,&DAT_0081e488,0,0x100,0);
    FUN_00475840(s_flics_tees_flag_parkpal_004ccbe0,&DAT_0081ec18,0,0x100,0);
    FUN_00475840(s_flics_homes_regular_parkland_A_P_004ccbac,&DAT_0081eb10,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_houseconpal_004ccb8c,&DAT_0081d098,0,0x100,0);
    FUN_00475840(s_flics_bldgs_park_houseBpal_004ccb70,&DAT_0081ea08,0,0x100,0);
    pcVar13 = s_flics_water_ParkWater_Palette_004ccb50;
  }
  FUN_00475840(pcVar13,&DAT_00820740,0,0x100,0);
  _DAT_004c89a8 = 0;
  switch(DAT_005a34e0) {
  case '\0':
    pcVar13 = s_interface_ParklandTerrainButtons_004cbf08;
    break;
  case '\x01':
    pcVar13 = s_interface_DesertTerrainButtons_004cbea4;
    break;
  case '\x02':
    pcVar13 = s_interface_TropicalTerrainButtons_004cbec4;
    break;
  case '\x03':
    pcVar13 = s_interface_LinksTerrainButtons_004cbee8;
    break;
  default:
    goto switchD_0043e855_default;
  }
  FUN_00475840(pcVar13,0,0,0x100,2);
switchD_0043e855_default:
  local_2c8 = 0;
  puVar7 = &DAT_00570cb8;
  do {
    iVar6 = 4;
    iVar2 = ((6 < local_2c8) - 1 & 0xffffff08) + 0xf8;
    do {
      FUN_00473bf0(local_2c4,iVar2,(local_2c8 % 7) * 0x36,0x3e,0x36,1,1);
      puVar7 = puVar7 + 0x2c;
      iVar2 = iVar2 + 0x3e;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_2c8 = local_2c8 + 1;
  } while ((int)puVar7 < 0x5715a8);
  switch(DAT_005a34e0) {
  case '\0':
    iVar2 = 0x208;
    do {
      FUN_00473bf0(local_2c4,iVar2,0,0x41,0x54,1,1);
      FUN_00473bf0(local_2c4,iVar2,0x96,0x3e,0x46,1,1);
      FUN_00473bf0(local_2c4,iVar2,300,0x3e,0x58,1,1);
      iVar2 = iVar2 + 0x50;
    } while (iVar2 < 0x2f8);
    break;
  case '\x01':
    iVar2 = 0x208;
    do {
      FUN_00473bf0(local_2c4,iVar2,0,0x4b,0x4a,1,1);
      FUN_00473bf0(local_2c4,iVar2,0x96,0x3e,0x43,1,1);
      FUN_00473bf0(local_2c4,iVar2,300,0x41,0x68,1,1);
      iVar2 = iVar2 + 0x50;
    } while (iVar2 < 0x2f8);
    break;
  case '\x02':
    iVar2 = 0x208;
    do {
      FUN_00473bf0(local_2c4,iVar2,0,0x48,0x4f,1,1);
      FUN_00473bf0(local_2c4,iVar2,0x96,0x3e,0x51,1,1);
      FUN_00473bf0(local_2c4,iVar2,300,0x41,0x68,1,1);
      iVar2 = iVar2 + 0x50;
    } while (iVar2 < 0x2f8);
    break;
  case '\x03':
    iVar2 = 0x208;
    do {
      FUN_00473bf0(local_2c4,iVar2,0,0x43,0x54,1,1);
      FUN_00473bf0(local_2c4,iVar2,0x96,0x3e,0x58,1,1);
      FUN_00473bf0(local_2c4,iVar2,300,0x43,0x4c,1,1);
      iVar2 = iVar2 + 0x50;
    } while (iVar2 < 0x2f8);
  }
  switch(DAT_005a34e0) {
  case '\0':
    pcVar13 = s_interface_Parklands_Layout_004cbe88;
    break;
  case '\x01':
    pcVar13 = s_interface_Desert_Layout_004cbe40;
    break;
  case '\x02':
    pcVar13 = s_interface_Trop_Layout_004cbe58;
    break;
  case '\x03':
    pcVar13 = s_interface_Links_Layout_004cbe70;
    break;
  default:
    goto switchD_0043eae4_default;
  }
  FUN_00475840(pcVar13,0,0,0x100,2);
switchD_0043eae4_default:
  iVar2 = 0;
  puVar7 = &DAT_0053dfb0;
  do {
    FUN_00473bf0(local_2c4,iVar2,0,0x4b,100,1,1);
    FUN_00473bf0(local_2c4,iVar2,100,0x4b,100,1,1);
    FUN_00473bf0(local_2c4,iVar2,200,0x4b,100,1,1);
    FUN_00473bf0(local_2c4,iVar2,300,0x4b,100,1,1);
    puVar7 = puVar7 + 0xb0;
    iVar2 = iVar2 + 0x4b;
  } while ((int)puVar7 < 0x53e690);
  DAT_00820b6c = 0;
  iVar2 = 0x1b6;
  puVar10 = &DAT_0081ac5c;
  piVar8 = &DAT_005a9a48;
  do {
    if (*piVar8 != -1) {
      FUN_0043d670(iVar2);
    }
    *piVar8 = -1;
    *puVar10 = 0;
    piVar8 = piVar8 + 1;
    iVar2 = iVar2 + 1;
    puVar10 = puVar10 + 0x32;
  } while ((int)piVar8 < 0x5a9b8d);
  iVar2 = 0x22e;
  puVar10 = &DAT_0081c3cc;
  piVar8 = &DAT_005a9c28;
  do {
    if (*piVar8 != -1) {
      FUN_0043d670(iVar2);
    }
    *piVar8 = -1;
    *puVar10 = 0;
    piVar8 = piVar8 + 1;
    iVar2 = iVar2 + 1;
    puVar10 = puVar10 + 0x32;
  } while ((int)piVar8 < 0x5a9c61);
  if (DAT_005a34e0 == '\x02') {
    FUN_0043d740(0x1c8,s_bldgs_tropical_tropsign_004cbe28,4,1,1);
    FUN_0043d740(0x1c9,s_bldgs_tropical_TropHouseconst_004cbe08,4,1,1);
    FUN_0043d740(0x1ca,s_Homes_Regular_Tropical_B_TropHou_004cbde4,4,0x8c,1);
    FUN_0043d740(0x1ec,s_bldgs_Tropical_TropSnackL1_004cbdc8,4,1,1);
    FUN_0043d740(0x1ee,s_bldgs_Tropical_TropSnackL2_004cbdac,4,1,1);
    FUN_0043d740(0x1ef,s_bldgs_Tropical_TropSnackL2_ANIM_004cbd8c,4,1,1);
    FUN_0043d740(0x1b6,s_bldgs_tropical_TropDrivingRShopL_004cbd68,4,1,1);
    FUN_0043d740(0x1b7,s_bldgs_tropical_TropDrivingRShopL_004cbd44,4,1,1);
    FUN_0043d740(0x1b8,s_bldgs_tropical_TropDrivingRL1Pla_004cbd1c,4,0x28,1);
    FUN_0043d740(0x1b9,s_bldgs_tropical_TropDrivingRL1Pla_004cbcf4,4,0x28,1);
    FUN_0043d740(0x1ba,s_bldgs_tropical_TropDrivingR100L1_004cbcd0,4,0x28,1);
    FUN_0043d740(0x1bb,s_bldgs_tropical_TropDrivingR200L1_004cbcac,4,0x28,1);
    FUN_0043d740(0x1bc,s_bldgs_tropical_TropDrivingR300L1_004cbc88,4,0x28,1);
    FUN_0043d740(0x1bd,s_bldgs_tropical_TropDrivingRflagL_004cbc64,1,0x28,1);
    FUN_0043d740(0x1be,s_bldgs_tropical_TropDrivingRfence_004cbc40,4,0x28,1);
    FUN_0043d740(0x1bf,s_bldgs_tropical_TROPDrivingRshopL_004cbc18,4,1,1);
    FUN_0043d740(0x1c0,s_bldgs_tropical_TropDrivingRL2Pla_004cbbf0,4,0x28,1);
    FUN_0043d740(0x1c1,s_bldgs_tropical_TropDrivingRL2Pla_004cbbc8,4,0x28,1);
    FUN_0043d740(0x1f0,s_bldgs_tropical_TropPuttingGL1_004cbba8,4,0x28,1);
    FUN_0043d740(0x1f1,s_bldgs_tropical_TropPuttingGL1_004cbba8,4,0x28,1);
    FUN_0043d740(0x1f2,s_bldgs_tropical_TropPuttingGFlagL_004cbb84,1,0x28,1);
    FUN_0043d740(499,s_bldgs_tropical_TropPuttingGL2_004cbb64,4,0x28,1);
    FUN_0043d740(500,s_bldgs_tropical_TropPuttingGL2_An_004cbb40,4,0x28,1);
    FUN_0043d740(0x1f5,s_bldgs_tropical_TropPuttingGL2_Sc_004cbb18,4,0x28,1);
    FUN_0043d740(0x1c2,s_bldgs_tropical_TropCartL1_004cbafc,4,1,1);
    FUN_0043d740(0x1c5,s_bldgs_tropical_TropCartL1Base_004cbadc,4,1,0);
    FUN_0043d740(0x1c3,s_bldgs_tropical_TropCartL2_004cbac0,4,1,1);
    FUN_0043d740(0x1c6,s_bldgs_tropical_TropCartL2_Base_004cbaa0,4,1,0);
    FUN_0043d740(0x1f6,s_bldgs_tropical_TropclubL1_004cba84,4,1,1);
    FUN_0043d740(0x1fa,s_bldgs_tropical_TropclubL1anim_004cba64,4,1,1);
    FUN_0043d740(0x1f7,s_bldgs_tropical_TropclubL2_004cba48,4,1,1);
    FUN_0043d740(0x1f8,s_bldgs_tropical_TropclubL2_base_004cba28,4,1,0);
    FUN_0043d740(0x1fb,s_bldgs_tropical_TropclubL2_ANIM_004cba08,4,1,1);
    FUN_0043d740(0x1ce,s_bldgs_tropical_TropMarL1_004cb9ec,4,1,1);
    FUN_0043d740(0x1d1,s_bldgs_tropical_TropMarL1_underwa_004cb9c8,4,1,0);
    FUN_0043d740(0x1cf,s_bldgs_tropical_TropMarinaL2_004cb9ac,4,1,1);
    FUN_0043d740(0x1d2,s_bldgs_tropical_TropMarinaL2_unde_004cb984,4,1,0);
    FUN_0043d740(0x1e0,s_bldgs_tropical_TropProshopL1_004cb964,4,1,1);
    FUN_0043d740(0x1e3,s_bldgs_tropical_TropProshopL1_bas_004cb940,4,1,0);
    FUN_0043d740(0x1e4,s_bldgs_tropical_TropProshopL1_ani_004cb91c,4,1,1);
    FUN_0043d740(0x1e1,s_bldgs_tropical_TropProshopL2_004cb8fc,4,1,1);
    FUN_0043d740(0x1d4,s_bldgs_tropical_TropSwimL1_004cb8e0,4,1,1);
    FUN_0043d740(0x1d7,s_bldgs_tropical_TropSwimL1anim_004cb8c0,4,1,0);
    FUN_0043d740(0x1d5,s_bldgs_tropical_TropSwimL2_004cb8a4,4,1,1);
    FUN_0043d740(0x1d8,s_bldgs_tropical_TropSwimL2_anim_004cb884,4,1,0);
    FUN_0043d740(0x1da,s_bldgs_tropical_TROPthemeL1_004cb868,4,0xf0,1);
    FUN_0043d740(0x1dc,s_bldgs_tropical_TROPthemeL1_BoatA_004cb844,4,0xf0,0);
    FUN_0043d740(0x1de,s_bldgs_tropical_TROPthemeL1_Canno_004cb81c,4,0xf0,1);
    FUN_0043d740(0x1db,s_bldgs_tropical_TROPthemeL2_004cb800,4,0xf0,1);
    FUN_0043d740(0x1dd,s_bldgs_tropical_TROPthemeL2_LoopA_004cb7dc,4,0xf0,0);
    FUN_0043d740(0x1df,s_bldgs_tropical_TROPthemeL2_Spray_004cb7b4,4,0xf0,1);
    FUN_0043d740(0x1e6,s_bldgs_Tropical_TropHotelL1_004cb798,4,0xf0,1);
    FUN_0043d740(0x1e9,s_bldgs_Tropical_TropHotelL1base_004cb778,4,0xf0,0);
    FUN_0043d740(0x1e7,s_bldgs_Tropical_TropHotelL2_004cb75c,4,0xf0,1);
    FUN_0043d740(0x1ea,s_bldgs_Tropical_TropHotelL2_base_004cb73c,4,0xf0,0);
    FUN_0043d740(0x1eb,s_bldgs_Tropical_TropHotelL2_ANIM_004cb71c,4,0xf0,1);
  }
  if (DAT_005a34e0 == '\x01') {
    FUN_0043d740(0x1c8,s_bldgs_desert_DESsign_004cb704,4,1,1);
    FUN_0043d740(0x1c9,s_bldgs_desert_DESHouseconst_004cb6e8,4,1,1);
    FUN_0043d740(0x1ca,s_Homes_Regular_Desert_A_DesHouseA_004cb6c4,4,0x8c,1);
    FUN_0043d740(0x1ec,s_bldgs_Desert_DESSnack_004cb6ac,4,1,1);
    FUN_0043d740(0x1ed,s_bldgs_Desert_DESSnackBase_004cb690,4,1,1);
    FUN_0043d740(0x1ee,s_bldgs_Desert_DESSnackL2_004cb678,4,1,1);
    FUN_0043d740(0x1b6,s_bldgs_desert_dbuildDRL1_004cb660,4,1,1);
    FUN_0043d740(0x1b7,s_bldgs_desert_desDRL2house_004cb644,4,1,1);
    FUN_0043d740(0x1b8,s_bldgs_desert_dplatDRL1_004cb62c,4,0x28,1);
    FUN_0043d740(0x1b9,s_bldgs_desert_dplatDRL1base_004cb610,4,0x28,1);
    FUN_0043d740(0x1ba,s_bldgs_desert_d100DRL1_004cb5f8,4,0x28,1);
    FUN_0043d740(0x1bb,s_bldgs_desert_d200DRL1_004cb5e0,4,0x28,1);
    FUN_0043d740(0x1bc,s_bldgs_desert_d300DRL1_004cb5c8,4,0x28,1);
    FUN_0043d740(0x1bd,s_bldgs_desert_dflagDRL1_004cb5b0,1,0x28,1);
    FUN_0043d740(0x1be,s_bldgs_desert_dwallDRL1_004cb598,4,0x28,1);
    FUN_0043d740(0x1c0,s_bldgs_desert_desDRL2plattop_004cb57c,4,0x28,1);
    FUN_0043d740(0x1c1,s_bldgs_desert_desDRL2plat_004cb560,4,0x28,1);
    FUN_0043d740(0x1f0,s_bldgs_desert_dputtL1_004cb548,4,0x28,1);
    FUN_0043d740(0x1f1,s_bldgs_desert_dputtL1base_004cb52c,4,0x28,1);
    FUN_0043d740(0x1f2,s_bldgs_desert_dshortflagL1_004cb510,1,0x28,1);
    FUN_0043d740(499,s_bldgs_desert_desputtL2_004cb4f8,4,0x28,1);
    FUN_0043d740(500,s_bldgs_desert_desputtL2_004cb4f8,4,0x28,1);
    FUN_0043d740(0x1f5,s_bldgs_desert_desputtL2scenic_004cb4d8,4,0x78,1);
    FUN_0043d740(0x1c2,s_bldgs_Desert_DESCartL1_004cb4c0,4,1,1);
    FUN_0043d740(0x1c5,s_bldgs_Desert_DESCartL1Base_004cb4a4,4,1,1);
    FUN_0043d740(0x1c3,s_bldgs_Desert_DESCartL2_004cb48c,4,1,1);
    FUN_0043d740(0x1c6,s_bldgs_Desert_DESCartL2Base_004cb470,4,1,1);
    FUN_0043d740(0x1c7,s_bldgs_Desert_DESCartL2Anim_004cb454,4,1,0);
    FUN_0043d740(0x1f6,s_bldgs_Desert_DESclubL1_004cb43c,4,1,1);
    FUN_0043d740(0x1f9,s_bldgs_Desert_DESclubL1base_004cb420,4,1,1);
    FUN_0043d740(0x1f7,s_bldgs_Desert_DESclubL2_004cb408,4,1,1);
    FUN_0043d740(0x1ce,s_bldgs_Desert_HeliL1_004cb3f4,4,1,1);
    FUN_0043d740(0x1d1,s_bldgs_Desert_HeliL1_Base_004cb3d8,4,1,1);
    FUN_0043d740(0x1cf,s_bldgs_Desert_HelL2_004cb3c4,4,1,1);
    FUN_0043d740(0x1d2,s_bldgs_Desert_HelL2Base_004cb3ac,4,1,1);
    FUN_0043d740(0x1d0,s_bldgs_Desert_HelAnimLites_004cb390,4,1,0);
    FUN_0043d740(0x1d3,s_bldgs_Desert_HelAnimElev_004cb374,4,1,1);
    FUN_0043d740(0x1e0,s_bldgs_Desert_dproL1_004cb360,4,1,1);
    FUN_0043d740(0x1e3,s_bldgs_Desert_dproL1Base_004cb348,4,1,1);
    FUN_0043d740(0x1e1,s_bldgs_Desert_desproL2_004cb330,4,1,1);
    FUN_0043d740(0x1e4,s_bldgs_Desert_desproL2Anim_004cb314,4,1,0);
    FUN_0043d740(0x1d4,s_bldgs_Desert_spaL1_004cb300,4,1,1);
    FUN_0043d740(0x1d7,s_bldgs_Desert_spaL1_Base_004cb2e8,4,1,1);
    FUN_0043d740(0x1d5,s_bldgs_Desert_spaL2_004cb2d4,4,1,1);
    FUN_0043d740(0x1d9,s_bldgs_Desert_DESCASL2Wheel_004cb2b8,4,0xf0,0);
    FUN_0043d740(0x1da,s_bldgs_Desert_DESCASL1_004cb2a0,4,0xf0,1);
    FUN_0043d740(0x1dd,s_bldgs_Desert_DESCASL1Base_004cb284,4,0xf0,1);
    FUN_0043d740(0x1dc,s_bldgs_Desert_DESCASL1Anim_004cb268,4,0xf0,1);
    FUN_0043d740(0x1db,s_bldgs_Desert_DESCASL2_004cb250,4,0xf0,1);
    FUN_0043d740(0x1de,s_bldgs_Desert_DESCASL2Base_004cb234,4,0xf0,0);
    FUN_0043d740(0x1df,s_bldgs_Desert_DESCASL2Status_004cb218,4,0xf0,0);
    FUN_0043d740(0x1e6,s_bldgs_Desert_DESHotelL1_004cb200,4,0xf0,1);
    FUN_0043d740(0x1e9,s_bldgs_Desert_DESHotelL1base_004cb1e4,4,0xf0,1);
    FUN_0043d740(0x1e8,s_bldgs_Desert_DESHotelL1Anim_004cb1c8,4,0xf0,1);
    FUN_0043d740(0x1e7,s_bldgs_Desert_DESHoL2_004cb1b0,4,0xf0,1);
    FUN_0043d740(0x1ea,s_bldgs_Desert_DESHoL2Status_004cb194,4,0xf0,0);
    FUN_0043d740(0x1eb,s_bldgs_Desert_DESHoL2elev_004cb178,4,0xf0,1);
  }
  if (DAT_005a34e0 == '\x03') {
    FUN_0043d740(0x1c8,s_bldgs_links_sign_links_004cb160,4,1,1);
    FUN_0043d740(0x1c9,s_bldgs_links_Houseconst_links_004cb140,4,1,1);
    FUN_0043d740(0x1ca,s_Homes_Regular_Links_B_LinksHouse_004cb11c,4,0x8c,1);
    FUN_0043d740(0x1ec,s_bldgs_links_Pub_SQ_004cb108,4,1,1);
    FUN_0043d740(0x1ed,s_bldgs_links_Pub_SQ_dirt_004cb0f0,4,1,1);
    FUN_0043d740(0x1ee,s_bldgs_links_PubL2_004cb0dc,4,1,1);
    FUN_0043d740(0x1ef,s_bldgs_links_PubL2_dirt_004cb0c4,4,1,1);
    FUN_0043d740(0x1b6,s_bldgs_links_DR_shop_004cb0b0,4,1,1);
    FUN_0043d740(0x1b7,s_bldgs_links_DRL2_shop_004cb098,4,1,1);
    FUN_0043d740(0x1b8,s_bldgs_links_DR_platform_004cb080,4,0x28,1);
    FUN_0043d740(0x1b9,s_bldgs_links_DR_platform_dirt_004cb060,4,0x28,1);
    FUN_0043d740(0x1ba,s_bldgs_links_DR_100sign_004cb048,4,0x28,1);
    FUN_0043d740(0x1bb,s_bldgs_links_DR_200sign_004cb030,4,0x28,1);
    FUN_0043d740(0x1bc,s_bldgs_links_DR_300sign_004cb018,4,0x28,1);
    FUN_0043d740(0x1bd,s_bldgs_links_DR_flag_004cb004,1,0x28,1);
    FUN_0043d740(0x1be,s_bldgs_links_rockwall01_004cafec,4,0x28,1);
    FUN_0043d740(0x1bf,s_bldgs_links_DRL2_shop_ANIM_004cafd0,4,1,1);
    FUN_0043d740(0x1c0,s_bldgs_links_DRL2_platform_004cafb4,4,0x28,1);
    FUN_0043d740(0x1c1,s_bldgs_links_DRL2_platform_base_004caf94,4,0x28,1);
    FUN_0043d740(0x1f0,s_bldgs_links_PG_hutL1_004caf7c,4,0x28,1);
    FUN_0043d740(0x1f1,s_bldgs_links_PG_hutL1_dirt_004caf60,4,0x28,1);
    FUN_0043d740(0x1f2,s_bldgs_links_PG_pflag_004caf48,1,0x28,1);
    FUN_0043d740(499,s_bldgs_links_PG_hutL2_004caf30,4,0x28,1);
    FUN_0043d740(500,s_bldgs_links_PG_hutL2_dirt_004caf14,4,0x28,1);
    FUN_0043d740(0x1f5,s_bldgs_links_PG_scenicL2_004caefc,4,0x28,1);
    FUN_0043d740(0x1c2,s_bldgs_links_Cart_garageL1_004caee0,4,1,1);
    FUN_0043d740(0x1c5,s_bldgs_links_Cart_garageL1_dirt_004caec0,4,1,1);
    FUN_0043d740(0x1c3,s_bldgs_links_Cart_garageL2_004caea4,4,1,1);
    FUN_0043d740(0x1c6,s_bldgs_links_Cart_garageL2_dirt_004cae84,4,1,1);
    FUN_0043d740(0x1e0,s_bldgs_links_Pro_shop_004cae6c,4,1,1);
    FUN_0043d740(0x1e3,s_bldgs_links_Pro_shop_dirt_004cae50,4,1,1);
    FUN_0043d740(0x1e2,s_bldgs_links_Pro_shop_anim_004cae34,4,1,1);
    FUN_0043d740(0x1e1,s_bldgs_links_Links_ProshopL2_004cae18,4,1,1);
    FUN_0043d740(0x1e4,s_bldgs_links_Links_ProshopL2_dirt_004cadf4,4,1,1);
    FUN_0043d740(0x1e5,s_bldgs_links_Links_ProshopL2_anim_004cadd0,4,1,1);
    FUN_0043d740(0x1f6,s_bldgs_links_clubL1_004cadbc,4,1,1);
    FUN_0043d740(0x1f9,s_bldgs_links_clubL1_dirt_004cada4,4,1,1);
    FUN_0043d740(0x1fa,s_bldgs_links_clubL1_ANIM_004cad8c,4,1,1);
    FUN_0043d740(0x1f7,s_bldgs_links_clubL2_004cad78,4,1,1);
    FUN_0043d740(0x1f8,s_bldgs_links_clubL2_dirt_004cad60,4,1,1);
    FUN_0043d740(0x1fb,s_bldgs_links_clubL2_ANIM_004cad48,4,1,1);
    FUN_0043d740(0x1d4,s_bldgs_links_StableL1_004cad30,4,1,1);
    FUN_0043d740(0x1d7,s_bldgs_links_StableL1_dirt_004cad14,4,1,1);
    FUN_0043d740(0x1d5,s_bldgs_links_StableL2_004cacfc,4,1,1);
    FUN_0043d740(0x1d8,s_bldgs_links_StableL2_dirt_004cace0,4,1,1);
    FUN_0043d740(0x1d9,s_bldgs_links_StableL2_anim_004cacc4,4,1,1);
    FUN_0043d740(0x1ce,s_bldgs_links_ChurchL1_004cacac,4,1,1);
    FUN_0043d740(0x1d1,s_bldgs_links_ChurchL1_dirt_004cac90,4,1,1);
    FUN_0043d740(0x1cf,s_bldgs_links_ChurchL2_004cac78,4,1,1);
    FUN_0043d740(0x1d2,s_bldgs_links_ChurchL2_dirt_004cac5c,4,1,1);
    FUN_0043d740(0x1e6,s_bldgs_links_HotelL1_004cac48,4,0xf0,1);
    FUN_0043d740(0x1e9,s_bldgs_links_HotelL1_dirt_004cac2c,4,0xf0,1);
    FUN_0043d740(0x1e8,s_bldgs_links_HotelL1_anim_004cac10,4,0xf0,1);
    FUN_0043d740(0x1e7,s_bldgs_links_HotelL2_004cabfc,4,0xf0,1);
    FUN_0043d740(0x1ea,s_bldgs_links_HotelL2_dirt_004cabe0,4,0xf0,1);
    FUN_0043d740(0x1eb,s_bldgs_links_HotelL2_anim_004cabc4,4,0xf0,1);
    FUN_0043d740(0x1da,s_bldgs_links_CastleL1_004cabac,4,0xf0,1);
    FUN_0043d740(0x1dd,s_bldgs_links_CastleL1_dirt_004cab90,4,0xf0,1);
    FUN_0043d740(0x1db,s_bldgs_links_CastleL2_004cab78,4,0xf0,1);
    FUN_0043d740(0x1de,s_bldgs_links_CastleL2_dirt_004cab5c,4,0xf0,1);
    FUN_0043d740(0x1dc,s_bldgs_links_CastleL2_ANIM_004cab40,4,0xf0,1);
  }
  if (DAT_005a34e0 == '\0') {
    FUN_0043d740(0x1c8,s_bldgs_park_sign_004cab30,4,1,1);
    FUN_0043d740(0x1c9,s_bldgs_park_Houseconst_004cab18,4,1,1);
    FUN_0043d740(0x1ca,s_Homes_Regular_Parkland_A_ParkHou_004caaf4,4,0x8c,1);
    FUN_0043d740(0x1ec,s_bldgs_park_parksnackL1_004caadc,4,1,1);
    FUN_0043d740(0x1ed,s_bldgs_park_parksnackL1_base_004caac0,4,1,0);
    FUN_0043d740(0x1d3,s_bldgs_park_parksnackL1_ANIM_004caaa4,4,1,0);
    FUN_0043d740(0x1ee,s_bldgs_park_ParkSnackL2_004caa8c,4,1,1);
    FUN_0043d740(0x1ef,s_bldgs_park_ParkSnackL2_base_004caa70,4,1,1);
    FUN_0043d740(0x1d0,s_bldgs_park_parksnackL2_ANIM_004caa54,4,1,1);
    FUN_0043d740(0x1f6,s_bldgs_park_clubL1_004caa40,4,1,1);
    FUN_0043d740(0x1f9,s_bldgs_park_clubL1_base_004caa28,4,1,1);
    FUN_0043d740(0x1fa,s_bldgs_park_clubL1_ANIM_004caa10,4,1,1);
    FUN_0043d740(0x1f7,s_bldgs_park_clubL2_004ca9fc,4,1,1);
    FUN_0043d740(0x1f8,s_bldgs_park_clubL2_base_004ca9e4,4,1,1);
    FUN_0043d740(0x1fb,s_bldgs_park_clubL2_ANIM_004ca9cc,4,1,1);
    FUN_0043d740(0x1b6,s_bldgs_park_buildDRL1_004ca9b4,4,1,1);
    FUN_0043d740(0x1b7,s_bldgs_park_buildDRL2_004ca99c,4,1,1);
    FUN_0043d740(0x1b8,s_bldgs_park_plat_topDRL1_004ca984,4,0x28,1);
    FUN_0043d740(0x1b9,s_bldgs_park_plat_baseDRL1_004ca968,4,0x28,1);
    FUN_0043d740(0x1ba,s_bldgs_park_100DRL1_004ca954,4,0x28,1);
    FUN_0043d740(0x1bb,s_bldgs_park_200DRL1_004ca940,4,0x28,1);
    FUN_0043d740(0x1bc,s_bldgs_park_300DRL1_004ca92c,4,0x28,1);
    FUN_0043d740(0x1bd,s_bldgs_park_flag_DRL1_004ca914,1,0x28,1);
    FUN_0043d740(0x1be,s_bldgs_park_wall_DRL1_004ca8fc,4,0x28,1);
    FUN_0043d740(0x1bf,s_bldgs_park_buildDRL2_ANIM_004ca8e0,4,1,1);
    FUN_0043d740(0x1c0,s_bldgs_park_plat_topDRL2_004ca8c8,4,0x28,1);
    FUN_0043d740(0x1c1,s_bldgs_park_plat_baseDRL2_004ca8ac,4,0x28,1);
    FUN_0043d740(0x1f0,s_bldgs_park_puttL1_004ca898,4,0x28,1);
    FUN_0043d740(0x1f1,s_bldgs_park_puttL1_004ca898,4,0x28,1);
    FUN_0043d740(0x1f2,s_bldgs_park_shortflagL1_004ca880,1,0x28,1);
    FUN_0043d740(499,s_bldgs_park_puttL2_004ca86c,4,0x28,1);
    FUN_0043d740(500,s_bldgs_park_puttL2_ANIM_004ca854,4,0x28,1);
    FUN_0043d740(0x1f5,s_bldgs_park_puttscenic_004ca83c,4,0x28,1);
    FUN_0043d740(0x1ce,s_bldgs_park_marL1_004ca828,4,1,1);
    FUN_0043d740(0x1d1,s_bldgs_park_marL1_waterANIM_004ca80c,4,1,1);
    FUN_0043d740(0x1cf,s_bldgs_park_marL2_004ca7f8,4,1,1);
    FUN_0043d740(0x1d2,s_bldgs_park_marL2_waterANIM_004ca7dc,4,1,1);
    FUN_0043d740(0x1e6,s_bldgs_park_HotelL1_004ca7c8,4,0xf0,1);
    FUN_0043d740(0x1e9,s_bldgs_park_HotelL1_base_004ca7b0,4,0xf0,0);
    FUN_0043d740(0x1e8,s_bldgs_park_HotelL1_ANIM_004ca798,4,0xf0,1);
    FUN_0043d740(0x1e7,s_bldgs_park_HotelL2_004ca784,4,0xf0,1);
    FUN_0043d740(0x1ea,s_bldgs_park_HotelL2_base_004ca76c,4,0xf0,0);
    FUN_0043d740(0x1eb,s_bldgs_park_HotelL2_ANIM_004ca754,4,0xf0,1);
    FUN_0043d740(0x1da,s_bldgs_park_airL1_004ca740,4,0xf0,1);
    FUN_0043d740(0x1dd,s_bldgs_park_airL1_base_004ca728,4,0xf0,1);
    FUN_0043d740(0x1dc,s_bldgs_park_airL1_ANIM_004ca710,4,0xf0,1);
    FUN_0043d740(0x1db,s_bldgs_park_airL2_004ca6fc,4,0xf0,1);
    FUN_0043d740(0x1de,s_bldgs_park_airL2_base_004ca6e4,4,0xf0,1);
    FUN_0043d740(0x1df,s_bldgs_park_airL2_ANIM_004ca6cc,4,0xf0,1);
    FUN_0043d740(0x1c2,s_bldgs_park_CartL1_004ca6b8,4,1,1);
    FUN_0043d740(0x1c5,s_bldgs_park_CartL1_base_004ca6a0,4,1,1);
    FUN_0043d740(0x1c4,s_bldgs_park_CartL1_ANIM_004ca688,4,1,1);
    FUN_0043d740(0x1c3,s_bldgs_park_CartL2_004ca674,4,1,1);
    FUN_0043d740(0x1c6,s_bldgs_park_CartL2_base_004ca65c,4,1,1);
    FUN_0043d740(0x1c7,s_bldgs_park_CartL2_ANIM_004ca644,4,1,1);
    FUN_0043d740(0x1e0,s_bldgs_park_ProsL1_004ca630,4,1,1);
    FUN_0043d740(0x1e3,s_bldgs_park_ProSL1_base_004ca618,4,1,0);
    FUN_0043d740(0x1e1,s_bldgs_park_ProsL2_004ca604,4,1,1);
    FUN_0043d740(0x1e2,s_bldgs_park_ProsL2_ANIM01_004ca5e8,4,1,1);
    FUN_0043d740(0x1e5,s_bldgs_park_ProsL2_ANIM02_004ca5cc,4,1,0);
    FUN_0043d740(0x1d4,s_bldgs_park_tenL1_004ca5b8,4,1,1);
    FUN_0043d740(0x1d5,s_bldgs_park_tenL2_004ca5a4,4,1,1);
  }
  switch(DAT_005a34e0) {
  case '\0':
    FUN_00475840(s_flics_Bridges_ParkBridgePal_004ca34c,&DAT_0081e4e0,0,0x100,0);
    FUN_0043d740(0x1fe,s_Bridges_BridgeTILE_004ca338,2,0x3c,1);
    FUN_0043d740(0x1ff,s_Bridges_BridgeCap_004ca324,4,0x3c,1);
    FUN_0043d740(0x200,s_Bridges_BridgeL_004ca314,4,0x3c,1);
    FUN_0043d740(0x201,s_Bridges_BridgeT_004ca304,4,0x3c,1);
    FUN_0043d740(0x202,s_Bridges_BridgeX_004ca2f4,1,0x3c,1);
    FUN_0043d740(0x204,s_Bridges_BridgeReflect_004ca2dc,2,0x3c,0);
    FUN_0043d740(0x205,s_Bridges_BridgeXtra_004ca2c8,4,0x3c,1);
    FUN_00475840(s_flics_Bridges_DESScenicBridgePal_004ca4c4,&DAT_0081e538,0,0x100,0);
    FUN_0043d740(0x203,s_Bridges_DESBridgeScenic_004ca4ac,2,0x3c,1);
    FUN_00475840(s_flics_scenic_EaglePalette_004ca2ac,&DAT_0081deb0,0,0x100,0);
    FUN_0043d740(0x206,s_Scenic_Eagle_SQ_004ca29c,4,0x8c,1);
    FUN_0043d740(0x207,s_Scenic_Eagle_Fidget_004ca288,4,0x8c,1);
    FUN_0043d740(0x22e,s_Water_ASParkRockA_004ca274,4,0x3c,0);
    FUN_0043d740(0x22f,s_Water_ASParkRockB_004ca260,4,0x3c,0);
    FUN_0043d740(0x230,s_Water_UWParkRockA_004ca24c,4,0x3c,0);
    FUN_0043d740(0x231,s_Water_UWParkRockB_004ca238,4,0x3c,0);
    FUN_0043d740(0x232,s_Water_UWParkRockC_004ca224,4,0x3c,0);
    FUN_0043d740(0x233,s_Water_RippleParkA_004ca210,4,0x3c,0);
    FUN_0043d740(0x234,s_Water_RippleParkB_004ca1fc,4,0x3c,0);
    FUN_0043d740(0x235,s_Water_RippleParkC_004ca1e8,4,0x3c,0);
    FUN_0043d740(0x237,s_Water_WaterFallShortA_004ca1d0,4,0x3c,0);
    FUN_0043d740(0x238,s_Water_WaterFallTallA_004ca1b8,4,0x3c,0);
    FUN_0043d740(0x23b,s_Water_SprayShortA_004ca1a4,2,0x3c,0);
    FUN_0043d740(0x23c,s_Water_SprayTallA_004ca190,2,0x3c,0);
    pcVar13 = s_Water_ParkWaterfallTallTopA_004ca174;
    break;
  case '\x01':
    FUN_00475840(s_flics_Bridges_DesBridgePal_004ca158,&DAT_0081e4e0,0,0x100,0);
    FUN_0043d740(0x1fe,s_Bridges_DESBridgeTILE_004ca140,2,0x3c,1);
    FUN_0043d740(0x1ff,s_Bridges_DESBridgeCap_004ca128,4,0x3c,1);
    FUN_0043d740(0x200,s_Bridges_DESBridgeL_004ca114,4,0x3c,1);
    FUN_0043d740(0x201,s_Bridges_DESBridgeT_004ca100,4,0x3c,1);
    FUN_0043d740(0x202,s_Bridges_DESBridgeX_004ca0ec,1,0x3c,1);
    FUN_0043d740(0x204,s_Bridges_DESBridgeReflect_004ca0d0,2,0x3c,0);
    FUN_0043d740(0x205,s_Bridges_DESBridgeXtra_004ca0b8,4,0x3c,1);
    FUN_00475840(s_flics_Bridges_DESScenicBridgePal_004ca4c4,&DAT_0081e538,0,0x100,0);
    FUN_0043d740(0x203,s_Bridges_DESBridgeScenic_004ca4ac,2,0x3c,1);
    FUN_00475840(s_flics_scenic_Vulture_Palette_004ca098,&DAT_0081deb0,0,0x100,0);
    FUN_0043d740(0x206,s_Scenic_Vulture_SQ_004ca084,4,0x8c,1);
    FUN_0043d740(0x207,s_Scenic_Vulture_Fidget_004ca06c,4,0x8c,1);
    FUN_0043d740(0x22e,s_Water_ASDesRockA_004ca058,4,0x3c,0);
    FUN_0043d740(0x22f,s_Water_ASDesRockB_004ca044,4,0x3c,0);
    FUN_0043d740(0x230,s_Water_UWDesRockA_004ca030,4,0x3c,0);
    FUN_0043d740(0x231,s_Water_UWDesRockB_004ca01c,4,0x3c,0);
    FUN_0043d740(0x232,s_Water_UWDesRockC_004ca008,4,0x3c,0);
    FUN_0043d740(0x233,s_Water_RippleDesA_004c9ff4,4,0x3c,0);
    FUN_0043d740(0x234,s_Water_RippleDesB_004c9fe0,4,0x3c,0);
    FUN_0043d740(0x235,s_Water_RippleDesC_004c9fcc,4,0x3c,0);
    FUN_0043d740(0x237,s_Water_DesWaterFallShortA_004c9fb0,4,0x3c,0);
    FUN_0043d740(0x238,s_Water_DesWaterFallTallA_004c9f98,4,0x3c,0);
    FUN_0043d740(0x23b,s_Water_DesSprayShortA_004c9f80,2,0x3c,0);
    FUN_0043d740(0x23c,s_Water_DesSprayTallA_004c9f6c,2,0x3c,0);
    pcVar13 = s_Water_DesWaterfallTallTopA_004c9f50;
    break;
  case '\x02':
    FUN_00475840(s_flics_Bridges_TRopBridgePal_004ca588,&DAT_0081e4e0,0,0x100,0);
    FUN_0043d740(0x1fe,s_Bridges_TROPBridgeTILE_004ca570,2,0x3c,1);
    FUN_0043d740(0x1ff,s_Bridges_TROPBridgeCap_004ca558,4,0x3c,1);
    FUN_0043d740(0x200,s_Bridges_TROPBridgeL_004ca544,4,0x3c,1);
    FUN_0043d740(0x201,s_Bridges_TROPBridgeT_004ca530,4,0x3c,1);
    FUN_0043d740(0x202,s_Bridges_TROPBridgeX_004ca51c,1,0x3c,1);
    FUN_0043d740(0x204,s_Bridges_TROPBridgeReflect_004ca500,2,0x3c,0);
    FUN_0043d740(0x205,s_Bridges_TROPBridgeXtra_004ca4e8,4,0x3c,1);
    FUN_00475840(s_flics_Bridges_DESScenicBridgePal_004ca4c4,&DAT_0081e538,0,0x100,0);
    FUN_0043d740(0x203,s_Bridges_DESBridgeScenic_004ca4ac,2,0x3c,1);
    FUN_00475840(s_flics_scenic_Pelican_Palette_004ca48c,&DAT_0081deb0,0,0x100,0);
    FUN_0043d740(0x206,s_Scenic_Pelican_SQ_004ca478,4,0x8c,1);
    FUN_0043d740(0x207,s_Scenic_Pelican_Fidget_004ca460,4,0x8c,1);
    FUN_0043d740(0x22e,s_Water_ASTropSandA_004ca44c,4,0x3c,0);
    FUN_0043d740(0x22f,s_Water_ASTropSandB_004ca438,4,0x3c,0);
    FUN_0043d740(0x230,s_Water_UWTropCoralA_004ca424,4,0x3c,0);
    FUN_0043d740(0x231,s_Water_UWTropCoralB_004ca410,4,0x3c,0);
    FUN_0043d740(0x232,s_Water_UWTropCoralC_004ca3fc,4,0x3c,0);
    FUN_0043d740(0x233,s_Water_WaveTropA_004ca3ec,4,0x3c,0);
    FUN_0043d740(0x234,s_Water_WaveTropA_004ca3ec,4,0x3c,0);
    FUN_0043d740(0x235,s_Water_WaveTropA_004ca3ec,4,0x3c,0);
    FUN_0043d740(0x237,s_Water_TropWaterFallShortA_004ca3d0,4,0x3c,0);
    FUN_0043d740(0x238,s_Water_TropWaterFallTallA_004ca3b4,4,0x3c,0);
    FUN_0043d740(0x23b,s_Water_TropSprayShortA_004ca39c,2,0x3c,0);
    FUN_0043d740(0x23c,s_Water_TropSprayTallA_004ca384,2,0x3c,0);
    pcVar13 = s_Water_TropWaterfallTallTopA_004ca368;
    break;
  case '\x03':
    FUN_00475840(s_flics_Bridges_LinksBridgePalette_004c9f2c,&DAT_0081e4e0,0,0x100,0);
    FUN_0043d740(0x1fe,s_Bridges_LinksBridgeTILE_004c9f14,2,0x3c,1);
    FUN_0043d740(0x1ff,s_Bridges_LinksBridgeCap_004c9efc,4,0x3c,1);
    FUN_0043d740(0x200,s_Bridges_LinksBridgeL_004c9ee4,4,0x3c,1);
    FUN_0043d740(0x201,s_Bridges_LinksBridgeT_004c9ecc,4,0x3c,1);
    FUN_0043d740(0x202,s_Bridges_LinksBridgeX_004c9eb4,1,0x3c,1);
    FUN_0043d740(0x204,s_Bridges_LinksBridgeReflect_004c9e98,2,0x3c,0);
    FUN_0043d740(0x205,s_Bridges_LinksBridgeXtra_004c9e80,4,0x3c,1);
    FUN_00475840(s_flics_Bridges_DESScenicBridgePal_004ca4c4,&DAT_0081e538,0,0x100,0);
    FUN_0043d740(0x203,s_Bridges_DESBridgeScenic_004ca4ac,2,0x3c,1);
    FUN_00475840(s_flics_scenic_Hawk_Palette_004c9e64,&DAT_0081deb0,0,0x100,0);
    FUN_0043d740(0x206,s_Scenic_Hawk_SQ_004c9e54,4,0x8c,1);
    FUN_0043d740(0x207,s_Scenic_Hawk_Fidget_004c9e40,4,0x8c,1);
    FUN_0043d740(0x22e,s_Water_ASLinksRockA_004c9e2c,4,0x3c,0);
    FUN_0043d740(0x22f,s_Water_ASLinksRockB_004c9e18,4,0x3c,0);
    FUN_0043d740(0x230,s_Water_UWLinksRockA_004c9e04,4,0x3c,0);
    FUN_0043d740(0x231,s_Water_UWLinksRockB_004c9df0,4,0x3c,0);
    FUN_0043d740(0x232,s_Water_UWLinksRockC_004c9ddc,4,0x3c,0);
    FUN_0043d740(0x233,s_Water_WaveLinksA_004c9dc8,4,0x3c,0);
    FUN_0043d740(0x234,s_Water_WaveLinksA_004c9dc8,4,0x3c,0);
    FUN_0043d740(0x235,s_Water_WaveLinksA_004c9dc8,4,0x3c,0);
    FUN_0043d740(0x237,s_Water_LinksWaterFallShortA_004c9dac,4,0x3c,0);
    FUN_0043d740(0x238,s_Water_LinksWaterFallTallA_004c9d90,4,0x3c,0);
    FUN_0043d740(0x23b,s_Water_LinksSprayShortA_004c9d78,2,0x3c,0);
    FUN_0043d740(0x23c,s_Water_LinksSprayTallA_004c9d60,2,0x3c,0);
    pcVar13 = s_Water_LinksWaterfallTallTopA_004c9d40;
    break;
  default:
    goto switchD_004400ff_default;
  }
  FUN_0043d740(0x239,pcVar13,2,0x3c,0);
switchD_004400ff_default:
  if (DAT_005a34e0 == '\x01') {
    FUN_00475840(s_flics_trees_Desert_JoshuaTreePal_004c9d1c,&DAT_0081d6c8,0,0x100,0);
    FUN_00475840(s_flics_trees_Desert_JoshuaTreePal_004c9d1c,&DAT_0081d720,0,0x100,0);
    FUN_00475840(s_flics_trees_Desert_JoshuaTreePal_004c9d1c,&DAT_0081d778,0,0x100,0);
    pcVar13 = s_flics_trees_Desert_JoshuaTreePal_004c9d1c;
  }
  else if (DAT_005a34e0 == '\x02') {
    FUN_00475840(s_flics_trees_Tropic_TropBrushPal_004c9cfc,&DAT_0081d6c8,0,0x100,0);
    FUN_00475840(s_flics_trees_Tropic_TropBrushPal2_004c9cd8,&DAT_0081d720,0,0x100,0);
    FUN_00475840(s_flics_trees_Tropic_TropBrushPal3_004c9cb4,&DAT_0081d778,0,0x100,0);
    pcVar13 = s_flics_trees_Tropic_TropBrushPal_004c9cfc;
  }
  else {
    FUN_00475840(s_flics_trees_PalGreenMaple_004c9c98,&DAT_0081d6c8,0,0x100,0);
    FUN_00475840(s_flics_trees_PalRedMaple_004c9c80,&DAT_0081d720,0,0x100,0);
    FUN_00475840(s_flics_trees_PalBrownMaple_004c9c64,&DAT_0081d778,0,0x100,0);
    pcVar13 = s_flics_trees_PalBlueMaple_004c9c48;
  }
  FUN_00475840(pcVar13,&DAT_0081d7d0,0,0x100,0);
  if (DAT_005a34e0 == '\x02') {
    FUN_00475840(s_flics_trees_Tropic_Tree_Cerc_Pal_004c9c20,&DAT_0081d828,0,0x100,0);
    FUN_00475840(s_flics_trees_Tropic_Tree_Drac_Pal_004c9bf8,&DAT_0081d880,0,0x100,0);
  }
  if (DAT_005a34e0 == '\0') {
    FUN_00475840(s_flics_trees_PalPineBlue_004c9be0,&DAT_0081d828,0,0x100,0);
    FUN_00475840(s_flics_trees_PalPineDarkGreen_004c9bc0,&DAT_0081d880,0,0x100,0);
    FUN_00475840(s_flics_trees_PalPineOriginal_004c9ba4,&DAT_0081d8d8,0,0x100,0);
    FUN_00475840(s_flics_trees_PalPineYellow_004c9b88,&DAT_0081d930,0,0x100,0);
  }
  if (DAT_005a34e0 == '\x01') {
    FUN_00475840(s_flics_trees_Desert_CactusAPal_004c9b68,&DAT_0081d828,0,0x100,0);
    FUN_00475840(s_flics_trees_Desert_CactusCPal_004c9b48,&DAT_0081d880,0,0x100,0);
    FUN_00475840(s_flics_flowers_DesertFlowersRedPa_004c9b24,&DAT_0081d988,0,0x100,0);
    FUN_00475840(s_flics_flowers_DesertFlowersOrgPa_004c9b00,&DAT_0081d9e0,0,0x100,0);
    FUN_00475840(s_flics_flowers_DesertFlowersPurpP_004c9adc,&DAT_0081da38,0,0x100,0);
    FUN_00475840(s_flics_flowers_DesertFlowersBlueP_004c9ab8,&DAT_0081da90,0,0x100,0);
    pcVar13 = s_flics_flowers_DesertFlowersPinkP_004c9a94;
  }
  else if (DAT_005a34e0 == '\x02') {
    FUN_00475840(s_flics_flowers_TropicalFlowers_Aq_004c9a6c,&DAT_0081d988,0,0x100,0);
    FUN_00475840(s_flics_flowers_TropicalFlowers_Or_004c9a44,&DAT_0081d9e0,0,0x100,0);
    FUN_00475840(s_flics_flowers_TropicalFlowers_Pu_004c9a1c,&DAT_0081da38,0,0x100,0);
    FUN_00475840(s_flics_flowers_TropicalFlowers_Bl_004c99f4,&DAT_0081da90,0,0x100,0);
    pcVar13 = s_flics_flowers_TropicalFlowers_Re_004c99cc;
  }
  else {
    FUN_00475840(s_flics_flowers_FlowerBedA_YelPal_004c99ac,&DAT_0081d988,0,0x100,0);
    FUN_00475840(s_flics_flowers_FlowerBedA_OrgPal_004c998c,&DAT_0081d9e0,0,0x100,0);
    FUN_00475840(s_flics_flowers_FlowerBedA_PurpPal_004c9968,&DAT_0081da38,0,0x100,0);
    FUN_00475840(s_flics_flowers_FlowerBedA_WhitePa_004c9944,&DAT_0081da90,0,0x100,0);
    pcVar13 = s_flics_flowers_FlowerBedA_RedPal_004c9924;
  }
  FUN_00475840(pcVar13,&DAT_0081dae8,0,0x100,0);
  if (DAT_005a34e0 == '\x03') {
    FUN_00475840(s_flics_trees_Links_LinksPinePal_004c9904,&DAT_0081d828,0,0x100,0);
    FUN_00475840(s_flics_trees_Links_LinksPinePal2_004c98e4,&DAT_0081d880,0,0x100,0);
    FUN_00475840(s_flics_trees_Links_LinksPinePal3_004c98c4,&DAT_0081d8d8,0,0x100,0);
    FUN_00475840(s_flics_trees_Links_LinksPinePal4_004c98a4,&DAT_0081d930,0,0x100,0);
    if (DAT_005a34e0 != '\x03') goto LAB_00440df4;
    FUN_00475840(s_flics_trees_Links_ScotsPinePal_004c97c0,&DAT_0081db40,0,0x100,0);
    FUN_00475840(s_flics_trees_Links_ScotsPinePal2_004c97a0,&DAT_0081db98,0,0x100,0);
    FUN_00475840(s_flics_trees_Links_ScotsPinePal3_004c9780,&DAT_0081dbf0,0,0x100,0);
    pcVar13 = s_flics_trees_Links_ScotsPinePal4_004c9760;
  }
  else {
LAB_00440df4:
    if (DAT_005a34e0 == '\x01') {
      FUN_00475840(s_flics_trees_desert_tallpalmdeser_004c987c,&DAT_0081db40,0,0x100,0);
      FUN_00475840(s_flics_trees_desert_tallpalmdeser_004c987c,&DAT_0081db98,0,0x100,0);
      FUN_00475840(s_flics_trees_desert_tallpalmdeser_004c987c,&DAT_0081dbf0,0,0x100,0);
      pcVar13 = s_flics_trees_desert_tallpalmdeser_004c987c;
    }
    else if (DAT_005a34e0 == '\x02') {
      FUN_00475840(s_flics_trees_tropic_tree_tall_pal_004c984c,&DAT_0081db40,0,0x100,0);
      FUN_00475840(s_flics_trees_tropic_tree_tall_pal_004c984c,&DAT_0081db98,0,0x100,0);
      FUN_00475840(s_flics_trees_tropic_tree_tall_pal_004c984c,&DAT_0081dbf0,0,0x100,0);
      pcVar13 = s_flics_trees_tropic_tree_tall_pal_004c984c;
    }
    else {
      FUN_00475840(s_flics_trees_PalOrangePalm_004c9830,&DAT_0081db40,0,0x100,0);
      FUN_00475840(s_flics_trees_PalOriginalPalm_004c9814,&DAT_0081db98,0,0x100,0);
      FUN_00475840(s_flics_trees_PalPlumPalm_004c97fc,&DAT_0081dbf0,0,0x100,0);
      pcVar13 = s_flics_trees_PalGreenPalm_004c97e0;
    }
  }
  FUN_00475840(pcVar13,&DAT_0081dc48,0,0x100,0);
  cVar5 = DAT_005a34e0;
  switch(DAT_005a34e0) {
  case '\0':
    puVar9 = &DAT_004c1a40;
    puVar12 = &DAT_00578350;
    for (iVar2 = 0x114; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar13 = s_stream_004c96cc;
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
    pcVar11 = (char *)&DAT_00578530;
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
    pcVar13 = s_brush_004c9740;
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
    pcVar11 = (char *)&DAT_00578560;
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
    pcVar13 = s_wetlands_004c96c0;
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
    pcVar11 = (char *)&DAT_005786b0;
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
    pcVar13 = s_Snack_Bar_004c96e8;
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
    pcVar11 = s_Snack_Bar_004c273c;
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
    pcVar13 = s_Airstrip_004c96b4;
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
    pcVar11 = s_Airstrip_004c27c7 + 1;
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
    pcVar13 = s_Tennis_Court_004c96a4;
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
    pcVar11 = s_Swim_Club_004c2764;
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
    pcVar13 = s_Marina_004c969c;
    break;
  case '\x01':
    puVar9 = &DAT_004c1a40;
    puVar12 = &DAT_00578350;
    for (iVar2 = 0x114; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar13 = s_desert_004c9758;
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
    pcVar11 = (char *)&DAT_00578410;
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
    pcVar13 = s_rough_004c9750;
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
    pcVar11 = (char *)&DAT_00578440;
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
    pcVar13 = s_ravine_004c9748;
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
    pcVar11 = (char *)&DAT_00578560;
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
    pcVar13 = s_brush_004c9740;
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
    pcVar11 = (char *)&DAT_00578530;
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
    pcVar13 = s_cactus_004c9738;
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
    pcVar11 = (char *)&DAT_005785f0;
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
    pcVar13 = s_cacti_004c9730;
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
    pcVar11 = (char *)&DAT_00578600;
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
    pcVar13 = s_joshua_tree_004c9724;
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
    pcVar11 = (char *)&DAT_005785c0;
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
    pcVar13 = s_joshua_trees_004c9714;
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
    pcVar11 = (char *)&DAT_005785d0;
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
    pcVar13 = s_palm_tree_004c9708;
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
    pcVar11 = (char *)&DAT_00578620;
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
    pcVar13 = s_palm_trees_004c96fc;
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
    pcVar11 = (char *)&DAT_00578630;
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
    pcVar13 = s_canyon_004c96f4;
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
    pcVar11 = (char *)&DAT_005786b0;
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
    DAT_00578432 = 1;
    DAT_00578466 = 5;
    DAT_005786d8 = 0;
    _DAT_005786dc = 0;
    uVar3 = 0xffffffff;
    pcVar13 = s_Snack_Bar_004c96e8;
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
    pcVar11 = s_Snack_Bar_004c273c;
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
    pcVar13 = s_Casino_004c96e0;
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
    pcVar11 = s_Airstrip_004c27c7 + 1;
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
    pcVar13 = (char *)&DAT_004c96dc;
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
    pcVar11 = s_Swim_Club_004c2764;
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
    pcVar13 = s_Helipad_004c96d4;
    break;
  case '\x02':
    puVar9 = &DAT_004c1a40;
    puVar12 = &DAT_00578350;
    for (iVar2 = 0x114; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar13 = s_stream_004c96cc;
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
    pcVar11 = (char *)&DAT_00578530;
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
    pcVar13 = s_brush_004c9740;
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
    pcVar11 = (char *)&DAT_00578560;
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
    pcVar13 = s_tropical_bush_004c968c;
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
    pcVar11 = (char *)&DAT_005785c0;
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
    pcVar13 = s_tropical_bushes_004c967c;
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
    pcVar11 = (char *)&DAT_005785d0;
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
    pcVar13 = s_tropical_tree_004c966c;
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
    pcVar11 = (char *)&DAT_005785f0;
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
    pcVar13 = s_tropical_trees_004c965c;
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
    pcVar11 = (char *)&DAT_00578600;
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
    pcVar13 = s_palm_tree_004c9708;
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
    pcVar11 = (char *)&DAT_00578620;
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
    pcVar13 = s_palm_trees_004c96fc;
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
    pcVar11 = (char *)&DAT_00578630;
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
    pcVar13 = s_wetlands_004c96c0;
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
    pcVar11 = (char *)&DAT_005786b0;
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
    pcVar13 = s_Snack_Bar_004c96e8;
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
    pcVar11 = s_Snack_Bar_004c273c;
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
    pcVar13 = s_Theme_Park_004c9650;
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
    pcVar11 = s_Airstrip_004c27c7 + 1;
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
    pcVar13 = s_Swim_Club_004c9644;
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
    pcVar11 = s_Swim_Club_004c2764;
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
    pcVar13 = s_Marina_004c969c;
    break;
  case '\x03':
    puVar9 = &DAT_004c1a40;
    puVar12 = &DAT_00578350;
    for (iVar2 = 0x114; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar13 = &DAT_004c963c;
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
    pcVar11 = (char *)&DAT_00578530;
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
    pcVar13 = s_gorse_004c9634;
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
    pcVar11 = (char *)&DAT_00578560;
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
    pcVar13 = &DAT_004c962c;
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
    pcVar11 = (char *)&DAT_005785f0;
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
    pcVar13 = s_pines_004c9624;
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
    pcVar11 = (char *)&DAT_00578600;
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
    pcVar13 = s_maple_tree_004c9618;
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
    pcVar11 = (char *)&DAT_005785c0;
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
    pcVar13 = s_maple_trees_004c960c;
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
    pcVar11 = (char *)&DAT_005785d0;
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
    pcVar13 = s_scots_pine_004c9600;
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
    pcVar11 = (char *)&DAT_00578620;
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
    pcVar13 = s_scots_pines_004c95f4;
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
    pcVar11 = (char *)&DAT_00578630;
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
    pcVar13 = (char *)&DAT_004c95f0;
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
    pcVar11 = s_Snack_Bar_004c273c;
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
    pcVar13 = (char *)&DAT_004c96dc;
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
    pcVar11 = s_Swim_Club_004c2764;
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
    pcVar13 = s_Helipad_004c96d4;
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
    pcVar11 = s_Marina_004c27a0;
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
    pcVar13 = s_Castle_004c95e8;
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
    pcVar11 = s_Airstrip_004c27c7 + 1;
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
    pcVar13 = s_Stable_004c95e0;
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
    pcVar11 = s_Swim_Club_004c2764;
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
    pcVar13 = s_Church_004c95d8;
    break;
  default:
    goto switchD_00440f93_default;
  }
  uVar3 = 0xffffffff;
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
  pcVar11 = s_Marina_004c27a0;
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
switchD_00440f93_default:
  puVar7 = &DAT_00578373;
  do {
    puVar7 = puVar7 + 0x30;
  } while ((int)puVar7 < 0x5787c3);
  iVar2 = 400;
  puVar10 = &DAT_0081a4f0;
  piVar8 = &DAT_005a99b0;
  do {
    if (*piVar8 != -1) {
      FUN_0043d670(iVar2);
      cVar5 = DAT_005a34e0;
    }
    *piVar8 = -1;
    *puVar10 = 0;
    piVar8 = piVar8 + 1;
    iVar2 = iVar2 + 1;
    puVar10 = puVar10 + 0x32;
  } while ((int)piVar8 < 0x5a9a3d);
  if (cVar5 == '\x01') {
    FUN_0043d740(0x191,s_bldgs_desert_dputt_whiteflag_004c95b8,1,0,1);
    FUN_0043d740(400,s_flowers_OilSlick_004c95a4,4,0,1);
    FUN_0043d740(0x1a1,s_Scenic_SailboatDesert_004c958c,8,0x50,1);
    FUN_0043d740(0x19f,s_Scenic_DolphinDesert_004c9574,4,0x3c,1);
    FUN_0043d740(0x1a0,s_Scenic_Desert_waterspray_004c9558,1,0x28,1);
    FUN_0043d740(0x19b,s_trees_Desert_JoshuaTree_Sm_004c953c,4,1,1);
    FUN_0043d740(0x19c,s_trees_Desert_JoshuaTree_Md_004c9520,4,1,1);
    FUN_0043d740(0x19d,s_trees_Desert_JoshuaTree_Lg_004c9504,4,1,1);
    FUN_0043d740(0x1a2,s_flowers_DesFlowers_Single_004c94e8,4,0x28,1);
    FUN_0043d740(0x1a3,s_flowers_DesFlowers_1Side_004c94cc,4,0x28,1);
    FUN_0043d740(0x1a4,s_flowers_DesFlowers_2Side_004c94b0,4,0x28,1);
    FUN_0043d740(0x1a5,s_flowers_DesFlowers_3Side_004c9494,4,0x28,1);
    FUN_0043d740(0x1a6,s_flowers_DesFlowers_4Side_004c9478,4,0x28,1);
    FUN_0043d740(0x1a7,s_flowers_DesFlowers_Corner_004c945c,4,0x28,1);
    FUN_0043d740(0x1a8,s_flowers_DesSin_Single_004c9444,4,0x28,1);
    FUN_0043d740(0x1a9,s_flowers_DesSin_1Side_004c942c,4,0x28,1);
    FUN_0043d740(0x1aa,s_flowers_DesSin_2Side_004c9414,4,0x28,1);
    FUN_0043d740(0x1ab,s_flowers_DesSin_3Side_004c93fc,4,0x28,1);
    FUN_0043d740(0x1ac,s_flowers_DesSin_4Side_004c93e4,4,0x28,1);
    FUN_0043d740(0x1ad,s_flowers_DesSin_Corner_004c93cc,4,0x28,1);
    FUN_0043d740(0x1ae,s_flowers_DesFlowers_Single_Wall_004c93ac,4,0x28,1);
    FUN_0043d740(0x1af,s_flowers_DesFlowers_1Side_Wall_004c938c,4,0x28,1);
    FUN_0043d740(0x1b0,s_flowers_DesFlowers_2Side_Wall_004c936c,4,0x28,1);
    FUN_0043d740(0x1b1,s_flowers_DesFlowers_3Side_Wall_004c934c,4,0x28,1);
    FUN_0043d740(0x1b2,s_flowers_DesFlowers_4Side_004c9478,4,0x28,1);
    pcVar13 = s_flowers_DesFlowers_Corner_Wall_004c932c;
  }
  else if (cVar5 == '\x02') {
    FUN_0043d740(400,s_flowers_DryGrass_004c9318,4,0,1);
    FUN_0043d740(0x191,s_bldgs_tropical_TROPPuttingG_whit_004c92f0,1,0,1);
    FUN_0043d740(0x1a1,s_Scenic_SailboatTropical_004c92d8,8,0x50,1);
    FUN_0043d740(0x19f,s_Scenic_DolphinTropical_004c92c0,4,0x3c,1);
    FUN_0043d740(0x1a0,s_Scenic_Trop_waterspray_004c92a8,1,0x28,1);
    FUN_0043d740(0x19b,s_trees_Tropic_TropicalBrush_Sm_004c9288,4,1,1);
    FUN_0043d740(0x19c,s_trees_Tropic_TropicalBrush_Med_004c9268,4,1,1);
    FUN_0043d740(0x19d,s_trees_Tropic_TropicalBrush_Lg_004c9248,4,1,1);
    FUN_0043d740(0x1a2,s_flowers_TropFlowers_Single_004c922c,4,0x28,1);
    FUN_0043d740(0x1a3,s_flowers_TropFlowers_1Side_004c9210,4,0x28,1);
    FUN_0043d740(0x1a4,s_flowers_TropFlowers_2Side_004c91f4,4,0x28,1);
    FUN_0043d740(0x1a5,s_flowers_TropFlowers_3Side_004c91d8,4,0x28,1);
    FUN_0043d740(0x1a6,s_flowers_TropFlowers_4Side_004c91bc,4,0x28,1);
    FUN_0043d740(0x1a7,s_flowers_TropFlowers_Corner_004c91a0,4,0x28,1);
    FUN_0043d740(0x1a8,s_flowers_SinTrop_Single_004c9188,4,0x28,1);
    FUN_0043d740(0x1a9,s_flowers_SinTrop_1Side_004c9170,4,0x28,1);
    FUN_0043d740(0x1aa,s_flowers_SinTrop_2Side_004c9158,4,0x28,1);
    FUN_0043d740(0x1ab,s_flowers_SinTrop_3Side_004c9140,4,0x28,1);
    FUN_0043d740(0x1ac,s_flowers_SinTrop_4Side_004c9128,4,0x28,1);
    FUN_0043d740(0x1ad,s_flowers_SinTrop_Corner_004c9110,4,0x28,1);
    FUN_0043d740(0x1ae,s_flowers_TropFlowers_Single_Wall_004c90f0,4,0x28,1);
    FUN_0043d740(0x1af,s_flowers_TropFlowers_1Side_Wall_004c90d0,4,0x28,1);
    FUN_0043d740(0x1b0,s_flowers_TropFlowers_2Side_Wall_004c90b0,4,0x28,1);
    FUN_0043d740(0x1b1,s_flowers_TropFlowers_3Side_Wall_004c9090,4,0x28,1);
    FUN_0043d740(0x1b2,s_flowers_TropFlowers_4Side_004c91bc,4,0x28,1);
    pcVar13 = s_flowers_TropFlowers_Corner_Wall_004c9070;
  }
  else {
    if (cVar5 == '\0') {
      FUN_0043d740(0x191,s_bldgs_park_putt_whiteflag_004c9054,1,0,1);
      FUN_0043d740(0x19f,s_Scenic_Dolphin_004c9044,4,0x3c,1);
      FUN_0043d740(0x1a0,s_Scenic_waterspray_004c9030,1,0x28,1);
      pcVar13 = s_Scenic_Sailboat_Move_004c9018;
    }
    else {
      FUN_0043d740(0x191,s_bldgs_links_pg_whiteflag_004c8ffc,1,0,1);
      FUN_0043d740(0x19f,s_Scenic_DolphinLinks_004c8fe8,4,0x3c,1);
      FUN_0043d740(0x1a0,s_Scenic_Links_waterspray_004c8fd0,1,0x28,1);
      pcVar13 = s_Scenic_SailboatLinks_004c8fb8;
    }
    FUN_0043d740(0x1a1,pcVar13,8,0x50,1);
    FUN_0043d740(400,s_flowers_dandelion_01_004c8fa0,4,0,1);
    FUN_0043d740(0x19b,s_trees_TreeMapleSmall_004c8f88,4,1,1);
    FUN_0043d740(0x19c,s_trees_TreeMapleMedium_004c8f70,4,1,1);
    FUN_0043d740(0x19d,s_trees_TreeMapleLarge_004c8f58,4,1,1);
    FUN_0043d740(0x1a2,s_flowers_Flowers_Single_004c8f40,4,0x28,1);
    FUN_0043d740(0x1a3,s_flowers_Flowers_1Side_004c8f28,4,0x28,1);
    FUN_0043d740(0x1a4,s_flowers_Flowers_2Side_004c8f10,4,0x28,1);
    FUN_0043d740(0x1a5,s_flowers_Flowers_3Side_004c8ef8,4,0x28,1);
    FUN_0043d740(0x1a6,s_flowers_Flowers_4Side_004c8ee0,4,0x28,1);
    FUN_0043d740(0x1a7,s_flowers_Flowers_Corner_004c8ec8,4,0x28,1);
    FUN_0043d740(0x1a8,s_flowers_SinFlowers_Single_004c8eac,4,0x28,1);
    FUN_0043d740(0x1a9,s_flowers_SinFlowers_1Side_004c8e90,4,0x28,1);
    FUN_0043d740(0x1aa,s_flowers_SinFlowers_2Side_004c8e74,4,0x28,1);
    FUN_0043d740(0x1ab,s_flowers_SinFlowers_3Side_004c8e58,4,0x28,1);
    FUN_0043d740(0x1ac,s_flowers_SinFlowers_4Side_004c8e3c,4,0x28,1);
    FUN_0043d740(0x1ad,s_flowers_SinFlowers_Corner_004c8e20,4,0x28,1);
    FUN_0043d740(0x1ae,s_flowers_WalledFlowers_Single_004c8e00,4,0x28,1);
    FUN_0043d740(0x1af,s_flowers_WalledFlowers_1Side_004c8de4,4,0x28,1);
    FUN_0043d740(0x1b0,s_flowers_WalledFlowers_2Side_004c8dc8,4,0x28,1);
    FUN_0043d740(0x1b1,s_flowers_WalledFlowers_3Side_004c8dac,4,0x28,1);
    FUN_0043d740(0x1b2,s_flowers_Flowers_4Side_004c8ee0,4,0x28,1);
    pcVar13 = s_flowers_WalledFlowers_Corner_004c8d8c;
  }
  FUN_0043d740(0x1b3,pcVar13,4,0x28,1);
  if (DAT_005a34e0 == '\x02') {
    FUN_0043d740(0x192,s_trees_Tropic_Tree_Cerc_Cerc_Smal_004c8d68,4,1,1);
    FUN_0043d740(0x193,s_trees_Tropic_Tree_Cerc_Cerc_Med_004c8d48,4,1,1);
    FUN_0043d740(0x194,s_trees_Tropic_Tree_Cerc_Cerc_Larg_004c8d24,4,1,1);
    FUN_0043d740(0x198,s_trees_Tropic_Tree_Drac_Drac_Smal_004c8d00,4,1,1);
    FUN_0043d740(0x199,s_trees_Tropic_Tree_Drac_Drac_Med_004c8ce0,4,1,1);
    FUN_0043d740(0x19a,s_trees_Tropic_Tree_Drac_Drac_Larg_004c8cbc,4,1,1);
  }
  if (DAT_005a34e0 == '\0') {
    FUN_0043d740(0x192,s_trees_TreePineSpruceSm_004c8ca4,4,1,1);
    FUN_0043d740(0x193,s_trees_TreePineSpruceMed_004c8c8c,4,1,1);
    FUN_0043d740(0x194,s_trees_TreePineSpruceLg_004c8c74,4,1,1);
    FUN_0043d740(0x198,s_trees_TreePineFirSm_004c8c60,4,1,1);
    FUN_0043d740(0x199,s_trees_TreePineFirMed_004c8c48,4,1,1);
    FUN_0043d740(0x19a,s_trees_TreePineFirLg_004c8c34,4,1,1);
  }
  if (DAT_005a34e0 == '\x01') {
    FUN_0043d740(0x192,s_trees_Desert_CactusA_Sm_004c8c1c,4,1,1);
    FUN_0043d740(0x193,s_trees_Desert_CactusA_Md_004c8c04,4,1,1);
    FUN_0043d740(0x194,s_trees_Desert_CactusA_Lg_004c8bec,4,1,1);
    FUN_0043d740(0x198,s_trees_Desert_CactusC_Sm_004c8bd4,4,1,1);
    FUN_0043d740(0x199,s_trees_Desert_CactusC_Md_004c8bbc,4,1,1);
    FUN_0043d740(0x19a,s_trees_Desert_CactusC_Lg_004c8ba4,4,1,1);
  }
  if (DAT_005a34e0 == '\x03') {
    FUN_0043d740(0x192,s_trees_Links_LinksPine_Small_004c8b88,4,1,1);
    FUN_0043d740(0x193,s_trees_Links_LinksPine_Med_004c8b6c,4,1,1);
    FUN_0043d740(0x194,s_trees_Links_LinksPine_Tall_004c8b50,4,1,1);
    FUN_0043d740(0x198,s_trees_Links_LinksPine_Small_004c8b88,4,1,1);
    FUN_0043d740(0x199,s_trees_Links_LinksPine_Med_004c8b6c,4,1,1);
    FUN_0043d740(0x19a,s_trees_Links_LinksPine_Tall_004c8b50,4,1,1);
    if (DAT_005a34e0 == '\x03') {
      FUN_0043d740(0x195,s_trees_Links_ScotsPine_Small_004c8aa4,4,1,1);
      FUN_0043d740(0x196,s_trees_Links_ScotsPine_Med_004c8a88,4,1,1);
      pcVar13 = s_trees_Links_ScotsPine_Lg_004c8a6c;
      goto LAB_004420ee;
    }
  }
  if ((DAT_005a34e0 == '\x01') || (DAT_005a34e0 == '\x02')) {
    FUN_0043d740(0x195,s_trees_desert_TallPalm_small_004c8af8,4,1,1);
    FUN_0043d740(0x196,s_trees_desert_TallPalm_med_004c8adc,4,1,1);
    pcVar13 = s_trees_desert_TallPalm_large_004c8ac0;
  }
  else {
    FUN_0043d740(0x195,s_trees_TreePalmSm_004c8b3c,4,1,1);
    FUN_0043d740(0x196,s_trees_TreePalmMed_004c8b28,4,1,1);
    pcVar13 = s_trees_TreePalmLg_004c8b14;
  }
LAB_004420ee:
  FUN_0043d740(0x197,pcVar13,4,1,1);
  local_4 = 0xffffffff;
  FUN_00474c40();
  *unaff_FS_OFFSET = local_c;
  return;
}

