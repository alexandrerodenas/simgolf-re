/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478f50 @ 0x00478F50 */


undefined4 FUN_00478f50(char *param_1,int *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *unaff_FS_OFFSET;
  char *local_1a0;
  HANDLE local_19c;
  char local_190 [2];
  char local_18e;
  ushort local_18c;
  ushort uStack_18a;
  ushort local_188;
  ushort uStack_186;
  char acStack_111 [261];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7bcb;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00492d80();
  local_4 = 0;
  if (((param_1 != (char *)0x0) && (param_2 != (int *)0x0)) && (param_3 != (int *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar2 = param_1;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    acStack_111[1] = 0;
    pcVar2 = acStack_111 + 1;
    do {
      pcVar6 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    pcVar2 = acStack_111 + ~uVar3;
    if (pcVar2 != acStack_111 + 1) {
      do {
        if (*pcVar2 == '.') {
          if (pcVar2 != acStack_111 + 1) goto LAB_00479067;
          break;
        }
        pcVar2 = pcVar2 + -1;
      } while (pcVar2 != acStack_111 + 1);
    }
    if (DAT_0083fe5c == 1) {
      pcVar2 = &DAT_004e42b0;
    }
    else if (DAT_0083fe5c == 2) {
      pcVar2 = &DAT_004e42b8;
    }
    else {
      pcVar2 = &DAT_004e4234;
    }
    uVar3 = 0xffffffff;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar2 = acStack_111 + 1;
    do {
      pcVar6 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
LAB_00479067:
    iVar4 = FUN_00492dd0(acStack_111 + 1,1);
    if (iVar4 == 0) {
      local_4 = 0xffffffff;
      FUN_00492dc0();
      *unaff_FS_OFFSET = uStack_c;
      return 6;
    }
    GetFileSize(local_19c,(LPDWORD)0x0);
    uVar3 = 0xffffffff;
    pcVar2 = s_monkey_sweats_on_a_tuesday_004e4218;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar4 = _strncmp(local_1a0,s_monkey_sweats_on_a_tuesday_004e4218,~uVar3 - 1);
    if (iVar4 == 0) {
      uVar3 = 0xffffffff;
      pcVar2 = s_monkey_sweats_on_a_tuesday_004e4218;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      local_1a0 = local_1a0 + ~uVar3;
    }
    pcVar2 = local_190;
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)local_1a0;
      local_1a0 = local_1a0 + 4;
      pcVar2 = pcVar2 + 4;
    }
    if ((local_190[0] == '\n') && (local_18e == '\x01')) {
      *param_2 = ((uint)local_188 - (uint)local_18c) + 1;
      *param_3 = ((uint)uStack_186 - (uint)uStack_18a) + 1;
      FUN_00492e80();
      local_4 = 0xffffffff;
      FUN_00492dc0();
      *unaff_FS_OFFSET = uStack_c;
      return 0;
    }
  }
  local_4 = 0xffffffff;
  FUN_00492dc0();
  *unaff_FS_OFFSET = uStack_c;
  return 3;
}

