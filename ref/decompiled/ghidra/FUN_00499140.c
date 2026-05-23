/* Ghidra decompiled: golf.exe */
/* Function: FUN_00499140 @ 0x00499140 */
/* Body size: 6382 addresses */


undefined4 FUN_00499140(void)

{
  char cVar1;
  bool bVar2;
  DWORD DVar3;
  DWORD DVar4;
  char *pcVar5;
  uint *puVar6;
  DWORD *pDVar7;
  undefined4 uVar8;
  int extraout_ECX;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  code *pcVar15;
  ushort *puVar16;
  char *pcVar17;
  char *pcVar18;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  HANDLE in_stack_00000010;
  undefined4 in_stack_00000014;
  DWORD in_stack_00000018;
  undefined **in_stack_000000d8;
  int in_stack_000014bc;
  undefined4 in_stack_000014e4;
  int in_stack_000014ec;
  undefined4 in_stack_00001514;
  int in_stack_000021ec;
  undefined4 *in_stack_000021fc;
  uint in_stack_00002200;
  uint in_stack_00002204;
  ushort in_stack_00002208;
  uint in_stack_0000220c;
  DWORD *local_c;
  ushort *local_8;
  DWORD DStack_4;
  
  DStack_4 = 0xffffffff;
  local_c = (DWORD *)*unaff_FS_OFFSET;
  local_8 = (ushort *)&LAB_004b8e40;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a6070();
  FUN_0048ce00();
  in_stack_00000010 = *(HANDLE *)(extraout_ECX + 0x14);
  in_stack_00000014 = *(undefined4 *)(extraout_ECX + 0x18);
  if (DAT_008400b0 == (int *)0x0) {
    in_stack_000000d8 = &PTR_FUN_004bb3f8;
    FUN_0048d480();
    FUN_004928d0();
    FUN_00491500();
    FUN_00489370();
    FUN_004805a0();
    FUN_00489c90();
    FUN_00489c90();
    FUN_00473ae0();
    FUN_00491410();
    FUN_00491410();
  }
  else if (((int)in_stack_00002200 < 0) || (*(int *)(extraout_ECX + 8) < (int)in_stack_00002200)) {
    in_stack_000000d8 = &PTR_FUN_004bb3f8;
    FUN_0048d480();
    FUN_004928d0();
    FUN_00491500();
    FUN_00489370();
    FUN_004805a0();
    FUN_00489c90();
    FUN_00489c90();
    FUN_00473ae0();
    FUN_00491410();
    FUN_00491410();
  }
  else {
    FUN_0049ab40();
    if (((in_stack_00002208 & 0xfff0) == 0) && ((in_stack_0000220c & 4) != 0)) {
      if (in_stack_00002204 == *(uint *)(extraout_ECX + 0x77c)) {
        FUN_004a4b60();
      }
      else if ((in_stack_00002204 != 0) || (FUN_004a4b60(), 1 < *(int *)(extraout_ECX + 0x6f8)))
      goto LAB_0049930a;
LAB_00499a62:
      uVar8 = *(undefined4 *)(extraout_ECX + 0xf4);
      in_stack_000000d8 = &PTR_FUN_004bb3f8;
      FUN_0048d480();
      FUN_004928d0();
      FUN_00491500();
      FUN_00489370();
      FUN_004805a0();
      local_c = (DWORD *)&stack0x00001510;
      *(undefined ***)(&stack0x000014ec + *(int *)(in_stack_000014ec + 4)) = &PTR_LAB_004bb228;
      FUN_004026a0();
      FUN_00401c70();
      local_c = (DWORD *)&stack0x000014e0;
      *(undefined ***)(&stack0x000014bc + *(int *)(in_stack_000014bc + 4)) = &PTR_LAB_004bb228;
      FUN_004026a0();
      FUN_00401c70();
      DAT_00839650 = in_stack_000014e4;
      FUN_00473ae0();
      local_c = (DWORD *)&stack0x00000d84;
      FUN_004a14c0();
      FUN_00488650();
      local_c = (DWORD *)&stack0x000006b4;
      FUN_004a14c0();
      FUN_00488650();
      FUN_00474810();
      FUN_004805a0();
      goto LAB_0049aa13;
    }
LAB_0049930a:
    local_8 = _malloc(in_stack_00002200 + 0xc);
    if (local_8 == (ushort *)0x0) {
      in_stack_000000d8 = &PTR_FUN_004bb3f8;
      FUN_0048d480();
      FUN_004928d0();
      FUN_00491500();
      FUN_00489370();
      FUN_004805a0();
      FUN_00489c90();
      FUN_00489c90();
      FUN_00473ae0();
      FUN_00491410();
      FUN_00491410();
    }
    else {
      if ((in_stack_0000220c & 1) == 0) {
        local_8[2] = 0;
        local_8[3] = 0;
      }
      else {
        iVar9 = *(int *)(extraout_ECX + 0xf4) + 1;
        *(int *)(extraout_ECX + 0xf4) = iVar9;
        *(int *)(local_8 + 2) = iVar9;
      }
      if (in_stack_000021fc != (undefined4 *)0x0) {
        puVar16 = local_8 + 4;
        for (uVar10 = in_stack_00002200 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)puVar16 = *in_stack_000021fc;
          in_stack_000021fc = in_stack_000021fc + 1;
          puVar16 = puVar16 + 2;
        }
        for (uVar10 = in_stack_00002200 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar16 = *(undefined1 *)in_stack_000021fc;
          in_stack_000021fc = (undefined4 *)((int)in_stack_000021fc + 1);
          puVar16 = (ushort *)((int)puVar16 + 1);
        }
      }
      if (((in_stack_0000220c & 1) == 0) || ((*(uint *)(extraout_ECX + 0xe8) & 0x10000000) != 0)) {
        *local_8 = in_stack_00002208;
        if (DAT_008400b0 == (int *)0x0) {
          FUN_004a5007();
          in_stack_000000d8 = &PTR_FUN_004bb3f8;
          FUN_0048d480();
          FUN_004928d0();
          FUN_00491500();
          FUN_00489370();
          FUN_004805a0();
          FUN_00489c90();
          FUN_00489c90();
          FUN_00473ae0();
          FUN_00491410();
          FUN_00491410();
        }
        else {
          iVar9 = (**(code **)(*DAT_008400b0 + 0x68))();
          if (iVar9 == 0) goto LAB_00499a55;
          FUN_004a5007();
          in_stack_000000d8 = &PTR_FUN_004bb3f8;
          FUN_0048d480();
          FUN_004928d0();
          FUN_00491500();
          FUN_00489370();
          FUN_004805a0();
          FUN_00489c90();
          FUN_00489c90();
          FUN_00473ae0();
          FUN_00491410();
          FUN_00491410();
        }
      }
      else {
        *local_8 = in_stack_00002208 | 4;
        if (in_stack_00002204 == 0) {
          uVar10 = 0xffffffff;
          bVar2 = false;
          puVar6 = (uint *)(extraout_ECX + 0x17c);
          iVar9 = 0;
          do {
            if (((puVar6[-3] == 0) || (puVar6[-3] == *(uint *)(extraout_ECX + 0x77c))) ||
               (((puVar6[2] & 2) == 0 && ((in_stack_00002208 & 0x10) == 0)))) {
              puVar6[-1] = 0;
              *(undefined4 *)(&stack0x00000098 + iVar9) = 0;
            }
            else {
              puVar6[-1] = 1;
              uVar11 = *puVar6;
              *(undefined4 *)(&stack0x00000098 + iVar9) = 1;
              *(uint *)(&stack0x00000058 + iVar9) = uVar11;
              bVar2 = true;
              if (uVar11 < uVar10) {
                uVar10 = uVar11;
              }
            }
            iVar9 = iVar9 + 4;
            puVar6 = puVar6 + 0x16;
          } while (iVar9 < 0x40);
          if (!bVar2) goto LAB_00499a55;
          do {
            if (DAT_008400b0 == (int *)0x0) {
              FUN_004a5007();
              in_stack_000000d8 = &PTR_FUN_004bb3f8;
              FUN_0048d480();
              FUN_004928d0();
              FUN_00491500();
              FUN_00489370();
              FUN_004805a0();
              FUN_00489c90();
              FUN_00489c90();
              FUN_00473ae0();
              FUN_00491410();
              FUN_00491410();
              goto LAB_0049a9ee;
            }
            in_stack_00000018 = timeGetTime();
            pDVar7 = (DWORD *)&stack0x0000001c;
            iVar9 = 0xf;
            do {
              *pDVar7 = in_stack_00000018;
              pDVar7 = pDVar7 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            iVar9 = (**(code **)(*DAT_008400b0 + 0x68))();
            if (iVar9 != 0) {
              MessageBoxA((HWND)0x0,s_Oh_no___Send_failed__004e47b0,
                          s_Message_from_the_Net_Underworld_004e47c8,0);
              FUN_004a5007();
              in_stack_000000d8 = &PTR_FUN_004bb3f8;
              FUN_0048d480();
              FUN_004928d0();
              FUN_00491500();
              FUN_00489370();
              FUN_004805a0();
              FUN_00489c90();
              FUN_00489c90();
              FUN_00473ae0();
              FUN_00491410();
              FUN_00491410();
              goto LAB_0049a9ee;
            }
            DVar3 = timeGetTime();
            DVar4 = timeGetTime();
            uVar11 = DVar4 - DVar3;
            while (uVar11 < 20000) {
              ResetEvent(*(HANDLE *)(extraout_ECX + 0x18));
              ResetEvent(*(HANDLE *)(extraout_ECX + 0x14));
              DVar4 = WaitForMultipleObjects(2,&stack0x00000010,0,uVar10);
              if (DVar4 == 1) {
                FUN_0049b7b0();
              }
              DStack_4 = timeGetTime();
              iVar9 = 0;
              local_c = (DWORD *)0x0;
              puVar6 = (uint *)(extraout_ECX + 0x17c);
              do {
                if (*(int *)(&stack0x00000098 + iVar9) != 0) {
                  if (puVar6[-3] == 0) {
                    *(undefined4 *)(&stack0x00000098 + iVar9) = 0;
                  }
                  else if (puVar6[-1] == 0) {
                    DVar4 = timeGetTime();
                    uVar11 = *puVar6;
                    *(undefined4 *)(&stack0x00000098 + iVar9) = 0;
                    *puVar6 = DVar4 + 0x14 + (uVar11 - *(int *)((int)&stack0x00000018 + iVar9)) >> 1
                    ;
                  }
                  else {
                    if (*(uint *)(&stack0x00000058 + iVar9) <
                        DStack_4 - *(int *)((int)&stack0x00000018 + iVar9)) {
                      *(uint *)(&stack0x00000058 + iVar9) =
                           *(uint *)(&stack0x00000058 + iVar9) * 3 >> 1;
                      if (DAT_008400b0 == (int *)0x0) {
                        FUN_004a5007();
                        in_stack_000000d8 = &PTR_FUN_004bb3f8;
                        FUN_0048d480();
                        FUN_004928d0();
                        FUN_00491500();
                        FUN_00489370();
                        FUN_004805a0();
                        FUN_00489b30();
                        DAT_00839650 = in_stack_00001514;
                        FUN_00489c90();
                        FUN_00473ae0();
                        FUN_00491410();
                        FUN_00491410();
                        goto LAB_0049a9ee;
                      }
                      DVar4 = timeGetTime();
                      *(DWORD *)((int)&stack0x00000018 + iVar9) = DVar4;
                      iVar13 = (**(code **)(*DAT_008400b0 + 0x68))();
                      if (iVar13 != 0) {
                        MessageBoxA((HWND)0x0,s_Oh_no___Send_failed__004e47b0,
                                    s_Message_from_the_Net_Underworld_004e47c8,0);
                        FUN_004a5007();
                        in_stack_000000d8 = &PTR_FUN_004bb3f8;
                        FUN_0048d480();
                        FUN_004928d0();
                        FUN_00491500();
                        FUN_00489370();
                        FUN_004805a0();
                        FUN_00489b30();
                        DAT_00839650 = in_stack_00001514;
                        FUN_00489c90();
                        FUN_00473ae0();
                        FUN_00491410();
                        FUN_00491410();
                        goto LAB_0049a9ee;
                      }
                    }
                    local_c = (DWORD *)0x1;
                  }
                }
                iVar9 = iVar9 + 4;
                puVar6 = puVar6 + 0x16;
              } while (iVar9 < 0x40);
              if (local_c == (DWORD *)0x0) goto LAB_00499a55;
              DVar4 = timeGetTime();
              uVar11 = DVar4 - DVar3;
            }
            DAT_0083c340._0_1_ = 0;
            local_c = (DWORD *)0x1;
            iVar9 = extraout_ECX + 0x170;
            DStack_4 = 0x10;
            do {
              if (*(int *)(iVar9 + 8) != 0) {
                pcVar5 = (char *)FUN_0049aa30();
                uVar11 = 0xffffffff;
                do {
                  pcVar18 = pcVar5;
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  pcVar18 = pcVar5 + 1;
                  cVar1 = *pcVar5;
                  pcVar5 = pcVar18;
                } while (cVar1 != '\0');
                uVar11 = ~uVar11;
                iVar13 = -1;
                pcVar5 = (char *)&DAT_0083c340;
                do {
                  pcVar17 = pcVar5;
                  if (iVar13 == 0) break;
                  iVar13 = iVar13 + -1;
                  pcVar17 = pcVar5 + 1;
                  cVar1 = *pcVar5;
                  pcVar5 = pcVar17;
                } while (cVar1 != '\0');
                pcVar5 = pcVar18 + -uVar11;
                pcVar18 = pcVar17 + -1;
                for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
                  pcVar5 = pcVar5 + 4;
                  pcVar18 = pcVar18 + 4;
                }
                for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pcVar18 = *pcVar5;
                  pcVar5 = pcVar5 + 1;
                  pcVar18 = pcVar18 + 1;
                }
                if (local_c == (DWORD *)0x0) {
                  uVar11 = 0xffffffff;
                  pcVar5 = &DAT_004c52b8;
                  do {
                    pcVar18 = pcVar5;
                    if (uVar11 == 0) break;
                    uVar11 = uVar11 - 1;
                    pcVar18 = pcVar5 + 1;
                    cVar1 = *pcVar5;
                    pcVar5 = pcVar18;
                  } while (cVar1 != '\0');
                  uVar11 = ~uVar11;
                  iVar13 = -1;
                  pcVar5 = (char *)&DAT_0083c340;
                  do {
                    pcVar17 = pcVar5;
                    if (iVar13 == 0) break;
                    iVar13 = iVar13 + -1;
                    pcVar17 = pcVar5 + 1;
                    cVar1 = *pcVar5;
                    pcVar5 = pcVar17;
                  } while (cVar1 != '\0');
                  pcVar5 = pcVar18 + -uVar11;
                  pcVar18 = pcVar17 + -1;
                  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
                    pcVar5 = pcVar5 + 4;
                    pcVar18 = pcVar18 + 4;
                  }
                  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                    *pcVar18 = *pcVar5;
                    pcVar5 = pcVar5 + 1;
                    pcVar18 = pcVar18 + 1;
                  }
                  uVar11 = 0xffffffff;
                  pcVar5 = &DAT_004c3f70;
                  do {
                    pcVar18 = pcVar5;
                    if (uVar11 == 0) break;
                    uVar11 = uVar11 - 1;
                    pcVar18 = pcVar5 + 1;
                    cVar1 = *pcVar5;
                    pcVar5 = pcVar18;
                  } while (cVar1 != '\0');
                  uVar11 = ~uVar11;
                  iVar13 = -1;
                  pcVar5 = (char *)&DAT_0083c340;
                  do {
                    pcVar17 = pcVar5;
                    if (iVar13 == 0) break;
                    iVar13 = iVar13 + -1;
                    pcVar17 = pcVar5 + 1;
                    cVar1 = *pcVar5;
                    pcVar5 = pcVar17;
                  } while (cVar1 != '\0');
                  pcVar5 = pcVar18 + -uVar11;
                  pcVar18 = pcVar17 + -1;
                  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
                    pcVar5 = pcVar5 + 4;
                    pcVar18 = pcVar18 + 4;
                  }
                  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                    *pcVar18 = *pcVar5;
                    pcVar5 = pcVar5 + 1;
                    pcVar18 = pcVar18 + 1;
                  }
                }
                local_c = (DWORD *)0x0;
              }
              iVar9 = iVar9 + 0x58;
              DStack_4 = DStack_4 - 1;
            } while (DStack_4 != 0);
            uVar11 = 0xffffffff;
            pcVar5 = &DAT_004c4944;
            do {
              pcVar18 = pcVar5;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar18 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar18;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            iVar9 = -1;
            pcVar5 = (char *)&DAT_0083c340;
            do {
              pcVar17 = pcVar5;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar5 = pcVar18 + -uVar11;
            pcVar18 = pcVar17 + -1;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar18 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar18 = pcVar18 + 1;
            }
            FUN_00494cb0();
            FUN_0048e1c0();
            iVar9 = FUN_0048e900();
          } while (iVar9 == 0);
          if (iVar9 == 1) {
            FUN_00497d10();
          }
          else if (iVar9 == 2) {
            DAT_0083afcc = 1;
          }
          MessageBoxA((HWND)0x0,s_Oh_no___Send_failed_after_many_t_004e47fc,
                      s_Message_from_the_Net_Underworld_004e47c8,0);
          FUN_004a5007();
          in_stack_000000d8 = &PTR_FUN_004bb3f8;
          FUN_0048d480();
          FUN_004928d0();
          FUN_00491500();
          FUN_00489370();
          FUN_004805a0();
          FUN_00489b30();
          FUN_00489b30();
          DAT_00839650 = in_stack_000014e4;
          FUN_00473ae0();
          local_c = (DWORD *)&stack0x00000d84;
          FUN_004a14c0();
          FUN_00488650();
          local_c = (DWORD *)&stack0x000006b4;
          FUN_004a14c0();
          FUN_00488650();
        }
        else {
          uVar10 = 0xffffffff;
          bVar2 = false;
          iVar9 = 0;
          puVar14 = (uint *)&stack0x00000058;
          puVar6 = (uint *)(extraout_ECX + 0x17c);
          do {
            if ((puVar6[-3] == in_stack_00002204) &&
               (((puVar6[2] & 2) != 0 || ((in_stack_00002208 & 0x10) != 0)))) {
              bVar2 = true;
              *puVar14 = *puVar6;
              puVar6[-1] = 1;
              unaff_retaddr = iVar9;
              if (*puVar6 < uVar10) {
                uVar10 = *puVar6;
              }
            }
            else {
              puVar6[-1] = 0;
            }
            iVar9 = iVar9 + 1;
            puVar14 = puVar14 + 1;
            puVar6 = puVar6 + 0x16;
          } while (iVar9 < 0x10);
          if (!bVar2) {
LAB_00499a55:
            FUN_004a5007();
            goto LAB_00499a62;
          }
          local_c = &stack0x00000018 + unaff_retaddr;
          DVar3 = timeGetTime();
          (&stack0x00000018)[unaff_retaddr] = DVar3;
          iVar9 = (**(code **)(*DAT_008400b0 + 0x68))();
          pcVar15 = ResetEvent_exref;
          while (ResetEvent_exref = pcVar15, iVar9 == 0) {
            DVar3 = timeGetTime();
            DVar4 = timeGetTime();
            pDVar7 = local_c;
            if (DVar4 - DVar3 < 20000) {
              DStack_4 = extraout_ECX + unaff_retaddr * 0x58;
              do {
                (*pcVar15)();
                (*pcVar15)();
                DVar4 = WaitForMultipleObjects(2,&stack0x00000010,0,uVar10);
                if (DVar4 == 1) {
                  FUN_0049b7b0();
                }
                if ((*(int *)(DStack_4 + 0x178) == 0) || (*(int *)(DStack_4 + 0x170) == 0)) {
                  puVar6 = (uint *)(extraout_ECX + 0x17c + unaff_retaddr * 0x58);
                  DVar3 = timeGetTime();
                  *puVar6 = DVar3 + 0x14 + (*puVar6 - *pDVar7) >> 1;
                  goto LAB_00499a55;
                }
                uVar11 = *(uint *)(&stack0x00000058 + unaff_retaddr * 4);
                DVar4 = timeGetTime();
                if (uVar11 < DVar4 - *pDVar7) {
                  *(uint *)(&stack0x00000058 + unaff_retaddr * 4) = uVar11 * 3 >> 1;
                  if (DAT_008400b0 == (int *)0x0) {
                    FUN_004a5007();
                    in_stack_000000d8 = &PTR_FUN_004bb3f8;
                    FUN_0048d480();
                    FUN_004928d0();
                    FUN_00491500();
                    FUN_00489370();
                    FUN_004805a0();
                    FUN_00489c90();
                    FUN_00489c90();
                    FUN_00473ae0();
                    FUN_00491410();
                    FUN_00491410();
                    goto LAB_0049a9ee;
                  }
                  DVar4 = timeGetTime();
                  *pDVar7 = DVar4;
                  iVar9 = (**(code **)(*DAT_008400b0 + 0x68))();
                  if (iVar9 != 0) {
                    MessageBoxA((HWND)0x0,s_Oh_no___Send_failed__004e47b0,
                                s_Message_from_the_Net_Underworld_004e47c8,0);
                    FUN_004a5007();
                    in_stack_000000d8 = &PTR_FUN_004bb3f8;
                    FUN_0048d480();
                    FUN_004928d0();
                    FUN_00491500();
                    FUN_00489370();
                    FUN_004805a0();
                    FUN_00489c90();
                    FUN_00489c90();
                    FUN_00473ae0();
                    FUN_00491410();
                    FUN_00491410();
                    goto LAB_0049a9ee;
                  }
                }
                DVar4 = timeGetTime();
                pcVar15 = ResetEvent_exref;
              } while (DVar4 - DVar3 < 20000);
            }
            DAT_0083c340._0_1_ = 0;
            pcVar5 = (char *)FUN_0049aa30();
            uVar11 = 0xffffffff;
            do {
              pcVar18 = pcVar5;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar18 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar18;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            iVar9 = -1;
            pcVar5 = (char *)&DAT_0083c340;
            do {
              pcVar17 = pcVar5;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar5 = pcVar18 + -uVar11;
            pcVar18 = pcVar17 + -1;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar18 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar18 = pcVar18 + 1;
            }
            uVar11 = 0xffffffff;
            pcVar5 = &DAT_004c4944;
            do {
              pcVar18 = pcVar5;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar18 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar18;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            iVar9 = -1;
            pcVar5 = (char *)&DAT_0083c340;
            do {
              pcVar17 = pcVar5;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar5 = pcVar18 + -uVar11;
            pcVar18 = pcVar17 + -1;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar18 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar18 = pcVar18 + 1;
            }
            FUN_00494cb0();
            FUN_0048e1c0();
            iVar9 = FUN_0048e900();
            if (iVar9 != 0) {
              if (iVar9 == 1) {
                FUN_00497d10();
              }
              else if (iVar9 == 2) {
                DAT_0083afcc = 1;
              }
              FUN_004a5007();
              in_stack_000000d8 = &PTR_FUN_004bb3f8;
              FUN_0048d480();
              FUN_004928d0();
              FUN_00491500();
              FUN_00489370();
              FUN_004805a0();
              FUN_00489c90();
              FUN_00489c90();
              FUN_00473ae0();
              FUN_00491410();
              FUN_00491410();
              goto LAB_0049a9ee;
            }
            DVar3 = timeGetTime();
            *local_c = DVar3;
            iVar9 = (**(code **)(*DAT_008400b0 + 0x68))();
            pcVar15 = ResetEvent_exref;
          }
          MessageBoxA((HWND)0x0,s_Oh_no___Send_failed__004e47b0,
                      s_Message_from_the_Net_Underworld_004e47c8,0);
          FUN_004a5007();
          in_stack_000000d8 = &PTR_FUN_004bb3f8;
          FUN_0048d480();
          FUN_004928d0();
          FUN_00491500();
          FUN_00489370();
          FUN_004805a0();
          FUN_00489c90();
          FUN_00489c90();
          FUN_00473ae0();
          FUN_00491410();
          FUN_00491410();
        }
      }
    }
  }
LAB_0049a9ee:
  FUN_00474810();
  FUN_004805a0();
  uVar8 = 0;
LAB_0049aa13:
  *unaff_FS_OFFSET = in_stack_000021ec;
  return uVar8;
}

