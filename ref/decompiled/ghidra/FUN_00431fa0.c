/* Ghidra decompiled: golf.exe */
/* Function: FUN_00431fa0 @ 0x00431FA0 */
/* Body size: 450 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431fa0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar2 = _strchr(param_1,0x2e);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  uVar4 = 0xffffffff;
  pcVar2 = &DAT_004c7928;
  do {
    pcVar8 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar2 = param_1;
  do {
    pcVar7 = pcVar2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  pcVar2 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar3 = FUN_004a614d(param_1,&DAT_004c7924);
  FUN_004a622c(uVar3,s__Course__004c7918);
  DAT_0051a068._0_1_ = 0;
  FUN_0040daa0(1);
  FUN_004a622c(uVar3,s_Name__s_004c790c,&DAT_0051a068);
  FUN_004a622c(uVar3,s_Holes__d_004c7900,DAT_005685f0 + -1);
  FUN_004a622c(uVar3,s_Par__d_004c78f8,DAT_0059aafc);
  FUN_004a622c(uVar3,s_Yards__d_004c78ec,DAT_0058d36c);
  FUN_004a622c(uVar3,s_Type__s_004c78e0,(&PTR_DAT_004c3078)[DAT_005a34e0 & 3]);
  FUN_004a622c(uVar3,s_Theme__s_004c78d4,&DAT_00567328);
  FUN_004a622c(uVar3,s_Designer__s_004c78c4,s_Gary_Golf_004d6098);
  DAT_0051a068._0_1_ = 0;
  FUN_0045b9f0(0x14);
  FUN_004a622c(uVar3,s_Record__d_by__s_004c78b0,DAT_0056a524,&DAT_0051a068);
  FUN_004a622c(uVar3,s_Cash__d_004c78a4,DAT_00571fd4 * 100);
  FUN_004a622c(uVar3,s_FunRating__d_004c7894,DAT_0059ae78);
  FUN_004a622c(uVar3,s_SkillRating___2f_004c7880,(double)DAT_00541cd8 * _DAT_004ba488);
  FUN_004a622c(uVar3,s_LengthSkill___2f_004c786c,(double)DAT_005a882c * _DAT_004ba488);
  FUN_004a622c(uVar3,s_AccuracySkill___2f_004c7858,(double)DAT_0056949c * _DAT_004ba488);
  FUN_004a622c(uVar3,s_Imagination___2f_004c7844,(double)DAT_005a636c * _DAT_004ba488);
  FUN_004a609f(uVar3);
  return;
}

