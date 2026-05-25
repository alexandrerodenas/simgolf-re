/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000c420 @ 0x1000C420 */


undefined4 __fastcall FUN_1000c420(void *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint local_1c;
  undefined4 *local_18;
  int *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_1c = *(uint *)((int)param_1 + 0x41d8);
  local_10 = *(uint *)((int)param_1 + 0x41dc);
  if (local_1c == local_10) {
    return 0;
  }
  uVar8 = local_10 - local_1c & 0xfff;
  local_4 = uVar8;
  if (uVar8 != 0) {
    thunk_FUN_1000dcf0(param_1,&local_1c,&local_10);
  }
  local_8 = 0;
  if (uVar8 != 0) {
    do {
      local_1c = local_1c + 1 & 0xfff;
      puVar6 = (undefined4 *)thunk_FUN_100088c0((void *)((int)param_1 + 0x1d8),local_1c);
      local_18 = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        switch(*puVar6) {
        case 2:
          piVar4 = (int *)puVar6[1];
          if ((piVar4[0x11] & 4U) == 0) {
            if ((piVar4[0x11] & 0x100U) != 0) {
              piVar7 = *(int **)((int)param_1 + 0x1c8);
              if (piVar7 == (int *)0x0) {
LAB_1000c610:
                *(uint *)(puVar6[1] + 0x58) = *(uint *)(puVar6[1] + 0x58) & 0xfffffffc;
              }
              else {
                do {
                  if ((int *)piVar7[2] == piVar4) {
                    if (piVar7 != (int *)0x0) {
                      if (*piVar7 == 0) {
                        *(int *)((int)param_1 + 0x1c8) = piVar7[1];
                      }
                      else {
                        *(int *)(*piVar7 + 4) = piVar7[1];
                      }
                      piVar4 = (int *)piVar7[1];
                      if (piVar4 == (int *)0x0) {
                        iVar9 = *piVar7;
                        *(undefined4 *)((int)param_1 + 0x1d0) = 0;
                        *(int *)((int)param_1 + 0x1cc) = iVar9;
                      }
                      else {
                        *piVar4 = *piVar7;
                        *(int **)((int)param_1 + 0x1d0) = piVar4;
                      }
                      FUN_1004249a((undefined *)piVar7);
                      *(int *)((int)param_1 + 0x1d4) = *(int *)((int)param_1 + 0x1d4) + -1;
                    }
                    goto LAB_1000c610;
                  }
                  piVar7 = (int *)piVar7[1];
                } while (piVar7 != (int *)0x0);
                *(uint *)(puVar6[1] + 0x58) = *(uint *)(puVar6[1] + 0x58) & 0xfffffffc;
              }
            }
          }
          else {
            for (piVar7 = *(int **)((int)param_1 + 0x1c8); piVar7 != (int *)0x0;
                piVar7 = (int *)piVar7[1]) {
              if ((int *)piVar7[2] == piVar4) {
                if (piVar7 != (int *)0x0) {
                  if (*piVar7 == 0) {
                    *(int *)((int)param_1 + 0x1c8) = piVar7[1];
                  }
                  else {
                    *(int *)(*piVar7 + 4) = piVar7[1];
                  }
                  piVar1 = (int *)piVar7[1];
                  if (piVar1 == (int *)0x0) {
                    iVar9 = *piVar7;
                    *(undefined4 *)((int)param_1 + 0x1d0) = 0;
                    *(int *)((int)param_1 + 0x1cc) = iVar9;
                  }
                  else {
                    *piVar1 = *piVar7;
                    *(int **)((int)param_1 + 0x1d0) = piVar1;
                  }
                  FUN_1004249a((undefined *)piVar7);
                  *(int *)((int)param_1 + 0x1d4) = *(int *)((int)param_1 + 0x1d4) + -1;
                }
                break;
              }
            }
            iVar9 = 0;
            piVar4[0x32] = piVar4[0x32] | 0x10;
            do {
              thunk_FUN_10037760(piVar4 + 0x1c,iVar9);
              iVar9 = iVar9 + 1;
            } while (iVar9 < 0x10);
            piVar4[0x32] = piVar4[0x32] & 0xffffffbf;
            if ((*(byte *)(piVar4 + 0x16) & 2) == 0) {
              thunk_FUN_10039c10(piVar4);
              puVar6 = local_18;
            }
            else {
              thunk_FUN_10039b30(piVar4);
              puVar6 = local_18;
            }
          }
        case 1:
          thunk_FUN_10008840(puVar6);
          FUN_1004249a((undefined *)puVar6);
          break;
        case 3:
          piVar4 = (int *)puVar6[1];
          if ((piVar4[0x11] & 4U) == 0) {
            if ((piVar4[0x11] & 0x100U) != 0) {
              for (piVar7 = *(int **)((int)param_1 + 0x1c8); piVar7 != (int *)0x0;
                  piVar7 = (int *)piVar7[1]) {
                if ((int *)piVar7[2] == piVar4) {
                  if (piVar7 != (int *)0x0) {
                    if (*piVar7 == 0) {
                      *(int *)((int)param_1 + 0x1c8) = piVar7[1];
                    }
                    else {
                      *(int *)(*piVar7 + 4) = piVar7[1];
                    }
                    piVar1 = (int *)piVar7[1];
                    if (piVar1 == (int *)0x0) {
                      iVar9 = *piVar7;
                      *(undefined4 *)((int)param_1 + 0x1d0) = 0;
                      *(int *)((int)param_1 + 0x1cc) = iVar9;
                    }
                    else {
                      *piVar1 = *piVar7;
                      *(int **)((int)param_1 + 0x1d0) = piVar1;
                    }
                    FUN_1004249a((undefined *)piVar7);
                    *(int *)((int)param_1 + 0x1d4) = *(int *)((int)param_1 + 0x1d4) + -1;
                  }
                  break;
                }
              }
              piVar4[0x16] = piVar4[0x16] & 0xfffffffc;
              thunk_FUN_10030570((int)piVar4);
            }
          }
          else {
            for (piVar7 = *(int **)((int)param_1 + 0x1c8); piVar7 != (int *)0x0;
                piVar7 = (int *)piVar7[1]) {
              if ((int *)piVar7[2] == piVar4) {
                if (piVar7 != (int *)0x0) {
                  if (*piVar7 == 0) {
                    *(int *)((int)param_1 + 0x1c8) = piVar7[1];
                  }
                  else {
                    *(int *)(*piVar7 + 4) = piVar7[1];
                  }
                  piVar1 = (int *)piVar7[1];
                  if (piVar1 == (int *)0x0) {
                    iVar9 = *piVar7;
                    *(undefined4 *)((int)param_1 + 0x1d0) = 0;
                    *(int *)((int)param_1 + 0x1cc) = iVar9;
                  }
                  else {
                    *piVar1 = *piVar7;
                    *(int **)((int)param_1 + 0x1d0) = piVar1;
                  }
                  FUN_1004249a((undefined *)piVar7);
                  *(int *)((int)param_1 + 0x1d4) = *(int *)((int)param_1 + 0x1d4) + -1;
                }
                break;
              }
            }
            iVar9 = 0;
            piVar4[0x32] = piVar4[0x32] | 0x10;
            do {
              thunk_FUN_10037760(piVar4 + 0x1c,iVar9);
              iVar9 = iVar9 + 1;
            } while (iVar9 < 0x10);
            local_c = 1;
            piVar4[0x32] = piVar4[0x32] & 0xffffffbf;
            if (1 < piVar4[0x50e]) {
              local_14 = piVar4 + 0x511;
              do {
                piVar7 = (int *)*local_14;
                if (piVar7 != (int *)0x0) {
                  for (piVar1 = *(int **)((int)param_1 + 0x1c8); piVar1 != (int *)0x0;
                      piVar1 = (int *)piVar1[1]) {
                    if ((int *)piVar1[2] == piVar7) {
                      if (piVar1 != (int *)0x0) {
                        if (*piVar1 == 0) {
                          *(int *)((int)param_1 + 0x1c8) = piVar1[1];
                        }
                        else {
                          *(int *)(*piVar1 + 4) = piVar1[1];
                        }
                        piVar2 = (int *)piVar1[1];
                        if (piVar2 == (int *)0x0) {
                          iVar9 = *piVar1;
                          *(undefined4 *)((int)param_1 + 0x1d0) = 0;
                          *(int *)((int)param_1 + 0x1cc) = iVar9;
                        }
                        else {
                          *piVar2 = *piVar1;
                          *(int **)((int)param_1 + 0x1d0) = piVar2;
                        }
                        FUN_1004249a((undefined *)piVar1);
                        *(int *)((int)param_1 + 0x1d4) = *(int *)((int)param_1 + 0x1d4) + -1;
                      }
                      break;
                    }
                  }
                  iVar9 = 0;
                  piVar7[0x32] = piVar7[0x32] | 0x10;
                  do {
                    thunk_FUN_10037760(piVar7 + 0x1c,iVar9);
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < 0x10);
                  piVar7[0x32] = piVar7[0x32] & 0xffffffbf;
                  thunk_FUN_10039b30(piVar7);
                }
                thunk_FUN_10039b30(piVar4);
                local_c = local_c + 1;
                local_14 = local_14 + 1;
              } while (local_c < piVar4[0x50e]);
            }
          }
          puVar6 = local_18;
          thunk_FUN_10008840(local_18);
          FUN_1004249a((undefined *)puVar6);
          break;
        case 4:
          puVar3 = (undefined4 *)puVar6[1];
          if ((puVar3[0x11] & 4) == 0) {
            if ((puVar3[0x11] & 0x100) != 0) {
              if ((*(byte *)(puVar3 + 0x16) & 2) != 0) {
                thunk_FUN_1000e700((void *)((int)param_1 + 0x1c8),(int)puVar3);
              }
              if ((undefined4 *)puVar6[1] != (undefined4 *)0x0) {
                (*(code *)**(undefined4 **)puVar6[1])(1);
              }
            }
          }
          else {
            if (puVar3 == (undefined4 *)0x0) break;
            if ((*(byte *)(puVar3 + 0x32) & 0x40) != 0) {
              for (piVar4 = *(int **)((int)param_1 + 0x1c8); piVar4 != (int *)0x0;
                  piVar4 = (int *)piVar4[1]) {
                if ((undefined4 *)piVar4[2] == puVar3) {
                  if (piVar4 != (int *)0x0) {
                    if (*piVar4 == 0) {
                      *(int *)((int)param_1 + 0x1c8) = piVar4[1];
                    }
                    else {
                      *(int *)(*piVar4 + 4) = piVar4[1];
                    }
                    piVar7 = (int *)piVar4[1];
                    if (piVar7 == (int *)0x0) {
                      iVar9 = *piVar4;
                      *(undefined4 *)((int)param_1 + 0x1d0) = 0;
                      *(int *)((int)param_1 + 0x1cc) = iVar9;
                    }
                    else {
                      *piVar7 = *piVar4;
                      *(int **)((int)param_1 + 0x1d0) = piVar7;
                    }
                    FUN_1004249a((undefined *)piVar4);
                    *(int *)((int)param_1 + 0x1d4) = *(int *)((int)param_1 + 0x1d4) + -1;
                  }
                  break;
                }
              }
              iVar9 = 0;
              puVar3[0x32] = puVar3[0x32] | 0x10;
              do {
                thunk_FUN_10037760(puVar3 + 0x1c,iVar9);
                iVar9 = iVar9 + 1;
              } while (iVar9 < 0x10);
              puVar3[0x32] = puVar3[0x32] & 0xffffffbf;
            }
            local_c = 1;
            puVar6 = local_18;
            if (1 < (int)puVar3[0x50e]) {
              local_14 = puVar3 + 0x511;
              do {
                puVar5 = (undefined4 *)*local_14;
                if (puVar5 != (undefined4 *)0x0) {
                  for (piVar4 = *(int **)((int)param_1 + 0x1c8); piVar4 != (int *)0x0;
                      piVar4 = (int *)piVar4[1]) {
                    if ((undefined4 *)piVar4[2] == puVar5) {
                      if (piVar4 != (int *)0x0) {
                        if (*piVar4 == 0) {
                          *(int *)((int)param_1 + 0x1c8) = piVar4[1];
                        }
                        else {
                          *(int *)(*piVar4 + 4) = piVar4[1];
                        }
                        piVar7 = (int *)piVar4[1];
                        if (piVar7 == (int *)0x0) {
                          iVar9 = *piVar4;
                          *(undefined4 *)((int)param_1 + 0x1d0) = 0;
                          *(int *)((int)param_1 + 0x1cc) = iVar9;
                        }
                        else {
                          *piVar7 = *piVar4;
                          *(int **)((int)param_1 + 0x1d0) = piVar7;
                        }
                        FUN_1004249a((undefined *)piVar4);
                        *(int *)((int)param_1 + 0x1d4) = *(int *)((int)param_1 + 0x1d4) + -1;
                      }
                      break;
                    }
                  }
                  iVar9 = 0;
                  puVar5[0x32] = puVar5[0x32] | 0x10;
                  do {
                    thunk_FUN_10037760(puVar5 + 0x1c,iVar9);
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < 0x10);
                  puVar5[0x32] = puVar5[0x32] & 0xffffffbf;
                  (**(code **)*puVar5)(1);
                  puVar6 = local_18;
                }
                local_c = local_c + 1;
                local_14 = local_14 + 1;
              } while (local_c < (int)puVar3[0x50e]);
            }
            (**(code **)*puVar3)(1);
          }
          thunk_FUN_1000cc40(puVar6,1);
        }
        *(undefined4 *)((int)param_1 + local_1c * 4 + 0x1d8) = 0;
        uVar8 = local_4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar8);
  }
  *(uint *)((int)param_1 + 0x41d8) = local_10;
  return 0;
}

