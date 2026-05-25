/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040a9a0 @ 0x0040A9A0 */


void FUN_0040a9a0(undefined4 param_1)

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
    pcVar5 = s_Driver_004c5220;
    break;
  case 1:
    pcVar5 = s_3_Wood_004c5218;
    break;
  case 2:
    pcVar5 = s_4_Wood_004c5210;
    break;
  case 3:
    pcVar5 = s_2_Iron_004c5208;
    break;
  case 4:
    pcVar5 = s_3_Iron_004c5200;
    break;
  case 5:
    pcVar5 = s_4_Iron_004c51f8;
    break;
  case 6:
    pcVar5 = s_5_Iron_004c51f0;
    break;
  case 7:
    pcVar5 = s_6_Iron_004c51e8;
    break;
  case 8:
    pcVar5 = s_7_Iron_004c51e0;
    break;
  case 9:
    pcVar5 = s_8_Iron_004c51d8;
    break;
  case 10:
    pcVar5 = s_9_Iron_004c51d0;
    break;
  case 0xb:
    pcVar5 = s_Lob_Wedge_004c51c4;
    break;
  case 0xc:
    pcVar5 = s_Sand_Wedge_004c51b8;
    break;
  case 0xd:
    pcVar5 = s_Putter_004c51b0;
    break;
  default:
    goto switchD_0040a9af_default;
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
switchD_0040a9af_default:
  return;
}

