/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000a330 @ 0x1000A330 */


undefined4 __fastcall FUN_1000a330(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_c = *(uint *)((int)param_1 + 0x4050);
  local_4 = *(uint *)((int)param_1 + 0x4054);
  if (local_c == local_4) {
    return 0;
  }
  uVar7 = local_4 - local_c & 0xfff;
  if (uVar7 != 0) {
    thunk_FUN_1000aaf0(param_1,&local_c,&local_4);
    local_8 = uVar7;
    do {
      local_c = local_c + 1 & 0xfff;
      puVar1 = *(undefined4 **)((int)param_1 + local_c * 4 + 0x50);
      if (puVar1 == (undefined4 *)0x0) goto LAB_1000a555;
      switch(*puVar1) {
      case 1:
        goto switchD_1000a3a8_caseD_1;
      case 2:
        piVar3 = (int *)puVar1[1];
        thunk_FUN_10020d80(piVar3,'\0');
        piVar3[0x2b] = piVar3[0x2b] & 0xffffffdf;
        (**(code **)(*piVar3 + 0xb8))();
        goto switchD_1000a3a8_caseD_1;
      case 3:
        pvVar6 = (void *)puVar1[1];
        for (piVar3 = *(int **)((int)param_1 + 0x40); piVar3 != (int *)0x0;
            piVar3 = (int *)piVar3[1]) {
          if ((void *)piVar3[2] == pvVar6) {
            if (piVar3 != (int *)0x0) {
              if (*piVar3 == 0) {
                *(int *)((int)param_1 + 0x40) = piVar3[1];
              }
              else {
                *(int *)(*piVar3 + 4) = piVar3[1];
              }
              piVar4 = (int *)piVar3[1];
              if (piVar4 == (int *)0x0) {
                iVar5 = *piVar3;
                *(undefined4 *)((int)param_1 + 0x48) = 0;
                *(int *)((int)param_1 + 0x44) = iVar5;
              }
              else {
                *piVar4 = *piVar3;
                *(int **)((int)param_1 + 0x48) = piVar4;
              }
              FUN_1004249a((undefined *)piVar3);
              *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + -1;
            }
            break;
          }
        }
        thunk_FUN_10020d80(pvVar6,'\0');
        *(uint *)((int)pvVar6 + 0xac) = *(uint *)((int)pvVar6 + 0xac) & 0xffffffdf;
        thunk_FUN_100204b0((int)pvVar6);
switchD_1000a3a8_caseD_1:
        thunk_FUN_10008840(puVar1);
        FUN_1004249a((undefined *)puVar1);
        break;
      case 4:
        puVar2 = (undefined4 *)puVar1[1];
        if (puVar2 != (undefined4 *)0x0) {
          if ((*(byte *)(puVar2 + 0x2b) & 0x20) != 0) {
            for (piVar3 = *(int **)((int)param_1 + 0x40); piVar3 != (int *)0x0;
                piVar3 = (int *)piVar3[1]) {
              if ((undefined4 *)piVar3[2] == puVar2) {
                if (piVar3 != (int *)0x0) {
                  if (*piVar3 == 0) {
                    *(int *)((int)param_1 + 0x40) = piVar3[1];
                  }
                  else {
                    *(int *)(*piVar3 + 4) = piVar3[1];
                  }
                  piVar4 = (int *)piVar3[1];
                  if (piVar4 == (int *)0x0) {
                    iVar5 = *piVar3;
                    *(undefined4 *)((int)param_1 + 0x48) = 0;
                    *(int *)((int)param_1 + 0x44) = iVar5;
                  }
                  else {
                    *piVar4 = *piVar3;
                    *(int **)((int)param_1 + 0x48) = piVar4;
                  }
                  FUN_1004249a((undefined *)piVar3);
                  *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + -1;
                }
                break;
              }
            }
            puVar2[0x2b] = puVar2[0x2b] & 0xffffffdf;
          }
          (**(code **)*puVar2)(1);
          goto switchD_1000a3a8_caseD_1;
        }
        break;
      case 7:
        if ((int *)puVar1[1] != (int *)0x0) {
          thunk_FUN_100231e0((int *)puVar1[1]);
          goto switchD_1000a3a8_caseD_1;
        }
        break;
      case 8:
        pvVar6 = (void *)puVar1[1];
        if (pvVar6 != (void *)0x0) {
          thunk_FUN_100238b0(pvVar6,puVar1[2]);
          thunk_FUN_10023540(pvVar6,puVar1[2]);
          goto switchD_1000a3a8_caseD_1;
        }
        break;
      case 9:
        if ((void *)puVar1[1] != (void *)0x0) {
          thunk_FUN_100238b0((void *)puVar1[1],puVar1[2]);
          goto switchD_1000a3a8_caseD_1;
        }
        break;
      case 10:
        if ((void *)puVar1[1] != (void *)0x0) {
          thunk_FUN_10023a60((void *)puVar1[1],puVar1[2],puVar1[3]);
        }
        break;
      case 0xb:
        if ((void *)puVar1[1] != (void *)0x0) {
          thunk_FUN_10023c70((void *)puVar1[1],puVar1[2],puVar1[3]);
        }
      }
      *(undefined4 *)((int)param_1 + local_c * 4 + 0x50) = 0;
LAB_1000a555:
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  *(uint *)((int)param_1 + 0x4050) = local_4;
  return 0;
}

