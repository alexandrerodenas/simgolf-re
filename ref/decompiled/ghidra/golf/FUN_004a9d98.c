/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a9d98 @ 0x004A9D98 */
/* Body size: 142 addresses */


int FUN_004a9d98(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_24c [511];
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 uStack_1a;
  char cStack_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  short *psStack_c;
  uint uStack_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(byte *)((int)&PTR_LAB_004bc510 + (int)(char)bVar9) & 0xf;
    }
    local_34 = (int)(char)(&DAT_004bc530)[uVar3 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
code_r0x004a9f37:
      iStack_28 = 0;
      if ((PTR_DAT_004e5010[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        func_0x004aa4d9((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      func_0x004aa4d9((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      uStack_38 = 0;
      iStack_2c = 0;
      iStack_24 = 0;
      iStack_20 = 0;
      uStack_8 = 0;
      iStack_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        uStack_8 = uStack_8 | 2;
      }
      else if (bVar9 == 0x23) {
        uStack_8 = uStack_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        uStack_8 = uStack_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        uStack_8 = uStack_8 | 4;
      }
      else if (bVar9 == 0x30) {
        uStack_8 = uStack_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        iStack_24 = func_0x004aa577(&param_3);
        if (iStack_24 < 0) {
          uStack_8 = uStack_8 | 4;
          iStack_24 = -iStack_24;
        }
      }
      else {
        iStack_24 = (char)bVar9 + -0x30 + iStack_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = func_0x004aa577(&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != 0x34)) {
          local_34 = 0;
          goto code_r0x004a9f37;
        }
        param_2 = pbVar1 + 3;
        uStack_8 = uStack_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        uStack_8 = uStack_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        uStack_8 = uStack_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        uStack_8 = uStack_8 | 0x800;
      }
      break;
    case 7:
      psVar5 = psStack_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
code_r0x004aa217:
              iStack_30 = 7;
code_r0x004aa21e:
              local_10 = (undefined1 *)0x10;
              if ((uStack_8 & 0x80) != 0) {
                uStack_1a = 0x30;
                cStack_19 = (char)iStack_30 + 'Q';
                iStack_20 = 2;
              }
              goto code_r0x004aa288;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((uStack_8 & 0x830) == 0) {
                    uStack_8 = uStack_8 | 0x800;
                  }
                  goto code_r0x004a9fc5;
                }
                goto code_r0x004aa3a2;
              }
              uStack_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto code_r0x004aa026;
            }
            if ((uStack_8 & 0x830) == 0) {
              uStack_8 = uStack_8 | 0x800;
            }
code_r0x004aa053:
            if ((uStack_8 & 0x810) == 0) {
              auStack_24c[0] = func_0x004aa577(&param_3);
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar6 = func_0x004aa594();
              local_10 = (undefined1 *)FUN_004ac169(auStack_24c,uVar6);
              if ((int)local_10 < 0) {
                iStack_2c = 1;
              }
            }
            psVar5 = (short *)auStack_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar4 = (short *)func_0x004aa577(&param_3);
            if ((psVar4 == (short *)0x0) ||
               (psVar5 = *(short **)(psVar4 + 2), psVar5 == (short *)0x0)) {
              psStack_c = (short *)PTR_s__null__004e5008;
              psVar5 = (short *)PTR_s__null__004e5008;
              goto code_r0x004aa198;
            }
            if ((uStack_8 & 0x800) == 0) {
              iStack_28 = 0;
              local_10 = (undefined1 *)(int)*psVar4;
            }
            else {
              iStack_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar4 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto code_r0x004aa053;
            if (bVar9 == 100) goto code_r0x004aa27d;
          }
        }
        else {
code_r0x004aa026:
          uStack_8 = uStack_8 | 0x40;
          psVar5 = (short *)auStack_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          uStack_4c = *param_3;
          uStack_48 = param_3[1];
          param_3 = param_3 + 2;
          psStack_c = psVar5;
          (*(code *)PTR_FUN_004e4b00)(&uStack_4c,auStack_24c,(int)(char)bVar9,local_14,uStack_38);
          uVar3 = uStack_8 & 0x80;
          if ((uVar3 != 0) && (local_14 == 0)) {
            (*(code *)PTR_FUN_004e4b0c)(auStack_24c);
          }
          if ((bVar9 == 0x67) && (uVar3 == 0)) {
            (*(code *)PTR_FUN_004e4b04)(auStack_24c);
          }
          if (auStack_24c[0] == '-') {
            uStack_8 = uStack_8 | 0x100;
            psVar5 = (short *)(auStack_24c + 1);
            psStack_c = psVar5;
          }
code_r0x004aa198:
          local_10 = (undefined1 *)_strlen((char *)psVar5);
          psVar5 = psStack_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
code_r0x004aa27d:
          uStack_8 = uStack_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)func_0x004aa577(&param_3);
            if ((uStack_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            iStack_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((uStack_8 & 0x80) != 0) {
              uStack_8 = uStack_8 | 0x200;
            }
            goto code_r0x004aa288;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto code_r0x004aa217;
          }
          if (bVar9 == 0x73) {
code_r0x004a9fc5:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            psVar4 = (short *)func_0x004aa577(&param_3);
            if ((uStack_8 & 0x810) == 0) {
              psVar5 = psVar4;
              if (psVar4 == (short *)0x0) {
                psVar4 = (short *)PTR_s__null__004e5008;
                psVar5 = (short *)PTR_s__null__004e5008;
              }
              for (; (iVar10 != 0 && ((char)*psVar4 != '\0')); psVar4 = (short *)((int)psVar4 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)psVar4 - (int)psVar5);
            }
            else {
              if (psVar4 == (short *)0x0) {
                psVar4 = psRam004e500c;
              }
              iStack_28 = 1;
              for (psVar5 = psVar4; (iVar10 != 0 && (*psVar5 != 0)); psVar5 = psVar5 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)psVar5 - (int)psVar4 >> 1);
              psVar5 = psVar4;
            }
            goto code_r0x004aa3a2;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto code_r0x004aa3a2;
            iStack_30 = 0x27;
            goto code_r0x004aa21e;
          }
        }
        local_10 = (undefined1 *)0xa;
code_r0x004aa288:
        if ((uStack_8 & 0x8000) == 0) {
          if ((uStack_8 & 0x20) == 0) {
            if ((uStack_8 & 0x40) == 0) {
              uVar3 = func_0x004aa577(&param_3);
              uVar12 = (ulonglong)uVar3;
              goto code_r0x004aa2db;
            }
            uVar3 = func_0x004aa577(&param_3);
          }
          else if ((uStack_8 & 0x40) == 0) {
            uVar3 = func_0x004aa577(&param_3);
            uVar3 = uVar3 & 0xffff;
          }
          else {
            sVar2 = func_0x004aa577(&param_3);
            uVar3 = (uint)sVar2;
          }
          uVar12 = (ulonglong)(int)uVar3;
        }
        else {
          uVar12 = func_0x004aa584(&param_3);
        }
code_r0x004aa2db:
        if ((((uStack_8 & 0x40) != 0) && ((longlong)uVar12 < 0x100000000)) && ((longlong)uVar12 < 0)
           ) {
          uVar12 = CONCAT44(-((int)(uVar12 >> 0x20) + (uint)((int)uVar12 != 0)),-(int)uVar12);
          uStack_8 = uStack_8 | 0x100;
        }
        iVar10 = (int)(uVar12 >> 0x20);
        if ((uStack_8 & 0x8000) == 0) {
          iVar10 = 0;
        }
        lVar13 = CONCAT44(iVar10,(int)uVar12);
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          uStack_8 = uStack_8 & 0xfffffff7;
        }
        if ((int)uVar12 == 0 && iVar10 == 0) {
          iStack_20 = 0;
        }
        psStack_c = (short *)&uStack_4d;
        while ((iVar10 = local_14 + -1, 0 < local_14 || (lVar13 != 0))) {
          iStack_40 = (int)local_10 >> 0x1f;
          iStack_44 = (int)local_10;
          local_14 = iVar10;
          iVar10 = func_0x004ac2a0(lVar13,local_10,iStack_40);
          iVar10 = iVar10 + 0x30;
          lVar13 = func_0x004ac230(lVar13,iStack_44,iStack_40);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + iStack_30;
          }
          psVar5 = (short *)((int)psStack_c + -1);
          *(char *)psStack_c = (char)iVar10;
          psStack_c = psVar5;
        }
        iVar8 = -(int)psStack_c;
        local_10 = &uStack_4d + iVar8;
        psVar5 = (short *)((int)psStack_c + 1);
        local_14 = iVar10;
        if (((uStack_8 & 0x200) != 0) &&
           ((*(char *)psVar5 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)psStack_c = '0';
          local_10 = (undefined1 *)((int)&uStack_4c + iVar8);
          psVar5 = psStack_c;
        }
      }
