/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046d6e0 @ 0x0046D6E0 */
/* Body size: 1638 addresses */


uint FUN_0046d6e0(int param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  int local_48;
  uint local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_28;
  int iStack_20;
  uint local_10;
  int iStack_8;
  int iStack_4;
  
  uVar18 = 0;
  iVar13 = 0;
  iVar15 = 0;
  local_48 = 0;
  local_44 = param_3;
  local_10 = 0;
  FUN_004762d0(&DAT_00519928,0,0,0);
  if (param_4 != 0) {
    local_44 = 0;
  }
  iVar7 = -1;
  bVar2 = false;
  pcVar20 = (char *)&DAT_0051a068;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar20;
    pcVar20 = pcVar20 + 1;
  } while (cVar1 != '\0');
  if (iVar7 != -2) {
    do {
      if (*(char *)((int)&DAT_0051a068 + uVar18) == '\n') {
        *(undefined1 *)((int)&DAT_0051a068 + uVar18) = 0;
        iVar7 = FUN_00477250((int)&DAT_0051a068 + iVar13);
        *(undefined1 *)((int)&DAT_0051a068 + uVar18) = 10;
        iVar13 = uVar18 + 1;
        if (iVar15 < iVar7) {
          iVar15 = iVar7;
        }
        local_48 = local_48 + 1;
      }
      uVar8 = 0xffffffff;
      uVar18 = uVar18 + 1;
      pcVar20 = (char *)&DAT_0051a068;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar20 + 1;
      } while (cVar1 != '\0');
    } while (uVar18 < ~uVar8 - 1);
  }
  iVar13 = FUN_00477250((int)&DAT_0051a068 + iVar13);
  if (iVar15 < iVar13) {
    iVar15 = iVar13;
  }
  uVar16 = iVar15 - 1U | 0xf;
  iVar13 = local_48 * 3 + 3;
  iVar15 = uVar16 + 0x31;
  iVar7 = iVar13 * 8;
  param_3 = 0xffffffff;
  uVar18 = FUN_00479830(param_1,param_2,0);
  uVar8 = FUN_004798c0(param_1,param_2,0);
  uVar3 = FUN_00479950(param_1,param_2,0);
  FUN_00483d30();
