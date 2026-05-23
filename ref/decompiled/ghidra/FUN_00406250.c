/* Ghidra decompiled: golf.exe */
/* Function: FUN_00406250 @ 0x00406250 */
/* Body size: 427 addresses */


void FUN_00406250(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar8;
  undefined1 local_2c4 [696];
  undefined4 local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7326;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00473ab0();
  local_4 = 0;
  FUN_00474ae0();
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar2 = FUN_0045c1e0(0xc);
  switch(uVar2) {
  case 0:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c4690;
    break;
  case 1:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c4664;
    break;
  case 2:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c4638;
    break;
  case 3:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c460c;
    break;
  case 4:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c45e0;
    break;
  case 5:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c45b4;
    break;
  case 6:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c4588;
    break;
  case 7:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c455c;
    break;
  case 8:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c4530;
    break;
  case 9:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c4504;
    break;
  case 10:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c44d8;
    break;
  case 0xb:
    pcVar8 = s_interface_Loading_Screens_Loadin_004c44ac;
    break;
  default:
    goto LAB_0040639c;
  }
  FUN_00475840(pcVar8,0,0,0x100,2);
LAB_0040639c:
  FUN_00473bf0(local_2c4,0x5a,0xaf,0x26c,0xca,1,1);
  FUN_00473e60(PTR_DAT_004c1570,0x5a,0xaf,0);
  DAT_0051a068._0_1_ = 0;
  uVar2 = FUN_0045c1e0(0xb);
  switch(uVar2) {
  case 0:
    pcVar8 = s__Every_hole_should_have_a_differ_004c4444;
    break;
  case 1:
    pcVar8 = s__There_should_be_infinite_variet_004c43b4;
    break;
  case 2:
    pcVar8 = s__All_really_great_golf_holes_inv_004c433c;
    break;
  case 3:
    pcVar8 = s__A_golf_course_should_provide_en_004c42b4;
    break;
  case 4:
    pcVar8 = s__Basic_criteria__Safety__Shot_va_004c41fc;
    break;
  case 5:
    pcVar8 = s__Golf_courses_are_playfields_of_i_004c4168;
    break;
  case 6:
    pcVar8 = s__There_are_118_golf_holes_here__A_004c4100;
    break;
  case 7:
    pcVar8 = s__When_you_get_those_dudes_thinki_004c40ac;
    break;
  case 8:
    pcVar8 = s__The_spirit_of_golf_is_to_dare_a_004c4024;
    break;
  case 9:
    pcVar8 = s__I_hate_this_stupid_course__I_m_l_004c3fe8;
    break;
  case 10:
    pcVar8 = s__Hey__that_ball_almost_hit_me_____004c3fb4;
    break;
  default:
    goto LAB_00406471;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    pcVar6 = pcVar8;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar6;
  } while (cVar1 != '\0');
  pcVar8 = pcVar7 + -uVar4;
  pcVar7 = pcVar6 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
LAB_00406471:
  FUN_0045b0d0(0x32,200,0xf0,0x80007fff);
  if (param_1 != -1) {
    iVar3 = FUN_00467130((100 - param_1) * 2,0,200);
    FUN_00480b00(299,400,0xca,0x18,0x80007fff);
    FUN_00480b00(500 - iVar3,0x191,iVar3,0x16,0x80007b20);
    FUN_00404b70(s_Loading____004c3fa8,400,0x194,0x80000000);
  }
  FUN_00473ae0();
  local_4 = local_4 & 0xffffff00;
  FUN_00474c40();
  local_4 = 0xffffffff;
  FUN_00473ae0();
  *unaff_FS_OFFSET = local_c;
  return;
}

