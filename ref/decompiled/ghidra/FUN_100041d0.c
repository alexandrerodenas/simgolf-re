/* Ghidra decompiled: sound.dll */
/* Function: FUN_100041d0 @ 0x100041D0 */
/* Body size: 3762 addresses */


int __thiscall FUN_100041d0(void *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  HMMIO pHVar6;
  HPSTR pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  byte *pbVar10;
  LONG LVar11;
  uint uVar12;
  uint uVar13;
  CHAR *pCVar14;
  byte *pbVar15;
  uint *puVar16;
  LPSTR pCVar17;
  LPSTR pCVar18;
  byte *pbVar19;
  uint *puVar20;
  bool bVar21;
  undefined4 *local_418;
  undefined4 *local_414;
  undefined4 local_410;
  int local_40c;
  uint uStack_408;
  undefined4 *puStack_404;
  uint *puStack_400;
  uint uStack_3fc;
  undefined4 *puStack_3f8;
  LPSTR pCStack_3f4;
  LONG local_3f0;
  LONG local_3ec;
  uint uStack_3e8;
  int iStack_3e4;
  LONG LStack_3e0;
  undefined4 *puStack_3dc;
  LONG local_3d8;
  int iStack_3d4;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  undefined4 uStack_3c8;
  FOURCC local_3c4;
  uint uStack_3c0;
  uint uStack_3bc;
  uint local_3b8 [10];
  char local_390 [56];
  byte abStack_358 [260];
  byte abStack_254 [256];
  byte abStack_154 [256];
  _MMIOINFO _Stack_54;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058539;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_3c4 = mmioStringToFOURCCA(&DAT_10063d90,0);
  thunk_FUN_1001caf0((undefined4 *)local_390);
  local_4 = 0;
  thunk_FUN_1001ccf0(local_3b8);
  local_4._0_1_ = 1;
  local_3ec = 0;
  thunk_FUN_1002e3c0(&local_3d8);
  local_418 = (undefined4 *)0x0;
  local_414 = (undefined4 *)0x0;
  local_410 = 0;
  local_40c = 0;
  local_4._0_1_ = 2;
  local_3f0 = 0;
  if ((*(byte *)((int)this + 0x214) & 0x40) != 0) {
    thunk_FUN_10028810(0x100b49b8);
  }
  if (((*(byte *)((int)this + 0xac) & 1) == 0) ||
     (iVar4 = (**(code **)(*(int *)this + 0x14))(), puVar8 = local_418, iVar4 == 0)) {
    uVar12 = 0xffffffff;
    *(undefined4 *)((int)this + 0xa48) = 0;
    do {
      pcVar9 = param_1;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar9 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar9;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pCStack_3f4 = (LPSTR)((int)this + 0x948);
    pCVar14 = pcVar9 + -uVar12;
    pCVar17 = pCStack_3f4;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pCVar17 = *(undefined4 *)pCVar14;
      pCVar14 = pCVar14 + 4;
      pCVar17 = pCVar17 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pCVar17 = *pCVar14;
      pCVar14 = pCVar14 + 1;
      pCVar17 = pCVar17 + 1;
    }
    pHVar6 = mmioOpenA(pCStack_3f4,(LPMMIOINFO)0x0,0);
    puVar8 = local_418;
    *(HMMIO *)((int)this + 0xa48) = pHVar6;
    if (pHVar6 == (HMMIO)0x0) {
      local_4._0_1_ = 1;
      if (local_418 != (undefined4 *)0x0) {
        local_418 = (undefined4 *)local_418[1];
        if (local_418 == (undefined4 *)0x0) {
          local_414 = (undefined4 *)0x0;
          local_418 = (undefined4 *)0x0;
        }
        else {
          *local_418 = 0;
        }
        iVar4 = puVar8[2];
        FUN_1004249a((undefined *)puVar8);
        local_40c = local_40c + -1;
        while (iVar4 != 0) {
          iVar4 = thunk_FUN_10005c00(&local_418);
        }
      }
      local_4 = (uint)local_4._1_3_ << 8;
      thunk_FUN_1001cd30((int)local_3b8);
      local_4 = 0xffffffff;
      thunk_FUN_1001cbd0((undefined4 *)local_390);
      iVar4 = 8;
    }
    else {
      DAT_100b4a08 = DAT_100b4a08 + 1;
      while (mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&uStack_3cc,4), uStack_3cc != local_3c4)
      {
        if (uStack_3cc < 0x6c727464) {
          if (uStack_3cc == 0x6c727463) {
            thunk_FUN_10005440((int)this);
          }
          else if (uStack_3cc == 0x6b617274) {
            puStack_3f8 = operator_new(0x34);
            local_4._0_1_ = 6;
            if (puStack_3f8 == (undefined4 *)0x0) {
              pcVar7 = (HPSTR)0x0;
            }
            else {
              pcVar7 = (HPSTR)thunk_FUN_1001cbf0(puStack_3f8);
            }
            local_4._0_1_ = 2;
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&uStack_408,4);
            mmioRead(*(HMMIO *)((int)this + 0xa48),pcVar7,uStack_408);
            puVar8 = operator_new(0xc);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8[2] = pcVar7;
            }
            puVar3 = puVar8;
            if (local_414 != (undefined4 *)0x0) {
              local_414[1] = puVar8;
              *puVar8 = local_414;
              puVar3 = local_418;
            }
            local_418 = puVar3;
            local_40c = local_40c + 1;
            local_414 = puVar8;
          }
          else if (uStack_3cc == 0x6c626c67) {
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&uStack_408,4);
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&local_3ec,4);
            uStack_408 = uStack_408 - 4;
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&local_3d8,local_3ec);
            uStack_408 = uStack_408 - local_3ec;
            thunk_FUN_10024c50(this,(byte)uStack_3d0);
            puStack_3f8 = operator_new(0x38);
            local_4._0_1_ = 5;
            if (puStack_3f8 == (undefined4 *)0x0) {
              pcVar7 = (HPSTR)0x0;
            }
            else {
              pcVar7 = (HPSTR)thunk_FUN_1000b000(puStack_3f8);
            }
            local_4._0_1_ = 2;
            while (bVar21 = iStack_3d4 != 0, iStack_3d4 = iStack_3d4 + -1, bVar21) {
              mmioRead(*(HMMIO *)((int)this + 0xa48),pcVar7,local_3d8);
              uStack_408 = uStack_408 - local_3d8;
              thunk_FUN_10022d00(this,(undefined4 *)pcVar7);
            }
            FUN_1004249a(pcVar7);
          }
          else {
            if (uStack_3cc != 0x6c6e6863) {
LAB_10004d1f:
              mmioClose(*(HMMIO *)((int)this + 0xa48),0);
              puVar8 = local_418;
              DAT_100b4a08 = DAT_100b4a08 + -1;
              local_4._0_1_ = 1;
              if (local_418 != (undefined4 *)0x0) {
                local_418 = (undefined4 *)local_418[1];
                if (local_418 == (undefined4 *)0x0) {
                  local_414 = (undefined4 *)0x0;
                  local_418 = (undefined4 *)0x0;
                }
                else {
                  *local_418 = 0;
                }
                iVar4 = puVar8[2];
                FUN_1004249a((undefined *)puVar8);
                puVar8 = local_418;
                while ((local_40c = local_40c + -1, local_418 = puVar8, iVar4 != 0 &&
                       (puVar8 != (undefined4 *)0x0))) {
                  local_418 = (undefined4 *)puVar8[1];
                  if (local_418 == (undefined4 *)0x0) {
                    local_414 = (undefined4 *)0x0;
                    local_418 = (undefined4 *)0x0;
                  }
                  else {
                    *local_418 = 0;
                  }
                  iVar4 = puVar8[2];
                  FUN_1004249a((undefined *)puVar8);
                  puVar8 = local_418;
                }
              }
              local_4 = (uint)local_4._1_3_ << 8;
              thunk_FUN_1001cd30((int)local_3b8);
              local_4 = 0xffffffff;
              thunk_FUN_1001cbd0((undefined4 *)local_390);
              ExceptionList = pvStack_c;
              return 8;
            }
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&uStack_408,4);
            mmioRead(*(HMMIO *)((int)this + 0xa48),local_390,uStack_408);
            thunk_FUN_10022280(this,(int)local_390);
            mmioGetInfo(*(HMMIO *)((int)this + 0xa48),&_Stack_54,0);
          }
        }
        else if (uStack_3cc == 0x6d677270) {
          uStack_3e8 = uStack_3e8 & 0xffffff00;
          mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&uStack_408,4);
          if (uStack_408 == 0x1c) {
            uStack_3e8 = CONCAT31(uStack_3e8._1_3_,1);
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&LStack_3e0,4);
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)local_3b8,0x18);
            local_3b8[1] = local_3b8[1] & 0xfffffff7 | 0x10;
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)abStack_358,LStack_3e0);
            uStack_3fc = LStack_3e0 + 0x18;
            abStack_358[LStack_3e0] = 0;
          }
          else {
            mmioGetInfo(*(HMMIO *)((int)this + 0xa48),&_Stack_54,0);
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)local_3b8,0x1c);
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)abStack_358,1);
            iVar4 = 1;
            if (abStack_358[0] != 0) {
              pbVar10 = abStack_358;
              do {
                pbVar10 = pbVar10 + 1;
                mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)pbVar10,1);
                iVar4 = iVar4 + 1;
              } while (*pbVar10 != 0);
            }
            uStack_3fc = iVar4 + 0x1c;
          }
          if ((*(byte *)((int)this + 0x58) & 1) != 0) {
            if (pCStack_3f4 == (LPSTR)0x0) {
LAB_10004b19:
              abStack_154[0] = 0;
            }
            else {
              uVar12 = 0xffffffff;
              pCVar17 = pCStack_3f4;
              do {
                pCVar18 = pCVar17;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pCVar18 = pCVar17 + 1;
                cVar1 = *pCVar17;
                pCVar17 = pCVar18;
              } while (cVar1 != '\0');
              uVar12 = ~uVar12;
              pbVar10 = (byte *)(pCVar18 + -uVar12);
              pbVar15 = abStack_154;
              for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pbVar15 = *(undefined4 *)pbVar10;
                pbVar10 = pbVar10 + 4;
                pbVar15 = pbVar15 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pbVar15 = *pbVar10;
                pbVar10 = pbVar10 + 1;
                pbVar15 = pbVar15 + 1;
              }
              pcVar9 = _strrchr((char *)abStack_154,0x5c);
              if (pcVar9 == (char *)0x0) goto LAB_10004b19;
              pcVar9[1] = '\0';
            }
            pbVar10 = (byte *)_strrchr((char *)abStack_358,0x5c);
            if (pbVar10 == (byte *)0x0) {
LAB_10004b7b:
              pbVar10 = abStack_358;
            }
            else {
              pbVar19 = &DAT_10069988;
              pbVar15 = abStack_154;
              do {
                bVar2 = *pbVar15;
                bVar21 = bVar2 < *pbVar19;
                if (bVar2 != *pbVar19) {
LAB_10004b67:
                  iVar4 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                  goto LAB_10004b6c;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar15[1];
                bVar21 = bVar2 < pbVar19[1];
                if (bVar2 != pbVar19[1]) goto LAB_10004b67;
                pbVar15 = pbVar15 + 2;
                pbVar19 = pbVar19 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_10004b6c:
              if (iVar4 == 0) goto LAB_10004b7b;
            }
            uVar12 = 0xffffffff;
            do {
              pbVar15 = pbVar10;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pbVar15 = pbVar10 + 1;
              bVar2 = *pbVar10;
              pbVar10 = pbVar15;
            } while (bVar2 != 0);
            uVar12 = ~uVar12;
            iVar4 = -1;
            pbVar10 = abStack_154;
            do {
              pbVar19 = pbVar10;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pbVar19 = pbVar10 + 1;
              bVar2 = *pbVar10;
              pbVar10 = pbVar19;
            } while (bVar2 != 0);
            pbVar10 = pbVar15 + -uVar12;
            pbVar15 = pbVar19 + -1;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pbVar15 = *(undefined4 *)pbVar10;
              pbVar10 = pbVar10 + 4;
              pbVar15 = pbVar15 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pbVar15 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              pbVar15 = pbVar15 + 1;
            }
            uVar12 = 0xffffffff;
            pbVar10 = abStack_154;
            do {
              pbVar15 = pbVar10;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pbVar15 = pbVar10 + 1;
              bVar2 = *pbVar10;
              pbVar10 = pbVar15;
            } while (bVar2 != 0);
            uVar12 = ~uVar12;
            pbVar10 = pbVar15 + -uVar12;
            pbVar15 = abStack_358;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pbVar15 = *(undefined4 *)pbVar10;
              pbVar10 = pbVar10 + 4;
              pbVar15 = pbVar15 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pbVar15 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              pbVar15 = pbVar15 + 1;
            }
          }
          thunk_FUN_1001ced0(local_3b8,(char *)abStack_358);
          if (uStack_3fc < uStack_408) {
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)abStack_358,1);
            if (abStack_358[0] != 0) {
              pbVar10 = abStack_358;
              do {
                pbVar10 = pbVar10 + 1;
                mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)pbVar10,1);
              } while (*pbVar10 != 0);
            }
            thunk_FUN_1001d0a0(local_3b8,(char *)abStack_358);
          }
          thunk_FUN_10020fe0(this,local_3b8,(char)uStack_3e8);
          thunk_FUN_10021fa0(this,local_3b8);
          thunk_FUN_1001ced0(local_3b8,(char *)0x0);
          thunk_FUN_1001d0a0(local_3b8,(char *)0x0);
          puVar16 = local_3b8;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar16 = 0;
            puVar16 = puVar16 + 1;
          }
        }
        else {
          if (uStack_3cc != 0x70616d6b) goto LAB_10004d1f;
          puStack_3f8 = operator_new(0x21c);
          local_4._0_1_ = 3;
          if (puStack_3f8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = thunk_FUN_1002cee0(puStack_3f8);
          }
          local_4 = CONCAT31(local_4._1_3_,2);
          puStack_404 = puVar8;
          mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&uStack_408,4);
          mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)(puVar8 + 0x82),4);
          mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)(puVar8 + 0x84),4);
          mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)(puVar8 + 0x83),4);
          mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)abStack_358,1);
          uVar12 = 0xd;
          if (abStack_358[0] != 0) {
            pbVar10 = abStack_358;
            do {
              pbVar10 = pbVar10 + 1;
              mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)pbVar10,1);
              uVar12 = uVar12 + 1;
              puVar8 = puStack_404;
            } while (*pbVar10 != 0);
          }
          thunk_FUN_1002d240(puVar8,(char *)abStack_358);
          mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&puStack_3dc,4);
          if ((*(byte *)(puVar8 + 0x82) & 6) != 0) {
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&local_3f0,4);
            uVar12 = uVar12 + 4;
          }
          puStack_3f8 = (undefined4 *)0x0;
          puStack_400 = operator_new(0x110);
          local_4._0_1_ = 4;
          if (puStack_400 == (undefined4 *)0x0) {
            puStack_400 = (uint *)0x0;
          }
          else {
            puStack_400 = thunk_FUN_1002ceb0(puStack_400);
          }
          local_4._0_1_ = 2;
          if (puStack_3dc != (undefined4 *)0x0) {
            do {
              puVar16 = puStack_400;
              if (uStack_408 <= uVar12) break;
              puStack_3f8 = (undefined4 *)((int)puStack_3f8 + 1);
              if ((*(byte *)(puStack_404 + 0x82) & 6) == 0) {
                mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&uStack_3c0,4);
                mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&uStack_3bc,4);
                iVar4 = uVar12 + 8;
                if (uStack_3bc < puVar16[1]) {
                  puVar16[1] = uStack_3bc;
                }
                *puVar16 = uStack_3bc;
                if (uStack_3bc < uStack_3c0) {
                  *puVar16 = uStack_3c0;
                }
                puVar16[1] = uStack_3c0;
              }
              else {
                mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)puStack_400,local_3f0);
                iVar4 = uVar12 + local_3f0;
              }
              mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)abStack_358,1);
              uVar12 = iVar4 + 1;
              if (abStack_358[0] != 0) {
                pbVar10 = abStack_358;
                uStack_3fc = uVar12;
                do {
                  pbVar10 = pbVar10 + 1;
                  mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)pbVar10,1);
                  uVar12 = uVar12 + 1;
                } while (*pbVar10 != 0);
              }
              uStack_3fc = uVar12;
              if ((*(byte *)((int)this + 0x58) & 1) != 0) {
                if (pCStack_3f4 == (LPSTR)0x0) {
LAB_10004863:
                  abStack_254[0] = 0;
                }
                else {
                  uVar12 = 0xffffffff;
                  pCVar17 = pCStack_3f4;
                  do {
                    pCVar18 = pCVar17;
                    if (uVar12 == 0) break;
                    uVar12 = uVar12 - 1;
                    pCVar18 = pCVar17 + 1;
                    cVar1 = *pCVar17;
                    pCVar17 = pCVar18;
                  } while (cVar1 != '\0');
                  uVar12 = ~uVar12;
                  pbVar10 = (byte *)(pCVar18 + -uVar12);
                  pbVar15 = abStack_254;
                  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *(undefined4 *)pbVar15 = *(undefined4 *)pbVar10;
                    pbVar10 = pbVar10 + 4;
                    pbVar15 = pbVar15 + 4;
                  }
                  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *pbVar15 = *pbVar10;
                    pbVar10 = pbVar10 + 1;
                    pbVar15 = pbVar15 + 1;
                  }
                  pcVar9 = _strrchr((char *)abStack_254,0x5c);
                  if (pcVar9 == (char *)0x0) goto LAB_10004863;
                  pcVar9[1] = '\0';
                }
                pbVar10 = (byte *)_strrchr((char *)abStack_358,0x5c);
                if (pbVar10 == (byte *)0x0) {
LAB_100048c5:
                  pbVar10 = abStack_358;
                }
                else {
                  pbVar19 = &DAT_10069988;
                  pbVar15 = abStack_254;
                  do {
                    bVar2 = *pbVar15;
                    bVar21 = bVar2 < *pbVar19;
                    if (bVar2 != *pbVar19) {
LAB_100048b1:
                      iVar4 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                      goto LAB_100048b6;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar15[1];
                    bVar21 = bVar2 < pbVar19[1];
                    if (bVar2 != pbVar19[1]) goto LAB_100048b1;
                    pbVar15 = pbVar15 + 2;
                    pbVar19 = pbVar19 + 2;
                  } while (bVar2 != 0);
                  iVar4 = 0;
LAB_100048b6:
                  if (iVar4 == 0) goto LAB_100048c5;
                }
                uVar12 = 0xffffffff;
                do {
                  pbVar15 = pbVar10;
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  pbVar15 = pbVar10 + 1;
                  bVar2 = *pbVar10;
                  pbVar10 = pbVar15;
                } while (bVar2 != 0);
                uVar12 = ~uVar12;
                iVar4 = -1;
                pbVar10 = abStack_254;
                do {
                  pbVar19 = pbVar10;
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  pbVar19 = pbVar10 + 1;
                  bVar2 = *pbVar10;
                  pbVar10 = pbVar19;
                } while (bVar2 != 0);
                pbVar10 = pbVar15 + -uVar12;
                pbVar15 = pbVar19 + -1;
                for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pbVar15 = *(undefined4 *)pbVar10;
                  pbVar10 = pbVar10 + 4;
                  pbVar15 = pbVar15 + 4;
                }
                for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pbVar15 = *pbVar10;
                  pbVar10 = pbVar10 + 1;
                  pbVar15 = pbVar15 + 1;
                }
                uVar12 = 0xffffffff;
                pbVar10 = abStack_254;
                do {
                  pbVar15 = pbVar10;
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  pbVar15 = pbVar10 + 1;
                  bVar2 = *pbVar10;
                  pbVar10 = pbVar15;
                } while (bVar2 != 0);
                uVar12 = ~uVar12;
                pbVar10 = pbVar15 + -uVar12;
                pbVar15 = abStack_358;
                for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pbVar15 = *(undefined4 *)pbVar10;
                  pbVar10 = pbVar10 + 4;
                  pbVar15 = pbVar15 + 4;
                }
                for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pbVar15 = *pbVar10;
                  pbVar10 = pbVar10 + 1;
                  pbVar15 = pbVar15 + 1;
                }
              }
              uVar12 = 0xffffffff;
              pbVar10 = abStack_358;
              do {
                pbVar15 = pbVar10;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pbVar15 = pbVar10 + 1;
                bVar2 = *pbVar10;
                pbVar10 = pbVar15;
              } while (bVar2 != 0);
              uVar12 = ~uVar12;
              puVar16 = (uint *)(pbVar15 + -uVar12);
              puVar20 = puStack_400 + 3;
              for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar20 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar20 = puVar20 + 1;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(byte *)puVar20 = (byte)*puVar16;
                puVar16 = (uint *)((int)puVar16 + 1);
                puVar20 = (uint *)((int)puVar20 + 1);
              }
              pbVar10 = (byte *)thunk_FUN_1002d430((int)puStack_404);
              uVar12 = thunk_FUN_10021240(pbVar10);
              if ((char)uVar12 == '\0') {
                thunk_FUN_1002d100(puStack_404,puStack_400);
              }
              uVar12 = uStack_3fc;
            } while (puStack_3f8 < puStack_3dc);
          }
          FUN_1004249a((undefined *)puStack_400);
          if (3 < uStack_408 - uVar12) {
            mmioRead(*(HMMIO *)((int)this + 0xa48),(HPSTR)&uStack_3c8,4);
            puStack_404[0x86] = uStack_3c8;
          }
          puVar8 = puStack_404;
          (**(code **)(*(int *)this + 0xd8))(puStack_404);
          if (puVar8 != (undefined4 *)0x0) {
            (**(code **)*puVar8)(1);
          }
          thunk_FUN_100204e0();
        }
      }
      LVar11 = mmioSeek(*(HMMIO *)((int)this + 0xa48),-4,1);
      puVar8 = local_418;
      if (LVar11 == -1) {
        local_4._0_1_ = 1;
        if (local_418 != (undefined4 *)0x0) {
          local_418 = (undefined4 *)local_418[1];
          if (local_418 == (undefined4 *)0x0) {
            local_414 = (undefined4 *)0x0;
            local_418 = (undefined4 *)0x0;
          }
          else {
            *local_418 = 0;
          }
          iVar4 = puVar8[2];
          FUN_1004249a((undefined *)puVar8);
          local_40c = local_40c + -1;
          while (iVar4 != 0) {
            iVar4 = thunk_FUN_10005c00(&local_418);
          }
        }
        local_4 = (uint)local_4._1_3_ << 8;
        thunk_FUN_1001cd30((int)local_3b8);
        local_4 = 0xffffffff;
        thunk_FUN_1001cbd0((undefined4 *)local_390);
        iVar4 = 8;
      }
      else {
        iVar4 = thunk_FUN_10020360(this,*(uint *)((int)this + 0xa48));
        if (iVar4 == 0) {
          mmioClose(*(HMMIO *)((int)this + 0xa48),0);
          DAT_100b4a08 = DAT_100b4a08 + -1;
          *(undefined4 *)((int)this + 0xa48) = 0;
          while (puVar8 = local_418, local_418 != (undefined4 *)0x0) {
            local_418 = (undefined4 *)local_418[1];
            if (local_418 == (undefined4 *)0x0) {
              local_414 = (undefined4 *)0x0;
              local_418 = (undefined4 *)0x0;
            }
            else {
              *local_418 = 0;
            }
            puVar3 = (undefined4 *)puVar8[2];
            FUN_1004249a((undefined *)puVar8);
            local_40c = local_40c + -1;
            if (puVar3 == (undefined4 *)0x0) break;
            thunk_FUN_10023e10(this,(int)puVar3);
            (**(code **)*puVar3)(1);
          }
          thunk_FUN_10005770(this);
          iVar4 = *(int *)((int)this + 0x218);
          *(int *)((int)this + 0x220) = iVar4;
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 8);
          }
          iStack_3e4 = 0;
          if (iVar4 != 0) {
            while( true ) {
              uVar12 = *(uint *)(iVar4 + 8);
              if (uVar12 <= *(uint *)(iVar4 + 0xc)) {
                do {
                  iVar5 = thunk_FUN_1001d780((void *)((int)this + 0x60),&iStack_3e4,uVar12);
                  if (iVar5 == 0) {
                    *(int *)(iStack_3e4 + 0x458) = iVar4;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 <= *(uint *)(iVar4 + 0xc));
              }
              if (*(int *)((int)this + 0x220) == 0) break;
              iVar4 = *(int *)(*(int *)((int)this + 0x220) + 4);
              *(int *)((int)this + 0x220) = iVar4;
              if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 8), iVar4 == 0)) break;
            }
          }
          puVar8 = local_418;
          local_4._0_1_ = 1;
          if (local_418 != (undefined4 *)0x0) {
            local_418 = (undefined4 *)local_418[1];
            if (local_418 == (undefined4 *)0x0) {
              local_414 = (undefined4 *)0x0;
              local_418 = (undefined4 *)0x0;
            }
            else {
              *local_418 = 0;
            }
            iVar4 = puVar8[2];
            FUN_1004249a((undefined *)puVar8);
            puVar8 = local_418;
            while ((local_40c = local_40c + -1, local_418 = puVar8, iVar4 != 0 &&
                   (puVar8 != (undefined4 *)0x0))) {
              local_418 = (undefined4 *)puVar8[1];
              if (local_418 == (undefined4 *)0x0) {
                local_414 = (undefined4 *)0x0;
                local_418 = (undefined4 *)0x0;
              }
              else {
                *local_418 = 0;
              }
              iVar4 = puVar8[2];
              FUN_1004249a((undefined *)puVar8);
              puVar8 = local_418;
            }
          }
          local_4 = (uint)local_4._1_3_ << 8;
          thunk_FUN_1001cd30((int)local_3b8);
          local_4 = 0xffffffff;
          thunk_FUN_1001cbd0((undefined4 *)local_390);
          iVar4 = 0;
        }
        else {
          mmioClose(*(HMMIO *)((int)this + 0xa48),0);
          puVar8 = local_418;
          DAT_100b4a08 = DAT_100b4a08 + -1;
          *(undefined4 *)((int)this + 0xa48) = 0;
          local_4._0_1_ = 1;
          pCVar17 = pCStack_3f4;
          for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar17[0] = '\0';
            pCVar17[1] = '\0';
            pCVar17[2] = '\0';
            pCVar17[3] = '\0';
            pCVar17 = pCVar17 + 4;
          }
          if (local_418 != (undefined4 *)0x0) {
            local_418 = (undefined4 *)local_418[1];
            if (local_418 == (undefined4 *)0x0) {
              local_414 = (undefined4 *)0x0;
              local_418 = (undefined4 *)0x0;
            }
            else {
              *local_418 = 0;
            }
            iVar4 = puVar8[2];
            FUN_1004249a((undefined *)puVar8);
            puVar8 = local_418;
            while ((local_40c = local_40c + -1, local_418 = puVar8, iVar4 != 0 &&
                   (puVar8 != (undefined4 *)0x0))) {
              local_418 = (undefined4 *)puVar8[1];
              if (local_418 == (undefined4 *)0x0) {
                local_414 = (undefined4 *)0x0;
                local_418 = (undefined4 *)0x0;
              }
              else {
                *local_418 = 0;
              }
              iVar4 = puVar8[2];
              FUN_1004249a((undefined *)puVar8);
              puVar8 = local_418;
            }
          }
          local_4 = (uint)local_4._1_3_ << 8;
          thunk_FUN_1001cd30((int)local_3b8);
          local_4 = 0xffffffff;
          thunk_FUN_1001cbd0((undefined4 *)local_390);
          iVar4 = 0x12;
        }
      }
    }
  }
  else {
    local_4._0_1_ = 1;
    if (local_418 != (undefined4 *)0x0) {
      local_418 = (undefined4 *)local_418[1];
      if (local_418 == (undefined4 *)0x0) {
        local_414 = (undefined4 *)0x0;
        local_418 = (undefined4 *)0x0;
      }
      else {
        *local_418 = 0;
      }
      iVar5 = puVar8[2];
      FUN_1004249a((undefined *)puVar8);
      local_40c = local_40c + -1;
      while (iVar5 != 0) {
        iVar5 = thunk_FUN_10005c00(&local_418);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    thunk_FUN_1001cd30((int)local_3b8);
    local_4 = 0xffffffff;
    thunk_FUN_1001cbd0((undefined4 *)local_390);
  }
  ExceptionList = pvStack_c;
  return iVar4;
}

