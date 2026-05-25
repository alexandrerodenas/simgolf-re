/* Ghidra decompiled: golf.exe */
/* Function: FUN_00407340 @ 0x00407340 */


int FUN_00407340(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_4;
  
  iVar4 = 0xffff;
  local_4 = -1;
  iVar2 = 1;
  piVar3 = &DAT_0059aea8;
  piVar5 = &DAT_00575cc0;
  do {
    iVar1 = FUN_0040acd0(*piVar5 - param_1,piVar5[1] - param_2);
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
      local_4 = iVar2;
    }
    iVar1 = FUN_0040acd0(piVar5[4] - param_1,piVar5[5] - param_2);
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
      local_4 = iVar2;
    }
    if (*piVar3 != -1) {
      iVar1 = FUN_0040acd0(param_1 - (*piVar3 >> 10),param_2 - (piVar3[1] >> 10));
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
        local_4 = iVar2;
      }
    }
    piVar5 = piVar5 + 0x82;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 6;
  } while ((int)piVar5 < 0x578150);
  return local_4;
}

