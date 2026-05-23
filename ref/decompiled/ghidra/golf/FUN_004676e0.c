/* Ghidra decompiled: golf.exe */
/* Function: FUN_004676e0 @ 0x004676E0 */
/* Body size: 186 addresses */


void FUN_004676e0(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **ppuVar9;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar8 = &DAT_004c52b8;
    do {
      pcVar7 = pcVar8;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
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
    pcVar8 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  bVar5 = (&DAT_005794d0)[param_1 * 0x100] & 0x1f;
  switch((&DAT_005794d0)[param_1 * 0x100] & 0xe0) {
  case 0x20:
    if (bVar5 == 4) {
      pcVar8 = s_Gary_Golf_004d6098;
    }
    else {
      pcVar8 = (char *)(&DAT_0058dd50 + (uint)(byte)(&DAT_00579573)[param_1 * 0x100] * 0xe);
    }
    break;
  case 0x40:
    uVar2 = 0xffffffff;
    pcVar8 = PTR_DAT_004c2c10;
    do {
      pcVar7 = pcVar8;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
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
    pcVar8 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    uVar4 = DAT_0053a450 & 0x7f;
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    }
    switch(uVar4) {
    case 0:
      goto code_r0x004678ae;
    case 1:
LAB_00467794:
      pcVar8 = &DAT_004e1bd0;
      break;
    case 2:
LAB_0046779e:
      pcVar8 = &DAT_004e1bc8;
      break;
    case 3:
LAB_004677a8:
      pcVar8 = (char *)&PTR_DAT_004e1bc4;
      break;
    case 4:
LAB_004677b2:
      pcVar8 = &DAT_004e1bc0;
      break;
    case 5:
LAB_004677bc:
      pcVar8 = &DAT_004e1bbc;
      break;
    case 6:
LAB_004677c6:
      pcVar8 = &DAT_004e1bb4;
      break;
    case 7:
LAB_004677d0:
      pcVar8 = s_VIII_004e1bac;
      break;
    case 8:
LAB_004677da:
      pcVar8 = (char *)&PTR_DAT_004e1ba8;
      break;
    default:
LAB_004677e4:
      pcVar8 = &DAT_004e1ba4;
    }
    break;
  case 0x60:
    uVar2 = 0xffffffff;
    pcVar8 = PTR_s_J_P_Bigdome_004c2c18;
    do {
      pcVar7 = pcVar8;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
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
    pcVar8 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    }
    switch(bVar5) {
    case 0:
      goto code_r0x004678ae;
    case 1:
      goto LAB_00467794;
    case 2:
      goto LAB_0046779e;
    case 3:
      goto LAB_004677a8;
    case 4:
      goto LAB_004677b2;
    case 5:
      goto LAB_004677bc;
    case 6:
      goto LAB_004677c6;
    case 7:
      goto LAB_004677d0;
    case 8:
      goto LAB_004677da;
    default:
      goto LAB_004677e4;
    }
  case 0x80:
    pcVar8 = s_Ivana_Richman_004e1b94;
    if ((param_1 & 1) == 0) {
      pcVar8 = s_Agnes_Heffledorp_004e1b80;
    }
    break;
  default:
    pcVar8 = s_Gary_Golf_004d6098 + (short)(&DAT_0057956e)[param_1 * 0x80] * 0x230;
  }
  uVar2 = 0xffffffff;
  do {
    ppuVar9 = (undefined **)pcVar8;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    ppuVar9 = (undefined **)((int)pcVar8 + 1);
    cVar1 = *pcVar8;
    pcVar8 = (char *)ppuVar9;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    pcVar7 = pcVar8;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  pcVar8 = (char *)((int)ppuVar9 - uVar2);
  pcVar7 = pcVar7 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
code_r0x004678ae:
  return;
}