code_r0x004aa3a2:
      psStack_c = psVar5;
      uVar3 = uStack_8;
      if (iStack_2c == 0) {
        if ((uStack_8 & 0x40) != 0) {
          if ((uStack_8 & 0x100) == 0) {
            if ((uStack_8 & 1) == 0) {
              if ((uStack_8 & 2) == 0) goto code_r0x004aa3da;
              uStack_1a = 0x20;
            }
            else {
              uStack_1a = 0x2b;
            }
          }
          else {
            uStack_1a = 0x2d;
          }
          iStack_20 = 1;
        }
code_r0x004aa3da:
        iVar10 = (iStack_24 - iStack_20) - (int)local_10;
        if ((uStack_8 & 0xc) == 0) {
          func_0x004aa50e(0x20,iVar10,param_1,&local_18);
        }
        func_0x004aa53f(&uStack_1a,iStack_20,param_1,&local_18);
        if (((uVar3 & 8) != 0) && ((uVar3 & 4) == 0)) {
          func_0x004aa50e(0x30,iVar10,param_1,&local_18);
        }
        if ((iStack_28 == 0) || (puVar11 = local_10, psVar5 = psStack_c, (int)local_10 < 1)) {
          func_0x004aa53f(psStack_c,local_10,param_1,&local_18);
        }
        else {
          do {
            puVar11 = puVar11 + -1;
            iVar8 = FUN_004ac169(auStack_3c,*psVar5);
            if (iVar8 < 1) break;
            func_0x004aa53f(auStack_3c,iVar8,param_1,&local_18);
            psVar5 = psVar5 + 1;
          } while (puVar11 != (undefined1 *)0x0);
        }
        if ((uStack_8 & 4) != 0) {
          func_0x004aa50e(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}

