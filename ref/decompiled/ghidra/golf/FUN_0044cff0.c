/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044cff0 @ 0x0044CFF0 */


void FUN_0044cff0(void)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *unaff_FS_OFFSET;
  bool bVar15;
  short *local_3e8;
  int local_3e4;
  int iStack_3dc;
  int local_3d8;
  int iStack_3d4;
  undefined4 local_3d0;
  undefined **local_3cc;
  int local_3b0;
  undefined **local_3a0 [11];
  undefined **local_374;
  int local_358;
  undefined **local_348;
  undefined **local_31c [11];
  undefined **local_2f0 [11];
  undefined1 local_2c4 [696];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b79cd;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00474ae0();
  local_4 = 0;
  FUN_00473ab0();
  local_4._0_1_ = 1;
  FUN_00473ab0();
  local_4._0_1_ = 2;
  FUN_00473ab0();
  local_4._0_1_ = 3;
  FUN_00473ab0();
  local_4._0_1_ = 4;
  FUN_00473ab0();
  local_4._0_1_ = 5;
  FUN_00473ab0();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_00474dd0(800,600,0,1,0,0);
  FUN_00475840(s_interface_infoscreens_endoyear_p_004d2a3c,0,0,0x100,1);
  FUN_00473c60(local_2c4,0xbb,0x28,0x1ad,0xb0,1,0);
  FUN_00473c60(local_2c4,0xbb,0x176,0x1ad,0x37,1,0);
  FUN_00473c60(local_2c4,0xbb,0x123,0x1ad,0xf,1,0);
  FUN_00475840(s_interface_infoscreens_endoyear_a_004d2a10,0,0,0x100,1);
  FUN_00473c60(local_2c4,0xbb,0x28,0x1ad,0xb0,1,0);
  FUN_00473c60(local_2c4,0xbb,0x176,0x1ad,0x37,1,0);
  FUN_00473c60(local_2c4,0xbb,0x123,0x1ad,0xf,1,0);
  FUN_00474cb0();
  FUN_004481b0(0x7f,100,0,0,0);
  local_3d0 = DAT_00519d40;
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  FUN_00473f60(local_31c,&DAT_00519cd4,0xbb,0x28,0);
  iVar8 = (int)(DAT_00834170 + (DAT_00834170 >> 0x1f & 0x3ffU)) >> 10;
  iVar11 = iVar8 % 500;
  local_3e4 = (iVar8 + -8) % 500;
  local_3d8 = local_3e4;
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar9 = 0xffffffff;
  pcVar6 = s_END_of_YEAR__004d2a00;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = (char *)&DAT_0051a068;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  iVar8 = (int)DAT_005a6d3c;
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar6 = (char *)FUN_004ad425(iVar8 + 2000,&DAT_00821c50,10);
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar13;
  } while (cVar2 != '\0');
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476700(&DAT_00821020,&DAT_0051a068,0x196,0x37,~uVar9 - 1);
  uVar9 = 0xffffffff;
  pcVar6 = s_This_Year_004d29f4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476700(&DAT_00821ee8,s_This_Year_004d29f4,0x1d1,0x5d,~uVar9 - 1);
  uVar9 = 0xffffffff;
  pcVar6 = s_Last_Year_004d29e8;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476700(&DAT_00821ee8,s_Last_Year_004d29e8,0x236,0x5d,~uVar9 - 1);
  uVar9 = 0xffffffff;
  pcVar6 = s_Highlights_004d29dc;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476700(&DAT_00821ee8,s_Highlights_004d29dc,0x194,200,~uVar9 - 1);
  uVar9 = 0xffffffff;
  pcVar6 = s_Cash_reserves_have_004d29c8;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  sVar3 = *(short *)((int)&DAT_0051b388 + local_3e4 * 2);
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = (char *)&DAT_0051a068;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  sVar4 = *(short *)((int)&DAT_0051b388 + iVar11 * 2);
  if (sVar3 < sVar4) {
    pcVar6 = s_increased_004d29bc;
  }
  else {
    pcVar6 = s_not_changed_004d29b0;
    if (sVar3 != sVar4) {
      pcVar6 = s_decreased_004d29a4;
    }
  }
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar13;
  } while (cVar2 != '\0');
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x12d,0x73,~uVar9 - 1);
  DAT_0051a068._0_1_ = 0;
  FUN_0042dc00(*(short *)((int)&DAT_0051b388 + local_3e4 * 2) * 100);
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x259,0x73,~uVar9 - 1);
  DAT_0051a068._0_1_ = 0;
  FUN_0042dc00(*(short *)((int)&DAT_0051b388 + iVar11 * 2) * 100);
  sVar3 = *(short *)((int)&DAT_0051b388 + local_3e4 * 2);
  sVar4 = *(short *)((int)&DAT_0051b388 + iVar11 * 2);
  if (sVar3 < sVar4) {
    iVar8 = -0x7fffed7c;
  }
  else {
    iVar8 = (-(uint)(sVar3 != sVar4) & 0x7d08) + 0x80000000;
  }
  FUN_00476310(iVar8,0xffffffff,2,2);
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476750(&DAT_00821ee8,&DAT_0051a068,500,0x73,~uVar9 - 1);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar9 = 0xffffffff;
  pcVar6 = s_Your_fun_rating_has_004d298c;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  sVar3 = *(short *)((int)&DAT_0053e63c + local_3e4 * 2);
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = (char *)&DAT_0051a068;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  sVar4 = *(short *)((int)&DAT_0053e63c + iVar11 * 2);
  if (sVar3 < sVar4) {
    pcVar6 = s_increased_004d29bc;
  }
  else {
    pcVar6 = s_not_changed_004d29b0;
    if (sVar3 != sVar4) {
      pcVar6 = s_decreased_004d29a4;
    }
  }
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar13;
  } while (cVar2 != '\0');
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x12d,0x87,~uVar9 - 1);
  DAT_0051a068._0_1_ = 0;
  pcVar6 = (char *)FUN_004ad425((int)*(short *)((int)&DAT_0053e63c + local_3e4 * 2),&DAT_00821c50,10
                               );
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar13;
  } while (cVar2 != '\0');
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x259,0x87,~uVar9 - 1);
  DAT_0051a068._0_1_ = 0;
  pcVar6 = (char *)FUN_004ad425((int)*(short *)((int)&DAT_0053e63c + iVar11 * 2),&DAT_00821c50,10);
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar13;
  } while (cVar2 != '\0');
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  sVar3 = *(short *)((int)&DAT_0053e63c + local_3e4 * 2);
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  sVar4 = *(short *)((int)&DAT_0053e63c + iVar11 * 2);
  if (sVar3 < sVar4) {
    iVar8 = -0x7fffed7c;
  }
  else {
    iVar8 = (-(uint)(sVar3 != sVar4) & 0x7d08) + 0x80000000;
  }
  FUN_00476310(iVar8,0xffffffff,2,2);
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476750(&DAT_00821ee8,&DAT_0051a068,500,0x87,~uVar9 - 1);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar9 = 0xffffffff;
  pcVar6 = s_Your_skill_rating_has_004d2974;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  sVar3 = *(short *)((int)&DAT_005409ac + local_3e4 * 2);
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = (char *)&DAT_0051a068;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  sVar4 = *(short *)((int)&DAT_005409ac + iVar11 * 2);
  if (sVar3 < sVar4) {
    pcVar6 = s_increased_004d29bc;
  }
  else {
    pcVar6 = s_not_changed_004d29b0;
    if (sVar3 != sVar4) {
      pcVar6 = s_decreased_004d29a4;
    }
  }
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar13;
  } while (cVar2 != '\0');
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x12d,0x9b,~uVar9 - 1);
  DAT_0051a068._0_1_ = 0;
  FUN_0042dd50((int)*(short *)((int)&DAT_005409ac + local_3e4 * 2));
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x259,0x9b,~uVar9 - 1);
  DAT_0051a068._0_1_ = 0;
  FUN_0042dd50((int)*(short *)((int)&DAT_005409ac + iVar11 * 2));
  sVar3 = *(short *)((int)&DAT_005409ac + local_3e4 * 2);
  sVar4 = *(short *)((int)&DAT_005409ac + iVar11 * 2);
  if (sVar3 < sVar4) {
    iVar8 = -0x7fffed7c;
  }
  else {
    iVar8 = (-(uint)(sVar3 != sVar4) & 0x7d08) + 0x80000000;
  }
  FUN_00476310(iVar8,0xffffffff,2,2);
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476750(&DAT_00821ee8,&DAT_0051a068,500,0x9b,~uVar9 - 1);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar9 = 0xffffffff;
  psVar1 = (short *)((int)&DAT_00520640 + iVar11 * 2);
  pcVar6 = s_Your_membership_has_004d295c;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  *psVar1 = DAT_0058b388;
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = (char *)&DAT_0051a068;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  sVar3 = *(short *)((int)&DAT_00520640 + local_3e4 * 2);
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  if (sVar3 < *psVar1) {
    pcVar6 = s_increased_004d29bc;
  }
  else {
    pcVar6 = s_not_changed_004d29b0;
    if (sVar3 != *psVar1) {
      pcVar6 = s_decreased_004d29a4;
    }
  }
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar13;
  } while (cVar2 != '\0');
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x12d,0xaf,~uVar9 - 1);
  DAT_0051a068._0_1_ = 0;
  pcVar6 = (char *)FUN_004ad425((int)*(short *)((int)&DAT_00520640 + local_3e4 * 2),&DAT_00821c50,10
                               );
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar13;
  } while (cVar2 != '\0');
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x259,0xaf,~uVar9 - 1);
  DAT_0051a068._0_1_ = '\0';
  pcVar6 = (char *)FUN_004ad425((int)*psVar1,&DAT_00821c50,10);
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar14;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar13 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar13;
  } while (cVar2 != '\0');
  pcVar6 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar14 = pcVar14 + 4;
  }
  sVar3 = *(short *)((int)&DAT_00520640 + local_3e4 * 2);
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar14 = pcVar14 + 1;
  }
  if (sVar3 < *psVar1) {
    iVar8 = -0x7fffed7c;
  }
  else {
    iVar8 = (-(uint)(sVar3 != *psVar1) & 0x7d08) + 0x80000000;
  }
  FUN_00476310(iVar8,0xffffffff,2,2);
  uVar9 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00476750(&DAT_00821ee8,&DAT_0051a068,500,0xaf,~uVar9 - 1);
  iVar8 = local_358 + 0x28;
  FUN_00476310(0x80000000,0xffffffff,2,2);
  if (local_3e4 <= iVar11) {
    local_3e8 = (short *)((int)&DAT_00568600 + local_3e4 * 2);
    do {
      if (*local_3e8 == 0) goto LAB_0044e006;
      iVar7 = FUN_00467130(local_3e4 - local_3d8,0,7);
      uVar9 = 0xffffffff;
      pcVar6 = (&PTR_s_March_004c2908)[iVar7];
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = (char *)&DAT_0051a068;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar6 = &DAT_004d2958;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      iVar7 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar13 = pcVar6;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar13 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar2 != '\0');
      sVar3 = *local_3e8;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar13 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      uVar10 = CONCAT31((int3)(char)((ushort)sVar3 >> 8),(char)sVar3) & 0xffffffe0;
      uVar12 = (int)sVar3 & 0x1f;
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      if ((int)uVar10 < 0xc1) {
        if (uVar10 == 0xc0) {
          uVar9 = 0xffffffff;
          pcVar6 = (char *)((int)&DAT_0055d738 + uVar12 * 0x25);
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          pcVar6 = s_buys_a_home__004d2904;
          goto LAB_0044df79;
        }
        switch(uVar10) {
        case 0x20:
          uVar9 = 0xffffffff;
          pcVar6 = s_Hole_004c4978;
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          pcVar6 = (char *)FUN_004ad425(uVar12,&DAT_00821c50,10);
          uVar9 = 0xffffffff;
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          uVar9 = 0xffffffff;
          pcVar6 = s_opened__004d294c;
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          if ((&DAT_00575ab0)[uVar12 * 0x208] == '\0') {
            DAT_0051a068._0_1_ = '\0';
            goto LAB_0044e006;
          }
          goto switchD_0044dbb6_default;
        case 0x40:
          uVar9 = 0xffffffff;
          pcVar6 = s_Pathway_004c26b0 + uVar12 * 0x14;
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          pcVar6 = s_built__004d2944;
          break;
        case 0x60:
          uVar9 = 0xffffffff;
          pcVar6 = s_Won_match_vs__004d2914;
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          pcVar6 = &DAT_0058dd50 + uVar12 * 0x38;
          break;
        case 0x80:
          uVar9 = 0xffffffff;
          pcVar6 = s_Hole_004c4978;
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          pcVar6 = (char *)FUN_004ad425(uVar12,&DAT_00821c50,10);
          uVar9 = 0xffffffff;
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          pcVar6 = s_rated_top_100__004d2934;
          break;
        case 0xa0:
          uVar9 = 0xffffffff;
          pcVar6 = s_Hole_004c4978;
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          pcVar6 = (char *)FUN_004ad425(uVar12,&DAT_00821c50,10);
          uVar9 = 0xffffffff;
          do {
            pcVar14 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar2 != '\0');
          uVar9 = ~uVar9;
          iVar7 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar2 != '\0');
          pcVar6 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          pcVar6 = s_rated_top_18__004d2924;
          break;
        default:
          goto switchD_0044dbb6_default;
        }
        goto LAB_0044df79;
      }
      switch(uVar10) {
      case 0xe0:
        uVar9 = 0xffffffff;
        pcVar6 = s_Gary_Golf_004d6098;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        iVar7 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar6;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar13;
        } while (cVar2 != '\0');
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = pcVar13 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar9 = 0xffffffff;
        pcVar6 = s_places_004d28f8;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        iVar7 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar6;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar13;
        } while (cVar2 != '\0');
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = pcVar13 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcVar6 = (char *)FUN_004ad425(uVar12,&DAT_00821c50,10);
        uVar9 = 0xffffffff;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        iVar7 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar6;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar13;
        } while (cVar2 != '\0');
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = pcVar13 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcVar6 = s_in_tournament__004d28e8;
        goto LAB_0044df79;
      case 0x100:
        uVar9 = 0xffffffff;
        pcVar6 = PTR_s_J_P_Bigdome_004c2c18;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        iVar7 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar6;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar13;
        } while (cVar2 != '\0');
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = pcVar13 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcVar6 = s_joins_the_board__004d28d4;
        goto LAB_0044df79;
      case 0x120:
        uVar9 = 0xffffffff;
        pcVar6 = s_Happy_Ending__004d28c4;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        iVar7 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar6;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar13;
        } while (cVar2 != '\0');
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = pcVar13 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_00466b70(uVar12,0xffffffff,0,0);
        break;
      case 0x140:
        pcVar6 = s_Additional_land_purchased__004d2894;
