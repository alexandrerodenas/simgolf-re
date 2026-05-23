/* Ghidra decompiled: golf.exe */
/* Function: FUN_00469a20 @ 0x00469A20 */
/* Body size: 96 addresses */


void FUN_00469a20(int param_1,int param_2)

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
    pcVar5 = s_I_hate_this_stupid_course__004e2a74;
    break;
  case 1:
    pcVar5 = s_I_don_t_like_this_course_much__004e2a54;
    break;
  case 2:
    pcVar5 = s_I_m_not_having_much_fun_today__004e2a34;
    break;
  case 3:
    pcVar5 = s_This_course_is_almost_adequate__004e2a14;
    break;
  case 4:
    pcVar5 = s_Well__I_guess_this_course_is_OK__004e29f0;
    break;
  case 5:
    pcVar5 = s_This_course_is_quite_nice__004e29d4;
    break;
  case 6:
    if (param_2 < 2) {
      pcVar5 = s_This_is_a_really_good_course__004e29b4;
    }
    else {
      pcVar5 = s_This_is_a_really_surprising_cour_004e2990;
    }
    break;
  case 7:
    if (param_2 < 1) {
      pcVar5 = s_This_course_is_excellent__004e2974;
    }
    else {
      pcVar5 = s_This_course_is_fascinating__004e2958;
    }
    break;
  default:
    if ((param_1 < 0) || (0x7f < param_1)) {
      pcVar5 = s_I_hate_this_course__I_m_leaving__004e28e4;
    }
    else if (param_2 < 1) {
      pcVar5 = s_This_is_best_course_I_ve_ever_pl_004e2930;
    }
    else {
      pcVar5 = s_yet_this_is_a_most_interesting_c_004e2908;
    }
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

