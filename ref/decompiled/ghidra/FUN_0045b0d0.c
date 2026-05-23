/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045b0d0 @ 0x0045B0D0 */
/* Body size: 487 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045b0d0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined2 local_10;
  undefined1 local_e;
  int local_c;
  int local_8;
  int local_4;
  
  uVar7 = 0;
  local_10 = _DAT_004c3f70;
  local_e = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = FUN_00477580();
  local_4 = local_4 + -4;
  if (local_4 < 10) {
    local_4 = 10;
  }
  iVar4 = -1;
  uVar6 = 0;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (iVar4 == -2) {
    return param_3;
  }
  do {
    local_10 = CONCAT11(local_10._1_1_,*(undefined1 *)((int)&DAT_0051a068 + uVar6));
    iVar3 = FUN_00477250(&local_10);
    iVar4 = local_4;
    local_8 = local_8 + iVar3;
    cVar1 = *(char *)((int)&DAT_0051a068 + uVar6);
    if (((cVar1 == ' ') || (cVar1 == '\n')) || (cVar1 == '^')) {
      uVar7 = uVar6;
    }
    if (((cVar1 == '\n') || (cVar1 == '^')) || (param_1 * 8 < local_8)) {
      uVar2 = *(undefined1 *)((int)&DAT_0051a068 + uVar7);
      *(undefined1 *)((int)&DAT_0051a068 + uVar7) = 0;
      if ((local_4 < 0x11) || (param_4 != -0x7fff8001)) {
        FUN_004049d0((int)&DAT_0051a068 + local_c,param_2,param_3,param_4);
      }
      else {
        FUN_00404ad0((int)&DAT_0051a068 + local_c,param_2,param_3,0x80007fff);
      }
      *(undefined1 *)((int)&DAT_0051a068 + uVar7) = uVar2;
      param_3 = param_3 + iVar4;
      local_c = uVar7 + 1;
      local_8 = 0;
      if (*(char *)((int)&DAT_0051a068 + uVar6) == '^') {
        local_c = uVar7 + 2;
      }
      uVar6 = uVar7;
      if (0x248 < param_3) {
        return param_3;
      }
    }
    iVar4 = local_4;
    uVar5 = 0xffffffff;
    uVar6 = uVar6 + 1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (~uVar5 - 1 <= uVar6) {
      if ((0 < local_8) && (param_3 < 0x249)) {
        if ((0x10 < local_4) && (param_4 == -0x7fff8001)) {
          FUN_00404ad0((int)&DAT_0051a068 + local_c,param_2,param_3,0x80007fff);
          return param_3 + iVar4;
        }
        FUN_004049d0((int)&DAT_0051a068 + local_c,param_2,param_3,param_4);
        param_3 = param_3 + iVar4;
      }
      return param_3;
    }
  } while( true );
}

