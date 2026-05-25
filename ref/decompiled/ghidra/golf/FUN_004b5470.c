/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b5470 @ 0x004B5470 */


void FUN_004b5470(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iStack_a48;
  int *piStack_a44;
  int iStack_a34;
  int local_a28 [10];
  int aiStack_a00 [640];
  
  if (param_1[0x28] < 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0x11;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  piVar7 = (int *)param_1[0x29];
  if ((piVar7[5] == 0) && (piVar7[6] == 0x3f)) {
    iVar4 = param_1[0xd];
    param_1[0x37] = 0;
    if (iVar4 < 1) goto LAB_004b54ee;
    iVar3 = 0;
    piVar5 = local_a28;
  }
  else {
    param_1[0x37] = 1;
    if (param_1[0xd] < 1) goto LAB_004b54ee;
    piVar5 = aiStack_a00;
    iVar4 = (param_1[0xd] & 0xffffffU) << 6;
    iVar3 = -1;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = iVar3;
    piVar5 = piVar5 + 1;
  }
LAB_004b54ee:
  iStack_a48 = 1;
  if (0 < param_1[0x28]) {
    do {
      iStack_a34 = *piVar7;
      if ((iStack_a34 < 1) || (4 < iStack_a34)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x18;
        *(int *)(*param_1 + 0x18) = iStack_a34;
        *(undefined4 *)(*param_1 + 0x1c) = 4;
        (**(code **)*param_1)(param_1);
      }
      iVar4 = 0;
      piVar5 = piVar7;
      if (0 < iStack_a34) {
        do {
          iVar3 = piVar5[1];
          if ((iVar3 < 0) || (param_1[0xd] <= iVar3)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x11;
            *(int *)(*param_1 + 0x18) = iStack_a48;
            (**(code **)*param_1)(param_1);
          }
          if ((0 < iVar4) && (iVar3 <= *piVar5)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x11;
            *(int *)(*param_1 + 0x18) = iStack_a48;
            (**(code **)*param_1)(param_1);
          }
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar4 < iStack_a34);
      }
      iVar4 = piVar7[5];
      iVar3 = piVar7[6];
      iVar1 = piVar7[7];
      iVar2 = piVar7[8];
      if (param_1[0x37] == 0) {
        if ((((iVar4 != 0) || (iVar3 != 0x3f)) || (iVar1 != 0)) || (iVar2 != 0)) {
          *(undefined4 *)(*param_1 + 0x14) = 0xf;
          *(int *)(*param_1 + 0x18) = iStack_a48;
          (**(code **)*param_1)(param_1);
        }
        piVar5 = piVar7;
        if (0 < iStack_a34) {
          do {
            iVar4 = piVar5[1];
            if (local_a28[iVar4] != 0) {
              *(undefined4 *)(*param_1 + 0x14) = 0x11;
              *(int *)(*param_1 + 0x18) = iStack_a48;
              (**(code **)*param_1)(param_1);
            }
            iStack_a34 = iStack_a34 + -1;
            local_a28[iVar4] = 1;
            piVar5 = piVar5 + 1;
          } while (iStack_a34 != 0);
        }
      }
      else {
        if (((((iVar4 < 0) || (0x3f < iVar4)) ||
             ((iVar3 < iVar4 || ((0x3f < iVar3 || (iVar1 < 0)))))) || (0xd < iVar1)) ||
           ((iVar2 < 0 || (0xd < iVar2)))) {
          *(undefined4 *)(*param_1 + 0x14) = 0xf;
          *(int *)(*param_1 + 0x18) = iStack_a48;
          (**(code **)*param_1)(param_1);
        }
        if (iVar4 == 0) {
          if (iVar3 != 0) {
            *(undefined4 *)(*param_1 + 0x14) = 0xf;
            *(int *)(*param_1 + 0x18) = iStack_a48;
            (**(code **)*param_1)(param_1);
          }
        }
        else if (iStack_a34 != 1) {
          *(undefined4 *)(*param_1 + 0x14) = 0xf;
          *(int *)(*param_1 + 0x18) = iStack_a48;
          (**(code **)*param_1)(param_1);
        }
        piStack_a44 = piVar7;
        if (0 < iStack_a34) {
          do {
            piStack_a44 = piStack_a44 + 1;
            iVar6 = *piStack_a44;
            if ((iVar4 != 0) && (aiStack_a00[iVar6 * 0x40] < 0)) {
              *(undefined4 *)(*param_1 + 0x14) = 0xf;
              *(int *)(*param_1 + 0x18) = iStack_a48;
              (**(code **)*param_1)(param_1);
            }
            if (iVar4 <= iVar3) {
              piVar5 = aiStack_a00 + iVar6 * 0x40 + iVar4;
              iVar6 = (iVar3 - iVar4) + 1;
              do {
                if (*piVar5 < 0) {
                  if (iVar1 != 0) {
LAB_004b56c2:
                    *(undefined4 *)(*param_1 + 0x14) = 0xf;
                    *(int *)(*param_1 + 0x18) = iStack_a48;
                    (**(code **)*param_1)(param_1);
                  }
                }
                else if ((iVar1 != *piVar5) || (iVar2 != iVar1 + -1)) goto LAB_004b56c2;
                *piVar5 = iVar2;
                piVar5 = piVar5 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            iStack_a34 = iStack_a34 + -1;
          } while (iStack_a34 != 0);
        }
      }
      piVar7 = piVar7 + 9;
      iStack_a48 = iStack_a48 + 1;
    } while (iStack_a48 <= param_1[0x28]);
  }
  if (param_1[0x37] == 0) {
    iVar4 = 0;
    if (0 < param_1[0xd]) {
      piVar7 = local_a28;
      do {
        if (*piVar7 == 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2c;
          (**(code **)*param_1)(param_1);
        }
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar4 < param_1[0xd]);
    }
  }
  else {
    iVar4 = 0;
    if (0 < param_1[0xd]) {
      piVar7 = aiStack_a00;
      do {
        if (*piVar7 < 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2c;
          (**(code **)*param_1)(param_1);
        }
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 0x40;
      } while (iVar4 < param_1[0xd]);
      return;
    }
  }
  return;
}