LAB_0046d82c:
  do {
    uVar4 = param_2 & 1;
    if (uVar4 == 0) {
      iStack_28 = param_1 - iVar15 / 2;
      FUN_0040cc00(iStack_28,param_2,iVar15,iVar7,1);
    }
    else {
      iStack_28 = param_1 - iVar15 / 2;
      FUN_00480b00(iStack_28,param_2,iVar15,iVar7,0x80006318);
      FUN_00480b00(iStack_28 + 1,param_2 + 1,uVar16 + 0x2f,iVar7 + -2,
                   (((uVar18 & 0xff) >> 3 | 0xffe00000) << 5 | (uVar8 & 0xff) >> 3) << 5 |
                   (uVar3 & 0xff) >> 3);
    }
    iVar14 = iVar15 / 2;
    if (param_4 == 0) {
      FUN_00473f60(&DAT_0056a894,PTR_DAT_004c1570,iVar14 + -0x28 + param_1,iVar7 + -0x28 + param_2,0
                  );
    }
    uVar17 = 0;
    iVar19 = param_2 + 0xc;
    iVar9 = -1;
    iVar12 = 0;
    iStack_40 = 0;
    pcVar20 = (char *)&DAT_0051a068;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar20 + 1;
    } while (cVar1 != '\0');
    iStack_3c = -1;
    if (iVar9 != -2) {
      do {
        if (*(char *)((int)&DAT_0051a068 + uVar17) == '\n') {
          pcVar20 = (char *)((int)&DAT_0051a068 + iVar12);
          *(undefined1 *)((int)&DAT_0051a068 + uVar17) = 0;
          if (*pcVar20 == ' ') {
            if (iStack_3c == -1) {
              iStack_3c = iStack_40;
              iStack_20 = iVar19;
            }
            uVar10 = iStack_40 - iStack_3c;
            uVar11 = 1 << ((byte)uVar10 & 0x1f);
            if ((param_5 & uVar11) == 0) {
              if (param_3 == uVar10) {
                if ((uVar11 & local_44) == 0) {
                  FUN_00404ad0(pcVar20,iStack_28 + 0x24,iVar19 + 7,
                               (-(uint)(uVar4 != 0) & 0x1ef8) + 0x80000210);
                }
                else {
                  FUN_00404ad0(pcVar20,iStack_28 + 0x24,iVar19 + 7,0x80007fff);
                }
              }
              else {
                if ((uVar11 & local_44) == 0) {
                  iVar12 = (-(uint)(uVar4 != 0) & 0x1ef8) + 0x80000210;
                }
                else {
                  iVar12 = -0x7fff8001;
                }
                FUN_004049d0(pcVar20,iStack_28 + 0x24,iVar19 + 8,iVar12);
              }
              if (param_4 == 0) {
                FUN_00473cb0(PTR_DAT_004c1570,iStack_28 + 8,iVar19,1,1,1,0);
              }
              else {
                FUN_00473f60(&DAT_0056a7b8,PTR_DAT_004c1570,iStack_28 + 0xc,iVar19 + 4,0);
              }
              if ((uVar11 & local_44) != 0) {
                local_10 = uVar10;
              }
            }
            else {
              FUN_004049d0(pcVar20,iStack_28 + 0x24,iVar19 + 8,0x80006318);
            }
          }
          else {
            FUN_00404bc0(pcVar20,param_1,iVar19,(-(uint)(param_4 != 0) & 0xf) + 0x80007ff0);
          }
          *(undefined1 *)((int)&DAT_0051a068 + uVar17) = 10;
          iVar12 = uVar17 + 1;
          iVar19 = iVar19 + (-(uint)(iStack_3c != -1) & 6) + 0x12;
          iStack_40 = iStack_40 + 1;
        }
        uVar11 = 0xffffffff;
        uVar17 = uVar17 + 1;
        pcVar20 = (char *)&DAT_0051a068;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar1 = *pcVar20;
          pcVar20 = pcVar20 + 1;
        } while (cVar1 != '\0');
      } while (uVar17 < ~uVar11 - 1);
    }
    iStack_40 = iStack_40 - iStack_3c;
    FUN_00480c80(0);
    FUN_0045bf80(10,0);
    FUN_0045c030();
    if (param_4 != 0) {
      iVar19 = FUN_0045ae70();
      if (iVar19 != 0) {
        uVar5 = FUN_0045ae30();
        switch(uVar5) {
        case 0xd:
        case 0x20:
          FUN_00483d30();
          return param_3;
        case 0x1b:
          FUN_00483d30();
          return 0xffffffff;
        case 0x26:
          bVar2 = true;
          if (0 < (int)param_3) {
            param_3 = param_3 - 1;
code_r0x0046db85:
            bVar2 = true;
          }
          break;
        case 0x28:
          bVar2 = true;
          if ((int)param_3 < iStack_40 + -1) {
            param_3 = param_3 + 1;
            goto code_r0x0046db85;
          }
        }
      }
      local_44 = 1 << ((byte)param_3 & 0x1f);
      if (DAT_00822d68 != 0) {
        if ((param_5 & local_44) == 0) {
          if ((param_2 & 1) != 0) {
            FUN_00480b00(param_1 - iVar15 / 2,param_2,iVar15,iVar7,
                         (((uVar18 & 0xff) >> 3 | 0xffe00000) << 5 | (uVar8 & 0xff) >> 3) << 5 |
                         (uVar3 & 0xff) >> 3);
          }
          return param_3;
        }
        FUN_004481b0(0x18,100,0,0,0);
        goto LAB_0046d82c;
      }
    }
    FUN_0047ab50(&iStack_8,&iStack_4);
    if ((((iStack_28 < iStack_8) && (iStack_8 < iVar14 + -0x30 + param_1)) &&
        (iStack_20 <= iStack_4)) && (iStack_4 < iStack_20 + iStack_40 * 0x18)) {
      bVar2 = false;
      param_3 = (iStack_4 - iStack_20) / 0x18;
    }
    else if (!bVar2) {
      param_3 = 0xffffffff;
    }
    if (DAT_00822d68 == 1) {
      if (((iStack_28 < DAT_00822d60) && (DAT_00822d60 < iVar14 + -0x30 + param_1)) &&
         ((iStack_20 <= DAT_00822d64 &&
          (iVar19 = (DAT_00822d64 - iStack_20) / 0x18, iVar19 < iStack_40)))) {
        bVar6 = (byte)iVar19;
        if (param_4 == 0) {
          local_44 = local_44 ^ 1 << (bVar6 & 0x1f);
        }
        else {
          local_44 = 1 << (bVar6 & 0x1f);
        }
      }
      uVar4 = ((DAT_00822d60 - iVar14) - param_1) + 0x14;
      uVar17 = (int)uVar4 >> 0x1f;
      if (((int)((uVar4 ^ uVar17) - uVar17) < 0x14) &&
         (uVar4 = ((DAT_00822d64 + iVar13 * -8) - param_2) + 0x14, uVar17 = (int)uVar4 >> 0x1f,
         (int)((uVar4 ^ uVar17) - uVar17) < 0x14)) {
        if (param_4 == 0) {
          local_10 = local_44;
        }
        return local_10;
      }
    }
  } while( true );
}

