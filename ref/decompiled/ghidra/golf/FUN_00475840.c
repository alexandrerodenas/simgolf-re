/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475840 @ 0x00475840 */


int __thiscall
FUN_00475840(int param_1,char *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            uint param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_124;
  HANDLE pvStack_120;
  undefined4 local_114;
  char local_110 [260];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7ba9;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00492d80();
  local_4 = 0;
  if (param_2 == (char *)0x0) {
    local_4 = 0xffffffff;
    FUN_00492dc0();
    iVar2 = 3;
    goto LAB_00475ae2;
  }
  if ((param_6 & 1) == 0) {
    if ((param_6 & 2) == 0) {
      puVar9 = (undefined4 *)0x0;
      if ((param_6 & 3) == 0) {
        puVar9 = param_3;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0xac);
      if (iVar2 != 0) {
        FUN_00483010();
        FUN_004a4ffc(iVar2);
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
      DAT_0083aca4 = (undefined4 *)0x0;
      FUN_00402280(0);
      puVar9 = DAT_0083aca4;
      (**(code **)*DAT_0083aca4)();
      DAT_00839a98 = puVar9;
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      local_4 = 0xffffffff;
      FUN_00492dc0();
      iVar2 = 3;
      goto LAB_00475ae2;
    }
    if (*(int *)(param_1 + 0xac) == 0) {
      local_114 = operator_new(0x58);
      local_4._0_1_ = 1;
      if (local_114 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00482fd0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      *(int *)(param_1 + 0xac) = iVar2;
      if (iVar2 == 0) {
        local_4 = 0xffffffff;
        FUN_00492dc0();
        iVar2 = 4;
        goto LAB_00475ae2;
      }
    }
    puVar9 = *(undefined4 **)(param_1 + 0xac);
    (**(code **)*puVar9)();
  }
  uVar6 = 0xffffffff;
  pcVar3 = param_2;
  do {
    pcVar11 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar2 = -1;
  local_110[0] = '\0';
  pcVar3 = local_110;
  do {
    pcVar10 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  pcVar3 = pcVar11 + -uVar6;
  pcVar11 = pcVar10 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar6 = 0xffffffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = local_110 + (~uVar6 - 1);
  if (pcVar3 != local_110) {
    do {
      if (*pcVar3 == '.') {
        if (pcVar3 != local_110) goto LAB_00475a29;
        break;
      }
      pcVar3 = pcVar3 + -1;
    } while (pcVar3 != local_110);
  }
  uVar6 = 0xffffffff;
  pcVar3 = &DAT_004e4234;
  do {
    pcVar11 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar2 = -1;
  pcVar3 = local_110;
  do {
    pcVar10 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  pcVar3 = pcVar11 + -uVar6;
  pcVar11 = pcVar10 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar11 = pcVar11 + 1;
  }
LAB_00475a29:
  iVar2 = FUN_00492dd0(local_110,1);
  if (iVar2 == 0) {
    local_4 = 0xffffffff;
    FUN_00492dc0();
    iVar2 = 6;
    goto LAB_00475ae2;
  }
  DVar4 = GetFileSize(pvStack_120,(LPDWORD)0x0);
  iVar2 = FUN_00478cd0(uStack_124,DVar4,puVar9,param_4,param_5);
  if (iVar2 == 0) {
    if ((param_6 & 1) == 0) {
      if ((param_6 & 2) == 0) {
        if ((param_6 & 3) == 0) goto LAB_00475acc;
        iVar5 = **(int **)(param_1 + 4);
        uVar8 = DAT_00839a98[1];
      }
      else {
        uVar8 = puVar9[1];
        iVar5 = **(int **)(param_1 + 4);
      }
    }
    else {
      uVar8 = puVar9[1];
      iVar5 = **(int **)(param_1 + 4);
    }
    (**(code **)(iVar5 + 0xec))(uVar8);
  }
LAB_00475acc:
  local_4 = 0xffffffff;
  FUN_00492dc0();
LAB_00475ae2:
  *unaff_FS_OFFSET = uStack_c;
  return iVar2;
}

