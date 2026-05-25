/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044b9c0 @ 0x0044B9C0 */


void FUN_0044b9c0(void)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  DWORD DVar10;
  DWORD DVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  char *pcVar19;
  byte *pbVar20;
  char *pcVar21;
  undefined4 *unaff_FS_OFFSET;
  bool bVar22;
  int iStack_b34;
  undefined4 *puStack_b30;
  int local_b2c;
  int iStack_b0c;
  undefined1 local_ac4 [4];
  int *local_ac0;
  undefined4 auStack_80c [512];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7951;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00473ab0();
  iVar16 = 0;
  local_4 = 0;
  FUN_00473ab0();
  local_4._0_1_ = 1;
  FUN_00474ae0();
  local_4 = CONCAT31(local_4._1_3_,2);
  local_b2c = 0;
  bVar5 = true;
  FUN_00474dd0(800,600,0,1,0,0);
  FUN_00475840(s_creditsbckgrd_pcx_004d21cc,0,0,0x100,1);
  FUN_00473c60(local_ac4,0,0,800,600,1,0);
  FUN_00475840(s_bink64_pcx_004d21c0,0,0,0x100,1);
  if (local_ac0 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*local_ac0 + 0xdc))();
    if (local_ac0 != (int *)0x0) {
      uVar7 = (**(code **)(*local_ac0 + 0xd8))();
      goto LAB_0044babc;
    }
  }
  uVar7 = 0;
LAB_0044babc:
  FUN_00473c60(local_ac4,0,0,uVar7,uVar6,1,1);
  FUN_00474cb0();
  iVar8 = FUN_00487e70(s_CREDITS_txt_004d21ac,s_CREDITS_004d21b8);
  if (iVar8 == 0) {
    pcVar9 = (char *)FUN_00487e90();
    if (*pcVar9 != '#') {
      puVar17 = auStack_80c;
      do {
        uVar14 = 0xffffffff;
        pcVar9 = DAT_0083b164;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        pcVar9 = _malloc(~uVar14);
        *puVar17 = pcVar9;
        if (pcVar9 != (char *)0x0) {
          uVar14 = 0xffffffff;
          iVar16 = iVar16 + 1;
          puVar17 = puVar17 + 1;
          pcVar19 = DAT_0083b164;
          do {
            pcVar21 = pcVar19;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar21 = pcVar19 + 1;
            cVar2 = *pcVar19;
            pcVar19 = pcVar21;
          } while (cVar2 != '\0');
          uVar14 = ~uVar14;
          pcVar19 = pcVar21 + -uVar14;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar9 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar9 = pcVar9 + 1;
          }
        }
        pcVar9 = (char *)FUN_00487e90();
        local_b2c = iVar16;
      } while (*pcVar9 != '#');
    }
    FUN_00487e60();
    FUN_004762d0(&DAT_00821020,0,0,0);
    FUN_00476310(0x80007fff,0xffffffff,2,2);
    DVar10 = timeGetTime();
    iVar16 = DAT_0082102c;
    if (-1 < DAT_00821028) {
      iVar16 = DAT_00821030 + DAT_00821028;
    }
    FUN_00483d30();
    if (local_b2c != 0) {
      iVar8 = iVar16 * local_b2c + 0x96;
      do {
        DVar11 = timeGetTime();
        iVar18 = 600 - (DVar11 - DVar10) / 0x1e;
        FUN_00473e60(&DAT_00519cd4,0,0,0);
        iStack_b34 = 0;
        if (-iVar8 != iVar18 && iVar8 <= -iVar18) {
          bVar5 = false;
        }
        if (iVar18 < 600) {
          puStack_b30 = auStack_80c;
          do {
            if (local_b2c <= iStack_b34) break;
            pbVar4 = (byte *)*puStack_b30;
            if (*pbVar4 == 0) {
LAB_0044bcbf:
              if (pbVar4 != (byte *)0x0) {
                uVar14 = 0xffffffff;
                pbVar12 = pbVar4;
                do {
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  bVar3 = *pbVar12;
                  pbVar12 = pbVar12 + 1;
                } while (bVar3 != 0);
                FUN_00477c30(pbVar4,0x32,iVar18,~uVar14 - 1);
              }
            }
            else {
              pbVar20 = &DAT_004d21a4;
              pbVar12 = pbVar4;
              do {
                bVar3 = *pbVar12;
                bVar22 = bVar3 < *pbVar20;
                if (bVar3 != *pbVar20) {
LAB_0044bc80:
                  iVar13 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                  goto LAB_0044bc85;
                }
                if (bVar3 == 0) break;
                bVar3 = pbVar12[1];
                bVar22 = bVar3 < pbVar20[1];
                if (bVar3 != pbVar20[1]) goto LAB_0044bc80;
                pbVar12 = pbVar12 + 2;
                pbVar20 = pbVar20 + 2;
              } while (bVar3 != 0);
              iVar13 = 0;
LAB_0044bc85:
              if (iVar13 != 0) goto LAB_0044bcbf;
              FUN_00473df0(&DAT_00519cd4,(800 - iStack_b0c) / 2,iVar18,0);
            }
            iVar18 = iVar18 + iVar16;
            iStack_b34 = iStack_b34 + 1;
            puStack_b30 = puStack_b30 + 1;
            FUN_0045c030();
          } while (iVar18 < 600);
        }
        if ((DAT_00822d68 != 0) || (iVar18 = FUN_0045ae70(), iVar18 != 0)) {
          bVar5 = false;
        }
        FUN_00480c80(0);
        FUN_0045bf80(1,0);
      } while (bVar5);
      puVar17 = auStack_80c + local_b2c;
      do {
        piVar1 = puVar17 + -1;
        puVar17 = puVar17 + -1;
        if (*piVar1 != 0) {
          FUN_004a5007(*piVar1);
        }
        local_b2c = local_b2c + -1;
      } while (local_b2c != 0);
    }
  }
  FUN_00473ae0();
  FUN_00473ae0();
  local_4._0_1_ = 1;
  FUN_00474c40();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00473ae0();
  local_4 = 0xffffffff;
  FUN_00473ae0();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

