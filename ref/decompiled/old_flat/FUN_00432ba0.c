/* Ghidra decompiled: golf.exe */
/* Function: FUN_00432ba0 @ 0x00432BA0 */


void FUN_00432ba0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
  }
  FUN_00473f60(&DAT_0058b390,PTR_DAT_004c1570,0,0x1b3,0);
  iVar2 = FUN_004326a0(param_1,param_2);
  iVar5 = iVar2;
  if ((iVar2 != -1) && (iVar2 != DAT_00567afc)) {
    iVar5 = (int)(char)(&DAT_004c7994)[iVar2];
    FUN_00473f60(&DAT_00568fc8 + iVar5 * 0x58,PTR_DAT_004c1570,
                 (int)*(short *)(&DAT_004c7960 + iVar5 * 4),
                 (int)*(short *)(&PTR_DAT_004c7962 + iVar5),0);
  }
  if (DAT_004c2844 == 4) {
    if (DAT_005a9cbc != 0) {
      FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7970,(int)DAT_004c7972,1,1,1,0);
      goto LAB_00432c79;
    }
  }
  else {
LAB_00432c79:
    if (DAT_004c2844 == 1) {
      FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7974,(int)DAT_004c7976,1,1,1,0);
    }
  }
  if ((((byte)DAT_0059e7b8 & 4) != 0) && (DAT_005a9f5c = DAT_005a9f5c + 1, (DAT_005a9f5c & 4) != 0))
  {
    FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7984,(int)(short)PTR_DAT_004c7986,1,1,1,0);
  }
  switch(DAT_00567afc) {
  case 0:
    FUN_00473f60(&DAT_00568ff4,PTR_DAT_004c1570,7,0x1b4,0);
    uVar9 = 0x1fd;
    uVar8 = 0x22;
    break;
  case 1:
    FUN_00473f60(&DAT_0056904c,PTR_DAT_004c1570,0x54,0x1cf,0);
    uVar9 = 0x20d;
    uVar8 = 0x5f;
    break;
  case 2:
  case 3:
  case 4:
    FUN_00473f60(&DAT_005690a4,PTR_DAT_004c1570,0x92,0x1f8,0);
    uVar9 = 0x22b;
    uVar8 = 0x8e;
    break;
  default:
    goto switchD_00432cfa_default;
  }
  FUN_00473cb0(PTR_DAT_004c1570,uVar8,uVar9,1,1,1,0);
switchD_00432cfa_default:
  if (iVar5 != DAT_005aa6b8) {
    DAT_005aa6b8 = iVar5;
    DAT_005a9f68 = 0;
    return;
  }
  DAT_005a9f68 = DAT_005a9f68 + 1;
  if (iVar5 == -1) {
    return;
  }
  if (DAT_005a9f68 < 0xb) {
    return;
  }
  DAT_0051a068._0_1_ = 0;
  switch(iVar2) {
  case 0:
    pcVar6 = s_Build_Course_004c7e6c;
    break;
  case 1:
    uVar3 = 0xffffffff;
    pcVar6 = s_Add_Buildings_004c7e5c;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    goto LAB_00432f0c;
  case 2:
    pcVar6 = s_People_Employees_004c7e48;
    break;
  case 3:
    uVar3 = 0xffffffff;
    pcVar6 = s_Information_004c7e3c;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    goto LAB_00432f0c;
  case 4:
    pcVar6 = s_Unpause_004c7e34;
    if (((byte)DAT_0059e7b8 & 4) == 0) {
      pcVar6 = s_Pause_004c7e2c;
    }
    break;
  case 5:
    uVar3 = 0xffffffff;
    pcVar6 = s_System_Functions_004c7e18;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    goto LAB_00432f0c;
  case 6:
    pcVar6 = s_Repeat_last_message_004c7e04;
    break;
  case 7:
    uVar3 = 0xffffffff;
    pcVar6 = s_Zoom_Map_004c7df8;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    goto LAB_00432f0c;
  case 8:
    pcVar6 = s_Unzoom_Map_004c7dec;
    break;
  case 9:
    uVar3 = 0xffffffff;
    pcVar6 = s_Rotate_Map_004c7de0;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    goto LAB_00432f0c;
  case 10:
    pcVar6 = s_Rotate_Map_004c7de0;
    break;
  default:
    goto switchD_00432dfa_default;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = (char *)&DAT_0051a068;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
LAB_00432f0c:
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
switchD_00432dfa_default:
  FUN_00432620((int)(short)(&DAT_004c7930)[iVar2 * 2],(int)(short)(&DAT_004c7932)[iVar2 * 2]);
  return;
}

