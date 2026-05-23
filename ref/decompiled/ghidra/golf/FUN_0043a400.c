/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043a400 @ 0x0043A400 */
/* Body size: 1215 addresses */


int FUN_0043a400(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *unaff_FS_OFFSET;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  undefined4 local_3c8 [10];
  undefined1 local_3a0 [220];
  undefined1 local_2c4 [696];
  undefined4 local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b73e1;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_3c8[7] = 0xa1;
  local_3c8[1] = 0xa1;
  local_3c8[5] = 0xc1;
  local_3c8[6] = 0x96;
  local_3c8[8] = 200;
  local_3c8[9] = 0x2dc;
  local_3c8[0] = 0x20;
  local_3c8[2] = 0x140;
  local_3c8[3] = 0x1b4;
  local_3c8[4] = 0x214;
  FUN_004a55d2(local_3a0,0x2c,5,FUN_00473ab0,&LAB_004041f0);
  local_4 = 0;
  FUN_00474ae0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00475840(s_interface_TitleSelDiffMO_004c8778,0,0,0x100,2);
  FUN_00473bf0(local_2c4,0,0,0x152,0x92,1,1);
  FUN_00473bf0(local_2c4,400,0,0x152,0x92,1,1);
  FUN_00473bf0(local_2c4,0,300,0x14c,0x72,1,1);
  FUN_00473bf0(local_2c4,400,300,0x14c,0x82,1,1);
  FUN_00473bf0(local_2c4,0x2dc,0x214,0x44,0x44,1,1);
  FUN_00475840(s_interface_TitleSelDiffUnSel_004c875c,0,0,0x100,2);
  DAT_00822d68 = 0;
  local_3cc = 0;
  iVar5 = -1;
  do {
    FUN_004762d0(&DAT_00519a40,0,0,0);
    FUN_00475c60(&DAT_00519cd4,0,0,0,0,800,600);
    FUN_00404b70(s_Select_Difficulty_004c8748,0x25a,0x2a,0x80000000);
    if (iVar5 != -1) {
      FUN_00473e60(PTR_DAT_004c1570,local_3c8[iVar5 + 5],local_3c8[iVar5],0);
    }
    FUN_00404b70(&DAT_004c8740,0x184,(-(iVar5 != 0) & 2U) + 0x71,
                 (-(uint)(iVar5 != 0) & 0x4210) + 0x80000000);
    FUN_00404b70(s_Moderate_004c8734,0x168,(-(uint)(iVar5 != 1) & 2) + 0xe3,
                 (-(uint)(iVar5 != 1) & 0x4210) + 0x80000000);
    FUN_00404b70(s_Difficult_004c8728,0x16e,(-(uint)(iVar5 != 2) & 2) + 0x15a,
                 (-(uint)(iVar5 != 2) & 0x4210) + 0x80000000);
    FUN_00404b70(s_Impossible_004c871c,0x192,(-(uint)(iVar5 != 3) & 2) + 0x1d0,
                 (-(uint)(iVar5 != 3) & 0x4210) + 0x80000000);
    FUN_0045c030();
    FUN_0047ab50(&local_3d4,&local_3d0);
    iVar6 = -1;
    iVar2 = FUN_00467170((local_3d4 + -0x15c) / 2,local_3d0 + -0x6b);
    if (iVar2 < 0x50) {
      iVar6 = 0;
    }
    iVar2 = FUN_00467170((local_3d4 + -0x13f) / 2,local_3d0 + -0xda);
    if (iVar2 < 0x50) {
      iVar6 = 1;
    }
    iVar2 = FUN_00467170((local_3d4 + -0x140) / 2,local_3d0 + -0x16f);
    if (iVar2 < 0x50) {
      iVar6 = 2;
    }
    iVar2 = FUN_00467170((local_3d4 + -0x16b) / 2,local_3d0 + -0x1ef);
    if (iVar2 < 0x50) {
      iVar6 = 3;
    }
    iVar2 = FUN_00467170(local_3d4 + -0x2ff,local_3d0 + -0x22d);
    if (iVar2 < 0x19) {
      iVar6 = 4;
    }
    if (iVar6 == iVar5) {
      local_3cc = local_3cc + 1;
      if ((0x1e < local_3cc) && (iVar6 == 4)) {
        uVar3 = 0xffffffff;
        pcVar7 = s_Cancel_004c8590;
        do {
          pcVar8 = pcVar7;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar7 = pcVar8 + -uVar3;
        pcVar8 = (char *)&DAT_0051a068;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        FUN_00432620(0x2ff,0x22d);
      }
    }
    else {
      local_3cc = 0;
    }
    FUN_00480c80(0);
    FUN_0045bf80(2,0);
    if (DAT_00822d68 != 0) goto LAB_0043a86b;
    iVar2 = FUN_0045ae70();
    iVar5 = iVar6;
  } while (iVar2 == 0);
  if (DAT_00822d68 != 0) {
LAB_0043a86b:
    if (iVar6 != 4) goto LAB_0043a873;
  }
  iVar6 = -1;
LAB_0043a873:
  local_4 = local_4 & 0xffffff00;
  FUN_00474c40();
  local_4 = 0xffffffff;
  FUN_004a5713(local_3a0,0x2c,5,&LAB_004041f0);
  *unaff_FS_OFFSET = local_c;
  return iVar6;
}

