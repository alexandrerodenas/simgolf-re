/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046e260 @ 0x0046E260 */
/* Body size: 1200 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0046e260(char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int *piVar10;
  char local_e [2];
  int local_c;
  uint local_8;
  int local_4;
  
  puVar8 = (undefined4 *)&DAT_00838ec4;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  iVar7 = 0;
  iVar3 = 0;
  iVar4 = -1;
  DAT_00838ef0 = 0;
  DAT_00838f78 = 0;
  DAT_00838f94 = 0;
  pcVar6 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_e[1] = 0;
  local_c = 0;
  local_8 = 0;
  if (iVar4 != -2) {
    local_4 = 1 - (int)param_1;
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      if (cVar1 == '\n') {
        if (DAT_00838f94 < iVar7) {
          DAT_00838f94 = iVar7;
        }
        iVar7 = 0;
        iVar3 = iVar3 + 1;
        DAT_00838f78 = iVar3;
        (&DAT_00838ef0)[iVar3] = pcVar6 + local_4;
      }
      else {
        if ((iVar7 == 0) && ((cVar1 == ' ' || (cVar1 == '_')))) {
          if (local_c < 0x20) {
            (&DAT_00838ec4)[local_c] = param_1[local_8 + 1];
          }
          if (DAT_0083927c == -1) {
            DAT_0083927c = iVar3;
          }
          local_c = local_c + 1;
        }
        local_e[0] = *pcVar6;
        iVar3 = FUN_00477250(local_e);
        iVar7 = iVar7 + iVar3;
        iVar3 = DAT_00838f78;
        if (*pcVar6 == '|') {
          iVar3 = FUN_00477250(&DAT_004e3db4);
          iVar7 = iVar7 + iVar3;
          iVar3 = DAT_00838f78;
        }
      }
      uVar5 = 0xffffffff;
      local_8 = local_8 + 1;
      pcVar6 = pcVar6 + 1;
      pcVar9 = param_1;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
    } while (local_8 < ~uVar5 - 1);
  }
  DAT_00838f78 = FUN_00467130(iVar3,0,(int)(0xe8 - DAT_00839264) / DAT_004e3dac);
  if (DAT_00839260 == -1) {
    DAT_00839260 = 0xa0 - (DAT_00838f94 + 8) / 2;
  }
  iVar3 = FUN_00404970(2);
  DAT_00838f84 = (DAT_00838f94 * 2) / iVar3 + 8 + DAT_00839260;
  DAT_00838f88 = DAT_004e3dac * DAT_00838f78 + 6 + DAT_00839264;
  if (DAT_00839290 != 0) {
    DAT_00838f88 = DAT_00838f88 + 2;
  }
  uVar5 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (param_1[~uVar5 - 2] != '\n') {
    local_c = local_c + -1;
  }
  DAT_00838f7c = local_c;
  if ((DAT_00839264 & 1) == 0) {
    uVar2 = FUN_00404970((DAT_00838f88 - DAT_00839264) + 0xc,1);
    uVar2 = FUN_00404970((DAT_00838f84 - DAT_00839260) + 0x10,uVar2);
    uVar2 = FUN_00404970(DAT_00839264 - 6,uVar2);
    uVar2 = FUN_00404970(DAT_00839260 + -8,uVar2);
    FUN_0040d0b0(uVar2);
  }
  else {
    FUN_0046e710(DAT_00839260,DAT_00839264,DAT_00838f84 - DAT_00839260,
                 (DAT_00838f88 - DAT_00839264) + 4,0x80007fff);
    _DAT_00838f80 = 1;
  }
  iVar3 = 0;
  if (DAT_00839274 != 0) {
    FUN_004049d0(&DAT_004e3db0,DAT_00838f84 + -0x11,DAT_00838f88 + -8,0x800003ff);
    FUN_0046e710(DAT_00838f84 + -0x14,DAT_00838f88 + -10,0x14,10,0x800003ff);
  }
  if ((*param_1 == ' ') || (local_c = -1, *param_1 == '_')) {
    local_c = 0;
  }
  if (0 < DAT_00838f78) {
    piVar10 = &DAT_00838ef4;
    do {
      param_1[*piVar10 + -1] = '\0';
      pcVar6 = _strchr(param_1 + piVar10[-1],0x7c);
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\0';
        iVar4 = FUN_00477250(pcVar6 + 1);
        iVar7 = FUN_00404970(2);
        local_8 = (DAT_00838f84 - (iVar4 << 1) / iVar7) - 5;
      }
      uVar2 = DAT_00838f74;
      if ((-1 < local_c) && (uVar2 = 0x800003ff, (_DAT_00838ee4 & 1 << ((byte)local_c & 0x1f)) == 0)
         ) {
        uVar2 = DAT_00839250;
      }
      FUN_00404a20(param_1 + piVar10[-1],DAT_00839260 + 5,DAT_004e3dac * iVar3 + 5 + DAT_00839264,
                   uVar2);
      if (pcVar6 != (char *)0x0) {
        uVar2 = DAT_00838f74;
        if ((-1 < local_c) &&
           (uVar2 = 0x800003ff, (_DAT_00838ee4 & 1 << ((byte)local_c & 0x1f)) == 0)) {
          uVar2 = DAT_00839250;
        }
        FUN_00404a20(pcVar6 + 1,local_8,DAT_004e3dac * iVar3 + 5 + DAT_00839264,uVar2);
      }
      if (((DAT_00839278 == 0) || (local_c < 0)) || (local_c != param_2)) {
LAB_0046e6bf:
        if (pcVar6 != (char *)0x0) {
          *pcVar6 = '|';
        }
      }
      else {
        FUN_00404a20(param_1 + piVar10[-1],DAT_00839260 + 5,DAT_004e3dac * iVar3 + 5 + DAT_00839264,
                     DAT_0083925c);
        if (pcVar6 != (char *)0x0) {
          FUN_00404a20(pcVar6 + 1,local_8,DAT_004e3dac * iVar3 + 5 + DAT_00839264,DAT_0083925c);
          goto LAB_0046e6bf;
        }
      }
      param_1[*piVar10 + -1] = '\n';
      if ((param_1[*piVar10] == ' ') || (param_1[*piVar10] == '_')) {
        local_c = local_c + 1;
      }
      iVar3 = iVar3 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar3 < DAT_00838f78);
  }
  if (DAT_00838f70 == 0) {
    FUN_00480c80(0);
  }
  return param_2;
}

