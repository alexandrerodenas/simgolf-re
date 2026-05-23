/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044e770 @ 0x0044E770 */
/* Body size: 3898 addresses */


void FUN_0044e770(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *unaff_FS_OFFSET;
  int iStack_324;
  int iStack_320;
  undefined **local_31c [11];
  undefined **local_2f0;
  undefined1 local_2c4 [696];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7a01;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00474ae0();
  local_4 = 0;
  FUN_00473ab0();
  local_4._0_1_ = 1;
  FUN_00473ab0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00474dd0(800,600,0,1,0,0);
  FUN_00475840(s_interface_infoscreens_shortcuts__004d2dec,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,0x199,1,0);
  FUN_00475840(s_interface_infoscreens_shortcuts__004d2dc0,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,0x199,1,0);
  FUN_00474cb0();
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  FUN_00473f60(local_31c,&DAT_00519cd4,0,0,0);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar5 = 0xffffffff;
  pcVar6 = s_KEYBOARD_SHORTCUTS_004d2dac;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821020,s_KEYBOARD_SHORTCUTS_004d2dac,0x11f,0x1c,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2da8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2da8,0x44,0x51,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Course_status_report__004d2d90;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Course_status_report__004d2d90,0x6c,0x51,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2d8c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2d8c,0x44,0x62,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Player_comments_report__004d2d74;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Player_comments_report__004d2d74,0x6c,0x62,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2d70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2d70,0x44,0x73,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Histograph__004d2d64;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Histograph__004d2d64,0x6c,0x73,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2d60;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2d60,0x44,0x84,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Financial_Report__004d2d4c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Financial_Report__004d2d4c,0x6c,0x84,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2d48;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2d48,0x44,0x95,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Course_Overview_Map__004d2d30;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Course_Overview_Map__004d2d30,0x6c,0x95,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2d2c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2d2c,0x44,0xa6,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_World_Map__004d2d20;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_World_Map__004d2d20,0x6c,0xa6,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2d1c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2d1c,0x44,0xb7,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_SGA_Evaluation__004d2d0c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_SGA_Evaluation__004d2d0c,0x6c,0xb7,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2d08;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2d08,0x44,200,~uVar5 - 1);
  iVar4 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  FUN_00476310((-(uint)(iVar4 != 1) & 0xfffffe00) + 0x80000400,0xffffffff,2,2);
  uVar5 = 0xffffffff;
  pcVar6 = s_Handy_keyboard_commands_screen__004d2ce8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Handy_keyboard_commands_screen__004d2ce8,0x6c,200,~uVar5 - 1);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2ce4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2ce4,0x44,0xd9,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Membership_Roster__004d2cd0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Membership_Roster__004d2cd0,0x6c,0xd9,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2ccc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2ccc,0x44,0xea,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Professional_Accomplishments__004d2cac;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Professional_Accomplishments__004d2cac,0x6c,0xea,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004c5c0c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004c5c0c,0x44,0xfb,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Repeat_last_message__004d2c94;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Repeat_last_message__004d2c94,0x6c,0xfb,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2c8c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2c8c,0x44,0x10c,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Sell_a_building_lot__004d2c74;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Sell_a_building_lot__004d2c74,0x6c,0x10c,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2c6c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2c6c,0x44,0x11d,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Routing__Aura__and_lot_values_004d2c4c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Routing__Aura__and_lot_values_004d2c4c,0x6c,0x11d,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2c44;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2c44,0x44,0x12e,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_World_map__change_courses_004d2c28;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_World_map__change_courses_004d2c28,0x6c,0x12e,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2c24;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2c24,0x44,0x13f,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Rotate_buildings_trees_before_pl_004d2bfc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Rotate_buildings_trees_before_pl_004d2bfc,0x6c,0x13f,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2bf8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2bf8,0x44,0x157,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Quit_the_game__004d2be8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Quit_the_game__004d2be8,0x6c,0x157,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2be4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2be4,0x1bc,0x51,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Select_GREEN_TEES_tool__004d2bcc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Select_GREEN_TEES_tool__004d2bcc,0x1e3,0x51,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2bc8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2bc8,0x1bc,0x62,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Select_FAIRWAY_tool__004d2bb0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Select_FAIRWAY_tool__004d2bb0,0x1e3,0x62,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2bac;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2bac,0x1bc,0x73,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Select_ROUGH_tool__004d2b98;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Select_ROUGH_tool__004d2b98,0x1e3,0x73,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2b94;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2b94,0x1bc,0x84,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Select_SAND_TRAP_tool__004d2b7c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Select_SAND_TRAP_tool__004d2b7c,0x1e3,0x84,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2b78;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2b78,0x1bc,0x95,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Select_TREES_tool__004d2b64;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Select_TREES_tool__004d2b64,0x1e3,0x95,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2b60;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2b60,0x1bc,0xa6,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Select_WATER_tool__004d2b4c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Select_WATER_tool__004d2b4c,0x1e3,0xa6,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2b48;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2b48,0x1bc,0xb7,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Select_PATH_tool__004d2b34;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Select_PATH_tool__004d2b34,0x1e3,0xb7,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2b30;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2b30,0x1bc,200,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Select_BENCHES_tool__004d2b18;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Select_BENCHES_tool__004d2b18,0x1e3,200,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2b14;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2b14,0x1bc,0xd9,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Zoom_the_view__004d2b04;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Zoom_the_view__004d2b04,0x1e3,0xd9,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004c61e4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004c61e4,0x1bc,0xea,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Unzoom_the_view__004d2af0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Unzoom_the_view__004d2af0,0x1e3,0xea,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2ae8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2ae8,0x1bc,0xfb,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Pause_Unpause_the_game__004d2ad0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Pause_Unpause_the_game__004d2ad0,0x1e3,0xfb,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2ac8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2ac8,0x1bc,0x10c,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Turn_trees_off_on__004d2ab4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Turn_trees_off_on__004d2ab4,0x1e3,0x10c,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2aac;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2aac,0x1bc,0x11d,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Toggle_names_display__004d2a94;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Toggle_names_display__004d2a94,0x1e3,0x11d,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004d2a90;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004d2a90,0x1bc,0x12e,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Toggle_elevation_mode__004d2a78;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Toggle_elevation_mode__004d2a78,0x1e3,0x12e,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_004c1430;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004c1430,0x1bc,0x13f,~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar6 = s_Instant_shot_analysis__004d2a60;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Instant_shot_analysis__004d2a60,0x1e3,0x13f,~uVar5 - 1);
  bVar2 = false;
  bVar3 = true;
  FUN_00473e60(&DAT_00519cd4,0x2c6,0x16a,0);
  FUN_00480c80(0);
  FUN_0045bf80(0x3c,0);
  FUN_00483d30();
  do {
    FUN_0045bf80(1,0);
    FUN_0045c030();
    FUN_0047ab50(&iStack_320,&iStack_324);
    FUN_00480c80(0);
    if ((((iStack_320 < 0x2c6) || (0x2f1 < iStack_320)) || (iStack_324 < 0x16a)) ||
       (0x195 < iStack_324)) {
      if (bVar2) {
        bVar2 = false;
        FUN_00473e60(&DAT_00519cd4,0x2c6,0x16a,0);
        FUN_00480c80(0);
      }
    }
    else {
      if (!bVar2) {
        bVar2 = true;
        FUN_00473e60(&DAT_00519cd4,0x2c6,0x16a,0);
        FUN_00480c80(0);
      }
      if (DAT_00822d68 == 1) {
        bVar3 = false;
      }
    }
    iVar4 = FUN_0045ae70();
  } while ((iVar4 == 0) && (bVar3));
  DAT_00569498 = 0;
  FUN_0045c150();
  FUN_00473ae0();
  FUN_00473ae0();
  local_4._0_1_ = 1;
  local_31c[0] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4 = (uint)local_4._1_3_ << 8;
  local_2f0 = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4 = 0xffffffff;
  FUN_00474c40();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

