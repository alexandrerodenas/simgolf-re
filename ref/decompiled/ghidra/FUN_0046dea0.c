/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046dea0 @ 0x0046DEA0 */
/* Body size: 862 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0046dea0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iStack_414;
  int local_410;
  int iStack_40c;
  int local_408;
  int local_404;
  char local_400 [1024];
  
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar8 = local_400;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_004762d0(&DAT_00519928,0,0,0);
  local_408 = -1;
  _DAT_00838f80 = 0;
  DAT_00839294 = 0;
  _DAT_0083928c = 0;
  iVar3 = 0;
  if (DAT_004e3da4 != -1) {
    iVar3 = DAT_004e3da4;
  }
  DAT_0083927c = -1;
  _DAT_00838eec = 1;
  FUN_00477580();
  DAT_004e3dac = 7;
  DAT_0083925c = 0x80000000;
  DAT_00839250 = 0x80004210;
  DAT_00838f74 = 0x80000018;
  if ((DAT_00839264 & 1) != 0) {
    DAT_0083925c = 0x80007fff;
    DAT_00838f74 = 0x800003ff;
    DAT_00839250 = 0x80006318;
  }
  _DAT_00838ec0 = 0x800003ff;
  local_410 = 0;
  local_404 = 1;
  FUN_0046e260(local_400,DAT_004e3da4);
  if (DAT_00838f70 != 0) {
    DAT_00838f70 = 0;
    return -1;
  }
  FUN_0045bf80(0x1e,0);
  FUN_00483d30();
  DAT_00822d68 = 0;
  do {
    _DAT_00838eec = 0;
    FUN_0045c030();
    if ((DAT_00822d68 != 0) || (local_404 != 0)) {
      local_404 = 1;
      if (DAT_00822d68 == 0) {
        FUN_0047ab50(&iStack_414,&iStack_40c);
        iVar3 = FUN_00404970(4);
        iStack_414 = (iStack_414 * 4) / iVar3;
        iVar3 = FUN_00404970(4);
        iStack_40c = (iStack_40c * 4) / iVar3;
      }
      else {
        DAT_00839294 = 1;
        iStack_414 = DAT_00822d58;
        iStack_40c = DAT_00822d5c;
      }
      if (DAT_00822d68 == 2) {
        _DAT_0083928c = 1;
      }
      iVar3 = (int)((iStack_40c - DAT_00839264) + -4) / DAT_004e3dac - DAT_0083927c;
      if (iVar3 < 0) {
        iVar3 = -1;
      }
      if ((_DAT_00839280 & 1 << ((byte)iVar3 & 0x1f)) != 0) {
        iVar3 = local_408;
      }
      if ((DAT_00838f84 < iStack_414) || (iStack_414 < DAT_00839260)) {
        iVar3 = -1;
      }
      if ((DAT_00838f88 < iStack_40c) || (iStack_40c < (int)DAT_00839264)) {
        iVar3 = -1;
      }
      if ((DAT_00839294 != 0) && (DAT_00822d68 == 0)) {
        local_410 = 1;
      }
      iVar2 = FUN_0045ae70();
      iVar7 = iVar3;
      if (iVar2 != 0) goto LAB_0046e10b;
      goto code_r0x0046e18e;
    }
    iVar2 = FUN_0045ae70();
    iVar7 = iVar3;
    if (iVar2 == 0) goto code_r0x0046e18e;
LAB_0046e10b:
    local_404 = 0;
    uVar4 = FUN_0045ae30();
    iVar7 = iVar3;
    switch(uVar4) {
    case 0xd:
    case 0x20:
      if ((1 << ((byte)iVar3 & 0x1f) & _DAT_00839280) == 0) {
        local_410 = 1;
      }
      break;
    default:
      iVar2 = iVar3;
      do {
        iVar2 = iVar2 + 1;
        iVar7 = iVar3;
        if (0x1f < iVar2) break;
      } while (((&DAT_00838ec4)[iVar2] == 0xff) ||
              (iVar7 = iVar2, ((byte)(&DAT_00838ec4)[iVar2] & 0x1f) != (uVar4 & 0x1f)));
      break;
    case 0x1b:
      local_410 = 1;
      goto LAB_0046e1a8;
    case 0x26:
      if (0 < iVar3) {
        iVar7 = iVar3 + -1;
      }
      break;
    case 0x28:
      if (iVar3 < DAT_00838f7c + -1) {
        iVar7 = iVar3 + 1;
      }
    }
code_r0x0046e18e:
    if ((((iVar7 < 0) || (DAT_00838f7c <= iVar7)) || (DAT_00839274 != 0)) || (DAT_00838ee8 != 0)) {
LAB_0046e1a8:
      iVar7 = -1;
    }
    if ((iVar7 != local_408) && (DAT_00839278 != 0)) {
      FUN_0046e260(local_400,iVar7);
      local_408 = iVar7;
    }
    if ((local_410 != 0) || (iVar3 = iVar7, DAT_0083afcc != 0)) {
      if (iVar7 == -1) {
        _DAT_0083928c = 0;
      }
      else {
        FUN_0045bf80(0x14,0);
      }
      _DAT_004e3da8 = 0xffffffff;
      DAT_004e3da4 = 0xffffffff;
      DAT_00839290 = 0;
      DAT_00838ee8 = 0;
      _DAT_00839280 = 0;
      _DAT_00838ee4 = 0;
      FUN_00465560();
      return iVar7;
    }
  } while( true );
}

