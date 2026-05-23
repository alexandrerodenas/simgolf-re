/* Ghidra decompiled: golf.exe */
/* Function: FUN_00407700 @ 0x00407700 */
/* Body size: 339 addresses */


undefined4 FUN_00407700(int param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_3 == 0xffffffff) {
    param_3 = (uint)*(char *)((int)&DAT_005722e8 + param_1 * 0x32 + param_2);
  }
  else if ((param_3 & 0x100) != 0) {
    param_1 = (int)(short)(&DAT_0058bcba)[(param_3 & 0xff) * 8];
    param_2 = (int)(short)(&DAT_0058bcbc)[(param_3 & 0xff) * 8];
    param_3 = (uint)*(char *)((int)&DAT_005722e8 + param_1 * 0x32 + param_2);
  }
  if ((param_3 == 0x16) || (param_3 == 0x15)) {
    uVar2 = (uint)*(byte *)((int)&DAT_0056988c + param_1 * 0x32 + param_2);
    if ((&DAT_0058bcb8)[uVar2 * 8] == 4) {
      FUN_004074a0((&DAT_0058bcc0)[uVar2 * 4],0);
      return 1;
    }
    if ((&DAT_0058bcb8)[uVar2 * 8] == 2) {
      pcVar5 = s_flowerbed_004c4c60;
    }
    else {
      pcVar5 = s_landmark_004c4980;
      if (param_3 != 0x16) {
        pcVar5 = s_home_site_004c4c54;
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
    return 1;
  }
  switch((&DAT_00578376)[param_3 * 0x30]) {
  case 4:
    if (param_3 == 4) {
      param_2 = param_2 + param_1 * 0x32;
      if (((&DAT_0053caf0)[param_2] & 0x1000) == 0) {
        if ((&DAT_00571ff4)[DAT_0059bf90 * 0x2e] == '\n') {
          pcVar5 = s_Pot_o_Gold_004c4cac;
        }
        else {
          pcVar5 = s_mysterious_bones_004c4c98;
          if (DAT_005a34e0 != '\x01') {
            pcVar5 = s_ornamental_grass_004c4c84;
          }
        }
      }
      else if (DAT_005a34e0 == '\x01') {
        switch((uint)*(byte *)((int)&DAT_0056988c + param_2) % 5) {
        case 0:
          pcVar5 = s_red_poppy_bed_004c4d8c;
          break;
        case 1:
          pcVar5 = s_orange_flowerbed_004c4d78;
          break;
        case 2:
LAB_00407936:
          pcVar5 = s_purple_iris_patch_004c4d64;
          break;
        case 3:
          pcVar5 = s_blue_foxglove_004c4d54;
          break;
        case 4:
          pcVar5 = s_pink_sage_bush_004c4d44;
          break;
        default:
          goto LAB_00407a58;
        }
      }
      else if (DAT_005a34e0 == '\x02') {
        switch((uint)*(byte *)((int)&DAT_0056988c + param_2) % 5) {
        case 0:
          pcVar5 = s_aqua_hybiscus_004c4d34;
          break;
        case 1:
          pcVar5 = s_orange_bougainvillea_004c4d1c;
          break;
        case 2:
          pcVar5 = s_purple_orchid_004c4d0c;
          break;
        case 3:
          pcVar5 = s_blue_hydrangea_004c4cfc;
          break;
        case 4:
LAB_004079a3:
          pcVar5 = s_red_rose_bush_004c4cec;
          break;
        default:
          goto LAB_00407a58;
        }
      }
      else {
        if ((DAT_005a34e0 != '\0') && (DAT_005a34e0 != '\x03')) {
          return 1;
        }
        switch((uint)*(byte *)((int)&DAT_0056988c + param_2) % 5) {
        case 0:
          pcVar5 = s_green_flowerbed_004c4cdc;
          break;
        case 1:
          pcVar5 = s_yellow_daisy_bed_004c4cc8;
          break;
        case 2:
          goto LAB_00407936;
        case 3:
          pcVar5 = s_white_carnation_004c4cb8;
          break;
        case 4:
          goto LAB_004079a3;
        default:
          goto LAB_00407a58;
        }
      }
    }
    else if (param_3 == 10) {
      pcVar5 = s_rock_formation_004c4df4;
      if (DAT_005a34e0 != '\x01') {
        pcVar5 = s_scenic_tree_004c4ddc;
      }
    }
    else if (param_3 == 0xc) {
      pcVar5 = s_natural_bridge_004c4db4;
      if (DAT_005a34e0 != '\x01') goto LAB_004078a2;
    }
    else {
      pcVar5 = s_vineyard_004c4da8;
      if ((&DAT_00571ff4)[DAT_0059bf90 * 0x2e] != '\r') {
        pcVar5 = s_rose_bush_004c4d9c;
      }
    }
    break;
  default:
    pcVar5 = s_wildflower_004c4c6c;
    break;
  case 7:
    pcVar5 = s_rhododedron_004c4c78;
    break;
  case 0xc:
LAB_004078a2:
    pcVar5 = s_rock_formation_004c4df4;
    break;
  case 0xd:
    if (param_3 == 0x10) {
      pcVar5 = s_scenic_tree_004c4ddc;
    }
    else if (DAT_005a34e0 == '\x01') {
      pcVar5 = s_scenic_cactus_004c4dcc;
    }
    else if (param_3 == 0xd) {
      pcVar5 = s_scenic_tree_004c4ddc;
    }
    else if (param_3 == 0xf) {
      pcVar5 = s_statue_004c4dc4;
    }
    else {
      if (param_3 != 0xe) {
        return 1;
      }
      pcVar5 = s_scenic_tree_004c4ddc;
    }
    break;
  case 0x11:
    if (param_3 == 0x13) {
      pcVar5 = s_flower_bed_004c4e1c;
    }
    else {
      param_2 = param_2 + param_1 * 0x32;
      if ((*(byte *)(&DAT_0053caf0 + param_2) & 0x20) == 0) {
        if ((*(char *)((int)&DAT_0056988c + param_2) == '\0') ||
           (*(char *)((int)&DAT_005722e8 + param_2) != '\x11')) {
          pcVar5 = s_rock_formation_004c4df4;
          if (DAT_005a34e0 != '\x01') goto LAB_00407809;
        }
        else {
          pcVar5 = s_dolphin_004c4e04;
        }
      }
      else {
        pcVar5 = s_scenic_bridge_004c4e0c;
      }
    }
    break;
  case 0x12:
LAB_00407809:
    pcVar5 = s_fountain_004c4de8;
    break;
  case 0x13:
    pcVar5 = s_swamp_tree_004c4e28;
    break;
  case 0x15:
  case 0x16:
    pcVar5 = s_landmark_004c4980;
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
LAB_00407a58:
  return 1;
}

