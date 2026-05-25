/* Ghidra decompiled: golf.exe */
/* Function: FUN_004842f0 @ 0x004842F0 */


int __thiscall FUN_004842f0(int *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (DAT_0083afc4 == 0) {
    return 1;
  }
  piVar1 = param_1 + 0x10;
  if ((int *)param_1[0x10] == (int *)0x0) {
    iVar3 = FUN_004840e0(piVar1,param_2,1);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_1[0x10] + 0x60))();
    if (iVar3 != 0) {
      return 0xf;
    }
  }
  iVar3 = (**(code **)(*(int *)*piVar1 + 0x10))(param_2);
  uVar5 = param_1[0x11];
  if (iVar3 == 0) {
    if ((uVar5 & 1) == 0) {
      param_1[0x11] = uVar5 | 1;
      (**(code **)(*param_1 + 0x7c))();
      if (param_1[0xc] != 0) {
        (**(code **)(*(int *)*piVar1 + 0x48))(1);
      }
    }
  }
  else {
    param_1[0x11] = uVar5 & 0xfffffffe;
  }
  uVar5 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  pcVar4 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar7;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = pcVar4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if (param_1[0x14] != 0) {
    FUN_004a4ffc(param_1[0x14]);
  }
  param_1[0x14] = (int)pcVar4;
  return iVar3;
}