LAB_0044df79:
        uVar9 = 0xffffffff;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        iVar7 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar6;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar13;
        } while (cVar2 != '\0');
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = pcVar13 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        break;
      case 0x160:
        uVar9 = 0xffffffff;
        pcVar6 = s_Ivana_donates_a_004d28b0;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        iVar7 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar6;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar13;
        } while (cVar2 != '\0');
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = pcVar13 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_004074a0(uVar12,0);
      }
switchD_0044dbb6_default:
      if ((char)DAT_0051a068 != '\0') {
        FUN_00473f60(local_3a0,&DAT_00519cd4,0xbb,iVar8,0);
        uVar9 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x194,iVar8 + 2,~uVar9 - 1);
        iVar8 = iVar8 + local_3b0;
      }
LAB_0044e006:
      local_3e4 = local_3e4 + 1;
      local_3e8 = local_3e8 + 1;
    } while (local_3e4 <= iVar11);
  }
  if ((DAT_00571fd4 < 0) && ((DAT_0059e7b8 & 0x1000000) == 0)) {
    FUN_00476310(0x80007d08,0xffffffff,2,2);
    iVar11 = DAT_005a6374 + 1;
    if (DAT_005a6374 == 0) {
      uVar9 = 0xffffffff;
      pcVar6 = s_The_board_is_concerned_about_our_004d2788;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = (char *)&DAT_0051a068;
      DAT_005a6374 = iVar11;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      FUN_00473f60(local_3a0,&DAT_00519cd4,0xbb,iVar8,0);
      uVar9 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x194,iVar8 + 2,~uVar9 - 1);
      uVar9 = 0xffffffff;
      iVar8 = iVar8 + local_3b0;
      pcVar6 = s_You_have_two_years_to_return_to_p_004d2758;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = (char *)&DAT_0051a068;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      FUN_00473f60(local_3a0,&DAT_00519cd4,0xbb,iVar8,0);
      uVar9 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x194,iVar8 + 2,~uVar9 - 1);
      iVar8 = iVar8 + local_3b0;
    }
    else if (DAT_005a6374 == 1) {
      uVar9 = 0xffffffff;
      pcVar6 = s_The_board_is_very_worried_about_o_004d27f0;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = (char *)&DAT_0051a068;
      DAT_005a6374 = iVar11;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      FUN_00473f60(local_3a0,&DAT_00519cd4,0xbb,iVar8,0);
      uVar9 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x194,iVar8 + 2,~uVar9 - 1);
      uVar9 = 0xffffffff;
      iVar8 = iVar8 + local_3b0;
      pcVar6 = s_You_have_one_more_year_to_get_ou_004d27c4;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = (char *)&DAT_0051a068;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      FUN_00473f60(local_3a0,&DAT_00519cd4,0xbb,iVar8,0);
      uVar9 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x194,iVar8 + 2,~uVar9 - 1);
      iVar8 = iVar8 + local_3b0;
    }
    else {
      bVar15 = DAT_005a6374 == 2;
      DAT_005a6374 = iVar11;
      if (bVar15) {
        uVar9 = 0xffffffff;
        pcVar6 = s_You_have_been_unable_to_make_a_p_004d285c;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = (char *)&DAT_0051a068;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_00473f60(local_3a0,&DAT_00519cd4,0xbb,iVar8,0);
        uVar9 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x194,iVar8 + 2,~uVar9 - 1);
        uVar9 = 0xffffffff;
        iVar8 = iVar8 + local_3b0;
        pcVar6 = s_Regrettably__the_board_has_termi_004d2824;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = (char *)&DAT_0051a068;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_00473f60(local_3a0,&DAT_00519cd4,0xbb,iVar8,0);
        uVar9 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x194,iVar8 + 2,~uVar9 - 1);
        iVar8 = iVar8 + local_3b0;
      }
    }
  }
  else {
    DAT_005a6374 = 0;
  }
  FUN_00473f60(local_2f0,&DAT_00519cd4,0xbb,iVar8,0);
  FUN_00476310(local_3d0,0xffffffff,2,2);
  iVar11 = iVar8 + 8;
  bVar5 = true;
  bVar15 = false;
  FUN_00473e60(&DAT_00519cd4,0x226,iVar11,0);
  FUN_00480c80(0);
  FUN_0045bf80(0x3c,0);
  FUN_00483d30();
  do {
    FUN_0045bf80(1,0);
    FUN_0045c030();
    FUN_0047ab50(&iStack_3dc,&iStack_3d4);
    FUN_00480c80(0);
    if (DAT_00822d68 == 1) {
      bVar5 = false;
    }
    if ((((iStack_3dc < 0x226) || (0x251 < iStack_3dc)) || (iStack_3d4 < iVar11)) ||
       (iVar8 + 0x34 <= iStack_3d4)) {
      if (bVar15) {
        bVar15 = false;
        goto LAB_0044e4de;
      }
    }
    else if (!bVar15) {
      bVar15 = true;
LAB_0044e4de:
      FUN_00473e60(&DAT_00519cd4,0x226,iVar11,0);
      FUN_00480c80(0);
    }
    iVar7 = FUN_0045ae70();
    if ((iVar7 != 0) || (!bVar5)) {
      FUN_0045c150();
      iVar8 = FUN_004732d0();
      if (iVar8 != -1) {
        FUN_00473470();
      }
      FUN_00448200(0x7f);
      FUN_00473ae0();
      FUN_00473ae0();
      FUN_00473ae0();
      FUN_00473ae0();
      FUN_00473ae0();
      FUN_00473ae0();
      local_4._0_1_ = 5;
      local_3a0[0] = &PTR_LAB_004ba2d8;
      FUN_00473ae0();
      local_4._0_1_ = 4;
      local_3cc = &PTR_LAB_004ba2d8;
      FUN_00473ae0();
      local_4._0_1_ = 3;
      local_2f0[0] = &PTR_LAB_004ba2d8;
      FUN_00473ae0();
      local_4._0_1_ = 2;
      local_348 = &PTR_LAB_004ba2d8;
      FUN_00473ae0();
      local_4._0_1_ = 1;
      local_31c[0] = &PTR_LAB_004ba2d8;
      FUN_00473ae0();
      local_4 = (uint)local_4._1_3_ << 8;
      local_374 = &PTR_LAB_004ba2d8;
      FUN_00473ae0();
      local_4 = 0xffffffff;
      FUN_00474c40();
      *unaff_FS_OFFSET = uStack_c;
      return;
    }
  } while( true );
}

