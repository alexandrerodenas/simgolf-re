/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049acf0 @ 0x0049ACF0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0049acf0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *extraout_ECX;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  char *pcVar11;
  int *piVar12;
  uint *unaff_FS_OFFSET;
  undefined4 in_stack_00001538;
  uint in_stack_00002210;
  int in_stack_00002220;
  int in_stack_00002224;
  uint local_c;
  int *local_8;
  uint local_4;
  
  local_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  local_8 = (int *)&LAB_004b90ad;
  *unaff_FS_OFFSET = (uint)&local_c;
  FUN_004a6070();
  FUN_0048ce00();
  iVar2 = 0;
  piVar4 = extraout_ECX + 0x5c;
  do {
    if (in_stack_00002220 == *piVar4) break;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 0x16;
  } while (iVar2 < 0x10);
  if (iVar2 == 0x10) {
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
    FUN_00474810();
    FUN_004805a0();
    uVar3 = 0;
    goto LAB_0049b652;
  }
  if (in_stack_00002224 != 0) {
LAB_0049b527:
    local_4 = local_4 & 0xffffff00;
    iVar2 = 0;
    piVar4 = extraout_ECX + 0x5c;
    do {
      if (*piVar4 == in_stack_00002220) {
        local_8 = extraout_ECX + iVar2 * 0x16;
        local_c = 0xffffffff;
        pcVar7 = (char *)((int)local_8 + 0x185);
        goto code_r0x0049b560;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x16;
    } while (iVar2 < 0x10);
    goto LAB_0049b5bd;
  }
  if ((extraout_ECX[0x1df] == extraout_ECX[0x1e0]) || (extraout_ECX[0x1df] == extraout_ECX[0x72])) {
    FUN_0049aa30();
    FUN_00494cb0();
    FUN_00493670();
    iVar2 = FUN_0048e900();
    if (iVar2 == 1) {
      FUN_0048d480();
      FUN_004928d0();
      FUN_004914d0();
      FUN_00489c90();
      FUN_00489c90();
      FUN_00473ae0();
      FUN_00491410();
      FUN_00491410();
      FUN_00474810();
      FUN_004805a0();
      uVar3 = 0;
      goto LAB_0049b652;
    }
    if (iVar2 == 2) {
      FUN_00493670();
      uVar3 = FUN_0048e900();
      switch(uVar3) {
      case 0:
        extraout_ECX[0x3c] = 5000;
        break;
      case 1:
        extraout_ECX[0x3c] = 10000;
        break;
      case 2:
        extraout_ECX[0x3c] = 20000;
        break;
      case 3:
        extraout_ECX[0x3c] = 30000;
      }
      FUN_00491710();
      uVar3 = 0;
      goto LAB_0049b652;
    }
    goto LAB_0049b527;
  }
  FUN_0049aa30();
  FUN_00494cb0();
  FUN_0049aa30();
  FUN_00494cb0();
  FUN_0048e1c0();
  iVar2 = FUN_0048e900();
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_0048d480();
      FUN_004928d0();
      FUN_004914d0();
      FUN_00489b30();
      DAT_00839650 = in_stack_00001538;
      FUN_00489c90();
      FUN_00473ae0();
      FUN_00491410();
      FUN_00491410();
    }
    else if (iVar2 == 2) {
      FUN_0048e1c0();
      uVar3 = FUN_0048e900();
      switch(uVar3) {
      case 0:
        extraout_ECX[0x3c] = 5000;
        break;
      case 1:
        extraout_ECX[0x3c] = 10000;
        break;
      case 2:
        extraout_ECX[0x3c] = 20000;
        break;
      case 3:
        extraout_ECX[0x3c] = 30000;
      }
      FUN_0048d480();
      FUN_004928d0();
      FUN_004914d0();
      FUN_00489b30();
      DAT_00839650 = in_stack_00001538;
      FUN_00489c90();
      FUN_00473ae0();
      FUN_00491410();
      FUN_00491410();
    }
    else {
      FUN_0048d480();
      FUN_004928d0();
      FUN_004914d0();
      FUN_00489c90();
      FUN_00489c90();
      FUN_00473ae0();
      FUN_00491410();
      FUN_00491410();
    }
    FUN_00474810();
    FUN_004805a0();
    uVar3 = 0;
    goto LAB_0049b652;
  }
  DAT_0083afcc = 1;
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
  FUN_00474810();
  FUN_004805a0();
  goto LAB_0049b64d;
  while( true ) {
    local_c = local_c - 1;
    pcVar11 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar11;
    if (cVar1 == '\0') break;
code_r0x0049b560:
    pcVar11 = pcVar7;
    if (local_c == 0) break;
  }
  local_c = ~local_c;
  iVar5 = -1;
  puVar9 = &local_4;
  do {
    puVar10 = puVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    puVar10 = (uint *)((int)puVar9 + 1);
    uVar6 = *puVar9;
    puVar9 = puVar10;
  } while ((char)uVar6 != '\0');
  pcVar7 = pcVar11 + -local_c;
  pcVar11 = (char *)((int)puVar10 + -1);
  for (uVar6 = local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if (iVar2 < 0xf) {
    iVar2 = 0xf - iVar2;
    piVar4 = local_8 + 0x5c;
    do {
      iVar2 = iVar2 + -1;
      piVar8 = piVar4 + 0x16;
      piVar12 = piVar4;
      for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar12 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar12 = piVar12 + 1;
      }
      piVar4 = piVar4 + 0x16;
    } while (iVar2 != 0);
  }
LAB_0049b5bd:
  if (in_stack_00002220 == extraout_ECX[0x1e0]) {
    _DAT_008400ac = extraout_ECX[0x1e0];
    extraout_ECX[0x1e0] = extraout_ECX[0x5c];
    (**(code **)(*extraout_ECX + 0x18))();
  }
  extraout_ECX[0x1be] = extraout_ECX[0x1be] + -1;
  (**(code **)(*extraout_ECX + 0xc))();
  FUN_0049bec0();
  if (in_stack_00002224 == 0) {
    FUN_00499140();
  }
  FUN_00491710();
LAB_0049b64d:
  uVar3 = 1;
LAB_0049b652:
  *unaff_FS_OFFSET = in_stack_00002210;
  return uVar3;
}

