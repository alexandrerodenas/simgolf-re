/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044bde0 @ 0x0044BDE0 */


void FUN_0044bde0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_2cc;
  int local_2c8;
  undefined1 local_2c4 [4];
  int *local_2c0;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b796b;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00474ae0();
  local_4 = 0;
  FUN_00483800(s_Klepto_ITC_TT_004d2748,0x18,0);
  FUN_00483800(s_Manual_SSi_004d273c,0x14,0);
  FUN_00483800(s_Manual_SSi_004d273c,0x12,0);
  FUN_00483800(s_Manual_SSi_004d273c,0x10,0);
  FUN_00483800(s_Manual_SSi_004d273c,0xe,0);
  FUN_00474dd0(800,600,0,1,0,0);
  FUN_00475840(s_interface_infoscreens_black_pcx_004d271c,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,600,1,1);
  FUN_00475840(s_interface_infoscreens_okstates_p_004d26f8,0,0,0x100,1);
  iVar4 = 0;
  puVar5 = &DAT_00820f40;
  do {
    FUN_00473c60(local_2c4,(iVar4 % 3) * 0x2d + 1,((3 < iVar4) - 1 & 0xffffffd5) + 0x2c,0x2c,0x2a,1,
                 1);
    puVar5 = puVar5 + 0x2c;
    iVar4 = iVar4 + 1;
  } while ((int)puVar5 < 0x82101c);
  FUN_00475840(s_interface_infoscreens_FINANCErep_004d26d0,0,0,0x100,1);
  FUN_00473c60(local_2c4,8,7,0x310,0x121,1,0);
  FUN_00475840(s_interface_infoscreens_FINANCErep_004d26a0,0,0,0x100,1);
  FUN_00473c60(local_2c4,8,7,0x310,0x121,1,0);
  FUN_00475840(s_interface_infoscreens_courserepo_004d2678,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,0x68,1,0);
  FUN_00473c60(local_2c4,0,0x81,800,0x11,1,0);
  FUN_00473c60(local_2c4,0,0x1a4,800,0x1d,1,0);
  FUN_00473c60(local_2c4,0,0x1d4,800,0x49,1,0);
  local_2cc = 0xc2;
  local_2c8 = 0x225;
  puVar6 = &DAT_004ba68c;
  do {
    if ((int)puVar6 < 0x4ba698) {
      iVar4 = 0;
      do {
        FUN_00473c60(local_2c4,*(undefined4 *)((int)&DAT_004ba62c + iVar4),*puVar6,
                     *(undefined4 *)((int)&DAT_004ba65c + iVar4),0xf,1,1);
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0x30);
      FUN_00473c60(local_2c4,0x223,local_2c8,0xb,0xd,1,1);
    }
    FUN_00473c60(local_2c4,local_2cc,0x22d,0xe,0xf,1,1);
    puVar6 = puVar6 + 1;
    local_2c8 = local_2c8 + 0xe;
    local_2cc = local_2cc + 0xf;
  } while ((int)puVar6 < 0x4ba6a0);
  FUN_00475840(s_interface_infoscreens_courserepo_004d2648,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,0x68,1,0);
  FUN_00473c60(local_2c4,0,0x81,800,0x11,1,0);
  FUN_00473c60(local_2c4,0,0x1a4,800,0x1d,1,0);
  FUN_00473c60(local_2c4,0,0x1d4,800,0x49,1,0);
  FUN_00475840(s_interface_infoscreens_SGA_pcx_004d2628,0,0,0x100,1);
  FUN_00473c60(local_2c4,0x23,0x1a,0x2da,0x1a3,1,0);
  FUN_00475840(s_interface_infoscreens_SGAreport__004d25fc,0,0,0x100,1);
  FUN_00473c60(local_2c4,0x23,0x1a,0x2da,0x1a3,1,0);
  FUN_00475840(s_interface_infoscreens_HoleSTAT_p_004d25d8,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,0xdc,1,0);
  FUN_00473c60(local_2c4,0,0x11a,800,0x10,1,0);
  FUN_00473c60(local_2c4,0,0x15b,800,0x37,1,0);
  FUN_00475840(s_interface_infoscreens_HoleSTAT_a_004d25ac,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,0xdc,1,0);
  FUN_00473c60(local_2c4,0,0x11a,800,0x10,1,0);
  FUN_00473c60(local_2c4,0,0x15b,800,0x37,1,0);
  FUN_00475840(s_interface_infoscreens_PlayComt_p_004d2588,0,0,0x100,1);
  FUN_00473c60(local_2c4,0x94,0x2d,0x1f9,0x66,1,0);
  FUN_00473c60(local_2c4,0x94,0xe0,0x1f9,0x11,1,0);
  FUN_00473c60(local_2c4,0x94,0x141,0x1f9,0x3d,1,0);
  FUN_00475840(s_interface_infoscreens_PlayComt_a_004d255c,0,0,0x100,1);
  FUN_00473c60(local_2c4,0x94,0x2d,0x1f9,0x66,1,0);
  FUN_00473c60(local_2c4,0x94,0xe0,0x1f9,0x11,1,0);
  FUN_00473c60(local_2c4,0x94,0x141,0x1f9,0x3d,1,0);
  FUN_00475840(s_interface_infoscreens_memberRost_004d2534,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,600,1,0);
  FUN_00475840(s_interface_infoscreens_memberRost_004d2504,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,600,1,0);
  FUN_00475840(s_interface_infoscreens_memberRost_004d24d4,0,0,0x100,1);
  uVar3 = 0;
  iVar4 = -0x4c;
  iVar7 = -0x3e;
  do {
    if (iVar7 < 0xa6) {
      uVar9 = 0x12;
      iVar2 = (-(uint)((uVar3 & 1) != 0) & 0xffffffed) + 0x14;
      uVar8 = 0x13;
      iVar1 = ((int)uVar3 >> 1) * 0x14 + 0x2e;
    }
    else if (iVar7 < 0xcc) {
      uVar9 = 0x25;
      uVar8 = 0x12;
      iVar2 = 1;
      iVar1 = iVar7;
    }
    else {
      uVar9 = 0x12;
      uVar8 = 0x13;
      iVar2 = 1;
      iVar1 = iVar4;
    }
    FUN_00473c60(local_2c4,iVar1,iVar2,uVar8,uVar9,1,1);
    iVar7 = iVar7 + 0x13;
    uVar3 = uVar3 + 1;
    iVar4 = iVar4 + 0x14;
  } while (iVar7 < 0x105);
  FUN_00475840(s_interface_infoscreens_memberRost_004d24a0,0,0,0x100,1);
  if (local_2c0 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*local_2c0 + 0xdc))();
    if (local_2c0 != (int *)0x0) {
      uVar9 = (**(code **)(*local_2c0 + 0xd8))();
      goto LAB_0044c55a;
    }
  }
  uVar9 = 0;
