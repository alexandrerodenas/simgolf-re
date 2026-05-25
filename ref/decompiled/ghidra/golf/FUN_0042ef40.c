/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042ef40 @ 0x0042EF40 */


int FUN_0042ef40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_c;
  int local_8;
  int *local_4;
  
  local_c = 0;
  iVar3 = 4;
  iVar4 = param_1 + -1;
  do {
    iVar1 = FUN_0042ee80(iVar4,param_2 + -1);
    iVar2 = FUN_0042ee80(iVar4,param_2 + 2);
    local_c = local_c + iVar1 + iVar2;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 2;
  iVar4 = param_2;
  do {
    iVar1 = FUN_0042ee80(param_1 + -1,iVar4);
    iVar2 = FUN_0042ee80(param_1 + 2,iVar4);
    local_c = local_c + iVar1 + iVar2;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar4 = 0;
  local_4 = &DAT_0059aea8;
  local_8 = 0;
  piVar5 = &DAT_00575cd8;
  do {
    if (((char)piVar5[-8] != '\0') && (*piVar5 != 0)) {
      iVar3 = ((short)piVar5[0x4e] * 1000) / (piVar5[1] / 2 + 4 + *piVar5) +
              (3 - DAT_00822c88) * 100;
      if ((piVar5[0x78] & 1U) != 0) {
        iVar3 = iVar3 + 100;
      }
      if ((piVar5[0x78] & 2U) != 0) {
        iVar3 = iVar3 + 100;
      }
      iVar4 = FUN_0040acd0(param_1 - piVar5[-6],param_2 - piVar5[-5]);
      iVar1 = FUN_0040acd0(param_1 - piVar5[-2],param_2 - piVar5[-1]);
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
      }
      if ((*local_4 != -1) &&
         (iVar1 = FUN_0040acd0(param_1 - (*local_4 >> 10),param_2 - (local_4[1] >> 10)),
         iVar1 < iVar4)) {
        iVar4 = iVar1;
      }
      iVar3 = iVar3 / (iVar4 + 8);
      iVar4 = local_8;
      if (local_8 < iVar3) {
        iVar4 = iVar3;
        local_8 = iVar3;
      }
    }
    piVar5 = piVar5 + 0x82;
    local_4 = local_4 + 6;
  } while ((int)piVar5 < 0x578168);
  if (DAT_00543cd0 != 0) {
    iVar4 = iVar4 + (DAT_00543cd0 * iVar4) / 3;
  }
  return (iVar4 * local_c) / 0x28;
}

