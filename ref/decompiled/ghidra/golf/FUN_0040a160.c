/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040a160 @ 0x0040A160 */
/* Body size: 887 addresses */


undefined4 FUN_0040a160(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  iVar3 = FUN_0040bf60(param_1,param_2);
  if (iVar3 != 0) {
    uVar5 = 0xffffffff;
    pcVar9 = s_Out_of_bounds_004c515c;
    do {
      pcVar8 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar8 + -uVar5;
    pcVar8 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    }
    return 0;
  }
  DAT_0051a068._0_1_ = 0;
  iVar3 = param_1 * 0x32 + param_2;
  if (((&DAT_0053caf0)[iVar3] & 0x8000) != 0) {
    uVar5 = 0xffffffff;
    pcVar9 = s_Permanent_004c5150;
    do {
      pcVar8 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar8 + -uVar5;
    pcVar8 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    }
    return 0;
  }
  if ((((&DAT_0053caf0)[iVar3] & 0x400) == 0) ||
     (iVar4 = FUN_0040df80(param_1,param_2), iVar4 == -1)) {
    bVar7 = *(byte *)((int)&DAT_005830b8 + param_2 + param_1 * 0x32);
    if (bVar7 == 0xff) {
LAB_0040a39b:
      if (((&DAT_0053caf0)[iVar3] & 0x200) == 0) {
        if ((((&DAT_0053caf0)[iVar3] & 0x400) != 0) &&
           (iVar4 = FUN_0040df80(param_1,param_2), iVar4 != -1)) {
          uVar5 = 0xffffffff;
          pcVar9 = s_Remove_004c50d8;
          do {
            pcVar8 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar8;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar9 = pcVar8 + -uVar5;
          pcVar8 = (char *)&DAT_0051a068;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar8 = pcVar8 + 4;
          }
          sVar2 = (&DAT_0058bcb8)[iVar4 * 8];
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar8 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar8 + 1;
          }
          uVar5 = 0xffffffff;
          pcVar9 = s_Pathway_004c26b0 + sVar2 * 0x14;
          do {
            pcVar8 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar8;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar3 = -1;
          pcVar9 = (char *)&DAT_0051a068;
          do {
            pcVar10 = pcVar9;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar10 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar1 != '\0');
          pcVar9 = pcVar8 + -uVar5;
          pcVar8 = pcVar10 + -1;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar8 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar8 + 1;
          }
          return 0;
        }
        if (((&DAT_0053caf0)[iVar3] & 0x20) == 0) {
          if (((&DAT_0053caf0)[iVar3] & 0x1000) == 0) {
            DAT_0051a068._0_1_ = 0;
            return 0;
          }
          uVar5 = 0xffffffff;
          pcVar9 = s_Remove_Flowers_004c5134;
          do {
            pcVar8 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar8;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar9 = pcVar8 + -uVar5;
          pcVar8 = (char *)&DAT_0051a068;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar8 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar8 + 1;
          }
          return 0;
        }
        uVar5 = 0xffffffff;
        pcVar9 = s_Remove_Path_004c5128;
        do {
          pcVar8 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar9 = pcVar8 + -uVar5;
        pcVar8 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        }
        return 0;
      }
      uVar5 = 0xffffffff;
      pcVar9 = s_Remove_Bench_004c5118;
      do {
        pcVar8 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar8 + -uVar5;
      pcVar8 = (char *)&DAT_0051a068;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      }
      return 0;
    }
    if ((bVar7 & 0x80) != 0) {
      uVar5 = 0xffffffff;
      pcVar9 = s_Remove_Flowers_004c5134;
      do {
        pcVar8 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar8 + -uVar5;
      pcVar8 = (char *)&DAT_0051a068;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar8 = pcVar8 + 4;
      }
      bVar7 = bVar7 & 0x7f;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      }
      if (bVar7 == 0) {
        uVar5 = 0xffffffff;
        pcVar9 = s_Remove_Path_004c5128;
        do {
          pcVar8 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar9 = pcVar8 + -uVar5;
        pcVar8 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
      if (bVar7 == 1) {
        uVar5 = 0xffffffff;
        pcVar9 = s_Remove_Bench_004c5118;
        do {
          pcVar8 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar9 = pcVar8 + -uVar5;
        pcVar8 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
      if (bVar7 == 0x10) {
        uVar5 = 0xffffffff;
        pcVar9 = s_Remove_Scenic_Tree_004c5104;
        do {
          pcVar8 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar9 = pcVar8 + -uVar5;
        pcVar8 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
      if (bVar7 != 0x13) {
        return 1;
      }
      uVar5 = 0xffffffff;
      pcVar9 = s_Remove_Scenic_Bridge_004c50ec;
      do {
        pcVar8 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar8 + -uVar5;
      pcVar9 = (char *)&DAT_0051a068;
      goto LAB_0040a385;
    }
    if ('|' < (char)bVar7) goto LAB_0040a39b;
    uVar5 = 0xffffffff;
    pcVar9 = s_Reset_to_004c50e0;
    do {
      pcVar8 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar3 = -1;
    pcVar9 = (char *)&DAT_0051a068;
    do {
      pcVar10 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar8 + -uVar5;
    pcVar8 = pcVar10 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcVar9 = (char *)(&DAT_00578350 + (char)bVar7 * 0xc);
  }
  else {
    uVar5 = 0xffffffff;
    pcVar9 = s_Demolish_004c5144;
    do {
      pcVar8 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar8 + -uVar5;
    pcVar8 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcVar9 = s_Pathway_004c26b0 + (short)(&DAT_0058bcb8)[iVar4 * 8] * 0x14;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar8 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar8 + -uVar5;
  iVar3 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar9 = pcVar10;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
LAB_0040a385:
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return 1;
}

