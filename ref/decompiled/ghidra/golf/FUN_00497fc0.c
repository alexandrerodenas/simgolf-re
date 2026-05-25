/* Ghidra decompiled: golf.exe */
/* Function: FUN_00497fc0 @ 0x00497FC0 */


undefined4
FUN_00497fc0(undefined4 param_1,undefined4 param_2,HANDLE param_3,undefined4 param_4,DWORD param_5)

{
  size_t _Size;
  char cVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  DWORD *pDVar5;
  DWORD DVar6;
  DWORD DVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int extraout_ECX;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  ushort *puVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 *unaff_FS_OFFSET;
  undefined **in_stack_000000d4;
  undefined4 in_stack_000014e0;
  undefined4 in_stack_000021e8;
  undefined4 *in_stack_000021f8;
  uint in_stack_000021fc;
  int in_stack_00002200;
  ushort in_stack_00002204;
  uint in_stack_00002208;
  ushort *local_c;
  undefined1 *local_8;
  int iStack_4;
  
  iStack_4 = -1;
  local_c = (ushort *)*unaff_FS_OFFSET;
  local_8 = &LAB_004b880f;
  *unaff_FS_OFFSET = &local_c;
  FUN_004a6070();
  FUN_0048ce00();
  param_3 = *(HANDLE *)(extraout_ECX + 0x14);
  param_4 = *(undefined4 *)(extraout_ECX + 0x18);
  if (DAT_008400b0 == (int *)0x0) {
    in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
  else if (((int)in_stack_000021fc < 0) || (*(int *)(extraout_ECX + 0x700) < (int)in_stack_000021fc)
          ) {
    in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
    if (((in_stack_00002204 & 0xfff0) == 0) &&
       (((*(byte *)(extraout_ECX + 0xe8) & 1) != 0 || ((in_stack_00002208 & 4) != 0)))) {
      iVar3 = *(int *)(extraout_ECX + 0x77c);
      if (in_stack_00002200 == iVar3) {
        FUN_004a4b60(in_stack_000021f8,in_stack_000021fc,iVar3,0,0xffffffff);
      }
      else if ((in_stack_00002200 != 0) ||
              (FUN_004a4b60(in_stack_000021f8,in_stack_000021fc,iVar3,0,0xffffffff),
              1 < *(int *)(extraout_ECX + 0x6f8))) goto LAB_0049819c;
LAB_00498479:
      uVar10 = *(undefined4 *)(extraout_ECX + 0xf4);
      in_stack_000000d4 = &PTR_FUN_004bb3f8;
      FUN_0048d480();
      FUN_004928d0();
      FUN_00491500();
      FUN_00489370();
      FUN_004805a0();
      FUN_00489b30();
      FUN_00489b30();
      DAT_00839650 = in_stack_000014e0;
      FUN_00473ae0();
      FUN_00491410();
      FUN_00491410();
      FUN_00474810();
      FUN_004805a0();
      goto LAB_00499124;
    }
LAB_0049819c:
    _Size = in_stack_000021fc + 0xc;
    local_c = _malloc(_Size);
    if (local_c == (ushort *)0x0) {
      in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
      local_8 = (undefined1 *)(in_stack_00002208 & 1);
      if (local_8 == (undefined1 *)0x0) {
        local_c[2] = 0;
        local_c[3] = 0;
      }
      else {
        iVar3 = *(int *)(extraout_ECX + 0xf4) + 1;
        *(int *)(extraout_ECX + 0xf4) = iVar3;
        *(int *)(local_c + 2) = iVar3;
      }
      if (in_stack_000021f8 != (undefined4 *)0x0) {
        puVar16 = local_c + 4;
        for (uVar11 = in_stack_000021fc >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)puVar16 = *in_stack_000021f8;
          in_stack_000021f8 = in_stack_000021f8 + 1;
          puVar16 = puVar16 + 2;
        }
        for (uVar11 = in_stack_000021fc & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar16 = *(undefined1 *)in_stack_000021f8;
          in_stack_000021f8 = (undefined4 *)((int)in_stack_000021f8 + 1);
          puVar16 = (ushort *)((int)puVar16 + 1);
        }
      }
      if ((local_8 == (undefined1 *)0x0) || ((*(uint *)(extraout_ECX + 0xe8) & 0x10000000) != 0)) {
        *local_c = in_stack_00002204;
        if (DAT_008400b0 == (int *)0x0) {
          FUN_004a5007(local_c);
          in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
          iVar3 = (**(code **)(*DAT_008400b0 + 0x68))
                            (DAT_008400b0,*(undefined4 *)(extraout_ECX + 0x77c),in_stack_00002200,
                             local_8 != (undefined1 *)0x0,local_c,_Size);
          if (iVar3 == 0) goto LAB_0049846c;
          FUN_004a5007(local_c);
          in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
        piVar12 = (int *)(extraout_ECX + 0x178);
        *local_c = in_stack_00002204 | 4;
        iVar3 = 0x10;
        piVar4 = piVar12;
        do {
          *piVar4 = 0;
          piVar4 = piVar4 + 0x16;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        DAT_0083ff6c = extraout_ECX + 0x170;
        if (DAT_008400b0 != (int *)0x0) {
          (**(code **)(*DAT_008400b0 + 0x28))(DAT_008400b0,in_stack_00002200,0,&LAB_00497f60,0,0);
          param_1 = 0xffffffff;
          iVar3 = 0;
          do {
            if (*piVar12 != 0) {
              *(undefined4 *)(&stack0x00000054 + iVar3 * 4) = 1;
              DVar6 = *(DWORD *)(extraout_ECX + 0x17c + iVar3 * 0x58);
              *(DWORD *)(&stack0x00000094 + iVar3 * 4) = DVar6;
              pcVar2 = timeGetTime_exref;
              if (DVar6 != 0xffffffff) {
                param_1 = DVar6;
              }
              goto joined_r0x004985e5;
            }
            iVar3 = iVar3 + 1;
            piVar12 = piVar12 + 0x16;
          } while (iVar3 < 0x10);
LAB_0049846c:
          FUN_004a5007(local_c);
          goto LAB_00498479;
        }
        FUN_004a5007(local_c);
        in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
  goto LAB_004990ff;
joined_r0x004985e5:
  do {
    timeGetTime_exref = pcVar2;
    if (DAT_008400b0 == (int *)0x0) {
      FUN_004a5007(local_c);
      in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
      goto LAB_004990ff;
    }
    param_5 = timeGetTime();
    puVar16 = local_c;
    pDVar5 = (DWORD *)&stack0x00000018;
    iVar3 = 0xf;
    do {
      *pDVar5 = param_5;
      pDVar5 = pDVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (**(code **)(*DAT_008400b0 + 0x68))
                      (DAT_008400b0,*(undefined4 *)(extraout_ECX + 0x77c),in_stack_00002200,0,
                       local_c,_Size);
    if (iVar3 != 0) {
      FUN_004a5007(puVar16);
      in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
      goto LAB_004990ff;
    }
    DVar6 = timeGetTime();
    DVar7 = timeGetTime();
    uVar11 = DVar7 - DVar6;
    while (uVar11 < 20000) {
      ResetEvent(*(HANDLE *)(extraout_ECX + 0x18));
      ResetEvent(*(HANDLE *)(extraout_ECX + 0x14));
      DVar7 = WaitForMultipleObjects(2,&param_3,0,param_1);
      if (DVar7 == 1) {
        FUN_0049b7b0();
      }
      local_8 = (undefined1 *)(*pcVar2)();
      iStack_4 = 0;
      puVar15 = (uint *)(extraout_ECX + 0x17c);
      iVar3 = 0;
      do {
        if (*(int *)(&stack0x00000054 + iVar3) != 0) {
          if (puVar15[-3] == 0) {
            *(undefined4 *)(&stack0x00000054 + iVar3) = 0;
          }
          else if (puVar15[-1] == 0) {
            DVar7 = timeGetTime();
            uVar11 = *puVar15;
            *(undefined4 *)(&stack0x00000054 + iVar3) = 0;
            *puVar15 = DVar7 + 0x14 + (uVar11 - *(int *)((int)&param_5 + iVar3)) >> 1;
          }
          else {
            if (*(uint *)(&stack0x00000094 + iVar3) <
                (uint)((int)local_8 - *(int *)((int)&param_5 + iVar3))) {
              *(uint *)(&stack0x00000094 + iVar3) = *(uint *)(&stack0x00000094 + iVar3) * 3 >> 1;
              if (DAT_008400b0 == (int *)0x0) {
                FUN_004a5007(local_c);
                in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
                goto LAB_004990ff;
              }
              DVar7 = timeGetTime();
              *(DWORD *)((int)&param_5 + iVar3) = DVar7;
              iVar8 = (**(code **)(*DAT_008400b0 + 0x68))
                                (DAT_008400b0,*(undefined4 *)(extraout_ECX + 0x77c),puVar15[-3],0,
                                 local_c,_Size);
              if (iVar8 != 0) {
                MessageBoxA((HWND)0x0,s_Oh_no___Send_failed__004e47b0,
                            s_Message_from_the_Net_Underworld_004e47c8,0);
                FUN_004a5007(local_c);
                in_stack_000000d4 = &PTR_FUN_004bb3f8;
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
                goto LAB_004990ff;
              }
            }
            iStack_4 = 1;
          }
        }
        iVar3 = iVar3 + 4;
        puVar15 = puVar15 + 0x16;
      } while (iVar3 < 0x40);
      if (iStack_4 == 0) goto LAB_0049846c;
      DVar7 = timeGetTime();
      pcVar2 = timeGetTime_exref;
      uVar11 = DVar7 - DVar6;
    }
    DAT_0083c340._0_1_ = 0;
    iStack_4 = 1;
    puVar14 = (undefined4 *)(extraout_ECX + 0x170);
    local_8 = (undefined1 *)0x10;
    do {
      if (puVar14[2] != 0) {
        pcVar9 = (char *)FUN_0049aa30(*puVar14);
        uVar11 = 0xffffffff;
        do {
          pcVar18 = pcVar9;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar18 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar18;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        iVar3 = -1;
        pcVar9 = (char *)&DAT_0083c340;
        do {
          pcVar17 = pcVar9;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar17 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar17;
        } while (cVar1 != '\0');
        pcVar9 = pcVar18 + -uVar11;
        pcVar18 = pcVar17 + -1;
        for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar18 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar18 = pcVar18 + 1;
        }
        if (iStack_4 == 0) {
          uVar11 = 0xffffffff;
          pcVar9 = &DAT_004c52b8;
          do {
            pcVar18 = pcVar9;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar18 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar18;
          } while (cVar1 != '\0');
          uVar11 = ~uVar11;
          iVar3 = -1;
          pcVar9 = (char *)&DAT_0083c340;
          do {
            pcVar17 = pcVar9;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar17 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar17;
          } while (cVar1 != '\0');
          pcVar9 = pcVar18 + -uVar11;
          pcVar18 = pcVar17 + -1;
          for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar18 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar18 = pcVar18 + 1;
          }
          uVar11 = 0xffffffff;
          pcVar9 = &DAT_004c3f70;
          do {
            pcVar18 = pcVar9;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar18 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar18;
          } while (cVar1 != '\0');
          uVar11 = ~uVar11;
          iVar3 = -1;
          pcVar9 = (char *)&DAT_0083c340;
          do {
            pcVar17 = pcVar9;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar17 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar17;
          } while (cVar1 != '\0');
          pcVar9 = pcVar18 + -uVar11;
          pcVar18 = pcVar17 + -1;
          for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar18 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
        iStack_4 = 0;
      }
      puVar14 = puVar14 + 0x16;
      local_8 = local_8 + -1;
    } while (local_8 != (undefined1 *)0x0);
    uVar11 = 0xffffffff;
    pcVar9 = &DAT_004c4944;
    do {
      pcVar18 = pcVar9;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar18 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar18;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar3 = -1;
    pcVar9 = (char *)&DAT_0083c340;
    do {
      pcVar17 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar17 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar17;
    } while (cVar1 != '\0');
    pcVar9 = pcVar18 + -uVar11;
    pcVar18 = pcVar17 + -1;
    for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar18 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar18 = pcVar18 + 1;
    }
    FUN_00494cb0(0,&DAT_0083c340,0xffffffff,0xffffffff);
    FUN_0048e1c0(s_jackal_004e4680,s_NET_SENDTIMEDOUT_004e47e8,0xffffffff,0,0,0);
    iVar3 = FUN_0048e900(0,0);
    pcVar2 = timeGetTime_exref;
  } while (iVar3 == 0);
  if (iVar3 == 1) {
    FUN_00497d10();
  }
  else if (iVar3 == 2) {
    DAT_0083afcc = 1;
  }
  FUN_004a5007(local_c);
  in_stack_000000d4 = &PTR_FUN_004bb3f8;
  FUN_0048d480();
  FUN_004928d0();
  FUN_00491500();
  FUN_00489370();
  FUN_004805a0();
  FUN_00489b30();
  FUN_00489b30();
  DAT_00839650 = in_stack_000014e0;
  FUN_00473ae0();
  FUN_00491410();
  FUN_00491410();
LAB_004990ff:
  FUN_00474810();
  FUN_004805a0();
  uVar10 = 0;
LAB_00499124:
  *unaff_FS_OFFSET = in_stack_000021e8;
  return uVar10;
}

