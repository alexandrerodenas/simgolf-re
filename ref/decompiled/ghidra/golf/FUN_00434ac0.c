/* Ghidra decompiled: golf.exe */
/* Function: FUN_00434ac0 @ 0x00434AC0 */


uint FUN_00434ac0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = FUN_00434980(param_1,param_2);
  switch(iVar2) {
  case 0:
    DAT_004c2854 = 3;
    return 0xffffffff;
  case 1:
    DAT_004c2854 = 0;
    return 0xffffffff;
  case 2:
    DAT_004c2854 = ((DAT_0056d1b0 < 1) - 1 & 6) - 1;
    return 0xffffffff;
  case 3:
    DAT_005a9f60 = 0;
    DAT_005a9f50 = 0;
    DAT_004c2854 = 1;
    return 0;
  case 4:
    DAT_004c2854 = 4;
    DAT_005a9f60 = 0xffffffff;
    DAT_005a9f50 = 0xffffffff;
    return 0xffffffff;
  case 5:
    DAT_004c2854 = 2;
    uVar3 = FUN_0045c1e0(4);
    DAT_005a9f60 = uVar3 & 0xffff;
    DAT_005a9f50 = DAT_005a9f60;
    return DAT_005a9f60;
  case 6:
    DAT_004c2854 = 0x10;
    uVar3 = FUN_0045c1e0(7);
    DAT_005a9f60 = uVar3 & 0xffff;
    DAT_005a9f50 = DAT_005a9f60;
    return DAT_005a9f60;
  case 7:
  case 8:
    uVar3 = 0xffffffff;
    pcVar5 = s_To_UNDO_a_previous_action__right_004c7ec4;
    break;
  case 9:
    DAT_004c2854 = 0x13;
    uVar3 = FUN_0045c1e0(8);
    DAT_005a9f60 = uVar3 & 0xffff;
    DAT_005a9f50 = DAT_005a9f60;
    return DAT_005a9f60;
  default:
    if (iVar2 == -2) {
      DAT_0055e924 = 0;
      DAT_00567afc = 0;
    }
    if (((((DAT_004c2854 == 4) || (DAT_004c2854 == 2)) || (DAT_004c2854 == 1)) ||
        ((DAT_004c2854 == 0x10 || (DAT_004c2854 == 0x13)))) &&
       ((DAT_005a9f50 != 0xffffffff || (DAT_004c2854 == 4)))) {
      DAT_005a9f60 = DAT_005a9f50;
      return DAT_005a9f50;
    }
    return 0;
  }
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = (char *)&DAT_0051a068;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_Right_click_again_to_effect_the_c_004c7e7c;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  DAT_004c2e08 = 0xffffffea;
  iVar2 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_0040d320(200,0x154,0x80007fff,0xfffffffe);
  FUN_00480c80(0);
  FUN_0045c0c0(0);
  return DAT_005a9f64;
}

