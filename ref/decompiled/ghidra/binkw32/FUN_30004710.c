/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004710 @ 0x30004710 */


void FUN_30004710(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  uint local_8;
  
  piVar2 = param_1;
  piVar5 = param_1 + 0xaa;
  if (param_1[0xaa] != 0) {
    piVar1 = param_1 + 0xa8;
    LOCK();
    *(char *)piVar1 = (char)*piVar1 + '\x01';
    UNLOCK();
    if (*piVar1 == 1) {
      param_1 = piVar1;
      iVar3 = (*(code *)*piVar5)(piVar5);
      while (iVar3 != 0) {
        if (((uint)piVar2[0xa7] <= (uint)piVar2[0xb2]) &&
           ((piVar2[3] <= piVar2[0xdd] || (piVar2[0xa7] == 0)))) break;
        if (piVar2[0xb3] != 0) {
          piVar2[0xb3] = 0;
          if ((1 < (uint)piVar2[3]) && (piVar2[3] <= piVar2[0xdd])) {
            uVar8 = _RADTimerRead_0();
            if ((uint)piVar2[0xdf] < (uint)uVar8) {
              piVar2[0xdc] = piVar2[0xdc] + 1;
              FUN_30004970((int)piVar2);
              piVar2[0x84] = 0;
              piVar2[0xdf] = (uint)uVar8 + 0x2ee;
            }
          }
        }
        iVar3 = (*(code *)piVar2[0xab])(piVar2 + 0xaa,&param_1,&local_8);
        if (iVar3 != 0) {
          iVar3 = piVar2[0xa9];
          if (iVar3 != 0) {
            local_8 = local_8 * 2;
          }
          uVar4 = piVar2[0xa7];
          if (uVar4 < local_8) {
            local_8 = uVar4;
          }
          piVar5 = (int *)piVar2[0xa5];
          uVar6 = piVar2[0xa3] - (int)piVar5;
          piVar2[0xa7] = uVar4 - local_8;
          if (uVar6 < local_8) {
            if (uVar6 != 0) {
              if (iVar3 == 0) {
                piVar7 = param_1;
                for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *piVar7 = *piVar5;
                  piVar5 = piVar5 + 1;
                  piVar7 = piVar7 + 1;
                }
                for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *(char *)piVar7 = (char)*piVar5;
                  piVar5 = (int *)((int)piVar5 + 1);
                  piVar7 = (int *)((int)piVar7 + 1);
                }
                param_1 = (int *)((int)param_1 + uVar6);
              }
              else {
                param_1 = (int *)FUN_30004940((char *)param_1,(undefined2 *)piVar5,uVar6);
              }
            }
            if (piVar2[0xa9] == 0) {
              piVar5 = (int *)piVar2[0xa2];
              piVar7 = param_1;
              for (uVar4 = local_8 - uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *piVar7 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar7 = piVar7 + 1;
              }
              for (uVar4 = local_8 - uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(char *)piVar7 = (char)*piVar5;
                piVar5 = (int *)((int)piVar5 + 1);
                piVar7 = (int *)((int)piVar7 + 1);
              }
              iVar3 = piVar2[0xa2] - uVar6;
            }
            else {
              FUN_30004940((char *)param_1,(undefined2 *)piVar2[0xa2],local_8 - uVar6);
              iVar3 = piVar2[0xa2] - uVar6;
            }
          }
          else {
            if (iVar3 == 0) {
              piVar7 = param_1;
              for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *piVar7 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar7 = piVar7 + 1;
              }
              for (uVar4 = local_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(char *)piVar7 = (char)*piVar5;
                piVar5 = (int *)((int)piVar5 + 1);
                piVar7 = (int *)((int)piVar7 + 1);
              }
            }
            else {
              FUN_30004940((char *)param_1,(undefined2 *)piVar5,local_8);
            }
            iVar3 = piVar2[0xa5];
          }
          piVar2[0xa5] = iVar3 + local_8;
          if (piVar2[0xa9] != 0) {
            local_8 = local_8 >> 1;
          }
          (*(code *)piVar2[0xac])(piVar2 + 0xaa,local_8);
        }
        iVar3 = (*(code *)piVar2[0xaa])(piVar2 + 0xaa);
      }
    }
    LOCK();
    *(char *)piVar1 = (char)*piVar1 + -1;
    UNLOCK();
  }
  return;
}

