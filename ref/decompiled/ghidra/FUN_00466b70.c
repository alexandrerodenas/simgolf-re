/* Ghidra decompiled: golf.exe */
/* Function: FUN_00466b70 @ 0x00466B70 */
/* Body size: 1426 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466b70(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int local_248;
  int local_244;
  int local_240;
  char local_23c [58];
  char acStack_202 [258];
  char local_100 [256];
  
  iVar8 = 0;
  piVar2 = &DAT_0083822c;
  do {
    if (((piVar2[-1] == param_1) && (*piVar2 == param_2)) && (piVar2[1] == param_3)) {
      if (param_4 != -1) {
        uVar4 = 0xffffffff;
        pcVar9 = (char *)&DAT_0051a068;
        goto code_r0x00466dfc;
      }
      uVar4 = 0xffffffff;
      pcVar9 = &DAT_00838234 + iVar8 * 0x10c;
      goto code_r0x00466dc4;
    }
    piVar2 = piVar2 + 0x43;
    iVar8 = iVar8 + 1;
  } while ((int)piVar2 < 0x838a8c);
  iVar8 = (int)(short)DAT_00838220;
  uVar4 = 0xffffffff;
  (&DAT_00838228)[iVar8 * 0x43] = param_1;
  (&DAT_0083822c)[iVar8 * 0x43] = 0xfffffffe;
  (&DAT_00838230)[iVar8 * 0x43] = param_3;
  pcVar9 = s_Themes__004c84e8;
  do {
    pcVar11 = pcVar9;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar9 = pcVar11 + -uVar4;
  pcVar11 = local_23c;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  pcVar9 = &DAT_00567328;
  if ((_DAT_0059e7b8 & 0x10000000) != 0) {
    pcVar9 = s_Standard_004c6c10;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar11 = pcVar9;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar8 = -1;
  pcVar9 = local_23c;
  do {
    pcVar10 = pcVar9;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar4;
  pcVar11 = pcVar10 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar9 = &DAT_004c84e4;
  do {
    pcVar11 = pcVar9;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar8 = -1;
  pcVar9 = local_23c;
  do {
    pcVar10 = pcVar9;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar4;
  pcVar11 = pcVar10 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar9 = (char *)((int)&DAT_0053a454 + param_1 * 0x32);
  do {
    pcVar11 = pcVar9;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar8 = -1;
  pcVar9 = local_23c;
  do {
    pcVar10 = pcVar9;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar4;
  pcVar11 = pcVar10 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  iVar8 = FUN_004a614d(local_23c);
  if (iVar8 != 0) {
    local_244 = 1;
    local_240 = 0;
    iVar3 = FUN_004a65ee(acStack_202 + 2,0xfa,iVar8);
    local_248 = param_2;
    iVar6 = param_2;
    while (iVar3 != 0) {
      if (acStack_202[3] != '\0') {
        uVar4 = 0xffffffff;
        pcVar9 = acStack_202 + 2;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        acStack_202[~uVar4] = '\0';
        if (param_2 == -1) {
          uVar4 = 0xffffffff;
          pcVar9 = acStack_202 + 2;
          goto code_r0x00467007;
        }
        if (acStack_202[2] == ' ') {
          if (iVar6 == -1) {
            if (local_248 == param_3) {
              if (param_4 != 1) {
                uVar4 = 0xffffffff;
                pcVar9 = acStack_202 + 2;
                do {
                  pcVar11 = pcVar9;
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  pcVar11 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar11;
                } while (cVar1 != '\0');
                uVar4 = ~uVar4;
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
                pcVar9 = pcVar11 + -uVar4;
                pcVar11 = pcVar10 + -1;
                for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *pcVar11 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar11 = pcVar11 + 1;
                }
              }
              param_3 = -1;
            }
            else {
              local_248 = local_248 + -1;
            }
          }
          uVar4 = 0xffffffff;
          pcVar9 = acStack_202 + 2;
          do {
            pcVar11 = pcVar9;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar11 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar11;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar9 = pcVar11 + -uVar4;
          pcVar11 = local_100;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
        else if (iVar6 == local_244) {
          uVar4 = 0xffffffff;
          pcVar9 = acStack_202 + 2;
          do {
            pcVar11 = pcVar9;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar11 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar11;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar6 = -1;
          pcVar9 = (char *)&DAT_0051a068;
          do {
            pcVar10 = pcVar9;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar10 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar1 != '\0');
          pcVar9 = pcVar11 + -uVar4;
          pcVar11 = pcVar10 + -1;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar11 = pcVar11 + 1;
          }
          uVar4 = 0xffffffff;
          pcVar9 = &DAT_004d3880;
          do {
            pcVar11 = pcVar9;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar11 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar11;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar6 = -1;
          pcVar9 = (char *)&DAT_0051a068;
          do {
            pcVar10 = pcVar9;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar10 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar1 != '\0');
          pcVar9 = pcVar11 + -uVar4;
          pcVar11 = pcVar10 + -1;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar11 = pcVar11 + 4;
          }
          local_244 = local_244 + 1;
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar11 = pcVar11 + 1;
          }
          iVar6 = -1;
        }
        else {
          if ((iVar6 == -1) && (param_3 != -1)) {
            if (param_4 != 0) {
              uVar4 = 0xffffffff;
              pcVar9 = local_100;
              do {
                pcVar11 = pcVar9;
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1;
                pcVar11 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar11;
              } while (cVar1 != '\0');
              uVar4 = ~uVar4;
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
              pcVar9 = pcVar11 + -uVar4;
              pcVar11 = pcVar10 + -1;
              for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *pcVar11 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar11 = pcVar11 + 1;
              }
            }
            param_3 = -1;
          }
          local_244 = local_244 + 1;
        }
        local_240 = local_240 + 1;
        if (200 < local_240) goto LAB_00467029;
      }
      if ((iVar6 == -1) && (param_3 == -1)) goto LAB_00467081;
      iVar3 = FUN_004a65ee(acStack_202 + 2,0xfa,iVar8);
    }
    if (((iVar6 == -1) && (param_3 != -1)) && (param_4 != 1)) {
      uVar4 = 0xffffffff;
      pcVar9 = local_100;
      do {
        pcVar11 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar6 = -1;
      pcVar9 = (char *)&DAT_0051a068;
      do {
        pcVar10 = pcVar9;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar9 = pcVar11 + -uVar4;
      pcVar11 = pcVar10 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
LAB_00467081:
    FUN_004a609f(iVar8);
    uVar4 = 0xffffffff;
    if (param_4 == -1) {
      iVar8 = (int)(short)DAT_00838220;
      pcVar9 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = pcVar11 + -uVar4;
      pcVar11 = &DAT_00838234 + iVar8 * 0x10c;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      (&DAT_0083822c)[iVar8 * 0x43] = param_2;
      uVar4 = (int)(short)((short)DAT_00838220 + 1) & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      DAT_00838220 = CONCAT22(DAT_00838220._2_2_,(short)uVar4);
    }
  }
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar1 == '\0') break;
code_r0x00466dfc:
    if (uVar4 == 0) break;
  }
  iVar6 = ~uVar4 - 1;
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_00838234 + iVar8 * 0x10c;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar8 = -1;
  pcVar9 = (char *)&DAT_0051a068;
  do {
    pcVar10 = pcVar9;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar9 = (char *)&DAT_0051a068;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  iVar8 = ~uVar5 - 1;
  if (param_4 == 1) {
    if (iVar8 <= iVar6) {
      return;
    }
    do {
      if (*(char *)((int)&DAT_0051a068 + iVar6) == '\n') {
        *(undefined1 *)((int)&DAT_0051a068 + iVar6) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar8);
    return;
  }
  if (iVar8 <= iVar6) {
    return;
  }
  do {
    if (*(char *)((int)&DAT_0051a068 + iVar6) == '\n') {
      uVar5 = 0xffffffff;
      pcVar9 = (char *)((int)&DAT_0051a068 + iVar6 + 1);
      do {
        pcVar11 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar11 + -uVar5;
      pcVar11 = &DAT_0051a067 + ~uVar4;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar8 <= iVar6) {
      return;
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
    if (cVar1 == '\0') break;
code_r0x00466dc4:
    pcVar11 = pcVar9;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  iVar8 = -1;
  pcVar9 = (char *)&DAT_0051a068;
  do {
    pcVar10 = pcVar9;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar4;
  pcVar11 = pcVar10 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
    if (cVar1 == '\0') break;
code_r0x00467007:
    pcVar11 = pcVar9;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar9 = (char *)&DAT_0051a068;
  do {
    pcVar10 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar4;
  pcVar11 = pcVar10 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
LAB_00467029:
  FUN_004a609f(iVar8);
  return;
}

