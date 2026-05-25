/* Ghidra decompiled: golf.exe */
/* Function: FUN_00849707 @ 0x00849707 */


int FUN_00849707(int *param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_120;
  char local_11c [260];
  char *local_18;
  int local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_c;
  char local_b [3];
  int local_8;
  
  local_8 = *param_1;
  local_14 = 0;
  local_18 = (char *)0x0;
  *param_3 = 0;
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = local_11c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_10 = 0x5c;
  local_f = 0;
  FUN_00849654(param_1,local_11c,&local_10);
  if ((param_2[1] == ':') ||
     (uVar3 = FUN_0084b6d8(*(undefined4 *)(local_8 + 0x8c),local_11c), uVar3 < 3)) {
    local_18 = (char *)FUN_0084b68a(*(undefined4 *)(local_8 + 0x8c),local_11c,0x5c);
  }
  else {
    local_120 = 2;
    while (uVar3 = FUN_0084b6d8(*(undefined4 *)(local_8 + 0x8c),local_11c), local_120 < uVar3) {
      if (local_11c[local_120] == '\\') {
        local_18 = local_11c + local_120;
        break;
      }
      local_120 = (uint)(byte)((char)local_120 + 1);
    }
  }
  if (local_18 != (char *)0x0) {
    while( true ) {
      local_18 = local_18 + 1;
      local_18 = (char *)FUN_0084b68a(*(undefined4 *)(local_8 + 0x8c),local_18,0x5c);
      if (local_18 == (char *)0x0) break;
      *local_18 = '\0';
      uVar3 = (**(code **)(local_8 + 0x54))(local_11c);
      if (uVar3 == 0xffffffff) {
        local_14 = (**(code **)(local_8 + 0x44))(local_11c,0);
        if (local_14 == 0) {
          iVar2 = (**(code **)(local_8 + 0x78))();
          *param_3 = iVar2;
          break;
        }
      }
      else if ((uVar3 & 0x10) != 0x10) {
        *param_3 = 0xb7;
        break;
      }
      *local_18 = '\\';
    }
    if (*param_3 == 0) {
      local_c = 0x5c;
      local_b[0] = 'a';
      local_b[1] = 0;
      FUN_00849654(param_1,local_11c,&local_c);
      while (local_14 = (**(code **)(local_8 + 0x44))(local_11c,0), local_14 == 0) {
        iVar2 = (**(code **)(local_8 + 0x78))();
        *param_3 = iVar2;
        if (*param_3 != 0xb7) {
          return local_14;
        }
        uVar3 = FUN_0084b6d8(*(undefined4 *)(local_8 + 0x8c),local_11c);
        if (0x103 < uVar3) {
          return local_14;
        }
        uVar3 = 0xffffffff;
        pcVar5 = local_b;
        do {
          pcVar7 = pcVar5;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar2 = -1;
        pcVar5 = local_11c;
        do {
          pcVar6 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar6;
        } while (cVar1 != '\0');
        pcVar5 = pcVar7 + -uVar3;
        pcVar7 = pcVar6 + -1;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      (**(code **)(local_8 + 0x48))(local_11c);
    }
  }
  return local_14;
}

