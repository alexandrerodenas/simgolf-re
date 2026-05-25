/* Ghidra decompiled: golf.exe */
/* Function: FUN_004afdc0 @ 0x004AFDC0 */


void FUN_004afdc0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  if (0 < param_1[0xd]) {
    puVar4 = (undefined4 *)(param_1[0xf] + 0x10);
    do {
      iVar2 = FUN_004afec0(param_1,*puVar4);
      iVar5 = iVar5 + iVar2;
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 0x15;
    } while (iVar6 < param_1[0xd]);
  }
  if (((param_1[0x2b] == 0) && (param_1[0x37] == 0)) && (param_1[0xc] == 8)) {
    iVar6 = param_1[0xd];
    bVar1 = true;
    if (0 < iVar6) {
      piVar3 = (int *)(param_1[0xf] + 0x18);
      do {
        if ((1 < piVar3[-1]) || (1 < *piVar3)) {
          bVar1 = false;
        }
        piVar3 = piVar3 + 0x15;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if ((iVar5 != 0) && (bVar1)) {
      bVar1 = false;
      *(undefined4 *)(*param_1 + 0x14) = 0x4a;
      (**(code **)(*param_1 + 4))(param_1,0);
    }
  }
  else {
    bVar1 = false;
  }
  if (param_1[0x2b] != 0) {
    FUN_004affa0(param_1,0xc9);
    return;
  }
  if (param_1[0x37] != 0) {
    FUN_004affa0(param_1,0xc2);
    return;
  }
  if (bVar1) {
    FUN_004affa0(param_1,0xc0);
    return;
  }
  FUN_004affa0(param_1,0xc1);
  return;
}

