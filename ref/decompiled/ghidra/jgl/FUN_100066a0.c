/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100066a0 @ 0x100066A0 */


undefined4 __thiscall FUN_100066a0(void *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  byte bVar13;
  undefined4 *puVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  byte *pbStack_400;
  int iStack_3fc;
  uint uStack_3f8;
  int iStack_3f4;
  undefined4 local_3f0 [5];
  undefined4 uStack_3dc;
  undefined2 uStack_3d8;
  undefined2 uStack_3d6;
  short sStack_3d4;
  short sStack_3d2;
  undefined2 uStack_3d0;
  undefined2 uStack_3ce;
  undefined1 uStack_39c;
  undefined1 uStack_39b;
  undefined2 uStack_39a;
  undefined2 uStack_398;
  undefined2 uStack_396;
  undefined2 uStack_394;
  char acStack_35d [81];
  undefined1 uStack_30c;
  byte abStack_30b [767];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005247b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10001000(local_3f0);
  uVar9 = 0xffffffff;
  do {
    pcVar3 = param_1;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  acStack_35d[1] = 0;
  iVar10 = -1;
  pcVar16 = acStack_35d + 1;
  do {
    pcVar15 = pcVar16;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar15 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar15;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + -uVar9;
  pcVar16 = pcVar15 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar16 = pcVar16 + 4;
  }
  local_4 = 0;
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar16 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar16 = pcVar16 + 1;
  }
  pcVar3 = acStack_35d;
  uVar9 = 0xffffffff;
  do {
    pcVar3 = pcVar3 + 1;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
  } while (*pcVar3 != '\0');
  pcVar3 = acStack_35d + ~uVar9;
  if (acStack_35d + 1 < pcVar3) {
    do {
      if (*pcVar3 == '.') goto LAB_10006747;
      pcVar3 = pcVar3 + -1;
    } while (acStack_35d + 1 < pcVar3);
  }
  if (*pcVar3 == '.') {
LAB_10006747:
    *pcVar3 = '\0';
    uVar9 = 0xffffffff;
    pcVar3 = &DAT_100550b0;
    do {
      pcVar16 = pcVar3;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar16 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar16;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    iVar10 = -1;
    pcVar3 = acStack_35d + 1;
    do {
      pcVar15 = pcVar3;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar15 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar15;
    } while (cVar1 != '\0');
    pcVar3 = pcVar16 + -uVar9;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar16 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar16 = pcVar16 + 1;
    }
  }
  iStack_3fc = (**(code **)(*(int *)this + 0x18))();
  if (iStack_3fc == 0) {
    local_4 = 0xffffffff;
    FUN_10001040(local_3f0);
    uVar4 = 7;
  }
  else {
    iVar17 = 1;
    iVar10 = (**(code **)(*(int *)this + 0xdc))();
    iVar5 = (**(code **)(*(int *)this + 0xd8))();
    puVar6 = (undefined4 *)FUN_10001050(local_3f0,acStack_35d + 1,iVar10 * iVar5 * 2 + 0x80,iVar17);
    if (puVar6 == (undefined4 *)0x0) {
      (**(code **)(*(int *)this + 0x24))(1);
      local_4 = 0xffffffff;
      FUN_10001040(local_3f0);
      uVar4 = 4;
    }
    else {
      uStack_3dc._0_1_ = 10;
      uStack_3dc._1_1_ = 5;
      uStack_3dc._2_1_ = 1;
      uStack_3dc._3_1_ = 8;
      uStack_3d8 = 0;
      uStack_3d6 = 0;
      sStack_3d4 = (**(code **)(*(int *)this + 0xd8))();
      sStack_3d4 = sStack_3d4 + -1;
      sStack_3d2 = (**(code **)(*(int *)this + 0xdc))();
      sStack_3d2 = sStack_3d2 + -1;
      uStack_3d0 = 0;
      uStack_3ce = 0;
      uStack_39c = 0;
      uStack_39b = 1;
      uStack_39a = (**(code **)(*(int *)this + 0xe0))();
      uStack_398 = 0;
      uStack_396 = 0;
      uStack_394 = 0;
      pbVar7 = (byte *)(puVar6 + 0x20);
      puVar14 = &uStack_3dc;
      for (iVar10 = 0x20; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar6 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar6 = puVar6 + 1;
      }
      iStack_3f4 = (**(code **)(*(int *)this + 0xdc))();
      pbStack_400 = pbVar7;
      if (0 < iStack_3f4) {
        do {
          uVar9 = 0;
          iVar10 = (**(code **)(*(int *)this + 0xe0))();
          if (iVar10 != 0) {
            do {
              bVar13 = 1;
              uVar11 = uVar9 + 1;
              bVar2 = *(byte *)(uVar9 + iStack_3fc);
              uStack_3f8 = 1;
              iVar10 = (**(code **)(*(int *)this + 0xe0))();
              if (uVar11 < iVar10 - 1U) {
                do {
                  if ((bVar2 != *(byte *)(uVar11 + iStack_3fc)) || (0x3e < bVar13)) break;
                  bVar13 = bVar13 + 1;
                  uStack_3f8 = (uint)bVar13;
                  uVar11 = bVar13 + uVar9;
                  iVar10 = (**(code **)(*(int *)this + 0xe0))();
                } while (uVar11 < iVar10 - 1U);
                if (bVar13 < 2) goto LAB_10006a26;
LAB_10006932:
                *pbStack_400 = bVar13 | 0xc0;
                pbStack_400 = pbStack_400 + 1;
              }
              else {
LAB_10006a26:
                if (0x3f < *(byte *)(uVar9 + iStack_3fc)) goto LAB_10006932;
              }
              *pbStack_400 = bVar2;
              pbVar7 = pbStack_400 + 1;
              uVar9 = uVar9 + uStack_3f8;
              uVar11 = (**(code **)(*(int *)this + 0xe0))();
              pbStack_400 = pbVar7;
            } while (uVar9 < uVar11);
          }
          iVar10 = (**(code **)(*(int *)this + 0xe0))();
          iStack_3fc = iStack_3fc + iVar10;
          iStack_3f4 = iStack_3f4 + -1;
        } while (iStack_3f4 != 0);
      }
      *pbVar7 = 0xc;
      piVar12 = *(int **)((int)this + 0x7c);
      pbVar7 = pbVar7 + 1;
      if (((piVar12 != (int *)0x0) || (piVar12 = *(int **)(DAT_10057d9c + 4), piVar12 != (int *)0x0)
          ) && (iVar10 = (**(code **)(*piVar12 + 0x10))(&uStack_30c,0,0x100), iVar10 == 0)) {
        iVar10 = 0x100;
        pbVar8 = abStack_30b;
        do {
          *pbVar7 = pbVar8[-1];
          pbVar7[1] = *pbVar8;
          pbVar7[2] = pbVar8[1];
          pbVar7 = pbVar7 + 3;
          iVar10 = iVar10 + -1;
          pbVar8 = pbVar8 + 3;
        } while (iVar10 != 0);
      }
      (**(code **)(*(int *)this + 0x24))(1);
      FUN_100011c0(local_3f0,pbVar7);
      local_4 = 0xffffffff;
      FUN_10001040(local_3f0);
      uVar4 = 0;
    }
  }
  ExceptionList = pvStack_c;
  return uVar4;
}

