/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008470 @ 0x10008470 */


undefined4 FUN_10008470(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  timeGetTime();
  pvVar5 = DAT_100b4a20;
  piVar1 = (int *)((int)DAT_100b4a20 + 0x1c8);
  iVar6 = *(int *)((int)DAT_100b4a20 + 0x1c8);
  *(int *)((int)DAT_100b4a20 + 0x1d0) = iVar6;
  if (iVar6 != 0) {
    piVar7 = *(int **)(iVar6 + 8);
joined_r0x1000849a:
    piVar4 = piVar7;
    if (piVar4 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar4 + 0x78))();
      if (iVar6 == 1) {
        iVar8 = (**(code **)(*piVar4 + 0x5c))();
        iVar6 = *(int *)((int)pvVar5 + 0x1d0);
        if (iVar8 == 0) {
          if (iVar6 == 0) {
LAB_10008557:
            piVar7 = (int *)0x0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 4);
            *(int *)((int)pvVar5 + 0x1d0) = iVar6;
            if (iVar6 == 0) goto LAB_10008557;
            piVar7 = *(int **)(iVar6 + 8);
          }
          for (piVar2 = (int *)*piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
            if ((int *)piVar2[2] == piVar4) {
              if (piVar2 != (int *)0x0) {
                if (*piVar2 == 0) {
                  *piVar1 = piVar2[1];
                }
                else {
                  *(int *)(*piVar2 + 4) = piVar2[1];
                }
                piVar3 = (int *)piVar2[1];
                if (piVar3 == (int *)0x0) {
                  iVar6 = *piVar2;
                  *(undefined4 *)((int)pvVar5 + 0x1d0) = 0;
                  *(int *)((int)pvVar5 + 0x1cc) = iVar6;
                }
                else {
                  *piVar3 = *piVar2;
                  *(int **)((int)pvVar5 + 0x1d0) = piVar3;
                }
                FUN_1004249a((undefined *)piVar2);
                *(int *)((int)pvVar5 + 0x1d4) = *(int *)((int)pvVar5 + 0x1d4) + -1;
              }
              break;
            }
          }
          if ((piVar4[0x33] & 0x400U) != 0) {
            thunk_FUN_10038400((int)(piVar4 + 0x1c));
          }
          piVar4[0x32] = piVar4[0x32] & 0xffffffbf;
          if (((piVar4[0x16] & 2U) == 0) &&
             ((((uint)piVar4[0x16] >> 4 & 1) == 0 || ((*(byte *)(piVar4 + 0x509) & 1) != 0)))) {
            if (((piVar4[0x32] & 1U) == 0) && (((uint)piVar4[0x33] >> 7 & 1) == 0)) {
              thunk_FUN_1000dbe0(DAT_100b4a20,(int)piVar4,5);
            }
            else if (((piVar4[0x32] & 1U) == 0) && (((uint)piVar4[0x33] >> 7 & 1) != 0)) {
              if (piVar4 != (int *)0x0) {
                (**(code **)*piVar4)(1);
              }
            }
            else {
              thunk_FUN_10039c10(piVar4);
            }
          }
          else {
            thunk_FUN_1000dbe0(DAT_100b4a20,(int)piVar4,3);
          }
        }
        else {
          if (iVar6 == 0) {
            return 0;
          }
          iVar6 = *(int *)(iVar6 + 4);
          *(int *)((int)pvVar5 + 0x1d0) = iVar6;
          if (iVar6 == 0) {
            return 0;
          }
          piVar7 = *(int **)(iVar6 + 8);
        }
        goto joined_r0x1000849a;
      }
      if (iVar6 != 4) {
        if (iVar6 == 6) {
          iVar8 = (**(code **)(*piVar4 + 0x5c))();
          iVar6 = *piVar4;
          if (iVar8 == 0) {
            piVar7 = (int *)(**(code **)(iVar6 + 100))();
            (**(code **)(*piVar4 + 0x80))();
            goto joined_r0x1000849a;
          }
        }
        else {
          iVar6 = *piVar4;
        }
        piVar7 = (int *)(**(code **)(iVar6 + 100))();
        goto joined_r0x1000849a;
      }
      iVar6 = (**(code **)(*piVar4 + 0x5c))();
      if (iVar6 == 0) {
        piVar7 = (int *)(**(code **)(*piVar4 + 100))();
        if ((*(byte *)(piVar4 + 0x16) & 8) != 0) {
          (**(code **)(*piVar4 + 0x80))();
          (**(code **)(*piVar4 + 0x38))();
        }
      }
      else {
        piVar7 = (int *)(**(code **)(*piVar4 + 100))();
      }
      goto joined_r0x1000849a;
    }
  }
  return 0;
}

