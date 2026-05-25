/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045b2c0 @ 0x0045B2C0 */


void FUN_0045b2c0(char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint local_128;
  char local_120 [128];
  char local_a0 [160];
  
  uVar6 = 0xffffffff;
  do {
    pcVar8 = param_1;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar8 + -uVar6;
  pcVar9 = local_120;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  pcVar9 = local_a0;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  iVar3 = param_4 * 0xc;
  local_128 = uVar6;
  do {
    FUN_004762d0(&DAT_0051b360,0,0,0);
    iVar4 = iVar3 + 0x20;
    FUN_00478af0(param_2 + -1,param_3 + -1,iVar4,0x30,0x80007fff);
    FUN_00478af0(param_2 + 1,param_3 + 1,iVar4,0x30,0x80000000);
    FUN_00478af0(param_2,param_3,iVar4,0x30,0x800035b3);
    FUN_004049d0(local_120,param_2 + 4,param_3 + 6,0x80007fff);
    FUN_00478af0(param_2 + 0x10,param_3 + 0x17,iVar3,0x16,0x80007fff);
    FUN_004762d0(&DAT_00519928,0,0,0);
    FUN_004049d0(&DAT_0051a068,param_2 + 0x14,param_3 + 0x1c,0x80000000);
    uVar2 = *(undefined1 *)((int)&DAT_0051a068 + uVar6);
    *(undefined1 *)((int)&DAT_0051a068 + uVar6) = 0;
    iVar4 = FUN_00477250(&DAT_0051a068);
    iVar4 = param_2 + 0x14 + iVar4;
    *(undefined1 *)((int)&DAT_0051a068 + uVar6) = uVar2;
    FUN_00478b80(iVar4,param_3 + 0x1a,iVar4,param_3 + 0x2a,0x80006000);
    iVar4 = FUN_00477250(&DAT_0051a068);
    uVar7 = uVar6;
    if (iVar3 + -0x10 < iVar4) {
      do {
        uVar7 = 0xffffffff;
        pcVar8 = (char *)&DAT_0051a068;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        (&DAT_0051a066)[~uVar7] = 0;
        uVar7 = 0xffffffff;
        pcVar8 = (char *)&DAT_0051a068;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (~uVar7 - 1 < uVar6) {
          uVar6 = 0xffffffff;
          pcVar8 = (char *)&DAT_0051a068;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6 - 1;
        }
        iVar4 = FUN_00477250(&DAT_0051a068);
        uVar7 = uVar6;
      } while (iVar3 + -0x10 < iVar4);
    }
    FUN_00480b00(iVar4 + 0x15 + param_2,param_3 + 0x29,8,2,0x80004210);
    FUN_00480c80(0);
    do {
      FUN_0045bf80(1,0);
      FUN_0045c030();
      if (DAT_00822d68 != 0) break;
      iVar4 = FUN_0045ae70();
    } while (iVar4 == 0);
    iVar4 = FUN_0045ae50();
    iVar5 = FUN_0045ae30();
    if (iVar4 == 0x1b) {
      DAT_0051a068._0_1_ = 0;
      return;
    }
    if (iVar4 == 0xd) {
      *(undefined1 *)((int)&DAT_0051a068 + local_128) = 0;
      return;
    }
    uVar6 = uVar7;
    if (iVar4 == 8) {
      if (uVar7 != 0) {
        for (; (int)uVar6 <= (int)local_128; uVar6 = uVar6 + 1) {
          *(undefined1 *)((int)&DAT_0051a068 + uVar6) =
               *(undefined1 *)((int)&DAT_0051a068 + uVar6 + 1);
        }
        (&DAT_0051a067)[local_128] = 0;
        uVar6 = uVar7 - 1;
        local_128 = local_128 - 1;
      }
    }
    else if (iVar4 == 0) {
      if (iVar5 == 0x27) {
        if ((int)uVar7 < (int)local_128) {
          uVar6 = uVar7 + 1;
        }
      }
      else if (iVar5 == 0x25) {
        if (uVar7 != 0) {
          uVar6 = uVar7 - 1;
        }
      }
      else {
        uVar6 = local_128;
        if (iVar5 != 0x23) {
          if (iVar5 == 0x24) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar7;
            if ((iVar5 == 0x2e) && ((int)uVar7 < (int)local_128)) {
              do {
                *(undefined1 *)((int)&DAT_0051a068 + uVar6) =
                     *(undefined1 *)((int)&DAT_0051a068 + uVar6 + 1);
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 <= (int)local_128);
              (&DAT_0051a067)[local_128] = 0;
              uVar6 = uVar7;
              local_128 = local_128 - 1;
            }
          }
        }
      }
    }
    if (((int)uVar6 < param_4 + -1) && (iVar5 = FUN_004a65c0(iVar4), uVar7 = local_128, iVar5 != 0))
    {
      for (; (int)uVar6 <= (int)uVar7; uVar7 = uVar7 - 1) {
        *(undefined1 *)((int)&DAT_0051a068 + uVar7 + 1) =
             *(undefined1 *)((int)&DAT_0051a068 + uVar7);
      }
      *(char *)((int)&DAT_0051a068 + uVar6) = (char)iVar4;
      uVar6 = uVar6 + 1;
      *(undefined1 *)((int)&DAT_0051a068 + local_128 + 1) = 0;
      *(undefined1 *)((int)&DAT_0051a068 + param_4) = 0;
      local_128 = local_128 + 1;
    }
  } while( true );
}

