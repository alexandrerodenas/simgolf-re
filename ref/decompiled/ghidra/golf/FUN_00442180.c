/* Ghidra decompiled: golf.exe */
/* Function: FUN_00442180 @ 0x00442180 */


void FUN_00442180(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined *puVar10;
  char *pcVar11;
  short *psVar12;
  uint uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 *unaff_FS_OFFSET;
  bool bVar17;
  int local_2e4;
  uint local_2e0;
  undefined *local_2dc;
  undefined1 local_2d8 [696];
  short local_20 [8];
  int local_10;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b74bb;
  *unaff_FS_OFFSET = &local_c;
  FUN_004673e0();
  FUN_0045b880();
  uVar9 = 0;
  puVar14 = (undefined4 *)&DAT_00575ab0;
  for (iVar6 = 0xa28; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_005794b8;
  for (iVar6 = 0x2700; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_00585850;
  for (iVar6 = 0x4c0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_005409ac;
  for (iVar6 = 0xfa; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_0051b388;
  for (iVar6 = 0xfa; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_0053e63c;
  for (iVar6 = 0xfa; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_00520640;
  for (iVar6 = 0xfa; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_00568600;
  for (iVar6 = 0xfa; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_0059dea0;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_00584210;
  for (iVar6 = 500; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_0056ae70;
  for (iVar6 = 0x5c0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_005422f8;
  for (iVar6 = 0x3c; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  DAT_005685f0 = 1;
  puVar14 = &DAT_0059ae80;
  for (iVar6 = 0x72; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  puVar14 = (undefined4 *)&DAT_0053caf0;
  for (iVar6 = 0x4e2; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = (undefined4 *)&DAT_0053ea24;
  for (iVar6 = 0x271; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = &DAT_005a4998;
  for (iVar6 = 0x28a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)puVar14 = 0;
  iVar6 = 0;
  piVar2 = &DAT_0059bfc4;
  do {
    *piVar2 = iVar6;
    piVar2 = piVar2 + 1;
    iVar6 = iVar6 + 1;
  } while ((int)piVar2 < 0x59bfe4);
  puVar3 = &DAT_0058bcb8;
  do {
    *puVar3 = 0xffff;
    puVar3 = puVar3 + 8;
  } while ((int)puVar3 < 0x58ccb8);
  uVar13 = 0;
  DAT_0059b730 = 0;
  local_2e0 = 0;
  do {
    do {
      uVar4 = FUN_0045c1e0(9);
      uVar4 = uVar4 & 0xffff;
    } while ((&DAT_0054230c)[uVar4 * 6] != 0);
    if (-1 < (int)uVar13) {
      iVar6 = local_2e0 + 1;
      do {
        uVar13 = FUN_0045c1e0(4);
        iVar5 = (uVar13 & 0xffff) + uVar4 * 6;
        (&DAT_005422f8)[iVar5] = (&DAT_005422f8)[iVar5] + 1;
        iVar6 = iVar6 + -1;
        (&DAT_0054230c)[uVar4 * 6] = (&DAT_0054230c)[uVar4 * 6] + 1;
        uVar13 = local_2e0;
      } while (iVar6 != 0);
    }
    uVar13 = uVar13 + 1;
    local_2e0 = uVar13;
  } while ((int)uVar13 < 9);
  if (param_1 == 0) {
    FUN_0043dbe0();
  }
  else {
    DAT_0059ae7c = 0;
    puVar14 = &DAT_00543d10;
    for (iVar6 = 0x668a; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    puVar14 = &DAT_005a9370;
    for (iVar6 = 0x24e; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
    puVar14 = &DAT_0053f3e8;
    for (iVar6 = 0x24e; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    puVar14 = &DAT_008156d0;
    for (iVar6 = 0x1ccf; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    puVar14 = &DAT_00820b70;
    for (iVar6 = 100; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
    DAT_00820b70 = 0xfffffffe;
    FUN_00474ae0();
    local_4 = 0;
    FUN_00474dd0(0x400,800,0,1,0,0);
    FUN_00475840(s_Bodies_MaleSwap01_004d05f0,&DAT_0081ca10,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap01_004d05f0,&DAT_0081ca68,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap02_004d05dc,&DAT_0081cac0,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap03_004d05c8,&DAT_0081cb18,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap04_004d05b4,&DAT_0081cb70,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap05_004d05a0,&DAT_0081cbc8,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap06_004d058c,&DAT_0081cc20,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap07_004d0578,&DAT_0081cc78,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap08_004d0564,&DAT_0081ccd0,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap09_004d0550,&DAT_0081cd28,0,0x100,0);
    FUN_00475840(s_Bodies_MaleSwap10_004d053c,&DAT_0081cd80,0,0x100,0);
    FUN_00475840(s_flics_CartPal_004d052c,&DAT_0081d460,0,0x100,0);
    FUN_00475840(s_flics_trees_WillowWhite_004d0514,&DAT_0081dca0,0,0x100,0);
    FUN_00475840(s_flics_trees_WillowLemon_004d04fc,&DAT_0081dcf8,0,0x100,0);
    FUN_00475840(s_flics_trees_WillowPink_004d04e4,&DAT_0081dd50,0,0x100,0);
    FUN_00475840(s_flics_trees_WillowGreen_004d04cc,&DAT_0081dda8,0,0x100,0);
    FUN_00475840(s_flics_scenic_BlimpFXSPal_004d04b0,&DAT_0081de00,0,0x100,0);
    FUN_00475840(s_flics_scenic_BlimpEAPal_004d0498,&DAT_0081de58,0,0x100,0);
    FUN_00475840(s_flics_bldgs_upgrade_bwasherPal_004d0478,&DAT_0081df08,0,0x100,0);
    FUN_00475840(s_flics_Homes_Sum_homePal_004d0460,&DAT_0081e068,0,0x100,0);
    FUN_00475840(s_flics_Homes_political_homePal_004d0440,&DAT_0081e0c0,0,0x100,0);
    FUN_00475840(s_flics_Homes_ArtDeco_HomePal_004d0424,&DAT_0081e118,0,0x100,0);
    FUN_00475840(s_flics_Homes_DesertCelebHouse_Pal_004d03fc,&DAT_0081e170,0,0x100,0);
    FUN_00475840(s_flics_Homes_1stSummer_Palette_004d03dc,&DAT_0081e1c8,0,0x100,0);
    FUN_00475840(s_flics_Homes_2ndSummer_Palette_004d03bc,&DAT_0081e220,0,0x100,0);
    FUN_00475840(s_flics_flowers_CrabgrassPal_004d03a0,&DAT_0081e430,0,0x100,0);
    FUN_00475840(s_flics_Scenic_ScenicBridgePalette_004d037c,&DAT_0081e590,0,0x100,0);
    FUN_00475840(s_flics_Scenic_wave_palette_004d0360,&DAT_0081e640,0,0x100,0);
    FUN_00475840(s_flics_scenic_HotAirPal_004d0348,&DAT_0081e6f0,0,0x100,0);
    FUN_00475840(s_flics_scenic_Scenic_OgrassPal_004d0328,&DAT_0081e748,0,0x100,0);
    FUN_00475840(s_flics_scenic_VineyardPal_004d030c,&DAT_0081e7a0,0,0x100,0);
    FUN_00475840(s_flics_scenic_CactusGroupAPal_004d02ec,&DAT_0081e7f8,0,0x100,0);
    FUN_00475840(s_flics_scenic_RhodyPal_004d02d4,&DAT_0081e850,0,0x100,0);
    FUN_00475840(s_flics_scenic_ScenicFlowersPal_004d02b4,&DAT_0081e8a8,0,0x100,0);
    FUN_00475840(s_flics_flowers_RoseBushPal_004d0298,&DAT_0081e958,0,0x100,0);
    FUN_00475840(s_flics_scenic_Rock_FormPal_004d027c,&DAT_0081e9b0,0,0x100,0);
    FUN_00475840(s_flics_tees_TeeMarkerPal_004d0264,&DAT_0081ea60,0,0x100,0);
    FUN_00475840(s_flics_scenic_Scenic_TreePal_004d0248,&DAT_0081eab8,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_wmillAPal_004d022c,&DAT_0081edd0,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_LighthouseBPal_004d020c,&DAT_0081f0e8,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_LighthouseCPal_004d01ec,&DAT_0081eed8,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_BarnPal_004d01d4,&DAT_0081ecc8,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_WindmillPal_004d01b8,&DAT_0081ef88,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_StonetwoPal_004d019c,&DAT_0081ed78,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_equestrianPal_004d017c,&DAT_0081efe0,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_EasterPal_004d0160,&DAT_0081f038,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_BuddhaPal_004d0144,&DAT_0081ef30,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_PagodaPal_004d0128,&DAT_0081f090,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_SundialPal_004d010c,&DAT_0081ec70,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_ChineseHousePal_004d00ec,&DAT_0081f140,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_CivilWarCannonPa_004d00c8,&DAT_0081ed20,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_CivilWarStatuePa_004d00a4,&DAT_0081ee80,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_TarpitPal_004d0088,&DAT_0081f198,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_ParklandRockPal_004d0068,&DAT_0081ee28,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_wtow2Pal_004d004c,&DAT_0081f1f0,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_Radio_TowerPal_004d002c,&DAT_0081f248,0,0x100,0);
    FUN_00475840(s_flics_Landmarks_Red_Oil_Pump_Pal_004d0008,&DAT_0081f2a0,0,0x100,0);
    FUN_00475840(s_flics_animals_ELK_Palette_004cffec,&DAT_0081f350,0,0x100,0);
    FUN_00475840(s_flics_animals_CranePal_004cffd4,&DAT_0081f3a8,0,0x100,0);
    FUN_00475840(s_flics_animals_FlamingoPal_004cffb8,&DAT_0081f400,0,0x100,0);
    FUN_00475840(s_flics_animals_Sheep_Palette_004cff9c,&DAT_0081f458,0,0x100,0);
    FUN_00475840(s_flics_animals_Croc_Palette_004cff80,&DAT_0081f4b0,0,0x100,0);
    FUN_00475840(s_flics_animals_Snake_Palette_004cff64,&DAT_0081f508,0,0x100,0);
    FUN_00475840(s_flics_animals_Gila_Palette_004cff48,&DAT_0081f560,0,0x100,0);
    FUN_00475840(s_flics_animals_RR_Palette_004cff2c,&DAT_0081f5b8,0,0x100,0);
    FUN_00475840(s_flics_animals_Duck_Palette_004cff10,&DAT_0081f610,0,0x100,0);
    FUN_00475840(s_flics_landmarks_goldPal_004cfef8,&DAT_0081f668,0,0x100,0);
    FUN_00475840(s_flics_employee_GreeterPal_004cfedc,&DAT_0081f6c0,0,0x100,0);
    FUN_00475840(s_flics_employee_RangerPal_004cfec0,&DAT_0081f718,0,0x100,0);
    FUN_00475840(s_flics_employee_GKPal_004cfea8,&DAT_0081f770,0,0x100,0);
    FUN_00475840(s_flics_employee_TrayGirlPal_004cfe8c,&DAT_0081f7c8,0,0x100,0);
    FUN_00475840(s_flics_employee_GolfCelebPal_004cfe70,&DAT_0081f820,0,0x100,0);
    FUN_00475840(s_flics_employee_MarshallPal_004cfe54,&DAT_0081f878,0,0x100,0);
    FUN_00475840(s_flics_employee_LawnTechPal_004cfe38,&DAT_0081f8d0,0,0x100,0);
    FUN_00475840(s_flics_employee_SodaVendorPal_004cfe18,&DAT_0081f928,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap01_004cfe04,&DAT_0081fa30,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap02_004cfdf0,&DAT_0081fa88,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap03_004cfddc,&DAT_0081fae0,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap04_004cfdc8,&DAT_0081fb38,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap05_004cfdb4,&DAT_0081fb90,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap06_004cfda0,&DAT_0081fbe8,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap07_004cfd8c,&DAT_0081fc40,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap08_004cfd78,&DAT_0081fc98,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap09_004cfd64,&DAT_0081fcf0,0,0x100,0);
    FUN_00475840(s_Bodies_FemaleSwap10_004cfd50,&DAT_0081fd48,0,0x100,0);
    FUN_00475840(s_flics_Flowers_GazeboPal_004cfd38,&DAT_0081fda0,0,0x100,0);
    FUN_00475840(s_flics_Flowers_TopiaryPal_004cfd1c,&DAT_00820ab0,0,0x100,0);
    FUN_00475840(s_flics_scenic_CowSkullPal_004cfd00,&DAT_00820110,0,0x100,0);
    FUN_00475840(s_flics_scenic_DeadGolferPal_004cfce4,&DAT_00820168,0,0x100,0);
    FUN_00475840(s_flics_scenic_Desert_Water_RockPa_004cfcc0,&DAT_008201c0,0,0x100,0);
    FUN_00475840(s_flics_scenic_grousepal_004cfca8,&DAT_00820218,0,0x100,0);
    FUN_00475840(s_flics_scenic_naturalbridgePal_004cfc88,&DAT_00820270,0,0x100,0);
    FUN_00475840(s_flics_scenic_DeadSwampTreesPal_004cfc68,&DAT_008202c8,0,0x100,0);
    FUN_00475840(s_flics_scenic_ScenicElmPal_004cfc4c,&DAT_00820320,0,0x100,0);
    FUN_00475840(s_flics_scenic_Tropical_Wildflower_004cfc24,&DAT_00820378,0,0x100,0);
    FUN_00475840(s_flics_scenic_ScenicLinksRocksPal_004cfc00,&DAT_008203d0,0,0x100,0);
    FUN_00475840(s_flics_bridges_ScenicGenPal_004cfbe4,&DAT_00820428,0,0x100,0);
    FUN_00475840(s_flics_Scenic_benWPal_004cfbcc,&DAT_00820480,0,0x100,0);
    FUN_00475840(s_flics_flowers_box_benchpal_004cfbb0,&DAT_008204d8,0,0x100,0);
    FUN_00475840(s_flics_flowers_redbenchpal_004cfb94,&DAT_00820530,0,0x100,0);
    FUN_00475840(s_flics_flowers_round_wood_benchpa_004cfb70,&DAT_00820588,0,0x100,0);
    FUN_00475840(s_flics_flowers_backless_benchpal_004cfb50,&DAT_008205e0,0,0x100,0);
    FUN_00475840(s_flics_flowers_LoversBenchpal_004cfb30,&DAT_00820638,0,0x100,0);
    FUN_00475840(s_flics_flowers_Swingpal_004cfb18,&DAT_00820690,0,0x100,0);
    FUN_00475840(s_flics_bldgs_DrivPuttPal_004cfb00,&DAT_008206e8,0,0x100,0);
    FUN_00475840(s_flics_tees_TVpal_004cfaec,&DAT_00820798,0,0x100,0);
    FUN_00475840(s_flics_scenic_PlumPal_004cfad4,&DAT_008207f0,0,0x100,0);
    FUN_00475840(s_flics_scenic_DogwoodPal_004cfabc,&DAT_00820848,0,0x100,0);
    FUN_00475840(s_flics_scenic_ScenicElmPal_004cfc4c,&DAT_008208a0,0,0x100,0);
    FUN_00475840(s_flics_scenic_JapaneseMaple_OrgPa_004cfa98,&DAT_008208f8,0,0x100,0);
    FUN_00475840(s_flics_scenic_CypressPal_004cfa80,&DAT_00820950,0,0x100,0);
    FUN_00475840(s_flics_scenic_Scenic_TreePal_004d0248,&DAT_008209a8,0,0x100,0);
    FUN_00475840(s_flics_scenic_PeachTreePal_004cfa64,&DAT_00820a00,0,0x100,0);
    FUN_00474dd0(0x1e0,0x1e0,8,1,0,0);
    DAT_00820b6c = 0;
    FUN_0043d740(0x175,s_Landmarks_LighthouseB_004cfa4c,4,1,1);
    FUN_0043d740(0x16f,s_Landmarks_LighthouseC_004cfa34,4,1,1);
    FUN_0043d740(0x16c,s_Landmarks_wmillA_004cfa20,4,1,1);
    FUN_0043d740(0x169,s_Landmarks_Barn_004cfa10,4,1,1);
    FUN_0043d740(0x171,s_Landmarks_Windmill_004cf9fc,4,1,1);
    FUN_0043d740(0x16b,s_Landmarks_Stone_Two_004cf9e8,8,1,1);
    FUN_0043d740(0x172,s_Landmarks_equestrian_004cf9d0,4,1,1);
    FUN_0043d740(0x173,s_Landmarks_Easter_004cf9bc,4,1,1);
    FUN_0043d740(0x170,s_Landmarks_Buddha_004cf9a8,4,1,1);
    FUN_0043d740(0x174,s_Landmarks_Pagoda_004cf994,4,1,1);
    FUN_0043d740(0x168,s_Landmarks_Sundial_004cf980,4,1,1);
    FUN_0043d740(0x176,s_Landmarks_ChineseHouse_004cf968,4,1,1);
    FUN_0043d740(0x16a,s_Landmarks_civilwarCannon_004cf94c,4,1,1);
    FUN_0043d740(0x16e,s_Landmarks_civilwarStatue_004cf930,4,1,1);
    FUN_0043d740(0x177,s_Landmarks_Tarpit_004cf91c,4,1,1);
    FUN_0043d740(0x16d,s_Landmarks_ParklandRock_004cf904,4,1,1);
    FUN_0043d740(0x178,s_Landmarks_Wtow2_004cf8f4,4,1,1);
    FUN_0043d740(0x179,s_Landmarks_Radio_Tower_004cf8dc,4,1,1);
    FUN_0043d740(0x17a,s_Landmarks_Red_Oil_Pump_004cf8c4,4,1,1);
    FUN_0043d740(0x17c,s_Bldgs_1Putt_004cf8b8,4,1,1);
    FUN_0043d740(0x17d,s_Bldgs_2Putt_004cf8ac,4,1,1);
    FUN_0043d740(0x17e,s_Bldgs_1Drive_004cf89c,4,1,1);
    FUN_0043d740(0x17f,s_Bldgs_2Drive_004cf88c,4,1,1);
    FUN_0043d740(0xf8,s_Scenic_splash_004cf87c,1,0x28,1);
    FUN_0043d740(0x127,s_Scenic_CowSkull_004cf86c,4,0x28,1);
    FUN_0043d740(0x128,s_Scenic_DeadGolfer_004cf858,4,0x28,1);
    FUN_0043d740(0x129,s_Scenic_Desert_Water_Rock_004cf83c,4,0x28,1);
    FUN_0043d740(0x12a,s_Scenic_grouse_004cf82c,4,0x28,1);
    FUN_0043d740(299,s_Scenic_Natural_Bridge_004cf814,4,0x28,1);
    FUN_0043d740(300,s_Scenic_DeadSwampTrees_004cf7fc,4,0x28,1);
    FUN_0043d740(0x12d,s_Scenic_Tropical_Wildflowers_004cf7e0,4,0x28,1);
    FUN_0043d740(0x12e,s_Scenic_ScenicLinksRocks_004cf7c8,4,0x28,1);
    FUN_0043d740(0x12f,s_Scenic_Plum_004cf7bc,4,100,1);
    FUN_0043d740(0x130,s_Scenic_Dogwood_004cf7ac,4,100,1);
    FUN_0043d740(0x131,s_Scenic_ScenicElm_004cf798,4,100,1);
    FUN_0043d740(0x132,s_Scenic_JapaneseMaple_004cf780,4,100,1);
    FUN_0043d740(0x133,s_Scenic_Cypress_004cf770,4,100,1);
    FUN_0043d740(0x134,s_Scenic_Scenic_Tree_004cf75c,4,100,1);
    FUN_0043d740(0x135,s_Scenic_PeachTree_004cf748,4,100,1);
    FUN_0043d740(0xf0,s_Scenic_hotair01_004cf738,4,1,0);
    FUN_0043d740(0xf1,s_Scenic_hotair01Shadow_004cf720,4,1,0);
    FUN_0043d740(0xf2,s_Scenic_blimpfxs_004cf710,4,0xf0,0);
    FUN_0043d740(0xf3,s_Scenic_blimpfxsshadow_004cf6f8,4,0xf0,0);
    FUN_0043d740(0xf4,s_Scenic_blimpEA_004cf6e8,4,0xf0,0);
    FUN_0043d740(0xf5,s_Scenic_blimpEAshadow_004cf6d0,4,0xf0,0);
    FUN_0043d740(0xfa,s_Scenic_CactusGroupA_004cf6bc,4,0x3c,1);
    FUN_0043d740(0xfc,s_Scenic_Scenic_Flowers_004cf6a4,4,0x28,1);
    FUN_0043d740(0xfb,s_Scenic_Rhody_004cf694,4,0x28,1);
    FUN_0043d740(0xfd,s_Scenic_Scenic_Tree_004cf75c,4,100,1);
    FUN_0043d740(0xfe,s_Scenic_Scenic_OGrass_004cf67c,4,0x3c,1);
    FUN_0043d740(0xff,s_Scenic_Vineyard_004cf66c,4,0x3c,1);
    FUN_0043d740(0x100,s_Landmarks_Gold_004cf65c,4,0x3c,1);
    FUN_0043d740(0x101,s_flowers_RoseBush_004cf648,4,0x3c,1);
    FUN_0043d740(0x102,s_Scenic_Rock_Form_004cf634,4,0x3c,1);
    FUN_0043d740(0x226,s_Bridges_SCENICgen03_004cf620,2,0x28,1);
    FUN_0043d740(0x227,s_Bridges_ScenicGen04_004cf60c,2,0x28,1);
    FUN_0043d740(0x228,s_Bridges_ScenicGen05_004cf5f8,2,0x28,1);
    FUN_0043d740(0x229,s_Bridges_ScenicGen06_004cf5e4,2,0x28,1);
    FUN_0043d740(0x22a,s_Bridges_ScenicGen07_004cf5d0,2,0x28,1);
    FUN_0043d740(0x22b,s_Bridges_ScenicGen08_004cf5bc,2,0x28,1);
    FUN_0043d740(0x22c,s_Bridges_ScenicGen09_004cf5a8,2,0x28,1);
    FUN_0043d740(0x22d,s_Bridges_ScenicGen10_004cf594,2,0x28,1);
    FUN_0043d740(0x246,s_Tees_TVTowerStatic_004cf580,4,0x50,1);
    FUN_0043d740(0x247,s_Tees_TVTowerANIM_004cf56c,4,0x50,1);
    FUN_0043d740(0x248,s_Tees_TVCommentStatic_004cf554,4,0x3c,1);
    FUN_0043d740(0x249,s_Tees_TVCommentANIM_004cf540,4,0x3c,1);
    FUN_0043d740(0x24a,s_Tees_TVScoreCenter_004cf52c,4,0x3c,1);
    FUN_0043d740(0x208,s_Scenic_benW01_004cf51c,4,0x28,1);
    FUN_0043d740(0x209,s_Flowers_box_bench_004cf508,4,0x28,1);
    FUN_0043d740(0x20a,s_Flowers_red_bench_004cf4f4,4,0x28,1);
    FUN_0043d740(0x20b,s_Flowers_round_wood_bench_004cf4d8,4,0x28,1);
    FUN_0043d740(0x20c,s_Flowers_backless_bench_004cf4c0,4,0x28,1);
    FUN_0043d740(0x20d,s_Flowers_lovers_bench_004cf4a8,4,0x28,1);
    FUN_0043d740(0x185,s_tees_flagpark_pop_004cf494,1,0x28,1);
    FUN_0043d740(0x189,s_tees_flagpark_open_004cf480,4,0x28,1);
    FUN_0043d740(0x186,s_tees_flagdesert_pop_004cf46c,1,0x28,1);
    FUN_0043d740(0x18a,s_tees_flagdesert_open_004cf454,4,0x28,1);
    FUN_0043d740(0x187,s_tees_flagtrop_pop_004cf440,1,0x28,1);
    FUN_0043d740(0x18b,s_tees_flagtrop_open_004cf42c,4,0x28,1);
    FUN_0043d740(0x188,s_tees_flaglinks_pop_004cf418,1,0x28,1);
    FUN_0043d740(0x18c,s_tees_flaglinks_open_004cf404,4,0x28,1);
    FUN_0043d740(0x18d,s_tees_TeeMarkerRed_pop_004cf3ec,1,0x28,1);
    FUN_0043d740(0x18e,s_tees_TeeMarkerWhite_pop_004cf3d4,1,0x28,1);
    FUN_0043d740(399,s_tees_TeeMarkerBlue_pop_004cf3bc,1,0x28,1);
    FUN_0043d740(0xf9,s_trees_WillowTree_004cf3a8,4,1,1);
    FUN_0043d740(0x184,s_flowers_crabgrass_004cf394,4,0,1);
    FUN_0043d740(0x183,s_bldgs_upgrade_bwasher_004cf37c,4,0,1);
    FUN_0043d740(0x1b4,s_flowers_Gazebo_004cf36c,4,0x50,1);
    FUN_0043d740(0x1b5,s_flowers_Topiary_004cf35c,4,0x50,1);
    DAT_00820b6c = 0;
    FUN_0043d740(0,s_Male_MalePLS_NormalWalk_004cf344,8,0,1);
    FUN_0043d740(0x28,s_Male_MalePLS_PerfectSwing_004cf328,8,0,1);
    FUN_0043d740(0x32,s_Male_MalePLS_NoAccSwing_004cf310,8,0,1);
    FUN_0043d740(0x37,s_Male_MalePLS_NoimagSwing_004cf2f4,8,0,1);
    FUN_0043d740(0x46,s_Male_MalePLS_SitSq_004cf2e0,4,0,1);
    FUN_0043d740(0x3c,s_Male_MalePLS_Sitting_004cf2c8,4,0,1);
    FUN_0043d740(0x50,s_Male_MalePLS_Pitch_004cf2b4,8,0,1);
    FUN_0043d740(0x5a,s_Male_MalePLS_Putt_004cf2a0,8,0,1);
    FUN_0043d740(0x1e,s_Male_MalePLS_Happy_004cf28c,8,0,1);
    FUN_0043d740(0xb4,s_Male_MalePLS_SuccessA_004cf274,8,0,1);
    FUN_0043d740(0xbe,s_Male_MalePLS_Sad_004cf260,8,0,1);
    FUN_0043d740(200,s_Male_MalePLS_FailureA_004cf248,8,0,1);
    FUN_0043d740(10,s_Male_MalePLS_sq_004cf238,8,0,1);
    FUN_0043d740(100,s_Male_MalePLS_LineUpPutt_004cf220,8,0,1);
    FUN_0043d740(0x6e,s_Male_MalePLS_PointAt_004cf208,8,0,1);
    FUN_0043d740(0x14,s_Male_MalePLS_Fidget_004cf1f4,8,0,1);
    FUN_0043d740(0xd2,s_Male_MalePLS_TiredWalk_004cf1dc,8,0,1);
    FUN_0043d740(0x78,s_Male_MalePLS_NormalAddress_004cf1c0,8,0,1);
    FUN_0043d740(0x8c,s_Male_MalePLS_PuttAddress_004cf1a4,8,0,1);
    FUN_0043d740(0x82,s_Male_MalePLS_PitchAddress_004cf188,8,0,1);
    FUN_0043d740(0xa0,s_Male_MalePLS_LeanLeft_004cf170,8,0,1);
    FUN_0043d740(0xaa,s_Male_MalePLS_LookUp_004cf15c,8,0,1);
    FUN_0043d740(0x96,s_Male_MalePLS_LeanRight_004cf144,8,0,1);
    FUN_0043d740(0xdc,s_Male_MalePLS_HandShake_004cf12c,8,0,1);
    FUN_0043d740(0xe6,s_Male_MalePLS_Cart_004cf118,8,0,1);
    DAT_00820b6c = 1;
    FUN_0043d740(0,s_Male_MaleKLS_NormalWalk_004cf100,8,0,1);
    FUN_0043d740(0x28,s_Male_MaleKLS_PerfectSwing_004cf0e4,8,0,1);
    FUN_0043d740(0x32,s_Male_MaleKLS_NoAccSwing_004cf0cc,8,0,1);
    FUN_0043d740(0x37,s_Male_MaleKLS_NoimagSwing_004cf0b0,8,0,1);
    FUN_0043d740(0x46,s_Male_MaleKLS_SitSq_004cf09c,4,0,1);
    FUN_0043d740(0x3c,s_Male_MaleKLS_Sitting_004cf084,4,0,1);
    FUN_0043d740(0x50,s_Male_MaleKLS_Pitch_004cf070,8,0,1);
    FUN_0043d740(0x5a,s_Male_MaleKLS_Putt_004cf05c,8,0,1);
    FUN_0043d740(0x1e,s_Male_MaleKLS_Happy_004cf048,8,0,1);
    FUN_0043d740(0xb4,s_Male_MaleKLS_SuccessA_004cf030,8,0,1);
    FUN_0043d740(0xbe,s_Male_MaleKLS_Sad_004cf01c,8,0,1);
    FUN_0043d740(200,s_Male_MaleKLS_FailureA_004cf004,8,0,1);
    FUN_0043d740(10,s_Male_MaleKLS_sq_004ceff4,8,0,1);
    FUN_0043d740(100,s_Male_MaleKLS_LineUpPutt_004cefdc,8,0,1);
    FUN_0043d740(0x6e,s_Male_MaleKLS_PointAt_004cefc4,8,0,1);
    FUN_0043d740(0x14,s_Male_MaleKLS_Fidget_004cefb0,8,0,1);
    FUN_0043d740(0xd2,s_Male_MaleKLS_TiredWalk_004cef98,8,0,1);
    FUN_0043d740(0x78,s_Male_MaleKLS_NormalAddress_004cef7c,8,0,1);
    FUN_0043d740(0x8c,s_Male_MaleKLS_PuttAddress_004cef60,8,0,1);
    FUN_0043d740(0x82,s_Male_MaleKLS_PitchAddress_004cef44,8,0,1);
    FUN_0043d740(0xa0,s_Male_MaleKLS_LeanLeft_004cef2c,8,0,1);
    FUN_0043d740(0xaa,s_Male_MaleKLS_LookUp_004cef18,8,0,1);
    FUN_0043d740(0x96,s_Male_MaleKLS_LeanRight_004cef00,8,0,1);
    FUN_0043d740(0xdc,s_Male_MaleKLS_HandShake_004ceee8,8,0,1);
    FUN_0043d740(0xe6,s_Male_MaleKLS_Cart_004ceed4,8,0,1);
    DAT_00820b6c = 2;
    FUN_0043d740(0,s_Male_MalePSS_NormalWalk_004ceebc,8,0,1);
    FUN_0043d740(0x28,s_Male_MalePSS_PerfectSwing_004ceea0,8,0,1);
    FUN_0043d740(0x32,s_Male_MalePSS_NoAccSwing_004cee88,8,0,1);
    FUN_0043d740(0x37,s_Male_MalePSS_NoimagSwing_004cee6c,8,0,1);
    FUN_0043d740(0x46,s_Male_MalePSS_SitSq_004cee58,4,0,1);
    FUN_0043d740(0x3c,s_Male_MalePSS_Sitting_004cee40,4,0,1);
    FUN_0043d740(0x50,s_Male_MalePSS_Pitch_004cee2c,8,0,1);
    FUN_0043d740(0x5a,s_Male_MalePSS_Putt_004cee18,8,0,1);
    FUN_0043d740(0x1e,s_Male_MalePSS_Happy_004cee04,8,0,1);
    FUN_0043d740(0xb4,s_Male_MalePSS_SuccessA_004cedec,8,0,1);
    FUN_0043d740(0xbe,s_Male_MalePSS_Sad_004cedd8,8,0,1);
    FUN_0043d740(200,s_Male_MalePSS_FailureA_004cedc0,8,0,1);
    FUN_0043d740(10,s_Male_MalePSS_sq_004cedb0,8,0,1);
    FUN_0043d740(100,s_Male_MalePSS_LineUpPutt_004ced98,8,0,1);
    FUN_0043d740(0x6e,s_Male_MalePSS_PointAt_004ced80,8,0,1);
    FUN_0043d740(0x14,s_Male_MalePSS_Fidget_004ced6c,8,0,1);
    FUN_0043d740(0xd2,s_Male_MalePSS_TiredWalk_004ced54,8,0,1);
    FUN_0043d740(0x78,s_Male_MalePSS_NormalAddress_004ced38,8,0,1);
    FUN_0043d740(0x8c,s_Male_MalePSS_PuttAddress_004ced1c,8,0,1);
    FUN_0043d740(0x82,s_Male_MalePSS_PitchAddress_004ced00,8,0,1);
    FUN_0043d740(0xa0,s_Male_MalePSS_LeanLeft_004cece8,8,0,1);
    FUN_0043d740(0xaa,s_Male_MalePSS_LookUp_004cecd4,8,0,1);
    FUN_0043d740(0x96,s_Male_MalePSS_LeanRight_004cecbc,8,0,1);
    FUN_0043d740(0xdc,s_Male_MalePSS_HandShake_004ceca4,8,0,1);
    FUN_0043d740(0xe6,s_Male_MalePSS_Cart_004cec90,8,0,1);
    DAT_00820b6c = 3;
    FUN_0043d740(0,s_Male_MaleSSS_NormalWalk_004cec78,8,0,1);
    FUN_0043d740(0x28,s_Male_MaleSSS_PerfectSwing_004cec5c,8,0,1);
    FUN_0043d740(0x32,s_Male_MaleSSS_NoAccSwing_004cec44,8,0,1);
    FUN_0043d740(0x37,s_Male_MaleSSS_NoimagSwing_004cec28,8,0,1);
    FUN_0043d740(0x46,s_Male_MaleSSS_SitSq_004cec14,4,0,1);
    FUN_0043d740(0x3c,s_Male_MaleSSS_Sitting_004cebfc,4,0,1);
    FUN_0043d740(0x50,s_Male_MaleSSS_Pitch_004cebe8,8,0,1);
    FUN_0043d740(0x5a,s_Male_MaleSSS_Putt_004cebd4,8,0,1);
    FUN_0043d740(0x1e,s_Male_MaleSSS_Happy_004cebc0,8,0,1);
    FUN_0043d740(0xb4,s_Male_MaleSSS_SuccessA_004ceba8,8,0,1);
    FUN_0043d740(0xbe,s_Male_MaleSSS_Sad_004ceb94,8,0,1);
    FUN_0043d740(200,s_Male_MaleSSS_FailureA_004ceb7c,8,0,1);
    FUN_0043d740(10,s_Male_MaleSSS_sq_004ceb6c,8,0,1);
    FUN_0043d740(100,s_Male_MaleSSS_LineUpPutt_004ceb54,8,0,1);
    FUN_0043d740(0x6e,s_Male_MaleSSS_PointAt_004ceb3c,8,0,1);
    FUN_0043d740(0x14,s_Male_MaleSSS_Fidget_004ceb28,8,0,1);
    FUN_0043d740(0xd2,s_Male_MaleSSS_TiredWalk_004ceb10,8,0,1);
    FUN_0043d740(0x78,s_Male_MaleSSS_NormalAddress_004ceaf4,8,0,1);
    FUN_0043d740(0x8c,s_Male_MaleSSS_PuttAddress_004cead8,8,0,1);
    FUN_0043d740(0x82,s_Male_MaleSSS_PitchAddress_004ceabc,8,0,1);
    FUN_0043d740(0xa0,s_Male_MaleSSS_LeanLeft_004ceaa4,8,0,1);
    FUN_0043d740(0xaa,s_Male_MaleSSS_LookUp_004cea90,8,0,1);
    FUN_0043d740(0x96,s_Male_MaleSSS_LeanRight_004cea78,8,0,1);
    FUN_0043d740(0xdc,s_Male_MaleSSS_HandShake_004cea60,8,0,1);
    FUN_0043d740(0xe6,s_Male_MaleSSS_Cart_004cea4c,8,0,1);
    DAT_00820b6c = 5;
    FUN_0043d740(0,s_Female_FemalePLS_NormalWalk_004cea30,8,0,1);
    FUN_0043d740(0x28,s_Female_FemalePLS_NormalSwing_004cea10,8,0,1);
    FUN_0043d740(0x46,s_Female_FemalePLS_SitSq_004ce9f8,4,0,1);
    FUN_0043d740(0x3c,s_Female_FemalePLS_Sitting_004ce9dc,4,0,1);
    FUN_0043d740(0x50,s_Female_FemalePLS_Pitch_004ce9c4,8,0,1);
    FUN_0043d740(0x5a,s_Female_FemalePLS_Putt_004ce9ac,8,0,1);
    FUN_0043d740(0x1e,s_Female_FemalePLS_Happy_004ce994,8,0,1);
    FUN_0043d740(0xb4,s_Female_FemalePLS_SuccessA_004ce978,8,0,1);
    FUN_0043d740(0xbe,s_Female_FemalePLS_Sad_004ce960,8,0,1);
    FUN_0043d740(200,s_Female_FemalePLS_FailureA_004ce944,8,0,1);
    FUN_0043d740(10,s_Female_FemalePLS_sq_004ce930,8,0,1);
    FUN_0043d740(100,s_Female_FemalePLS_LineUpPutt_004ce914,8,0,1);
    FUN_0043d740(0x6e,s_Female_FemalePLS_PointAt_004ce8f8,8,0,1);
    FUN_0043d740(0x14,s_Female_FemalePLS_Fidget_004ce8e0,8,0,1);
    FUN_0043d740(0xd2,s_Female_FemalePLS_TiredWalk_004ce8c4,8,0,1);
    FUN_0043d740(0x78,s_Female_FemalePLS_NormalAddress_004ce8a4,8,0,1);
    FUN_0043d740(0x8c,s_Female_FemalePLS_PuttAddress_004ce884,8,0,1);
    FUN_0043d740(0x82,s_Female_FemalePLS_PitchAddress_004ce864,8,0,1);
    FUN_0043d740(0xa0,s_Female_FemalePLS_LeanLeft_004ce848,8,0,1);
    FUN_0043d740(0xaa,s_Female_FemalePLS_LookUp_004ce830,8,0,1);
    FUN_0043d740(0x96,s_Female_FemalePLS_LeanRight_004ce814,8,0,1);
    FUN_0043d740(0xdc,s_Female_FemalePLS_HandShake_004ce7f8,8,0,1);
    FUN_0043d740(0xe6,s_Female_FemalePLS_Cart_004ce7e0,8,0,1);
    DAT_00820b6c = 6;
    FUN_0043d740(0,s_Female_FemaleSSS_NormalWalk_004ce7c4,8,0,1);
    FUN_0043d740(0x28,s_Female_FemaleSSS_NormalSwing_004ce7a4,8,0,1);
    FUN_0043d740(0x46,s_Female_FemaleSSS_SitSq_004ce78c,4,0,1);
    FUN_0043d740(0x3c,s_Female_FemaleSSS_Sitting_004ce770,4,0,1);
    FUN_0043d740(0x50,s_Female_FemaleSSS_Pitch_004ce758,8,0,1);
    FUN_0043d740(0x5a,s_Female_FemaleSSS_Putt_004ce740,8,0,1);
    FUN_0043d740(0x1e,s_Female_FemaleSSS_Happy_004ce728,8,0,1);
    FUN_0043d740(0xb4,s_Female_FemaleSSS_SuccessA_004ce70c,8,0,1);
    FUN_0043d740(0xbe,s_Female_FemaleSSS_Sad_004ce6f4,8,0,1);
    FUN_0043d740(200,s_Female_FemaleSSS_FailureA_004ce6d8,8,0,1);
    FUN_0043d740(10,s_Female_FemaleSSS_sq_004ce6c4,8,0,1);
    FUN_0043d740(100,s_Female_FemaleSSS_LineUpPutt_004ce6a8,8,0,1);
    FUN_0043d740(0x6e,s_Female_FemaleSSS_PointAt_004ce68c,8,0,1);
    FUN_0043d740(0x14,s_Female_FemaleSSS_Fidget_004ce674,8,0,1);
    FUN_0043d740(0xd2,s_Female_FemaleSSS_TiredWalk_004ce658,8,0,1);
    FUN_0043d740(0x78,s_Female_FemaleSSS_NormalAddress_004ce638,8,0,1);
    FUN_0043d740(0x8c,s_Female_FemaleSSS_PuttAddress_004ce618,8,0,1);
    FUN_0043d740(0x82,s_Female_FemaleSSS_PitchAddress_004ce5f8,8,0,1);
    FUN_0043d740(0xa0,s_Female_FemaleSSS_LeanLeft_004ce5dc,8,0,1);
    FUN_0043d740(0xaa,s_Female_FemaleSSS_LookUp_004ce5c4,8,0,1);
    FUN_0043d740(0x96,s_Female_FemaleSSS_LeanRight_004ce5a8,8,0,1);
    FUN_0043d740(0xdc,s_Female_FemaleSSS_HandShake_004ce58c,8,0,1);
    FUN_0043d740(0xe6,s_Female_FemaleSSS_Cart_004ce574,8,0,1);
    DAT_00820b6c = 7;
    FUN_0043d740(0,s_Female_FemalePSS_NormalWalk_004ce558,8,0,1);
    FUN_0043d740(0x28,s_Female_FemalePSS_NormalSwing_004ce538,8,0,1);
    FUN_0043d740(0x46,s_Female_FemalePSS_SitSq_004ce520,4,0,1);
    FUN_0043d740(0x3c,s_Female_FemalePSS_Sitting_004ce504,4,0,1);
    FUN_0043d740(0x50,s_Female_FemalePSS_Pitch_004ce4ec,8,0,1);
    FUN_0043d740(0x5a,s_Female_FemalePSS_Putt_004ce4d4,8,0,1);
    FUN_0043d740(0x1e,s_Female_FemalePSS_Happy_004ce4bc,8,0,1);
    FUN_0043d740(0xb4,s_Female_FemalePSS_SuccessA_004ce4a0,8,0,1);
    FUN_0043d740(0xbe,s_Female_FemalePSS_Sad_004ce488,8,0,1);
    FUN_0043d740(200,s_Female_FemalePSS_FailureA_004ce46c,8,0,1);
    FUN_0043d740(10,s_Female_FemalePSS_sq_004ce458,8,0,1);
    FUN_0043d740(100,s_Female_FemalePSS_LineUpPutt_004ce43c,8,0,1);
    FUN_0043d740(0x6e,s_Female_FemalePSS_PointAt_004ce420,8,0,1);
    FUN_0043d740(0x14,s_Female_FemalePSS_Fidget_004ce408,8,0,1);
    FUN_0043d740(0xd2,s_Female_FemalePSS_TiredWalk_004ce3ec,8,0,1);
    FUN_0043d740(0x78,s_Female_FemalePSS_NormalAddress_004ce3cc,8,0,1);
    FUN_0043d740(0x8c,s_Female_FemalePSS_PuttAddress_004ce3ac,8,0,1);
    FUN_0043d740(0x82,s_Female_FemalePSS_PitchAddress_004ce38c,8,0,1);
    FUN_0043d740(0xa0,s_Female_FemalePSS_LeanLeft_004ce370,8,0,1);
    FUN_0043d740(0xaa,s_Female_FemalePSS_LookUp_004ce358,8,0,1);
    FUN_0043d740(0x96,s_Female_FemalePSS_LeanRight_004ce33c,8,0,1);
    FUN_0043d740(0xdc,s_Female_FemalePSS_HandShake_004ce320,8,0,1);
    FUN_0043d740(0xe6,s_Female_FemalePSS_Cart_004ce308,8,0,1);
    DAT_00820b6c = 8;
    FUN_0043d740(0,s_Female_FemaleSkTT_NormalWalk_004ce2e8,8,0,1);
    FUN_0043d740(0x28,s_Female_FemaleSkTT_NormalSwing_004ce2c8,8,0,1);
    FUN_0043d740(0x46,s_Female_FemaleSkTT_SitSq_004ce2b0,4,0,1);
    FUN_0043d740(0x3c,s_Female_FemaleSkTT_Sitting_004ce294,4,0,1);
    FUN_0043d740(0x50,s_Female_FemaleSkTT_Pitch_004ce27c,8,0,1);
    FUN_0043d740(0x5a,s_Female_FemaleSkTT_Putt_004ce264,8,0,1);
    FUN_0043d740(0x1e,s_Female_FemaleSkTT_Happy_004ce24c,8,0,1);
    FUN_0043d740(0xb4,s_Female_FemaleSkTT_SuccessA_004ce230,8,0,1);
    FUN_0043d740(0xbe,s_Female_FemaleSkTT_Sad_004ce218,8,0,1);
    FUN_0043d740(200,s_Female_FemaleSkTT_FailureA_004ce1fc,8,0,1);
    FUN_0043d740(10,s_Female_FemaleSkTT_sq_004ce1e4,8,0,1);
    FUN_0043d740(100,s_Female_FemaleSkTT_LineUpPutt_004ce1c4,8,0,1);
    FUN_0043d740(0x6e,s_Female_FemaleSkTT_PointAt_004ce1a8,8,0,1);
    FUN_0043d740(0x14,s_Female_FemaleSkTT_Fidget_004ce18c,8,0,1);
    FUN_0043d740(0xd2,s_Female_FemaleSkTT_TiredWalk_004ce170,8,0,1);
    FUN_0043d740(0x78,s_Female_FemaleSkTT_NormalAddress_004ce150,8,0,1);
    FUN_0043d740(0x8c,s_Female_FemaleSkTT_PuttAddress_004ce130,8,0,1);
    FUN_0043d740(0x82,s_Female_FemaleSkTT_PitchAddress_004ce110,8,0,1);
    FUN_0043d740(0xa0,s_Female_FemaleSkTT_LeanLeft_004ce0f4,8,0,1);
    FUN_0043d740(0xaa,s_Female_FemaleSkTT_LookUp_004ce0d8,8,0,1);
    FUN_0043d740(0x96,s_Female_FemaleSkTT_LeanRight_004ce0bc,8,0,1);
    FUN_0043d740(0xdc,s_Female_FemaleSkTT_HandShake_004ce0a0,8,0,1);
    FUN_0043d740(0xe6,s_Female_FemaleSkTT_Cart_004ce088,8,0,1);
    DAT_00820b6c = 0;
    FUN_0043d740(0x20e,s_employee_GreeterWalk_004ce070,8,0,1);
    FUN_0043d740(0x216,s_employee_GreeterSQ_004ce05c,8,0,1);
    FUN_0043d740(0x21e,s_employee_GreeterAction2_004ce044,8,0,1);
    DAT_00820b6c = 1;
    FUN_0043d740(0x20e,s_employee_RangerWalk_004ce030,8,0,1);
    FUN_0043d740(0x216,s_employee_RangerSQ_004ce01c,8,0,1);
    FUN_0043d740(0x21e,s_employee_RangerAction_004ce004,8,0,1);
    DAT_00820b6c = 2;
    FUN_0043d740(0x20e,s_employee_GKWalk_004cdff4,8,0,1);
    FUN_0043d740(0x216,s_employee_GKSq_004cdfe4,8,0,1);
    FUN_0043d740(0x21e,s_employee_GKAction_004cdfd0,8,0,1);
    DAT_00820b6c = 3;
    FUN_0043d740(0x20e,s_employee_TrayGirl_Walk_004cdfb8,8,0,1);
    FUN_0043d740(0x216,s_employee_TrayGirl_SQ_004cdfa0,8,0,1);
    FUN_0043d740(0x21e,s_employee_TrayGirl_Action_004cdf84,8,0,1);
    DAT_00820b6c = 4;
    FUN_0043d740(0x20e,s_employee_GolfCeleb_Walk_004cdf6c,8,0,1);
    FUN_0043d740(0x216,s_employee_GolfCeleb_SQ_004cdf54,8,0,1);
    FUN_0043d740(0x21e,s_employee_GolfCeleb_Action_004cdf38,8,0,1);
    DAT_00820b6c = 5;
    FUN_0043d740(0x20e,s_employee_Marshall_Walk_004cdf20,8,0,1);
    FUN_0043d740(0x216,s_employee_Marshall_SQ_004cdf08,8,0,1);
    FUN_0043d740(0x21e,s_employee_Marshall_Action_004cdeec,8,0,1);
    DAT_00820b6c = 6;
    FUN_0043d740(0x20e,s_employee_LawnTech_Walk_004cded4,8,0,1);
    FUN_0043d740(0x216,s_employee_LawnTech_Sq_004cdebc,8,0,1);
    FUN_0043d740(0x21e,s_employee_LawnTech_Action_004cdea0,8,0,1);
    DAT_00820b6c = 7;
    FUN_0043d740(0x20e,s_employee_SodaVendorWalk_004cde88,8,0,1);
    FUN_0043d740(0x216,s_employee_SodaVendorSQ_004cde70,8,0,1);
    FUN_0043d740(0x21e,s_employee_SodaVendorAction_004cde54,8,0,1);
    DAT_00820b6c = 0;
    FUN_0043d740(0x103,s_animals_ELK_run_004cde44,8,0,1);
    FUN_0043d740(0x10c,s_animals_ELK_SQ_004cde34,4,0,1);
    FUN_0043d740(0x115,s_animals_ELK_EatDown_004cde20,4,0,1);
    FUN_0043d740(0x11e,s_animals_ELK_EatLoop_004cde0c,4,0,1);
    DAT_00820b6c = 1;
    FUN_0043d740(0x103,s_animals_Crane_Walk_004cddf8,8,0,1);
    FUN_0043d740(0x10c,s_animals_Crane_SQ_004cdde4,4,0,1);
    FUN_0043d740(0x115,s_animals_Crane_DrinkDown_004cddcc,4,0,1);
    FUN_0043d740(0x11e,s_animals_Crane_DrinkLoop_004cddb4,4,0,1);
    DAT_00820b6c = 2;
    FUN_0043d740(0x103,s_animals_Flamingo_Walk_004cdd9c,8,0,1);
    FUN_0043d740(0x10c,s_animals_Flamingo_SQ_004cdd88,4,0,1);
    FUN_0043d740(0x115,s_animals_Flamingo_DrinkDown_004cdd6c,4,0,1);
    FUN_0043d740(0x11e,s_animals_Flamingo_DrinkLoop_004cdd50,4,0,1);
    DAT_00820b6c = 3;
    FUN_0043d740(0x103,s_animals_Sheep_Walk_004cdd3c,8,0,1);
    FUN_0043d740(0x10c,s_animals_Sheep_SQ_004cdd28,4,0,1);
    FUN_0043d740(0x115,s_animals_Sheep_EatDown_004cdd10,4,0,1);
    FUN_0043d740(0x11e,s_animals_Sheep_EatLoop_004cdcf8,4,0,1);
    DAT_00820b6c = 4;
    FUN_0043d740(0x103,s_animals_Croc_Walk_004cdce4,8,0,1);
    FUN_0043d740(0x10c,s_animals_Croc_SQ_004cdcd4,8,0,1);
    FUN_0043d740(0x115,s_animals_Croc_Turnover_004cdcbc,8,0,1);
    FUN_0043d740(0x11e,s_animals_Croc_BackScratch_004cdca0,8,0,1);
    DAT_00820b6c = 5;
    FUN_0043d740(0x103,s_animals_Snake_Walk_004cdc8c,8,0,1);
    FUN_0043d740(0x10c,s_animals_Snake_SQ_004cdc78,4,0,1);
    FUN_0043d740(0x115,s_animals_Snake_SQ_004cdc78,4,0,1);
    FUN_0043d740(0x11e,s_animals_Snake_Fidget_004cdc60,4,0,1);
    DAT_00820b6c = 6;
    FUN_0043d740(0x103,s_animals_Gila_Walk_004cdc4c,8,0,1);
    FUN_0043d740(0x10c,s_animals_Gila_SQ_004cdc3c,4,0,1);
    FUN_0043d740(0x115,s_animals_Gila_SQ_004cdc3c,4,0,1);
    FUN_0043d740(0x11e,s_animals_Gila_Fidget_004cdc28,4,0,1);
    DAT_00820b6c = 7;
    FUN_0043d740(0x103,s_animals_RR_Walk_004cdc18,8,0,1);
    FUN_0043d740(0x10c,s_animals_RR_SQ_004cdc08,4,0,1);
    FUN_0043d740(0x115,s_animals_RR_DrinkDown_004cdbf0,4,0,1);
    FUN_0043d740(0x11e,s_animals_RR_DrinkLoop_004cdbd8,4,0,1);
    DAT_00820b6c = 8;
    FUN_0043d740(0x103,s_animals_Duck_Walk_004cdbc4,8,0,1);
    FUN_0043d740(0x10c,s_animals_Duck_SQ_004cdbb4,4,0,1);
    FUN_0043d740(0x115,s_animals_Duck_DrinkDown_004cdb9c,4,0,1);
    FUN_0043d740(0x11e,s_animals_Duck_DrinkLoop_004cdb84,4,0,1);
    DAT_00820b6c = 0;
    FUN_0043d740(0x140,s_celebs_ActionStar_SQ_004cdb6c,8,0,1);
    FUN_0043d740(0x15a,s_celebs_ActionStar_Walk_004cdb54,8,0,1);
    FUN_0043d740(0x14d,s_celebs_ActionStar_Char_004cdb3c,8,0,1);
    DAT_00820b6c = 1;
    FUN_0043d740(0x140,s_celebs_Female_PopSinger_SQ_004cdb20,8,0,1);
    FUN_0043d740(0x15a,s_celebs_Female_PopSinger_Walk_004cdb00,8,0,1);
    FUN_0043d740(0x14d,s_celebs_Female_PopSinger_Char_004cdae0,8,0,1);
    DAT_00820b6c = 2;
    FUN_0043d740(0x140,s_celebs_Politician_SQ_004cdac8,8,0,1);
    FUN_0043d740(0x15a,s_celebs_Politician_Walk_004cdab0,8,0,1);
    FUN_0043d740(0x14d,s_celebs_Politician_Char_004cda98,8,0,1);
    DAT_00820b6c = 3;
    FUN_0043d740(0x140,s_celebs_Comedian_SQ_004cda84,8,0,1);
    FUN_0043d740(0x15a,s_celebs_Comedian_Walk_004cda6c,8,0,1);
    FUN_0043d740(0x14d,s_celebs_Comedian_Char_004cda54,8,0,1);
    DAT_00820b6c = 4;
    FUN_0043d740(0x140,s_celebs_Supermodel_SQ_004cda3c,8,0,1);
    FUN_0043d740(0x15a,s_celebs_Supermodel_Walk_004cda24,8,0,1);
    FUN_0043d740(0x14d,s_celebs_Supermodel_Char_004cda0c,8,0,1);
    DAT_00820b6c = 5;
    FUN_0043d740(0x140,s_celebs_FitnessFem_SQ_004cd9f4,8,0,1);
    FUN_0043d740(0x15a,s_celebs_FitnessFem_Walk_004cd9dc,8,0,1);
    FUN_0043d740(0x14d,s_celebs_FitnessFem_Char_004cd9c4,8,0,1);
    DAT_00820b6c = 6;
    FUN_0043d740(0x140,s_celebs_FemComic_SQ_004cd9b0,8,0,1);
    FUN_0043d740(0x15a,s_celebs_FemComic_Walk_004cd998,8,0,1);
    FUN_0043d740(0x14d,s_celebs_FemComic_Char_004cd980,8,0,1);
    DAT_00820b6c = 7;
    FUN_0043d740(0x140,s_celebs_GenMale_SQ_004cd96c,8,0,1);
    FUN_0043d740(0x15a,s_celebs_GenMale_Walk_004cd958,8,0,1);
    FUN_0043d740(0x14d,s_celebs_GenMale_Char_004cd944,8,0,1);
    DAT_00820b6c = 8;
    FUN_0043d740(0x140,s_celebs_MoviePrincess_SQ_004cd92c,8,0,1);
    FUN_0043d740(0x15a,s_celebs_MoviePrincess_Walk_004cd910,8,0,1);
    FUN_0043d740(0x14d,s_celebs_MoviePrincess_Char_004cd8f4,8,0,1);
    DAT_00820b6c = 9;
    FUN_0043d740(0x140,s_celebs_RockStar_SQ_004cd8e0,8,0,1);
    FUN_0043d740(0x15a,s_celebs_RockStar_Walk_004cd8c8,8,0,1);
    FUN_0043d740(0x14d,s_celebs_RockStar_Char_004cd8b0,8,0,1);
    DAT_00820b6c = 10;
    FUN_0043d740(0x140,s_celebs_Basketball_SQ_004cd898,8,0,1);
    FUN_0043d740(0x15a,s_celebs_Basketball_Walk_004cd880,8,0,1);
    FUN_0043d740(0x14d,s_celebs_Basketball_Char_004cd868,8,0,1);
    DAT_00820b6c = 0xb;
    FUN_0043d740(0x140,s_celebs_AgingStar_SQ_004cd854,8,0,1);
    FUN_0043d740(0x15a,s_celebs_AgingStar_Walk_004cd83c,8,0,1);
    FUN_0043d740(0x14d,s_celebs_AgingStar_Char_004cd824,8,0,1);
    DAT_00820b6c = 0;
    FUN_0043d740(0x136,s_homes_Sum_home_004cd814,4,1,1);
    FUN_0043d740(0x13c,s_homes_Sum_home_dirt_004cd800,4,1,1);
    DAT_00820b6c = 1;
    FUN_0043d740(0x136,s_homes_political_home_004cd7e8,4,1,1);
    FUN_0043d740(0x13c,s_homes_political_home_dirt_004cd7cc,4,1,1);
    DAT_00820b6c = 2;
    FUN_0043d740(0x136,s_homes_ArtDeco_Home_004cd7b8,4,1,1);
    FUN_0043d740(0x13c,s_homes_ArtDeco_Home_dirt_004cd7a0,4,1,1);
    DAT_00820b6c = 3;
    FUN_0043d740(0x136,s_homes_DesertCelebHouse_004cd788,4,1,1);
    DAT_00820b6c = 4;
    FUN_0043d740(0x136,s_homes_Summer1stCelebHouse_004cd76c,4,1,1);
    DAT_00820b6c = 5;
    FUN_0043d740(0x136,s_homes_Summer2ndCelebHouse_004cd750,4,1,1);
    FUN_00475840(s_interface_golfballhalopage_male___004cd728,0,0,0x100,2);
    puVar10 = &DAT_00564e34;
    do {
      iVar5 = ((int)uVar9 / 2) * 0x8c;
      iVar6 = (uVar9 & 1) * 0x1a4;
      FUN_00473bf0(local_2d8,iVar5,iVar6,0x8c,0x8c,1,1);
      FUN_00473bf0(local_2d8,iVar5,iVar6 + 0x8c,0x8c,0x8c,1,1);
      FUN_00473bf0(local_2d8,iVar5,iVar6 + 0x118,0x8c,0x8c,1,1);
      puVar10 = puVar10 + 0x84;
      uVar9 = uVar9 + 1;
    } while ((int)puVar10 < 0x565800);
    FUN_00475840(s_heads_golfballhalopage_female_pc_004cd704,0,0,0x100,2);
    uVar9 = 0;
    puVar10 = &DAT_00562914;
    do {
      iVar6 = ((int)uVar9 / 2) * 0x8c;
      iVar5 = (uVar9 & 1) * 0x1a4;
      FUN_00473bf0(local_2d8,iVar6,iVar5,0x8c,0x8c,1,1);
      FUN_00473bf0(local_2d8,iVar6,iVar5 + 0x8c,0x8c,0x8c,1,1);
      FUN_00473bf0(local_2d8,iVar6,iVar5 + 0x118,0x8c,0x8c,1,1);
      puVar10 = puVar10 + 0x84;
      uVar9 = uVar9 + 1;
    } while ((int)puVar10 < 0x5632e0);
    FUN_00475840(s_heads_sim_female_all_expressions_004cd6dc,0,0,0x100,2);
    uVar9 = 0;
    puVar10 = &DAT_0059e7ec;
    do {
      iVar6 = (uVar9 & 1) * 0x174;
      iVar5 = ((int)uVar9 / 2) * 100;
      FUN_00473bf0(local_2d8,iVar5,iVar6 + 4,0x5a,0x78,1,1);
      FUN_00473bf0(local_2d8,iVar5,iVar6 + 0x80,0x5a,0x78,1,1);
      FUN_00473bf0(local_2d8,iVar5,iVar6 + 0xfc,0x5a,0x78,1,1);
      puVar10 = puVar10 + 0x84;
      uVar9 = uVar9 + 1;
    } while ((int)puVar10 < 0x59f1b8);
    FUN_00475840(s_heads_sim_male_all_expressionsfl_004cd6b8,0,0,0x100,2);
    uVar9 = 0;
    puVar10 = &DAT_0059f23c;
    do {
      iVar6 = (uVar9 & 1) * 0x174;
      iVar5 = ((int)uVar9 / 2) * 100;
      FUN_00473bf0(local_2d8,iVar5,iVar6 + 4,0x5a,0x78,1,1);
      FUN_00473bf0(local_2d8,iVar5,iVar6 + 0x80,0x5a,0x78,1,1);
      FUN_00473bf0(local_2d8,iVar5,iVar6 + 0xfc,0x5a,0x78,1,1);
      puVar10 = puVar10 + 0x84;
      uVar9 = uVar9 + 1;
    } while ((int)puVar10 < 0x59fc08);
    iVar6 = FUN_0043d2a0(s_heads___pcx_004cd6ac,&DAT_004e9a84,&DAT_004e9a84);
    DAT_0059b76c = 0x13;
    local_2e0 = 0;
    if (0 < iVar6) {
      pcVar8 = &DAT_0080b130;
      do {
        if (0x47 < DAT_0059b76c) break;
        if ((*pcVar8 == 'F') || (*pcVar8 == 'f')) {
          uVar9 = 0xffffffff;
          pcVar11 = &DAT_004cd6a4;
          do {
            pcVar16 = pcVar11;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar16 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar16;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar11 = pcVar16 + -uVar9;
          pcVar16 = (char *)&DAT_0051a068;
          for (uVar13 = uVar9 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar16 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar9 = 0xffffffff;
          pcVar11 = pcVar8;
          do {
            pcVar16 = pcVar11;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar16 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar16;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          iVar5 = -1;
          pcVar11 = (char *)&DAT_0051a068;
          do {
            pcVar15 = pcVar11;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar15 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar15;
          } while (cVar1 != '\0');
          pcVar11 = pcVar16 + -uVar9;
          pcVar16 = pcVar15 + -1;
          for (uVar13 = uVar9 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar16 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar16 = pcVar16 + 1;
          }
          FUN_00475840(&DAT_0051a068,0,0,0x100,2);
          FUN_00473bf0(local_2d8,0,0,0x8c,0x8c,1,1);
          FUN_00473bf0(local_2d8,0,0x8c,0x8c,0x8c,1,1);
          FUN_00473bf0(local_2d8,0,0x118,0x8c,0x8c,1,1);
          DAT_0059b76c = DAT_0059b76c + 1;
        }
        pcVar8 = pcVar8 + 100;
        local_2e0 = local_2e0 + 1;
      } while ((int)local_2e0 < iVar6);
    }
    iVar6 = FUN_0043d2a0(s_heads___pcx_004cd6ac,&DAT_004e9a84,&DAT_004e9a84);
    iVar5 = 0;
    DAT_0059b770 = 0x13;
    if (0 < iVar6) {
      pcVar8 = &DAT_0080b130;
      do {
        if (0x47 < DAT_0059b770) break;
        if ((*pcVar8 == 'M') || (*pcVar8 == 'm')) {
          uVar9 = 0xffffffff;
          pcVar11 = &DAT_004cd6a4;
          do {
            pcVar16 = pcVar11;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar16 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar16;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar11 = pcVar16 + -uVar9;
          pcVar16 = (char *)&DAT_0051a068;
          for (uVar13 = uVar9 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar16 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar9 = 0xffffffff;
          pcVar11 = pcVar8;
          do {
            pcVar16 = pcVar11;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar16 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar16;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar11 = (char *)&DAT_0051a068;
          do {
            pcVar15 = pcVar11;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar15 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar15;
          } while (cVar1 != '\0');
          pcVar11 = pcVar16 + -uVar9;
          pcVar16 = pcVar15 + -1;
          for (uVar13 = uVar9 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar16 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar16 = pcVar16 + 1;
          }
          FUN_00475840(&DAT_0051a068,0,0,0x100,2);
          FUN_00473bf0(local_2d8,0,0,0x8c,0x8c,1,1);
          FUN_00473bf0(local_2d8,0,0x8c,0x8c,0x8c,1,1);
          FUN_00473bf0(local_2d8,0,0x118,0x8c,0x8c,1,1);
          DAT_0059b770 = DAT_0059b770 + 1;
        }
        iVar5 = iVar5 + 1;
        pcVar8 = pcVar8 + 100;
      } while (iVar5 < iVar6);
    }
    FUN_00475840(s_flics_homes_stone_patio_tile_pcx_004cd680,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xe0,0xe5,0x20,0x16,1,1);
    FUN_00475840(s_flics_homes_concrete_tile_pcx_004cd660,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xe0,0xe5,0x20,0x16,1,1);
    FUN_00475840(s_flics_homes_dirt_tile_pcx_004cd644,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xe0,0xe5,0x20,0x16,1,1);
    FUN_00475840(s_flics_homes_concrete_woodborder__004cd618,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xe0,0xe5,0x20,0x16,1,1);
    FUN_00475840(s_flics_homes_fence_pcx_004cd600,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0,0,0x20,0x20,1,1);
    FUN_00473bf0(local_2d8,0x20,0,0x20,0x20,1,1);
    FUN_00475840(s_gbubbles_pcx_004cd5f0,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_0059b050;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x144,0x10,0x10,1,1);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 0x10;
    } while ((int)puVar10 < 0x59b730);
    FUN_00475840(s_interface_PopUpIcons_pcx_004cd5d4,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_00567a20;
    do {
      FUN_00473bf0(local_2d8,iVar6,0,0x5a,0x50,1,0);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 0x5a;
    } while ((int)puVar10 < 0x567afc);
    FUN_00475840(s_interface_PopUpIcons_A_pcx_004cd5b8,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_0053de78;
    do {
      FUN_00473bf0(local_2d8,iVar6,0,0x5a,0x50,1,0);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 0x5a;
    } while ((int)puVar10 < 0x53df54);
    iVar6 = 0;
    do {
      switch(iVar6) {
      case 0:
        pcVar8 = s_bodies_FemalePLS_pcx_004cd5a0;
        break;
      case 1:
        pcVar8 = s_bodies_FemaleSSS_pcx_004cd588;
        break;
      case 2:
        pcVar8 = s_bodies_FemalePSS_pcx_004cd570;
        break;
      case 3:
        pcVar8 = s_bodies_FemaleSkTT_pcx_004cd558;
        break;
      case 4:
        pcVar8 = s_bodies_FemalePLS_sm_pcx_004cd540;
        break;
      case 5:
        pcVar8 = s_bodies_FemaleSSS_sm_pcx_004cd528;
        break;
      case 6:
        pcVar8 = s_bodies_FemalePSS_sm_pcx_004cd510;
        break;
      case 7:
        pcVar8 = s_bodies_FemaleSkTT_sm_pcx_004cd4f4;
        break;
      default:
        goto LAB_0044575d;
      }
      FUN_00475840(pcVar8,0,0,0x100,2);
LAB_0044575d:
      FUN_00473bf0(local_2d8,0,0,0x3c,0x78,1,1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    iVar6 = 0;
    do {
      switch(iVar6) {
      case 0:
        pcVar8 = s_bodies_MalePLS_pcx_004cd4e0;
        break;
      case 1:
        pcVar8 = s_bodies_MaleKLS_pcx_004cd4cc;
        break;
      case 2:
        pcVar8 = s_bodies_MalePSS_pcx_004cd4b8;
        break;
      case 3:
        pcVar8 = s_bodies_MaleSSS_pcx_004cd4a4;
        break;
      case 4:
        pcVar8 = s_bodies_MalePLS_sm_pcx_004cd48c;
        break;
      case 5:
        pcVar8 = s_bodies_MaleKLS_sm_pcx_004cd474;
        break;
      case 6:
        pcVar8 = s_bodies_MalePSS_sm_pcx_004cd45c;
        break;
      case 7:
        pcVar8 = s_bodies_MaleSSS_sm_pcx_004cd444;
        break;
      default:
        goto LAB_00445833;
      }
      FUN_00475840(pcVar8,0,0,0x100,2);
LAB_00445833:
      FUN_00473bf0(local_2d8,0,0,0x3c,0x78,1,1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    FUN_00475840(s_bodies_barrel_pcx_004cd430,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0,0,0x3c,0x78,1,1);
    FUN_00475840(s_bldg_pcx_004c5ee4,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xc0,0,2,2,1,1);
    FUN_00473bf0(local_2d8,0xc0,2,2,2,1,1);
    FUN_00473bf0(local_2d8,0xc4,0,4,4,1,1);
    local_20[0] = 1;
    local_20[1] = 0x13;
    local_20[2] = 0x2c;
    local_20[3] = 0x52;
    local_20[4] = 0x71;
    local_20[5] = 0x8e;
    local_20[6] = 0xa1;
    local_20[7] = 0xae;
    FUN_00475840(s_cliffs01_pcx_004cd420,0,0,0x100,2);
    local_2e4 = 0;
    local_2dc = &DAT_00587fdc;
    do {
      local_2e0 = 1;
      do {
        iVar5 = 0x21a;
        iVar6 = 0xc;
        if ((local_2e0 & 1) == 0) {
          iVar6 = 0x105;
        }
        if (1 < (int)local_2e0) {
          iVar5 = ((int)local_2e0 / 2) * -0xb3 + 0x21a;
        }
        psVar12 = local_20;
        iVar7 = 7;
        local_10 = iVar6 + local_2e4 + 1;
        do {
          FUN_00473bf0(local_2d8,*psVar12 + iVar5,local_10,((int)psVar12[1] - (int)*psVar12) + -1,
                       0x2e,1,1);
          psVar12 = psVar12 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_2e0 = local_2e0 + 1;
      } while ((int)local_2e0 < 8);
      local_2dc = local_2dc + 0x9a0;
      local_2e4 = local_2e4 + 0x3c;
    } while ((int)local_2dc < 0x58a65c);
    iVar6 = 0;
    do {
      switch(iVar6) {
      case 0:
        pcVar8 = s_data_parkland_pcx_004cd40c;
        break;
      case 1:
        pcVar8 = s_data_desert_pcx_004cd3fc;
        break;
      case 2:
        pcVar8 = s_data_tropical_pcx_004cd3d8;
        break;
      case 3:
        pcVar8 = s_data_links_pcx_004cd3ec;
        break;
      default:
        goto LAB_00445aa0;
      }
      FUN_00475840(pcVar8,0,0,0x100,2);
LAB_00445aa0:
      uVar9 = 0;
      do {
        FUN_00473bf0(local_2d8,(uVar9 & 7) * 0x39,
                     ((int)(uVar9 + ((int)uVar9 >> 0x1f & 7U)) >> 3) * 0x28,0x39,0x28,1,1);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 0x14);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    FUN_00475840(s_course1_pcx_004cd3cc,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_0056a550;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x140,0x40,0x50,1,1);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 0x40;
    } while ((int)puVar10 < 0x56a760);
    iVar6 = 0;
    puVar10 = &DAT_0058ae80;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x1bb,0x10,0x1e,1,1);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 0x10;
    } while ((int)puVar10 < 0x58b198);
    FUN_00473bf0(local_2d8,0x200,0x80,0x20,10,1,1);
    FUN_00473bf0(local_2d8,0x200,0x8c,8,8,1,1);
    FUN_00473bf0(local_2d8,0x225,0xd7,0x2b,0x15,1,1);
    FUN_00475840(s_interface_TrophyParts_004cd3b4,0,0,0x100,2);
    iVar6 = 0xdd;
    do {
      FUN_00473bf0(local_2d8,9,iVar6,0xf8,0x1d,1,0);
      iVar6 = iVar6 + 0x23;
    } while (iVar6 < 0x25e);
    iVar6 = 0xdd;
    do {
      FUN_00473bf0(local_2d8,0x223,iVar6,0xf8,0x1d,1,0);
      iVar6 = iVar6 + 0x23;
    } while (iVar6 < 0x25e);
    FUN_00473bf0(local_2d8,0x11b,0x165,0xf8,0x92,1,0);
    FUN_00473bf0(local_2d8,0x114,0x124,0x101,0x2f,1,0);
    FUN_00473bf0(local_2d8,0x13d,0x1ea,0xb7,0x34,1,0);
    FUN_00473bf0(local_2d8,9,0xba,0xf8,0x13,1,0);
    FUN_00473bf0(local_2d8,9,0x74,0xf8,0x1e,1,0);
    FUN_00473bf0(local_2d8,0x1fe,0xd,0x84,0xa2,1,0);
    FUN_00473bf0(local_2d8,0x289,0xd,0x82,0xa3,1,0);
    iVar6 = 0xba;
    do {
      FUN_00473bf0(local_2d8,0x119,iVar6,0xf8,0x1e,1,0);
      iVar6 = iVar6 + 0x23;
    } while (iVar6 < 0x123);
    FUN_00475840(s_interface_tacs_tees_004cd3a0,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0x29c,0x1ff,0x35,0x34,1,0);
    FUN_00473bf0(local_2d8,0x3f,0xfb,0xe5,0xd1,1,0);
    FUN_00473bf0(local_2d8,0x3a,0x31,0xcf,0xb2,1,0);
    FUN_00473bf0(local_2d8,0x33,0x1e2,0xb8,0x50,1,0);
    FUN_00473bf0(local_2d8,0x2dc,0x1ff,0x35,0x34,1,0);
    puVar10 = &DAT_005403d0;
    iVar6 = 0;
    do {
      FUN_00473bf0(local_2d8,(int)*(short *)((int)&DAT_004c2d38 + iVar6),
                   (int)*(short *)((int)&DAT_004c2d3a + iVar6),
                   (int)*(short *)((int)&DAT_004c2d9c + iVar6),
                   (int)*(short *)((int)&DAT_004c2d9e + iVar6),1,0);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 4;
    } while ((int)puVar10 < 0x540798);
    puVar10 = &DAT_005408cc;
    iVar6 = 0;
    do {
      FUN_00473bf0(local_2d8,(int)*(short *)((int)&DAT_004c2d90 + iVar6),
                   (int)*(short *)((int)&DAT_004c2d92 + iVar6),
                   (int)*(short *)((int)&DAT_004c2df4 + iVar6),
                   (int)*(short *)((int)&DAT_004c2df6 + iVar6),1,0);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 4;
    } while ((int)puVar10 < 0x540950);
    FUN_00475840(s_interface_TrophyParts_A_004cd388,0,0,0x100,2);
    iVar6 = 0xdd;
    do {
      FUN_00473bf0(local_2d8,9,iVar6,0xf8,0x1d,1,0);
      iVar6 = iVar6 + 0x23;
    } while (iVar6 < 0x25e);
    iVar6 = 0xdd;
    do {
      FUN_00473bf0(local_2d8,0x223,iVar6,0xf8,0x1d,1,0);
      iVar6 = iVar6 + 0x23;
    } while (iVar6 < 0x25e);
    FUN_00473bf0(local_2d8,0x11b,0x165,0xf8,0x92,1,0);
    FUN_00473bf0(local_2d8,0x114,0x124,0x101,0x2f,1,0);
    FUN_00473bf0(local_2d8,0x13d,0x1ea,0xb7,0x34,1,0);
    FUN_00473bf0(local_2d8,9,0xba,0xf8,0x13,1,0);
    FUN_00473bf0(local_2d8,9,0x74,0xf8,0x1e,1,0);
    FUN_00473bf0(local_2d8,0x1fe,0xd,0x84,0xa2,1,0);
    FUN_00473bf0(local_2d8,0x289,0xd,0x82,0xa3,1,0);
    iVar6 = 0xba;
    do {
      FUN_00473bf0(local_2d8,0x11a,iVar6,0xf8,0x1e,1,0);
      iVar6 = iVar6 + 0x23;
    } while (iVar6 < 0x123);
    FUN_00475840(s_interface_tacs_tees_A_004cd370,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0x2dc,0x1ff,0x35,0x34,1,0);
    FUN_00473bf0(local_2d8,0x29c,0x1ff,0x35,0x34,1,0);
    FUN_00473bf0(local_2d8,0x3f,0xfb,0xe5,0xd1,1,0);
    FUN_00473bf0(local_2d8,0x3a,0x31,0xcf,0xb2,1,0);
    FUN_00473bf0(local_2d8,0x33,0x1e2,0xb8,0x50,1,0);
    puVar10 = &DAT_005a3b80;
    iVar6 = 0;
    do {
      FUN_00473bf0(local_2d8,(int)*(short *)((int)&DAT_004c2d38 + iVar6),
                   (int)*(short *)((int)&DAT_004c2d3a + iVar6),
                   (int)*(short *)((int)&DAT_004c2d9c + iVar6),
                   (int)*(short *)((int)&DAT_004c2d9e + iVar6),1,0);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 4;
    } while ((int)puVar10 < 0x5a3f48);
    puVar10 = &DAT_005a407c;
    iVar6 = 0;
    do {
      FUN_00473bf0(local_2d8,(int)*(short *)((int)&DAT_004c2d90 + iVar6),
                   (int)*(short *)((int)&DAT_004c2d92 + iVar6),
                   (int)*(short *)((int)&DAT_004c2df4 + iVar6),
                   (int)*(short *)((int)&DAT_004c2df6 + iVar6),1,0);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 4;
    } while ((int)puVar10 < 0x5a4100);
    FUN_00475840(s_interface_InfoButtons_004cd358,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_005612e8;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x2e,0x28,1,0);
        iVar5 = iVar5 + 0x32;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 0x96);
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x561810);
    iVar6 = 0;
    puVar10 = &DAT_00561810;
    do {
      iVar5 = 200;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x10,0x10,1,0);
        iVar5 = iVar5 + 0x11;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 0xfb);
      iVar6 = iVar6 + 0x11;
    } while ((int)puVar10 < 0x56199c);
    iVar6 = 300;
    do {
      FUN_00473bf0(local_2d8,iVar6,0,0x1a,0x1a,1,1);
      iVar6 = iVar6 + 0x32;
    } while (iVar6 < 0x1c2);
    FUN_00475840(s_interface_InfoButtons_A_004cd340,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_0058ccb8;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x2e,0x28,1,0);
        iVar5 = iVar5 + 0x32;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 0x96);
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x58d1e0);
    iVar6 = 0;
    puVar10 = &DAT_0058d1e0;
    do {
      iVar5 = 200;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x10,0x10,1,0);
        iVar5 = iVar5 + 0x11;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 0xfb);
      iVar6 = iVar6 + 0x11;
    } while ((int)puVar10 < 0x58d36c);
    FUN_00475840(s_interface_s_TransPopups_004cd328,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0x13d,0,0x10,0x10,1,1);
    iVar6 = 0;
    puVar10 = &DAT_00541580;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x10,0x10,1,1);
        iVar5 = iVar5 + 0x11;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 0x33);
      iVar6 = iVar6 + 0x11;
    } while ((int)puVar10 < 0x54170c);
    FUN_00475840(s_interface_TransPopups_004cd310,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_005a53c8;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x10,0x10,1,0);
        iVar5 = iVar5 + 0x11;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 0x33);
      iVar6 = iVar6 + 0x11;
    } while ((int)puVar10 < 0x5a5554);
    iVar6 = 300;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x8c,0x32,0x32,1,0);
      FUN_00473bf0(local_2d8,iVar6,300,0x1e,0x1e,1,0);
      iVar6 = iVar6 + 0x32;
    } while (iVar6 < 0x1c2);
    FUN_00473bf0(local_2d8,0,0x96,0x28,0x18,1,0);
    FUN_00473bf0(local_2d8,0,200,0x23,0xc,1,0);
    FUN_00473bf0(local_2d8,0,0xdc,0x23,0xc,1,0);
    iVar6 = 300;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x22,0x10,0x10,1,0);
      iVar6 = iVar6 + 0x11;
    } while (iVar6 < 0x15f);
    iVar6 = 0x168;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x22,0x1e,0x2a,1,0);
      iVar6 = iVar6 + 0x28;
    } while (iVar6 < 0x1e0);
    iVar6 = 0;
    puVar10 = &DAT_005a56e0;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x3c,0x10,0x13,1,0);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 0x11;
    } while ((int)puVar10 < 0x5a5764);
    iVar6 = 300;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x22,0x10,0x10,1,0);
      iVar6 = iVar6 + 0x11;
    } while (iVar6 < 0x15f);
    FUN_00473bf0(local_2d8,0x20,100,0xbf,0x18,1,0);
    FUN_00473bf0(local_2d8,0,300,0x8c,0x8c,1,0);
    iVar6 = 200;
    do {
      iVar7 = 2;
      iVar5 = iVar6;
      do {
        FUN_00473bf0(local_2d8,0,iVar5,0x23,0xc,1,0);
        iVar5 = iVar5 + 0x14;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar6 = iVar6 + 0x32;
    } while (iVar6 < 300);
    FUN_00475840(s_interface_TransPopups_A_004cd2f8,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_0058b680;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x10,0x10,1,0);
        iVar5 = iVar5 + 0x11;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 0x33);
      iVar6 = iVar6 + 0x11;
    } while ((int)puVar10 < 0x58b80c);
    iVar6 = 300;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x8c,0x32,0x32,1,0);
      FUN_00473bf0(local_2d8,iVar6,300,0x1e,0x1e,1,0);
      iVar6 = iVar6 + 0x32;
    } while (iVar6 < 0x1c2);
    FUN_00473bf0(local_2d8,0,0x96,0x28,0x18,1,0);
    FUN_00473bf0(local_2d8,0,200,0x23,0xc,1,0);
    FUN_00473bf0(local_2d8,0,0xdc,0x23,0xc,1,0);
    iVar6 = 300;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x22,0x10,0x10,1,0);
      iVar6 = iVar6 + 0x11;
    } while (iVar6 < 0x15f);
    iVar6 = 0x168;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x22,0x1e,0x2a,1,0);
      iVar6 = iVar6 + 0x28;
    } while (iVar6 < 0x1e0);
    iVar6 = 0;
    puVar10 = &DAT_0058b998;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x3c,0x10,0x13,1,0);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 0x11;
    } while ((int)puVar10 < 0x58ba1c);
    iVar6 = 300;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x22,0x10,0x10,1,0);
      iVar6 = iVar6 + 0x11;
    } while (iVar6 < 0x15f);
    FUN_00473bf0(local_2d8,0x20,100,0xbf,0x18,1,0);
    FUN_00473bf0(local_2d8,0,300,0x8c,0x8c,1,0);
    iVar6 = 200;
    do {
      iVar7 = 2;
      iVar5 = iVar6;
      do {
        FUN_00473bf0(local_2d8,0,iVar5,0x23,0xc,1,0);
        iVar5 = iVar5 + 0x14;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar6 = iVar6 + 0x32;
    } while (iVar6 < 300);
    FUN_00475840(s_interface_tropdesert_004cd2e0,0,0,0x100,2);
    iVar5 = 0;
    iVar6 = 3;
    do {
      FUN_00473bf0(local_2d8,iVar6,(iVar5 < 4) + 0x1e0,0x50,0x50,1,0);
      iVar6 = iVar6 + 0x58;
      iVar5 = iVar5 + 1;
    } while (iVar6 < 0x2c3);
    FUN_00475840(s_interface_tropdesert_A_004cd2c8,0,0,0x100,2);
    iVar5 = 0;
    iVar6 = 3;
    do {
      FUN_00473bf0(local_2d8,iVar6,(iVar5 < 4) + 0x1e0,0x50,0x50,1,0);
      iVar6 = iVar6 + 0x58;
      iVar5 = iVar5 + 1;
    } while (iVar6 < 0x2c3);
    FUN_00475840(s_interface_parklink_004cd2b4,0,0,0x100,2);
    iVar6 = 3;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x18b,0x50,0x50,1,0);
      iVar6 = iVar6 + 0x58;
    } while (iVar6 < 0x2c3);
    FUN_00475840(s_interface_parklink_A_004cd29c,0,0,0x100,2);
    iVar6 = 3;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x18b,0x50,0x50,1,0);
      iVar6 = iVar6 + 0x58;
    } while (iVar6 < 0x2c3);
    FUN_00475840(s_interface_courseinfo_004cd284,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0x30,6,0xb7,0x3a,1,0);
    FUN_00473bf0(local_2d8,0x287,0xd,0x8a,0x24,1,0);
    FUN_00473bf0(local_2d8,0x2a3,0x37,0x6e,0x25,1,0);
    FUN_00473bf0(local_2d8,0x2b9,99,0x58,0x24,1,0);
    FUN_00475840(s_interface_courseinfo_A_004cd26c,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0x30,6,0xb7,0x3a,1,0);
    FUN_00473bf0(local_2d8,0x287,0xd,0x8a,0x24,1,0);
    FUN_00473bf0(local_2d8,0x2a3,0x37,0x6e,0x25,1,0);
    FUN_00473bf0(local_2d8,0x2b9,99,0x58,0x24,1,0);
    FUN_00475840(s_interface_s_courseinfo_004cd254,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0x30,6,0xb7,0x3a,1,1);
    FUN_00473bf0(local_2d8,0x287,0xd,0x8a,0x24,1,1);
    FUN_00473bf0(local_2d8,0x2a3,0x37,0x6e,0x25,1,1);
    FUN_00473bf0(local_2d8,0x2b9,99,0x58,0x24,1,1);
    FUN_00475840(s_interface_CGbuttons_004cd240,0,0,0x100,2);
    iVar6 = 300;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x70,0x23,1,1);
        iVar5 = iVar5 + 0x96;
      } while (iVar5 < 300);
      iVar6 = iVar6 + 0x32;
    } while (iVar6 < 0x1c2);
    iVar6 = 0x32;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x70,0x1c,1,1);
        iVar5 = iVar5 + 0x96;
      } while (iVar5 < 300);
      iVar6 = iVar6 + 0x32;
    } while (iVar6 < 300);
    iVar6 = 0;
    puVar10 = &DAT_0059e1e0;
    do {
      iVar5 = 2;
      do {
        FUN_00473bf0(local_2d8,iVar6,0,0x23,0x25,1,1);
        iVar6 = iVar6 + 0x32;
        puVar10 = puVar10 + 0x2c;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    } while ((int)puVar10 < 0x59e290);
    iVar6 = 0;
    puVar10 = &DAT_0059e290;
    do {
      iVar5 = 300;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x32,0x32,1,1);
        iVar5 = iVar5 + 0x32;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 400);
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x59e550);
    iVar6 = 0;
    puVar10 = &DAT_0059e550;
    do {
      iVar5 = 500;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x3c,0x3d,1,1);
        iVar5 = iVar5 + 100;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 700);
      iVar6 = iVar6 + 100;
    } while ((int)puVar10 < 0x59e600);
    FUN_00473bf0(local_2d8,300,500,0x39,0x26,1,1);
    FUN_00475840(s_interface_HeadSelect_004cd228,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0,0x102,800,0x156,1,1);
    FUN_00473bf0(local_2d8,0x1b0,0x69,0x57,0x98,1,1);
    FUN_00473bf0(local_2d8,0x207,0x69,0x57,0x98,1,1);
    FUN_00473bf0(local_2d8,0x266,0,0x5d,0x98,1,1);
    FUN_00473bf0(local_2d8,0x2c3,0,0x5d,0x98,1,1);
    FUN_00473bf0(local_2d8,0,0,0x85,0x89,1,1);
    FUN_00473bf0(local_2d8,0x96,0,0x85,0x89,1,1);
    FUN_00475840(s_interface_GolferStats_A_004cd210,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0x40,0x21,0x192,0xf4,1,0);
    FUN_00473bf0(local_2d8,0x40,300,0x192,0x8a,1,0);
    iVar6 = 0;
    puVar10 = &DAT_00567390;
    do {
      iVar5 = 500;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x39,0x32,1,0);
        iVar5 = iVar5 + 100;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 800);
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x5678b8);
    FUN_00475840(s_interface_HeadBodyBck_004cd1f8,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0,0,0x73,0xe5,1,1);
    FUN_00475840(s_interface_s_GolferStats_004cd1e0,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0x40,0x21,0x192,0xf4,1,1);
    FUN_00475840(s_interface_GolferStats_004cd1c8,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0x40,0x21,0x192,0xf4,1,0);
    FUN_00473bf0(local_2d8,0x40,300,0x192,0x8a,1,0);
    iVar6 = 0;
    puVar10 = &DAT_0056a948;
    do {
      iVar5 = 500;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x39,0x32,1,0);
        iVar5 = iVar5 + 100;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 800);
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x56ae70);
    FUN_00475840(s_interface_3mainLowerLeft_A_004cd1ac,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0,0x1b3,0xd7,0xa5,1,0);
    iVar6 = 0;
    puVar10 = &DAT_00568ff4;
    do {
      FUN_00473bf0(local_2d8,0,iVar6,0x4e,0x51,1,0);
      FUN_00473bf0(local_2d8,100,iVar6,0x4e,0x51,1,0);
      puVar10 = puVar10 + 0x58;
      iVar6 = iVar6 + 100;
    } while ((int)puVar10 < 0x5690fc);
    iVar6 = 0x32;
    puVar10 = &DAT_00569128;
    do {
      FUN_00473bf0(local_2d8,600,iVar6,0x24,0x26,1,1);
      puVar10 = puVar10 + 0x58;
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x569440);
    FUN_00475840(s_interface_3mainLowerLeft_004cd190,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0,0x1b3,0xd7,0xa5,1,0);
    iVar6 = 0;
    puVar10 = &DAT_005873a8;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x4e,0x51,1,0);
        iVar5 = iVar5 + 100;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 300);
      iVar6 = iVar6 + 100;
    } while ((int)puVar10 < 0x587534);
    iVar6 = 0;
    puVar10 = &DAT_00587534;
    do {
      FUN_00473bf0(local_2d8,300,iVar6,0xd6,0x5b,1,1);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 100;
    } while ((int)puVar10 < 0x5875b8);
    iVar6 = 0x32;
    do {
      iVar5 = 600;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x24,0x26,1,1);
        iVar5 = iVar5 + 0x32;
      } while (iVar5 < 0x2ee);
      iVar6 = iVar6 + 0x32;
    } while (iVar6 < 500);
    FUN_00475840(s_interface_BaseTerrainPanel_A_004cd170,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd8,0x1e2,0x248,0x76,1,0);
    FUN_00475840(s_interface_BaseTerrainPanel_004cd154,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd8,0x1e2,0x248,0x76,1,0);
    FUN_00473bf0(local_2d8,0x28,0x226,0x22,0x28,1,1);
    FUN_00473bf0(local_2d8,0x96,0x1e0,0x22,0x22,1,1);
    FUN_00475840(s_interface_ElevationPanel_A_004cd138,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd7,0x1e2,0x249,0x76,1,0);
    FUN_00475840(s_interface_ElevationPanel_004cd11c,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd7,0x1e2,0x249,0x76,1,0);
    FUN_00473bf0(local_2d8,0,400,0x29,0x2c,1,1);
    iVar6 = 0;
    puVar10 = &DAT_00571d40;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x58,99,1,1);
        iVar5 = iVar5 + 100;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 300);
      iVar6 = iVar6 + 100;
    } while ((int)puVar10 < 0x571ecc);
    iVar6 = 400;
    do {
      FUN_00473bf0(local_2d8,iVar6,0,0x48,99,1,1);
      iVar6 = iVar6 + 100;
    } while (iVar6 < 700);
    iVar6 = 0;
    puVar10 = &DAT_00571f50;
    do {
      FUN_00473bf0(local_2d8,iVar6,0x1c2,0x22,0x28,1,1);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x571fd4);
    FUN_00475840(s_interface_BuildingPanel_A_004cd100,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd8,0x1e2,0x248,0x76,1,0);
    FUN_00475840(s_interface_BuildingPanel_004cd0e8,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd8,0x1e2,0x248,0x76,1,0);
    FUN_00473bf0(local_2d8,0x96,0x1e0,0x22,0x22,1,1);
    FUN_00473bf0(local_2d8,0,0,0x4a,0x40,1,1);
    FUN_00473bf0(local_2d8,100,0,0x4d,0x40,1,1);
    FUN_00473bf0(local_2d8,200,0,0x4d,0x40,1,1);
    FUN_00473bf0(local_2d8,0,100,0x4d,0x3a,1,1);
    FUN_00473bf0(local_2d8,100,100,0x4d,0x3a,1,1);
    FUN_00473bf0(local_2d8,200,100,0x4d,0x3a,1,1);
    FUN_00473bf0(local_2d8,0x28,0x226,0x22,0x28,1,1);
    FUN_00473bf0(local_2d8,0x50,0x226,0x22,0x28,1,1);
    FUN_00473bf0(local_2d8,0x78,0x226,0x22,0x28,1,1);
    FUN_00475840(s_interface_AmenitiesPanel_A_004cd0cc,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd6,0x1e2,0x24a,0x76,1,0);
    FUN_00473bf0(local_2d8,0x17c,0xfa,0x44,0x4f,1,0);
    FUN_00473bf0(local_2d8,0x1c2,0xfa,0x2f,0x4f,1,0);
    FUN_00473bf0(local_2d8,600,0xfa,0x43,0x4f,1,0);
    FUN_00473bf0(local_2d8,500,0xfa,0x43,0x4f,1,0);
    FUN_00475840(s_interface_AmenitiesPanel_004cd0b0,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd6,0x1e2,0x24a,0x76,1,0);
    FUN_00473bf0(local_2d8,0,400,0x22,0x22,1,1);
    iVar6 = 0;
    iVar5 = 300;
    do {
      iVar7 = iVar5 + -300;
      FUN_00473bf0(local_2d8,iVar7,0,0x3c,0x38,1,1);
      FUN_00473bf0(local_2d8,iVar7,100,0x40,0x32,1,1);
      FUN_00473bf0(local_2d8,iVar7,200,0x3e,0x32,1,1);
      FUN_00473bf0(local_2d8,iVar5,0,0x33,0x2f,1,1);
      FUN_00473bf0(local_2d8,iVar5,0x32,0x33,0x2d,1,1);
      FUN_00473bf0(local_2d8,iVar5,100,0x33,0x2d,1,1);
      FUN_00473bf0(local_2d8,iVar5,0x96,0x33,0x2f,1,1);
      FUN_00473bf0(local_2d8,iVar5,200,0x33,0x2d,1,1);
      FUN_00473bf0(local_2d8,iVar6,0x1c2,0x24,0x24,1,1);
      FUN_00473bf0(local_2d8,iVar6,500,0x26,0x24,1,1);
      iVar5 = iVar5 + 100;
      iVar6 = iVar6 + 0x32;
    } while (iVar5 < 600);
    FUN_00473bf0(local_2d8,0x32,0x226,0x26,0x24,1,1);
    iVar6 = 0;
    FUN_00473bf0(local_2d8,0,0x226,0x26,0x24,1,1);
    FUN_00473bf0(local_2d8,0x17c,0xfa,0x44,0x4f,1,0);
    FUN_00473bf0(local_2d8,0x1c2,0xfa,0x2f,0x4f,1,0);
    FUN_00473bf0(local_2d8,600,0xfa,0x43,0x4f,1,0);
    FUN_00473bf0(local_2d8,500,0xfa,0x43,0x4f,1,0);
    iVar5 = 300;
    do {
      FUN_00473bf0(local_2d8,iVar5,0x15e,0x2f,0x28,1,1);
      FUN_00473bf0(local_2d8,iVar5,400,0x2f,0x29,1,1);
      iVar5 = iVar5 + 100;
    } while (iVar5 < 700);
    FUN_00475840(s_interface_MemberPanel_A_004cd098,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd7,0x1da,0x249,0x7e,1,0);
    FUN_00475840(s_interface_MemberPanel_004cd080,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd7,0x1da,0x249,0x7e,1,0);
    FUN_00473bf0(local_2d8,0,400,0x21,0x21,1,1);
    FUN_00473bf0(local_2d8,0,0x1c2,0x21,0x21,1,1);
    FUN_00473bf0(local_2d8,0,0,0x79,0x2c,1,1);
    iVar5 = 0x252;
    do {
      FUN_00473bf0(local_2d8,iVar5,100,0x10,0x10,1,1);
      iVar5 = iVar5 + -0x10;
    } while (0x1b2 < iVar5);
    FUN_00473bf0(local_2d8,0x1c2,0xdc,7,7,1,1);
    FUN_00473bf0(local_2d8,0x1c2,0xe6,7,7,1,1);
    FUN_00473bf0(local_2d8,0,0x96,0x24,0xd,1,1);
    FUN_00473bf0(local_2d8,0,0xfa,0x24,0xd,1,1);
    FUN_00473bf0(local_2d8,0,300,0x2a,0x2a,1,1);
    FUN_00473bf0(local_2d8,0x32,300,0x2a,0x2a,1,1);
    FUN_00475840(s_interface_JoeCoolPanel_A_004cd064,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd6,0x1da,0x24a,0x7e,1,0);
    FUN_00473bf0(local_2d8,0,0,0x50,0x32,1,1);
    FUN_00473bf0(local_2d8,0,100,0x50,0x32,1,1);
    FUN_00475840(s_interface_JoeCoolPanel_004cd04c,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd6,0x1da,0x24a,0x7e,1,0);
    FUN_00473bf0(local_2d8,0x129,300,0x1f7,0x7a,1,1);
    local_2e4 = 0;
    iVar5 = 0;
    puVar10 = &DAT_00583b30;
    do {
      FUN_00473bf0(local_2d8,iVar6,300,0x2a,0x2c,1,1);
      FUN_00473bf0(local_2d8,iVar6,500,0x26,0x20,1,1);
      FUN_00473bf0(local_2d8,iVar6,0x217,0x26,0x1e,1,1);
      FUN_00473bf0(local_2d8,iVar6,0x235,0x26,0x20,1,1);
      bVar17 = local_2e4 == 0;
      FUN_00473bf0(local_2d8,iVar5,bVar17,0x50,0x32,1,1);
      FUN_00473bf0(local_2d8,iVar5,bVar17 + '2',0x50,0x32,1,1);
      FUN_00473bf0(local_2d8,iVar5,bVar17 + 'd',0x50,0x32,1,1);
      FUN_00473bf0(local_2d8,iVar5,bVar17 + -0x6a,0x50,0x32,1,1);
      FUN_00473bf0(local_2d8,iVar5,bVar17 + -0x38,0x50,0x32,1,1);
      puVar10 = puVar10 + 0x2c;
      local_2e4 = local_2e4 + 1;
      iVar6 = iVar6 + 0x32;
      iVar5 = iVar5 + 100;
    } while ((int)puVar10 < 0x583be0);
    FUN_00473bf0(local_2d8,0,400,0x21,0x21,1,1);
    FUN_00473bf0(local_2d8,0,0x1c2,0x21,0x21,1,1);
    FUN_00475840(s_interface_EmployeePanel_A_004cd030,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd7,0x1da,0x249,0x7e,1,0);
    FUN_00475840(s_interface_EmployeePanel_004cd018,0,0,0x100,2);
    FUN_00473bf0(local_2d8,0xd7,0x1da,0x249,0x7e,1,0);
    FUN_00473bf0(local_2d8,0,400,0x21,0x21,1,1);
    FUN_00473bf0(local_2d8,0,0x1c2,0x21,0x21,1,1);
    iVar6 = 500;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x2a,0x2a,1,1);
        iVar5 = iVar5 + 0x32;
      } while (iVar5 < 0x96);
      iVar6 = iVar6 + 0x32;
    } while (iVar6 < 600);
    iVar6 = 200;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x10,0x3e,1,1);
        iVar5 = iVar5 + 0x32;
      } while (iVar5 < 0x96);
      iVar6 = iVar6 + 100;
    } while (iVar6 < 400);
    iVar6 = 0;
    puVar10 = &DAT_005a8f50;
    do {
      iVar5 = 400;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x34,0x30,1,1);
        iVar5 = iVar5 + 100;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 800);
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x5a9210);
    iVar6 = 0;
    puVar10 = &DAT_005a9210;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar5,iVar6,0x3f,0x2b,1,1);
        iVar5 = iVar5 + 100;
      } while (iVar5 < 300);
      puVar10 = puVar10 + 0xb0;
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x5a9370);
    FUN_00475840(s_interface_ChooseAlphaButtons_A_004ccff8,0,0,0x100,2);
    iVar6 = 0;
    iVar5 = 2;
    do {
      FUN_00473bf0(local_2d8,iVar5,0,((1 < iVar6) - 1 & 0xffffff86) + 0xb6,
                   ((1 < iVar6) - 1 & 0xffffffe8) + 0x4a,1,1);
      iVar5 = iVar5 + 200;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x322);
    FUN_00475840(s_interface_chooseParklandButtons_004ccfd8,0,0,0x100,2);
    iVar6 = 0;
    iVar5 = 2;
    do {
      FUN_00473bf0(local_2d8,iVar5,0,((1 < iVar6) - 1 & 0xffffff85) + 0xb6,
                   ((1 < iVar6) - 1 & 0xffffffe8) + 0x49,1,1);
      iVar5 = iVar5 + 200;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x322);
    FUN_00475840(s_interface_chooseDesertButtons_004ccfb8,0,0,0x100,2);
    iVar6 = 0;
    iVar5 = 2;
    do {
      FUN_00473bf0(local_2d8,iVar5,0,((1 < iVar6) - 1 & 0xffffff85) + 0xb6,
                   ((1 < iVar6) - 1 & 0xffffffe8) + 0x49,1,1);
      iVar5 = iVar5 + 200;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x322);
    FUN_00475840(s_interface_chooseTropicalButtons_004ccf98,0,0,0x100,2);
    iVar6 = 0;
    iVar5 = 2;
    do {
      FUN_00473bf0(local_2d8,iVar5,0,((1 < iVar6) - 1 & 0xffffff85) + 0xb6,
                   ((1 < iVar6) - 1 & 0xffffffe8) + 0x49,1,1);
      iVar5 = iVar5 + 200;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x322);
    FUN_00475840(s_interface_chooseLinksButtons_004ccf78,0,0,0x100,2);
    iVar6 = 0;
    iVar5 = 2;
    do {
      FUN_00473bf0(local_2d8,iVar5,0,((1 < iVar6) - 1 & 0xffffff85) + 0xb6,
                   ((1 < iVar6) - 1 & 0xffffffe8) + 0x49,1,1);
      iVar5 = iVar5 + 200;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x322);
    FUN_00475840(s_interface_TacksandArrow_004ccf60,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_0053c830;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar6,iVar5,0x14,0x18,1,1);
        iVar5 = iVar5 + 0x32;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 200);
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x53caf0);
    FUN_00475840(s_interface_TacksandArrow_A_004ccf44,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_005a43f8;
    do {
      iVar5 = 0;
      do {
        FUN_00473bf0(local_2d8,iVar6,iVar5,0x14,0x18,1,1);
        iVar5 = iVar5 + 0x32;
        puVar10 = puVar10 + 0x2c;
      } while (iVar5 < 200);
      iVar6 = iVar6 + 0x32;
    } while ((int)puVar10 < 0x5a46b8);
    FUN_00475840(s_flics_bldgs_holemark_pcx_004ccf28,0,0,0x100,2);
    iVar6 = 0;
    puVar10 = &DAT_0058a850;
    do {
      iVar5 = iVar6 / 9;
      iVar7 = iVar6 % 9;
      FUN_00473bf0(local_2d8,iVar7 * 0x11 + 3,iVar5 * 0xe + 4,0x11,0xe,1,1);
      FUN_00473bf0(local_2d8,iVar7 * 0x12 + 4,iVar5 * 0x11 + 0x24,0x12,0x11,1,1);
      FUN_00473bf0(local_2d8,iVar7 * 0x13 + 4,iVar5 * 0x15 + 0x49,0x13,0x15,1,1);
      puVar10 = puVar10 + 0x2c;
      iVar6 = iVar6 + 1;
    } while ((int)puVar10 < 0x58ab68);
    local_4 = 0xffffffff;
    FUN_00474c40();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}

