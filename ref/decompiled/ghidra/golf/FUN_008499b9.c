/* Ghidra decompiled: golf.exe */
/* Function: FUN_008499b9 @ 0x008499B9 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00849ae4) overlaps instruction at (ram,0x00849ae3)
    */
/* WARNING: Removing unreachable block (ram,0x00849bb4) */
/* WARNING: Removing unreachable block (ram,0x00849bbc) */
/* WARNING: Removing unreachable block (ram,0x00849be1) */
/* WARNING: Removing unreachable block (ram,0x00849be0) */
/* WARNING: Removing unreachable block (ram,0x00849cf3) */
/* WARNING: Removing unreachable block (ram,0x00849cf7) */
/* WARNING: Removing unreachable block (ram,0x00849cf9) */
/* WARNING: Removing unreachable block (ram,0x00849cfb) */
/* WARNING: Removing unreachable block (ram,0x00849cac) */
/* WARNING: Removing unreachable block (ram,0x00849c1b) */
/* WARNING: Removing unreachable block (ram,0x00849c8b) */
/* WARNING: Removing unreachable block (ram,0x00849c8f) */
/* WARNING: Removing unreachable block (ram,0x00849bb0) */
/* WARNING: Removing unreachable block (ram,0x00849ae5) */
/* WARNING: Removing unreachable block (ram,0x00849b20) */
/* WARNING: Removing unreachable block (ram,0x00849b28) */
/* WARNING: Removing unreachable block (ram,0x00849b08) */
/* WARNING: Removing unreachable block (ram,0x00849cb7) */
/* WARNING: Removing unreachable block (ram,0x00849d49) */
/* WARNING: Removing unreachable block (ram,0x00849d53) */
/* WARNING: Removing unreachable block (ram,0x00849b70) */
/* WARNING: Removing unreachable block (ram,0x00849bdd) */
/* WARNING: Removing unreachable block (ram,0x00849b44) */
/* WARNING: Removing unreachable block (ram,0x00849ccd) */
/* WARNING: Removing unreachable block (ram,0x00849d27) */
/* WARNING: Removing unreachable block (ram,0x00849c66) */
/* WARNING: Removing unreachable block (ram,0x00849c4a) */
/* WARNING: Removing unreachable block (ram,0x00849aee) */
/* WARNING: Removing unreachable block (ram,0x00849af0) */
/* WARNING: Removing unreachable block (ram,0x00849cde) */
/* WARNING: Removing unreachable block (ram,0x00849ce7) */
/* WARNING: Removing unreachable block (ram,0x00849d0a) */
/* WARNING: Removing unreachable block (ram,0x00849d13) */

