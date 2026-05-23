/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b4040 @ 0x004B4040 */
/* Body size: 387 addresses */


void FUN_004b4040(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iStack_4;
  
  bVar3 = true;
  puVar4 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x34);
  param_1[0x57] = (int)puVar4;
  *puVar4 = FUN_004b01e0;
  puVar4[1] = &LAB_004b41d0;
  puVar4[2] = 0;
  if (param_1[0x2d] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  iStack_4 = 0;
  if (0 < param_1[0xd]) {
    piVar5 = (int *)(param_1[0xf] + 0xc);
    puVar6 = puVar4 + 3;
    do {
      iVar1 = piVar5[-1];
      iVar2 = param_1[0x38];
      if ((iVar1 == iVar2) && (*piVar5 == param_1[0x39])) {
        if (param_1[0x2e] == 0) {
          *puVar6 = FUN_004b43f0;
        }
        else {
          *puVar6 = &LAB_004b48c0;
          puVar4[2] = 1;
        }
      }
      else if (iVar1 * 2 == iVar2) {
        if (*piVar5 == param_1[0x39]) {
          bVar3 = false;
          *puVar6 = &LAB_004b4440;
        }
        else {
          if ((iVar1 * 2 != iVar2) || (*piVar5 * 2 - param_1[0x39] != 0)) goto LAB_004b414a;
          if (param_1[0x2e] == 0) {
            *puVar6 = &LAB_004b44f0;
          }
          else {
            *puVar6 = &LAB_004b45d0;
            puVar4[2] = 1;
          }
        }
      }
      else {
LAB_004b414a:
        if ((iVar2 % iVar1 == 0) && (param_1[0x39] % *piVar5 == 0)) {
          *puVar6 = &LAB_004b4260;
          bVar3 = false;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x25;
          (**(code **)*param_1)(param_1);
        }
      }
      iStack_4 = iStack_4 + 1;
      puVar6 = puVar6 + 1;
      piVar5 = piVar5 + 0x15;
    } while (iStack_4 < param_1[0xd]);
  }
  if ((param_1[0x2e] != 0) && (!bVar3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x62;
    (**(code **)(*param_1 + 4))(param_1,0);
  }
  return;
}

