/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040ad60 @ 0x0040AD60 */


undefined4 FUN_0040ad60(void)

{
  char cVar1;
  HANDLE pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int *piVar11;
  int local_14c;
  int local_148;
  int local_144;
  _WIN32_FIND_DATAA local_140;
  
  pvVar2 = FindFirstFileA(&DAT_004c52ac,&local_140);
  if (pvVar2 == (HANDLE)0xffffffff) {
    piVar6 = &DAT_00541d60;
    puVar9 = &DAT_00541ce0;
    for (iVar4 = 0x186; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    local_148 = 9;
    local_14c = 0x32a;
    local_144 = 900;
    iVar4 = 0x1c20;
    do {
      uVar3 = FUN_0045c1e0(800);
      piVar6[2] = (uVar3 & 0xffff) + iVar4;
      uVar3 = FUN_0045c1e0(100);
      *piVar6 = (uVar3 & 0xffff) + local_144;
      uVar3 = FUN_0045c1e0(0x5a);
      piVar6[1] = (uVar3 & 0xffff) + local_14c;
      uVar3 = 0xffffffff;
      *(short *)((int)piVar6 + 0x16) =
           (short)((ulonglong)((longlong)local_148 * 0x55555556) >> 0x20) -
           (short)((longlong)local_148 * 0x55555556 >> 0x3f);
      piVar6[6] = -1;
      pcVar7 = &DAT_004c52a0;
      do {
        pcVar10 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar10 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar10;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar7 = pcVar10 + -uVar3;
      pcVar10 = (char *)&DAT_0051a068;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar10 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar10 = pcVar10 + 1;
      }
      cVar1 = FUN_0045c1e0(0x1a);
      DAT_0051a068._0_1_ = (char)DAT_0051a068 + cVar1;
      cVar1 = FUN_0045c1e0(0x18);
      DAT_0051a068._2_1_ = DAT_0051a068._2_1_ + cVar1;
      uVar3 = 0xffffffff;
      pcVar7 = (char *)&DAT_0051a068;
      do {
        pcVar10 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar10 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar10;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      piVar8 = (int *)(pcVar10 + -uVar3);
      piVar11 = piVar6 + -0x20;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar11 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar11 = piVar11 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)piVar11 = (char)*piVar8;
        piVar8 = (int *)((int)piVar8 + 1);
        piVar11 = (int *)((int)piVar11 + 1);
      }
      uVar3 = 0xffffffff;
      pcVar7 = s_Harbour_Lights_GC_004c528c;
      do {
        pcVar10 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar10 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar10;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      piVar8 = (int *)(pcVar10 + -uVar3);
      piVar11 = piVar6 + -0x10;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar11 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar11 = piVar11 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)piVar11 = (char)*piVar8;
        piVar8 = (int *)((int)piVar8 + 1);
        piVar11 = (int *)((int)piVar11 + 1);
      }
      iVar4 = iVar4 + -800;
      local_144 = local_144 + -100;
      local_14c = local_14c + -0x5a;
      local_148 = local_148 + -1;
      piVar6 = piVar6 + 0x27;
      if (iVar4 < -799) {
        return 0;
      }
    } while( true );
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_004c52ac;
  do {
    pcVar10 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar10 + -uVar3;
  pcVar10 = (char *)&DAT_0051a068;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  DAT_00568d08 = FUN_004a5d48(&DAT_0051a068,0x8000);
  FUN_004a583a(DAT_00568d08,&DAT_00541ce0,0x618);
  FUN_004a5a78(DAT_00568d08);
  return 1;
}