LAB_0044c55a:
  FUN_00473c60(local_2c4,0,0,uVar9,uVar8,1,1);
  FUN_00475840(s_interface_infoscreens_lowscore_p_004d247c,0,0,0x100,1);
  FUN_00473c60(local_2c4,0xc3,0x2d,0x19b,0x4f,1,0);
  FUN_00473c60(local_2c4,0xc3,0xe0,0x19b,0x11,1,0);
  FUN_00473c60(local_2c4,0xc3,0x141,0x19b,0x3d,1,0);
  FUN_00475840(s_interface_infoscreens_lowscore_a_004d2450,0,0,0x100,1);
  FUN_00473c60(local_2c4,0xc3,0x2d,0x19b,0x4f,1,0);
  FUN_00473c60(local_2c4,0xc3,0xe0,0x19b,0x11,1,0);
  FUN_00473c60(local_2c4,0xc3,0x141,0x19b,0x3d,1,0);
  FUN_00475840(s_interface_infoscreens_histograph_004d2428,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,600,1,0);
  FUN_00475840(s_interface_infoscreens_histograph_004d23fc,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,600,1,0);
  FUN_00475840(s_interface_infoscreens_route_scre_004d23cc,0,0,0x100,1);
  if (local_2c0 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*local_2c0 + 0xdc))();
  }
  FUN_00473c60(local_2c4,0,0,800,uVar8,1,0);
  FUN_00475840(s_interface_infoscreens_route_scre_004d239c,0,0,0x100,1);
  if (local_2c0 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*local_2c0 + 0xdc))();
  }
  FUN_00473c60(local_2c4,0,0,800,uVar8,1,0);
  FUN_00475840(s_interface_infoscreens_route_scre_004d236c,0,0,0x100,1);
  if (local_2c0 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*local_2c0 + 0xdc))();
  }
  FUN_00473c60(local_2c4,0,0,800,uVar8,1,0);
  FUN_00475840(s_interface_infoscreens_route_scre_004d233c,0,0,0x100,1);
  if (local_2c0 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*local_2c0 + 0xdc))();
  }
  FUN_00473c60(local_2c4,0,0,800,uVar8,1,0);
  FUN_00475840(s_interface_infoscreens_route_scre_004d230c,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0xfd,800,0x15b,1,0);
  puVar5 = &DAT_008225a4;
  iVar4 = 0;
  do {
    FUN_00473c60(local_2c4,*(undefined4 *)((int)&DAT_004ba698 + iVar4),
                 *(undefined4 *)((int)&DAT_004ba6c8 + iVar4),
                 *(undefined4 *)((int)&DAT_004ba6f8 + iVar4),
                 *(undefined4 *)((int)&DAT_004ba728 + iVar4),1,0);
    puVar5 = puVar5 + 0x2c;
    iVar4 = iVar4 + 4;
  } while ((int)puVar5 < 0x8227b4);
  FUN_00475840(s_interface_infoscreens_buy_land_p_004d22e8,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,600,1,0);
  FUN_00475840(s_interface_infoscreens_buy_land_b_004d22bc,0,0,0x100,1);
  iVar4 = 0;
  do {
    if (iVar4 < 0x12) {
      uVar9 = 0x3d;
      uVar8 = 0x3b;
      iVar1 = (iVar4 / 9) * 0x3f + 1;
      iVar7 = (iVar4 % 9) * 0x3c + 1;
    }
    else if (iVar4 == 0x12) {
      uVar9 = 0x5f;
      uVar8 = 0xc0;
      iVar1 = 0x7f;
      iVar7 = 1;
    }
    else if (iVar4 == 0x13) {
      uVar9 = 0x40;
      uVar8 = 0x40;
      iVar1 = 0x7f;
      iVar7 = 0xc2;
    }
    else {
      uVar9 = 0x3d;
      uVar8 = 0x48;
      iVar1 = 0x7f;
      iVar7 = 0x103;
    }
    FUN_00473c60(local_2c4,iVar7,iVar1,uVar8,uVar9,1,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x15);
  FUN_00475840(s_interface_infoscreens_hire_pcx_004d229c,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,600,1,0);
  FUN_00475840(s_interface_infoscreens_hire_alpha_004d2274,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,600,1,0);
  FUN_00475840(s_interface_PairBase_pcx_004d225c,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,600,1,0);
  FUN_00475840(s_interface_PairButtons_pcx_004d2240,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,0x149,0x88,1,0);
  FUN_00473c60(local_2c4,0,0x88,0x149,0x88,1,0);
  FUN_00473c60(local_2c4,0,0x110,0x149,0x88,1,0);
  FUN_00473c60(local_2c4,0x2b5,0x1f6,0x4b,0x4b,1,0);
  FUN_00475840(s_interface_infoscreens_tournament_004d2214,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,0x6a,1,1);
  FUN_00473c60(local_2c4,0,0xb4,800,0x1a,1,1);
  FUN_00473c60(local_2c4,0,0x7d,800,0x16,1,1);
  FUN_00473c60(local_2c4,0,0xe0,800,0x12,1,1);
  FUN_00473c60(local_2c4,0,0x165,800,0x33,1,1);
  FUN_00473c60(local_2c4,0,0x112,800,0x33,1,1);
  FUN_00475840(s_interface_infoscreens_tournament_004d21e0,0,0,0x100,1);
  FUN_00473c60(local_2c4,0,0,800,0x6a,1,1);
  FUN_00473c60(local_2c4,0,0xb4,800,0x1a,1,1);
  FUN_00473c60(local_2c4,0,0x7d,800,0x16,1,1);
  FUN_00473c60(local_2c4,0,0xe0,800,0x12,1,1);
  FUN_00473c60(local_2c4,0,0x165,800,0x33,1,1);
  FUN_00473c60(local_2c4,0,0x112,800,0x33,1,1);
  FUN_00474cb0();
  local_4 = 0xffffffff;
  FUN_00474c40();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