undefined2 FUN_008499b9(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  byte *pbVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  int unaff_EBX;
  undefined4 *puVar16;
  uint unaff_ESI;
  byte *unaff_EDI;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined4 uStack_158;
  undefined4 uStack_154;
  
  puVar16 = (undefined4 *)&stack0xfffffffc;
  iVar4 = *param_3;
  uStack_154 = 0;
  uStack_158 = param_1;
  iVar9 = (**(code **)(iVar4 + 0x28))();
  if (iVar9 == -1) {
    uVar10 = (**(code **)(iVar4 + 0x78))();
    FUN_0084b182(param_3,uVar10);
    uVar8 = 0;
  }
  else {
    while( true ) {
      uVar10 = (**(code **)(puVar16[-0x4a] + 0x24))(puVar16[2],puVar16[3],0);
      puVar16[-0x4f] = uVar10;
      if ((uint)puVar16[-0x4c] <= (uint)puVar16[-0x4f]) break;
      uVar23 = (**(code **)(puVar16[-0x4a] + 0x14))
                         (puVar16[2],puVar16[-0x4e],0x121,puVar16 + -0x4d,0);
      if ((int)uVar23 == 0) {
        uVar10 = (**(code **)(puVar16[-0x4a] + 0x78))();
        FUN_0084aeb3(puVar16[4],uVar10);
        *(undefined2 *)(puVar16 + -0x4b) = 0;
        break;
      }
      iVar4 = puVar16[-0x4d] - 0x121;
      if ((uint)puVar16[-0x4d] < 0x121) {
        *(undefined2 *)(puVar16 + -0x4b) = 1;
        break;
      }
      puVar16[-0x50] = 0x11;
      puVar16[-0x50] = 0;
      do {
        uVar15 = (uint)((ulonglong)uVar23 >> 0x20);
        pbVar11 = (byte *)uVar23;
        uVar5 = (longlong)(int)puVar16[-0x4f] * 0x13c6a5;
        uVar13 = (uint)uVar5;
        bVar17 = (longlong)(int)uVar13 != uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
        if ((iVar4 != 0 && bVar17 == iVar4 < 0) && (iVar4 == 0 || bVar17 != iVar4 < 0)) {
          pbVar2 = unaff_EDI + 0x729090f6;
          bVar7 = (byte)uVar5 & 7;
          puRam8b000000 = &uStack_158;
          *pbVar2 = *pbVar2 << bVar7 | *pbVar2 >> 8 - bVar7;
          bVar19 = (uVar5 & 0x1f) != 0;
          pbVar11 = pbVar11 + -0x197cc987 +
                    -(uint)(!bVar19 && bVar17 || bVar19 && (*pbVar2 & 1) != 0);
        }
        bVar18 = 0x27bcf212 < uVar13;
        bVar21 = SCARRY4(uVar13,-0x27bcf213);
        pcVar14 = (char *)(uVar13 + 0xd8430ded);
        bVar17 = (int)pcVar14 < 0;
        bVar20 = pcVar14 == (char *)0x0;
        bVar22 = (POPCOUNT((uint)pcVar14 & 0xff) & 1U) == 0;
        bVar19 = bVar22;
        if (!bVar22) goto code_r0x00849b62;
        bVar19 = true;
        if (bVar22) goto code_r0x00849b62;
        *unaff_EDI = *unaff_EDI - bVar18;
        bVar7 = (byte)pbVar11;
        bVar18 = CARRY1(*pbVar11,bVar7);
        bVar21 = SCARRY1(*pbVar11,bVar7);
        *pbVar11 = *pbVar11 + bVar7;
        bVar17 = (char)*pbVar11 < '\0';
        bVar20 = *pbVar11 == 0;
        bVar19 = (POPCOUNT(*pbVar11) & 1U) == 0;
        do {
          if (!bVar18) break;
code_r0x00849b62:
        } while (!bVar18);
        iVar4 = iRam87000000;
        puVar16[-0x4f] = pcVar14;
        if (!bVar18 && !bVar20) {
          if (bVar20) goto code_r0x00849b98;
          if (!bVar19) goto code_r0x00849b98;
          if (bVar18) {
            pcVar12 = (char *)(uVar15 + 0x19);
            cVar3 = *pcVar12;
            *pcVar12 = *pcVar12 >> 0x13;
            bVar18 = (cVar3 >> 0x12 & 1U) != 0;
            bVar17 = *pcVar12 < '\0';
            bVar19 = (POPCOUNT(*pcVar12) & 1U) == 0;
            unaff_EBX = iVar4;
          }
        }
        while (!bVar19) {
code_r0x00849b98:
          if ((bVar21 != bVar17) && (bVar21 == bVar17)) {
            pbVar2 = (byte *)(unaff_EBX + 0x10eac1d1);
            *pbVar2 = *pbVar2 >> 5 | *pbVar2 << 3;
            puVar1 = (uint *)((int)puVar16 + 0x25);
            *puVar1 = *puVar1 & unaff_ESI;
            bVar17 = *puVar1 == 0;
            bVar19 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
            bVar18 = false;
            goto code_r0x00849bd7;
          }
          if (((!bVar19) || (bVar19)) || (!bVar18)) break;
        }
        pbVar11 = (byte *)0x0;
        uVar15 = (uint)pcVar14 >> 0x10;
        bVar18 = ((uint)pcVar14 >> 0xf & 1) != 0;
        bVar17 = uVar15 == 0;
        bVar19 = (POPCOUNT(uVar15 & 0xff) & 1U) == 0;
        while (!bVar18 && !bVar17) {
code_r0x00849bd7:
          if ((!bVar18 && !bVar17) || (bVar19)) break;
        }
        bVar17 = false;
        bVar22 = false;
        pcVar12 = (char *)((uint)pbVar11 ^ uVar15 & 0xff);
        bVar18 = (int)pcVar12 < 0;
        bVar19 = pcVar12 == (char *)0x0;
        bVar7 = (byte)pcVar14;
        if ((int)pcVar12 < 1) goto code_r0x00849c09;
        bVar17 = false;
        bVar22 = false;
        if ((int)pcVar12 < 1) {
          *pcVar12 = *pcVar12 + (char)pcVar12;
          pbVar2 = (byte *)(pcVar12 + -0x78097870);
          bVar17 = CARRY1(*pbVar2,bVar7);
          bVar22 = SCARRY1(*pbVar2,bVar7);
          *pbVar2 = *pbVar2 + bVar7;
          bVar18 = (char)*pbVar2 < '\0';
          bVar19 = *pbVar2 == 0;
          pcVar12 = (char *)CONCAT22((short)((uint)pbVar11 >> 0x10),
                                     CONCAT11((char)((ushort)pcVar12 %
                                                    (ushort)*(byte *)(uVar13 + 0xd8430e06)),
                                              (char)((ushort)pcVar12 /
                                                    (ushort)*(byte *)(uVar13 + 0xd8430e06))));
        }
        while ((!bVar17 && !bVar19 && (bVar22 != bVar18))) {
code_r0x00849c09:
          if ((bVar22 != bVar18) || ((bVar22 == bVar18 || (!bVar22)))) break;
        }
        bVar19 = ((uint)pcVar14 >> 7 & 1) != 0;
        bVar17 = (uint)pcVar14 >> 8 == 0;
        bVar6 = (byte)pcVar12;
        if (bVar19 || bVar17) goto code_r0x00849c3e;
        if (bVar22 != false) goto code_r0x00849c3e;
        if (!bVar19 && !bVar17) goto code_r0x00849c3e;
        *pcVar14 = *pcVar14 - bVar19;
        bVar22 = SCARRY1(*pcVar12,bVar6);
        *pcVar12 = *pcVar12 + bVar6;
        do {
          if (!bVar22) break;
code_r0x00849c3e:
        } while (!bVar22);
        pbVar11 = (byte *)(puVar16[-0x4e] + puVar16[-0x50]);
        bVar18 = false;
        bVar7 = bVar6 ^ (byte)((uint)pcVar14 >> 8) ^ (byte)((uint)pcVar14 >> 0x18) ^ bVar7 ^
                *pbVar11;
        pcVar14 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),bVar7);
        bVar19 = (char)bVar7 < '\0';
        bVar17 = (POPCOUNT(bVar7) & 1U) == 0;
        if (!bVar17) goto code_r0x00849d3d;
        if (bVar17) goto code_r0x00849d3d;
        *pcVar14 = *pcVar14 + bVar7;
        pbVar11 = unaff_EDI + -0x742d7413;
        bVar18 = SCARRY1(*pbVar11,bVar7);
        *pbVar11 = *pbVar11 + bVar7;
        bVar19 = (char)*pbVar11 < '\0';
        puVar16 = (undefined4 *)*puVar16;
        pbVar11 = unaff_EDI;
        do {
          if (bVar18 != bVar19) break;
code_r0x00849d3d:
        } while (bVar18 != bVar19);
        *pbVar11 = bVar7;
        puVar16[-0x50] = puVar16[-0x50] + 1;
        uVar13 = puVar16[-0x50];
        uVar23 = CONCAT44(pbVar11,uVar13);
        iVar4 = uVar13 - puVar16[-0x4d];
      } while (uVar13 < (uint)puVar16[-0x4d]);
      if ((*(int *)puVar16[-0x4e] != 1) || (*(int *)(puVar16[-0x4e] + 4) != 0)) {
        *(undefined2 *)(puVar16 + -0x4b) = 0;
        break;
      }
      if (*(int *)(puVar16[-0x4e] + 8) == puVar16[5]) {
        uVar8 = FUN_00849de9(puVar16[2],puVar16[-0x4e],puVar16[4],puVar16[6],puVar16[7]);
        *(undefined2 *)(puVar16 + -0x4b) = uVar8;
        if ((puVar16[-0x4b] & 0xffff) == 0) break;
      }
      puVar16[3] = puVar16[3] + *(int *)(puVar16[-0x4e] + 0x10) + *(int *)(puVar16[-0x4e] + 0xc);
    }
    uVar8 = *(undefined2 *)(puVar16 + -0x4b);
  }
  return uVar8;
}

