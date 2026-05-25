/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000cd80 @ 0x1000CD80 */


void __fastcall FUN_1000cd80(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *lParam;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *local_24;
  uint local_1c;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058896;
  local_c = ExceptionList;
  iVar5 = *(int *)(param_1 + 0x41d8);
  iVar1 = *(int *)(param_1 + 0x41dc);
  if (iVar5 != iVar1) {
    uVar8 = iVar1 - iVar5 & 0xfff;
    uVar9 = iVar5 + 1U & 0xfff;
    local_18 = 0;
    ExceptionList = &local_c;
    local_1c = uVar9;
    if (uVar8 != 0) {
      do {
        lParam = (undefined4 *)thunk_FUN_100088c0((void *)(param_1 + 0x1d8),uVar9);
        if (lParam == (undefined4 *)0x0) goto LAB_1000d816;
        switch(*lParam) {
        case 1:
          iVar5 = lParam[1];
          if ((*(uint *)(iVar5 + 0x44) & 4) == 0) {
            if (((*(uint *)(iVar5 + 0x44) & 0x100) != 0) && ((*(byte *)(iVar5 + 0x58) & 2) == 0)) {
              puVar4 = operator_new(0xc);
              if (puVar4 == (undefined4 *)0x0) {
                puVar4 = (undefined4 *)0x0;
              }
              else {
                *puVar4 = 0;
                puVar4[1] = 0;
                puVar4[2] = iVar5;
              }
              if (*(int *)(param_1 + 0x1cc) == 0) {
                *(undefined4 **)(param_1 + 0x1c8) = puVar4;
              }
              else {
                *(undefined4 **)(*(int *)(param_1 + 0x1cc) + 4) = puVar4;
                *puVar4 = *(undefined4 *)(param_1 + 0x1cc);
              }
              *(undefined4 **)(param_1 + 0x1cc) = puVar4;
              *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
              *(uint *)(lParam[1] + 0x58) = *(uint *)(lParam[1] + 0x58) | 2;
            }
          }
          else if (((*(byte *)(iVar5 + 200) & 0x40) == 0) && ((*(byte *)(iVar5 + 0x1428) & 1) == 0))
          {
            puVar4 = operator_new(0xc);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = iVar5;
            }
            if (*(int *)(param_1 + 0x1cc) == 0) {
              *(undefined4 **)(param_1 + 0x1c8) = puVar4;
            }
            else {
              *(undefined4 **)(*(int *)(param_1 + 0x1cc) + 4) = puVar4;
              *puVar4 = *(undefined4 *)(param_1 + 0x1cc);
            }
            *(undefined4 **)(param_1 + 0x1cc) = puVar4;
            *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
            *(uint *)(lParam[1] + 200) = *(uint *)(lParam[1] + 200) | 0x40;
            if ((((*(byte *)((int *)lParam[1] + 0x16) & 2) != 0) &&
                (iVar5 = (**(code **)(*(int *)lParam[1] + 0xcc))(), iVar5 != 0)) &&
               ((*(byte *)(lParam[1] + 200) & 1) != 0)) {
              thunk_FUN_10034430((void *)(lParam[1] + 0x70));
            }
          }
          break;
        case 2:
          iVar5 = lParam[1];
          if ((*(uint *)(iVar5 + 0x44) & 4) == 0) {
            if ((*(uint *)(iVar5 + 0x44) & 0x100) != 0) {
              piVar6 = *(int **)(param_1 + 0x1c8);
              if (piVar6 == (int *)0x0) {
LAB_1000d11e:
                *(uint *)(lParam[1] + 0x58) = *(uint *)(lParam[1] + 0x58) & 0xfffffffc;
              }
              else {
                do {
                  if (piVar6[2] == iVar5) {
                    if (piVar6 != (int *)0x0) {
                      if (*piVar6 == 0) {
                        *(int *)(param_1 + 0x1c8) = piVar6[1];
                      }
                      else {
                        *(int *)(*piVar6 + 4) = piVar6[1];
                      }
                      piVar3 = (int *)piVar6[1];
                      if (piVar3 == (int *)0x0) {
                        iVar5 = *piVar6;
                        *(undefined4 *)(param_1 + 0x1d0) = 0;
                        *(int *)(param_1 + 0x1cc) = iVar5;
                      }
                      else {
                        *piVar3 = *piVar6;
                        *(int **)(param_1 + 0x1d0) = piVar3;
                      }
                      FUN_1004249a((undefined *)piVar6);
                      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
                    }
                    goto LAB_1000d11e;
                  }
                  piVar6 = (int *)piVar6[1];
                } while (piVar6 != (int *)0x0);
                *(uint *)(lParam[1] + 0x58) = *(uint *)(lParam[1] + 0x58) & 0xfffffffc;
              }
              break;
            }
          }
          else {
            for (piVar6 = *(int **)(param_1 + 0x1c8); piVar6 != (int *)0x0;
                piVar6 = (int *)piVar6[1]) {
              if (piVar6[2] == iVar5) {
                if (piVar6 != (int *)0x0) {
                  if (*piVar6 == 0) {
                    *(int *)(param_1 + 0x1c8) = piVar6[1];
                  }
                  else {
                    *(int *)(*piVar6 + 4) = piVar6[1];
                  }
                  piVar3 = (int *)piVar6[1];
                  if (piVar3 == (int *)0x0) {
                    iVar11 = *piVar6;
                    *(undefined4 *)(param_1 + 0x1d0) = 0;
                    *(int *)(param_1 + 0x1cc) = iVar11;
                  }
                  else {
                    *piVar3 = *piVar6;
                    *(int **)(param_1 + 0x1d0) = piVar3;
                  }
                  FUN_1004249a((undefined *)piVar6);
                  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
                }
                break;
              }
            }
            iVar11 = 0;
            *(uint *)(iVar5 + 200) = *(uint *)(iVar5 + 200) | 0x10;
            do {
              thunk_FUN_10037760((void *)(iVar5 + 0x70),iVar11);
              iVar11 = iVar11 + 1;
            } while (iVar11 < 0x10);
            *(uint *)(iVar5 + 200) = *(uint *)(iVar5 + 200) & 0xffffffbf;
            if ((*(byte *)(iVar5 + 0x58) & 2) == 0) {
              if (*(int *)(iVar5 + 0xc4) != 0) {
                thunk_FUN_10032640(iVar5 + 0x70);
                thunk_FUN_1000f790(*(int *)(iVar5 + 0xc4));
              }
              *lParam = 5;
              iVar5 = lParam[1];
              if (iVar5 != 0) {
                *(byte *)(iVar5 + 0x1428) = *(byte *)(iVar5 + 0x1428) | 1;
                if ((*(uint *)(param_1 + 0x1a4) >> 5 & 1) != 0) goto LAB_1000d2de;
LAB_1000d308:
                thunk_FUN_1002aa90(&DAT_100b5038,0x7ee,0,(LPARAM)lParam);
              }
            }
            else {
              *lParam = 3;
              iVar5 = lParam[1];
              if (iVar5 != 0) {
                *(byte *)(iVar5 + 0x1428) = *(byte *)(iVar5 + 0x1428) | 1;
                if ((*(uint *)(param_1 + 0x1a4) >> 5 & 1) == 0) goto LAB_1000d308;
                PostMessageA(*(HWND *)(iVar5 + 0x1420),0x7ee,0,(LPARAM)lParam);
              }
            }
          }
          goto switchD_1000ce07_caseD_5;
        case 3:
          iVar5 = lParam[1];
          if ((*(uint *)(iVar5 + 0x44) & 4) == 0) {
            if ((*(uint *)(iVar5 + 0x44) & 0x100) != 0) {
              piVar6 = *(int **)(param_1 + 0x1c8);
              if (piVar6 == (int *)0x0) {
LAB_1000d3a0:
                *(uint *)(iVar5 + 0x58) = *(uint *)(iVar5 + 0x58) & 0xfffffffc;
                thunk_FUN_10030570(iVar5);
              }
              else {
                do {
                  if (piVar6[2] == iVar5) {
                    if (piVar6 != (int *)0x0) {
                      if (*piVar6 == 0) {
                        *(int *)(param_1 + 0x1c8) = piVar6[1];
                      }
                      else {
                        *(int *)(*piVar6 + 4) = piVar6[1];
                      }
                      piVar3 = (int *)piVar6[1];
                      if (piVar3 == (int *)0x0) {
                        iVar11 = *piVar6;
                        *(undefined4 *)(param_1 + 0x1d0) = 0;
                        *(int *)(param_1 + 0x1cc) = iVar11;
                      }
                      else {
                        *piVar3 = *piVar6;
                        *(int **)(param_1 + 0x1d0) = piVar3;
                      }
                      FUN_1004249a((undefined *)piVar6);
                      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
                    }
                    goto LAB_1000d3a0;
                  }
                  piVar6 = (int *)piVar6[1];
                } while (piVar6 != (int *)0x0);
                *(uint *)(iVar5 + 0x58) = *(uint *)(iVar5 + 0x58) & 0xfffffffc;
                thunk_FUN_10030570(iVar5);
              }
            }
          }
          else {
            for (piVar6 = *(int **)(param_1 + 0x1c8); piVar6 != (int *)0x0;
                piVar6 = (int *)piVar6[1]) {
              if (piVar6[2] == iVar5) {
                if (piVar6 != (int *)0x0) {
                  if (*piVar6 == 0) {
                    *(int *)(param_1 + 0x1c8) = piVar6[1];
                  }
                  else {
                    *(int *)(*piVar6 + 4) = piVar6[1];
                  }
                  piVar3 = (int *)piVar6[1];
                  if (piVar3 == (int *)0x0) {
                    iVar11 = *piVar6;
                    *(undefined4 *)(param_1 + 0x1d0) = 0;
                    *(int *)(param_1 + 0x1cc) = iVar11;
                  }
                  else {
                    *piVar3 = *piVar6;
                    *(int **)(param_1 + 0x1d0) = piVar3;
                  }
                  FUN_1004249a((undefined *)piVar6);
                  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
                }
                break;
              }
            }
            iVar11 = 0;
            *(uint *)(iVar5 + 200) = *(uint *)(iVar5 + 200) | 0x10;
            do {
              thunk_FUN_10037760((void *)(iVar5 + 0x70),iVar11);
              iVar11 = iVar11 + 1;
            } while (iVar11 < 0x10);
            iVar11 = 1;
            *(uint *)(iVar5 + 200) = *(uint *)(iVar5 + 200) & 0xffffffbf;
            if (1 < *(int *)(iVar5 + 0x1438)) {
              local_24 = (int *)(iVar5 + 0x1444);
              do {
                iVar2 = *local_24;
                if (iVar2 != 0) {
                  for (piVar6 = *(int **)(param_1 + 0x1c8); piVar6 != (int *)0x0;
                      piVar6 = (int *)piVar6[1]) {
                    if (piVar6[2] == iVar2) {
                      if (piVar6 != (int *)0x0) {
                        if (*piVar6 == 0) {
                          *(int *)(param_1 + 0x1c8) = piVar6[1];
                        }
                        else {
                          *(int *)(*piVar6 + 4) = piVar6[1];
                        }
                        piVar3 = (int *)piVar6[1];
                        if (piVar3 == (int *)0x0) {
                          iVar10 = *piVar6;
                          *(undefined4 *)(param_1 + 0x1d0) = 0;
                          *(int *)(param_1 + 0x1cc) = iVar10;
                        }
                        else {
                          *piVar3 = *piVar6;
                          *(int **)(param_1 + 0x1d0) = piVar3;
                        }
                        FUN_1004249a((undefined *)piVar6);
                        *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
                      }
                      break;
                    }
                  }
                  iVar10 = 0;
                  *(uint *)(iVar2 + 200) = *(uint *)(iVar2 + 200) | 0x10;
                  do {
                    thunk_FUN_10037760((void *)(iVar2 + 0x70),iVar10);
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < 0x10);
                  *(uint *)(iVar2 + 200) = *(uint *)(iVar2 + 200) & 0xffffffbf;
                }
                iVar11 = iVar11 + 1;
                local_24 = local_24 + 1;
              } while (iVar11 < *(int *)(iVar5 + 0x1438));
            }
            iVar5 = lParam[1];
            if (iVar5 != 0) {
              *(byte *)(iVar5 + 0x1428) = *(byte *)(iVar5 + 0x1428) | 1;
              if ((*(uint *)(param_1 + 0x1a4) >> 5 & 1) == 0) goto LAB_1000d308;
LAB_1000d2de:
              PostMessageA(*(HWND *)(iVar5 + 0x1420),0x7ee,0,(LPARAM)lParam);
            }
          }
          goto switchD_1000ce07_caseD_5;
        case 4:
          iVar5 = lParam[1];
          if ((*(uint *)(iVar5 + 0x44) & 4) == 0) {
            if ((*(uint *)(iVar5 + 0x44) & 0x100) != 0) {
              if ((*(byte *)(iVar5 + 0x58) & 2) != 0) {
                for (piVar6 = *(int **)(param_1 + 0x1c8); piVar6 != (int *)0x0;
                    piVar6 = (int *)piVar6[1]) {
                  if (piVar6[2] == iVar5) {
                    if (piVar6 != (int *)0x0) {
                      if (*piVar6 == 0) {
                        *(int *)(param_1 + 0x1c8) = piVar6[1];
                      }
                      else {
                        *(int *)(*piVar6 + 4) = piVar6[1];
                      }
                      piVar3 = (int *)piVar6[1];
                      if (piVar3 == (int *)0x0) {
                        iVar5 = *piVar6;
                        *(undefined4 *)(param_1 + 0x1d0) = 0;
                        *(int *)(param_1 + 0x1cc) = iVar5;
                      }
                      else {
                        *piVar3 = *piVar6;
                        *(int **)(param_1 + 0x1d0) = piVar3;
                      }
                      FUN_1004249a((undefined *)piVar6);
                      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
                    }
                    break;
                  }
                }
              }
              if ((undefined4 *)lParam[1] != (undefined4 *)0x0) {
                puVar4 = *(undefined4 **)lParam[1];
                goto LAB_1000d7e4;
              }
              break;
            }
          }
          else if (iVar5 != 0) {
            if ((*(byte *)(iVar5 + 200) & 0x40) != 0) {
              for (piVar6 = *(int **)(param_1 + 0x1c8); piVar6 != (int *)0x0;
                  piVar6 = (int *)piVar6[1]) {
                if (piVar6[2] == iVar5) {
                  if (piVar6 != (int *)0x0) {
                    if (*piVar6 == 0) {
                      *(int *)(param_1 + 0x1c8) = piVar6[1];
                    }
                    else {
                      *(int *)(*piVar6 + 4) = piVar6[1];
                    }
                    piVar3 = (int *)piVar6[1];
                    if (piVar3 == (int *)0x0) {
                      iVar11 = *piVar6;
                      *(undefined4 *)(param_1 + 0x1d0) = 0;
                      *(int *)(param_1 + 0x1cc) = iVar11;
                    }
                    else {
                      *piVar3 = *piVar6;
                      *(int **)(param_1 + 0x1d0) = piVar3;
                    }
                    FUN_1004249a((undefined *)piVar6);
                    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
                  }
                  break;
                }
              }
              iVar11 = 0;
              *(uint *)(iVar5 + 200) = *(uint *)(iVar5 + 200) | 0x10;
              do {
                thunk_FUN_10037760((void *)(iVar5 + 0x70),iVar11);
                iVar11 = iVar11 + 1;
              } while (iVar11 < 0x10);
              *(uint *)(iVar5 + 200) = *(uint *)(iVar5 + 200) & 0xffffffbf;
            }
            iVar5 = lParam[1];
            if (iVar5 != 0) {
              *(byte *)(iVar5 + 0x1428) = *(byte *)(iVar5 + 0x1428) | 1;
              if ((*(uint *)(param_1 + 0x1a4) >> 5 & 1) == 0) goto LAB_1000d308;
              PostMessageA(*(HWND *)(iVar5 + 0x1420),0x7ee,0,(LPARAM)lParam);
            }
          }
        default:
          goto switchD_1000ce07_caseD_5;
        case 6:
          iVar5 = lParam[1];
          if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0xcc) & 4) != 0)) {
            thunk_FUN_10032500(iVar5 + 0x70);
          }
          break;
        case 0xd:
          iVar5 = lParam[1];
          if (iVar5 != 0) {
            *(undefined4 *)(iVar5 + 0x1430) = lParam[2];
            *(undefined4 *)(iVar5 + 0x1434) = lParam[3];
          }
          break;
        case 0xe:
          if ((lParam[1] != 0) && (piVar6 = *(int **)(lParam[1] + 0xf8), piVar6 != (int *)0x0)) {
            iVar5 = *piVar6;
            if (lParam[2] == 0) {
              (**(code **)(iVar5 + 0x34))(0,0xffffffff);
            }
            else {
              (**(code **)(iVar5 + 0x34))(0xffffffff,0,lParam[3]);
            }
          }
          break;
        case 0xf:
          if ((lParam[1] != 0) && (piVar6 = *(int **)(lParam[1] + 0xf8), piVar6 != (int *)0x0)) {
            (**(code **)(*piVar6 + 0x40))(lParam[2]);
          }
          break;
        case 0x10:
          if ((lParam[1] != 0) && (iVar5 = *(int *)(lParam[1] + 0xf8), iVar5 != 0)) {
            thunk_FUN_10034db0((void *)(iVar5 + 0x70),2000);
          }
          break;
        case 0x11:
          puVar4 = (undefined4 *)lParam[1];
          if (puVar4 != (undefined4 *)0x0) {
            iVar5 = puVar4[0x3e];
            if (iVar5 != 0) {
              if ((*(byte *)(iVar5 + 200) & 0x40) != 0) {
                for (piVar6 = *(int **)(param_1 + 0x1c8); piVar6 != (int *)0x0;
                    piVar6 = (int *)piVar6[1]) {
                  if (piVar6[2] == iVar5) {
                    if (piVar6 != (int *)0x0) {
                      if (*piVar6 == 0) {
                        *(int *)(param_1 + 0x1c8) = piVar6[1];
                      }
                      else {
                        *(int *)(*piVar6 + 4) = piVar6[1];
                      }
                      piVar3 = (int *)piVar6[1];
                      if (piVar3 == (int *)0x0) {
                        iVar11 = *piVar6;
                        *(undefined4 *)(param_1 + 0x1d0) = 0;
                        *(int *)(param_1 + 0x1cc) = iVar11;
                      }
                      else {
                        *piVar3 = *piVar6;
                        *(int **)(param_1 + 0x1d0) = piVar3;
                      }
                      FUN_1004249a((undefined *)piVar6);
                      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
                    }
                    break;
                  }
                }
                iVar11 = 0;
                *(uint *)(iVar5 + 200) = *(uint *)(iVar5 + 200) | 0x10;
                do {
                  thunk_FUN_10037760((void *)(iVar5 + 0x70),iVar11);
                  iVar11 = iVar11 + 1;
                } while (iVar11 < 0x10);
                *(uint *)(iVar5 + 200) = *(uint *)(iVar5 + 200) & 0xffffffbf;
              }
              puVar7 = operator_new(0x10);
              local_4 = 0;
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = (undefined4 *)thunk_FUN_100087f0(puVar7);
              }
              *puVar7 = 4;
              puVar7[1] = iVar5;
              local_4 = 0xffffffff;
              *(byte *)(iVar5 + 0x1428) = *(byte *)(iVar5 + 0x1428) | 1;
              if ((*(uint *)(param_1 + 0x1a4) >> 5 & 1) == 0) {
                thunk_FUN_1002aa90(&DAT_100b5038,0x7ee,0,(LPARAM)puVar7);
              }
              else {
                PostMessageA(*(HWND *)(iVar5 + 0x1420),0x7ee,0,(LPARAM)puVar7);
              }
            }
            iVar5 = puVar4[0x3f];
            if (iVar5 != 0) {
              puVar7 = operator_new(0x10);
              local_4 = 1;
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = (undefined4 *)thunk_FUN_100087f0(puVar7);
              }
              *puVar7 = 4;
              puVar7[1] = iVar5;
              *(byte *)(iVar5 + 0x1428) = *(byte *)(iVar5 + 0x1428) | 1;
              local_4 = 0xffffffff;
              if ((*(uint *)(param_1 + 0x1a4) >> 5 & 1) == 0) {
                thunk_FUN_1002aa90(&DAT_100b5038,0x7ee,0,(LPARAM)puVar7);
              }
              else {
                PostMessageA(*(HWND *)(iVar5 + 0x1420),0x7ee,0,(LPARAM)puVar7);
              }
            }
            puVar4 = (undefined4 *)*puVar4;
LAB_1000d7e4:
            (*(code *)*puVar4)(1);
          }
        }
        thunk_FUN_10008840(lParam);
        FUN_1004249a((undefined *)lParam);
switchD_1000ce07_caseD_5:
        *(undefined4 *)(param_1 + 0x1d8 + local_1c * 4) = 0;
        uVar9 = local_1c + 1 & 0xfff;
        local_1c = uVar9;
LAB_1000d816:
        local_18 = local_18 + 1;
      } while (local_18 < uVar8);
    }
    *(int *)(param_1 + 0x41d8) = iVar1;
  }
  ExceptionList = local_c;
  return;
}

