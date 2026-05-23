/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048e900 @ 0x0048E900 */
/* Body size: 5472 addresses */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0048e900(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int unaff_ESI;
  uint uVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar16;
  undefined4 uVar17;
  int iStack_2c;
  int aiStack_28 [3];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_c = *unaff_FS_OFFSET;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b806b;
  *unaff_FS_OFFSET = &uStack_c;
  iVar3 = (**(code **)(*param_1 + 0x194))();
  if (iVar3 == 0) {
    iVar3 = -1;
    goto LAB_0048fe4b;
  }
  iStack_1c = 0;
  if (*(int *)(*(int *)(param_1[0x519] + 8) + 0x1534 + (int)param_1) == 0) {
    param_1[0x595] = -1;
  }
  if ((1 < param_1[0x55e]) && (param_1[0x164] == 0)) {
    param_1[0x595] = 8;
  }
  if ((param_1[0x164] == 0) || (iVar3 = FUN_004801f0(), iVar3 == 0)) {
    param_1[0x164] = 0;
    param_1[0x7da] = param_1[0x7da] & 0xffefffff;
  }
  else {
    FUN_0048e120(param_1[0x167]);
    FUN_0048e0b0(param_1[0x168]);
    FUN_0048e190(param_1[0x165],param_1[0x166]);
    FUN_00491490(1);
    FUN_004914b0(1);
  }
  iVar3 = (**(code **)(*param_1 + 0x17c))();
  if (iVar3 != 0) goto LAB_0048fe4b;
  if ((param_2 != 0) || (uVar7 = param_1[0x7da], (uVar7 & 0x8000) != 0)) {
    iVar3 = 0;
    goto LAB_0048fe4b;
  }
  iVar3 = param_1[0x164];
  iVar12 = iVar3;
  if (iVar3 == 0) {
    iVar12 = param_1[0x844];
  }
  uVar10 = param_1[0x7d9];
  if ((uVar7 & 0x20) != 0) {
    uVar10 = uVar10 | 0x20;
  }
  if (iVar3 == 0) {
    uVar10 = uVar10 | 1;
  }
  else {
    uVar10 = uVar10 | 0x400000;
  }
  if (DAT_0083abe4 != 0) {
    uVar10 = uVar10 | 0x10000000;
  }
  if (param_1[0x4f3] != 0) {
    uVar10 = uVar10 | 0x10000;
  }
  if ((uVar7 & 0x4100) != 0) {
    uVar10 = uVar10 | 0x1000;
  }
  if (((uVar7 & 0x20000) != 0) || (iVar3 != 0)) {
    uVar10 = uVar10 | 0x80000;
  }
  if ((int *)param_1[0x16f] == param_1) {
    (**(code **)(*param_1 + 0x184))();
    if (param_1[0x4f3] == 0) {
      iStack_18 = param_1[0x60];
    }
    else {
      iVar3 = *(int *)(param_1[0x4f3] + 0x1c);
      iStack_18 = param_1[0x60];
      if (iStack_18 < iVar3 + param_1[0x65] * 2) {
        iStack_18 = iVar3 + param_1[0x65] * 2;
      }
    }
    iStack_14 = param_1[0x61];
    iStack_10 = param_1[0x62];
    if (iStack_14 == 0) {
      uVar10 = uVar10 & 0xfffffffe;
    }
    iVar3 = FUN_004806c0(0,0,param_1[0x7df],param_1[0x7e0],param_1[0x172],uVar10 | 0x800,iVar12,0,
                         &iStack_18);
    if (iVar3 != 0) goto LAB_0048fe4b;
    iVar3 = (**(code **)(*DAT_0083ad50 + 0xb4))();
    FUN_00476310((-(uint)(iVar3 != 1) & 0xffff8000) + 0x8000ffff,param_1[0x7fc],param_1[0x800],
                 param_1[0x804]);
    iVar3 = (**(code **)(*DAT_0083ad50 + 0xb4))();
    FUN_00476340((-(uint)(iVar3 != 1) & 0xffff8000) + 0x8000ffff,param_1[0x7fd],param_1[0x801],
                 param_1[0x805]);
    iVar3 = (**(code **)(*DAT_0083ad50 + 0xb4))();
    FUN_00476370((-(uint)(iVar3 != 1) & 0xffff8000) + 0x8000ffff,param_1[0x7fe],param_1[0x802],
                 param_1[0x806]);
    iVar3 = (**(code **)(*DAT_0083ad50 + 0xb4))();
    FUN_004763a0((-(uint)(iVar3 != 1) & 0xffff8000) + 0x8000ffff,param_1[0x7ff],param_1[0x803],
                 param_1[0x807]);
    FUN_004762d0(param_1[0x7f4],param_1[0x7f5],param_1[0x7f6],param_1[0x7f7]);
    if (param_1[0x172] != 0) {
      FUN_0047b8f0(param_1[0x172]);
    }
    (**(code **)(*param_1 + 0x188))();
  }
  piVar11 = (int *)param_1[0x16f];
  if (piVar11 == param_1) {
    iVar3 = param_1[0x7ee];
    if ((*(byte *)(piVar11 + 0x28) & 2) == 0) {
      if (iVar3 == 0x1000) {
        if (DAT_0083ad50 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*DAT_0083ad50 + 0xa8))();
        }
        if (*(int **)(param_1[0x16f] + 0x278) == (int *)0x0) {
          param_1[0x7dd] = iVar3 >> 1;
        }
        else {
          iVar12 = (**(code **)(**(int **)(param_1[0x16f] + 0x278) + 0xd8))();
          param_1[0x7dd] = iVar3 - iVar12 >> 1;
        }
      }
      else if (iVar3 < 0) {
        if (DAT_0083ad50 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*DAT_0083ad50 + 0xa8))();
        }
        if (*(int **)(param_1[0x16f] + 0x278) == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = (**(code **)(**(int **)(param_1[0x16f] + 0x278) + 0xd8))();
        }
        param_1[0x7dd] = (iVar3 - iVar12) + param_1[0x7ee];
      }
      else {
        param_1[0x7dd] = iVar3;
      }
      iVar3 = param_1[0x7ef];
      if (iVar3 == 0x1000) {
        param_1[0x7de] = 100;
      }
      else {
        if (-1 < iVar3) goto LAB_0048ef1a;
        if (DAT_0083ad50 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*DAT_0083ad50 + 0xac))();
        }
        if (*(int **)(param_1[0x16f] + 0x278) == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = (**(code **)(**(int **)(param_1[0x16f] + 0x278) + 0xdc))();
        }
        param_1[0x7de] = (iVar3 - iVar12) + param_1[0x7ef];
      }
    }
    else {
      if (iVar3 == 0x1000) {
        if (DAT_0083ad50 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*DAT_0083ad50 + 0xa8))();
        }
        param_1[0x7dd] =
             (*(int *)(param_1[0x16f] + 0x1bc) - *(int *)(param_1[0x16f] + 0x1c4)) + iVar3 >> 1;
      }
      else if (iVar3 < 0) {
        if (DAT_0083ad50 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*DAT_0083ad50 + 0xa8))();
        }
        param_1[0x7dd] =
             (*(int *)(param_1[0x16f] + 0x1bc) - *(int *)(param_1[0x16f] + 0x1c4)) + iVar3 +
             param_1[0x7ee];
      }
      else {
        param_1[0x7dd] = iVar3;
      }
      iVar3 = param_1[0x7ef];
      if (iVar3 == 0x1000) {
        param_1[0x7de] = 100;
      }
      else {
        if (-1 < iVar3) goto LAB_0048ef1a;
        if (DAT_0083ad50 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*DAT_0083ad50 + 0xac))();
        }
        param_1[0x7de] =
             (*(int *)(param_1[0x16f] + 0x1c0) - *(int *)(param_1[0x16f] + 0x1c8)) + iVar3 +
             param_1[0x7ef];
      }
    }
  }
  else {
    iVar3 = param_1[0x7ee];
    if (iVar3 == 0x1000) {
      if ((int *)piVar11[0x9e] == (int *)0x0) {
        iVar3 = -param_1[0x7df] >> 1;
      }
      else {
        iVar3 = (**(code **)(*(int *)piVar11[0x9e] + 0xd8))();
        iVar3 = iVar3 - param_1[0x7df] >> 1;
      }
    }
    else if (iVar3 < 0) {
      if ((int *)piVar11[0x9e] == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(*(int *)piVar11[0x9e] + 0xd8))();
      }
      iVar3 = (iVar3 - param_1[0x7df]) + param_1[0x7ee];
    }
    param_1[0x7dd] = iVar3;
    iVar3 = param_1[0x7ef];
    if (iVar3 == 0x1000) {
      param_1[0x7de] = 100;
    }
    else {
      if (iVar3 < 0) {
        if (*(int **)(param_1[0x16f] + 0x278) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(**(int **)(param_1[0x16f] + 0x278) + 0xdc))();
        }
        iVar3 = (iVar3 - param_1[0x7e0]) + param_1[0x7ef];
      }
LAB_0048ef1a:
      param_1[0x7de] = iVar3;
    }
  }
  (**(code **)(*param_1 + 0x58))();
  aiStack_28[0] = DAT_0083b8d8;
  if (param_1[0x7e5] != 0) {
    aiStack_28[0] = DAT_0083b8d8 + param_1[0x7e9];
  }
  iStack_2c = param_1[0x517];
  if (param_1[0x517] < 0) {
    iStack_2c = DAT_0083b8dc;
  }
  if (param_1[0x595] != -1) {
    if ((param_1[0x7da] & 0x800000U) != 0) {
      *(uint *)(*(int *)(param_1[0x519] + 8) + 0x1488 + (int)param_1) =
           *(uint *)(*(int *)(param_1[0x519] + 8) + 0x1488 + (int)param_1) | 0x1000;
    }
    param_1[0x53d] = param_1[0x7da] & 0x800;
    FUN_004a08a0(param_1[0x595],param_1[0x16f],iStack_2c,aiStack_28[0],0x80000);
    (**(code **)(*(int *)(*(int *)(param_1[0x519] + 4) + 0x1464 + (int)param_1) + 4))(0);
  }
  iVar3 = param_1[0x7e8];
  aiStack_28[0] = ((param_1[0x7e0] - param_1[0x7eb]) - iVar3) - param_1[0x7e4];
  aiStack_28[1] = 0;
  iStack_2c = iVar3;
  if ((((param_1[0x81e] != 0) && (param_1[0x81f] != 0)) && (param_1[0x820] != 0)) &&
     ((param_1[0x7da] & 0x10000U) == 0)) {
    if ((int *)param_1[0x9e] == (int *)0x0) {
      iStack_2c = 0;
    }
    else {
      iStack_2c = (**(code **)(*(int *)param_1[0x9e] + 0xd8))();
    }
    iStack_2c = iStack_2c + *(int *)(param_1[0x81e] + 0x18) * -3;
  }
  (**(code **)(*param_1 + 400))(&iStack_2c,aiStack_28,aiStack_28 + 1);
  uVar7 = param_1[0x7da];
  if (((uVar7 & 0x80100) == 0) && ((int *)param_1[0x16f] == param_1)) {
    iStack_2c = unaff_ESI;
    if ((uVar7 & 0x10000) == 0) {
      if (unaff_ESI < 0) {
        iVar12 = -(param_1[0x7e9] + param_1[0x7e3]);
LAB_0048f0e4:
        iVar12 = unaff_ESI + iVar12;
      }
      else {
        iVar12 = unaff_ESI;
        if (param_1[0x81e] == 0) {
          iVar12 = (param_1[0x7e9] + param_1[0x7e3]) * param_1[0x4df];
          goto LAB_0048f0e4;
        }
      }
      iVar8 = param_1[0x842];
      if (iVar8 == 0) {
        if ((uVar7 & 0x1000000) == 0) {
          if (DAT_0083b994 == (char *)0x0) {
            uVar7 = 0xffffffff;
            pcVar15 = &DAT_004e3db0;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar1 != '\0');
            puVar4 = _malloc(~uVar7);
            param_1[0x842] = (int)puVar4;
            *puVar4 = 0;
            uVar7 = 0xffffffff;
            pcVar15 = &DAT_004e3db0;
            do {
              pcVar14 = pcVar15;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar14;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            iVar8 = -1;
            pcVar15 = (char *)param_1[0x842];
            do {
              pcVar13 = pcVar15;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar13 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar13;
            } while (cVar1 != '\0');
            pcVar15 = pcVar14 + -uVar7;
            pcVar14 = pcVar13 + -1;
            for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
          else {
            uVar7 = 0xffffffff;
            pcVar15 = DAT_0083b994;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar1 != '\0');
            puVar4 = _malloc(~uVar7);
            param_1[0x842] = (int)puVar4;
            *puVar4 = 0;
            uVar7 = 0xffffffff;
            pcVar15 = DAT_0083b994;
            do {
              pcVar14 = pcVar15;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar14;
            } while (cVar1 != '\0');
            puStack_8 = (undefined1 *)~uVar7;
            iVar8 = -1;
            pcVar15 = (char *)param_1[0x842];
            do {
              pcVar13 = pcVar15;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar13 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar13;
            } while (cVar1 != '\0');
            pcVar15 = pcVar14 + -(int)puStack_8;
            pcVar14 = pcVar13 + -1;
            for (uVar7 = (uint)puStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar7 = (uint)puStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
        }
      }
      else if ((uVar7 & 0x1000000) != 0) {
        if (iVar8 != 0) {
          FUN_004a5007(iVar8);
        }
        param_1[0x842] = 0;
      }
      iVar8 = param_1[0x81e];
      iVar5 = param_1[0x7e3];
      iVar9 = param_1[0x7e4];
      if (iVar8 == 0) {
LAB_0048f25e:
        FUN_004887c0(param_1[0x842],0xffffffff,iVar12,unaff_EBP,iVar5,iVar9,param_1,unaff_EBX);
        param_1[0x309] = param_1[0x825];
        param_1[0x308] = param_1[0x824];
        param_1[0x30a] = param_1[0x826];
        param_1[0x311] = param_1[0x828];
        param_1[0x310] = param_1[0x827];
        param_1[0x312] = param_1[0x829];
        param_1[0x314] = param_1[0x82b];
        param_1[0x313] = param_1[0x82a];
        param_1[0x315] = param_1[0x82c];
        param_1[0x317] = param_1[0x82e];
        param_1[0x316] = param_1[0x82d];
        param_1[0x318] = param_1[0x82f];
        param_1[0x31a] = param_1[0x831];
        param_1[0x319] = param_1[0x830];
        param_1[0x31b] = param_1[0x832];
        param_1[0x31d] = param_1[0x834];
        param_1[0x31c] = param_1[0x833];
        param_1[0x31e] = param_1[0x835];
        param_1[800] = param_1[0x837];
        param_1[799] = param_1[0x836];
        param_1[0x321] = param_1[0x838];
        param_1[0x323] = param_1[0x83a];
        param_1[0x322] = param_1[0x839];
        param_1[0x324] = param_1[0x83b];
        param_1[0x326] = param_1[0x83d];
        param_1[0x325] = param_1[0x83c];
        param_1[0x327] = param_1[0x83e];
        param_1[0x329] = param_1[0x840];
        param_1[0x328] = param_1[0x83f];
        param_1[0x32a] = param_1[0x841];
      }
      else {
        iVar5 = *(int *)(iVar8 + 0x18);
        iVar9 = *(int *)(iVar8 + 0x1c);
        if ((param_1[0x81f] == 0) || (param_1[0x820] == 0)) goto LAB_0048f25e;
        FUN_004887c0(param_1[0x842],0xffffffff,iVar12,unaff_EBP,iVar5,iVar9,param_1,unaff_EBX);
        param_1[0x30c] = param_1[0x81f];
        param_1[0x30b] = param_1[0x81e];
        param_1[0x30d] = param_1[0x820];
      }
      FUN_004762d0(param_1[0x80b],param_1[0x80c],param_1[0x80d],0);
      (**(code **)(param_1[0x177] + 0x120))();
      FUN_00488930((char)param_1[0x80e],param_1[0x80f],param_1[0x812],param_1[0x815]);
      FUN_00488970(*(undefined1 *)((int)param_1 + 0x2039),param_1[0x810],param_1[0x813],
                   param_1[0x816]);
      FUN_004889b0(*(undefined1 *)((int)param_1 + 0x203a),param_1[0x811],param_1[0x814],
                   param_1[0x817]);
      param_1[0x2f6] = (uint)*(byte *)(param_1 + 0x818);
      param_1[0x2f7] = param_1[0x819];
      param_1[0x2f8] = param_1[0x81a];
      param_1[0x2f9] = param_1[0x81b];
      param_1[0x2fa] = param_1[0x81c];
      param_1[0x2fb] = param_1[0x81d];
      if (DAT_0083b99c != 0) {
        FUN_00488a20(DAT_0083b99c);
      }
      (**(code **)(param_1[0x177] + 4))(0);
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 - (param_1[0x7e9] + param_1[0x7e3]) * (param_1[0x7dc] + -1);
    }
    iVar12 = param_1[0x4fc] + -1;
    if (-2 < iVar12) {
      param_1[0x4fb] = param_1[0x4fa];
      iVar8 = 1;
      if (0 < param_1[0x4fc]) {
        do {
          iVar8 = iVar8 + -1;
          param_1[0x4fb] = *(int *)(param_1[0x4fb] + 0x10);
        } while (iVar8 != 0);
        param_1[0x4fd] = iVar12;
      }
    }
    iVar12 = 0;
    if (0 < param_1[0x4fc]) {
      piVar11 = param_1 + 0x4e0;
      do {
        puStack_8 = operator_new(0x6d0);
        iStack_10 = 0;
        if (puStack_8 == (undefined1 *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_004a13f0();
        }
        *piVar11 = iVar8;
        iStack_10 = -1;
        if (param_1[0x4fa] != 0) {
          iVar8 = param_1[0x4fd];
          param_1[0x4fb] = *(int *)(param_1[0x4fb] + 0xc);
          param_1[0x4fd] = iVar8 + 1;
          if (iVar8 + 1 == param_1[0x4fc]) {
            param_1[0x4fd] = 0;
          }
        }
        if (param_1[0x4fb] == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = uRam00000004;
          if (param_1[0x4fa] != 0) {
            uVar6 = *(undefined4 *)(*(int *)(param_1[0x4fb] + 8) + 4);
          }
        }
        iVar12 = iVar12 + 1;
        FUN_004887c0(uVar6,iVar12,iVar3,unaff_EBP,param_1[0x7e3],param_1[0x7e4],param_1,unaff_EBX);
        iVar8 = *piVar11;
        iVar5 = param_1[0x826];
        iVar9 = param_1[0x825];
        *(int *)(iVar8 + 0x644) = param_1[0x824];
        *(int *)(iVar8 + 0x648) = iVar9;
        *(int *)(iVar8 + 0x64c) = iVar5;
        iVar8 = *piVar11;
        iVar5 = param_1[0x829];
        iVar9 = param_1[0x827];
        *(int *)(iVar8 + 0x668) = param_1[0x828];
        *(int *)(iVar8 + 0x664) = iVar9;
        *(int *)(iVar8 + 0x66c) = iVar5;
        iVar8 = *piVar11;
        iVar5 = param_1[0x82c];
        iVar9 = param_1[0x82b];
        *(int *)(iVar8 + 0x670) = param_1[0x82a];
        *(int *)(iVar8 + 0x674) = iVar9;
        *(int *)(iVar8 + 0x678) = iVar5;
        iVar8 = *piVar11;
        iVar5 = param_1[0x82f];
        iVar9 = param_1[0x82d];
        *(int *)(iVar8 + 0x680) = param_1[0x82e];
        *(int *)(iVar8 + 0x67c) = iVar9;
        *(int *)(iVar8 + 0x684) = iVar5;
        iVar8 = *piVar11;
        iVar5 = param_1[0x832];
        iVar9 = param_1[0x831];
        *(int *)(iVar8 + 0x688) = param_1[0x830];
        *(int *)(iVar8 + 0x68c) = iVar9;
        *(int *)(iVar8 + 0x690) = iVar5;
        iVar8 = *piVar11;
        iVar5 = param_1[0x835];
        iVar9 = param_1[0x833];
        *(int *)(iVar8 + 0x698) = param_1[0x834];
        *(int *)(iVar8 + 0x694) = iVar9;
        *(int *)(iVar8 + 0x69c) = iVar5;
        iVar8 = *piVar11;
        iVar5 = param_1[0x838];
        iVar9 = param_1[0x837];
        *(int *)(iVar8 + 0x6a0) = param_1[0x836];
        *(int *)(iVar8 + 0x6a4) = iVar9;
        *(int *)(iVar8 + 0x6a8) = iVar5;
        iVar8 = *piVar11;
        iVar5 = param_1[0x83b];
        iVar9 = param_1[0x839];
        *(int *)(iVar8 + 0x6b0) = param_1[0x83a];
        *(int *)(iVar8 + 0x6ac) = iVar9;
        *(int *)(iVar8 + 0x6b4) = iVar5;
        iVar8 = *piVar11;
        iVar5 = param_1[0x83e];
        iVar9 = param_1[0x83d];
        *(int *)(iVar8 + 0x6b8) = param_1[0x83c];
        *(int *)(iVar8 + 0x6bc) = iVar9;
        *(int *)(iVar8 + 0x6c0) = iVar5;
        iVar8 = param_1[0x841];
        iVar5 = param_1[0x840];
        iVar9 = *piVar11;
        *(int *)(iVar9 + 0x6c4) = param_1[0x83f];
        *(int *)(iVar9 + 0x6c8) = iVar5;
        *(int *)(iVar9 + 0x6cc) = iVar8;
        piVar2 = (int *)*piVar11;
        FUN_004762d0(param_1[0x80b],param_1[0x80c],param_1[0x80d],0);
        (**(code **)(*piVar2 + 0x120))();
        FUN_00488930((char)param_1[0x80e],param_1[0x80f],param_1[0x812],param_1[0x815]);
        FUN_00488970(*(undefined1 *)((int)param_1 + 0x2039),param_1[0x810],param_1[0x813],
                     param_1[0x816]);
        FUN_004889b0(*(undefined1 *)((int)param_1 + 0x203a),param_1[0x811],param_1[0x814],
                     param_1[0x817]);
        *(uint *)(*piVar11 + 0x5fc) = (uint)*(byte *)(param_1 + 0x818);
        *(int *)(*piVar11 + 0x600) = param_1[0x819];
        *(int *)(*piVar11 + 0x604) = param_1[0x81a];
        *(int *)(*piVar11 + 0x608) = param_1[0x81b];
        *(int *)(*piVar11 + 0x60c) = param_1[0x81c];
        *(int *)(*piVar11 + 0x610) = param_1[0x81d];
        (**(code **)(*(int *)*piVar11 + 4))(0);
        iVar3 = iVar3 + param_1[0x7e3] + param_1[0x7e9];
        piVar11 = piVar11 + 1;
      } while (iVar12 < param_1[0x4fc]);
    }
    uVar7 = param_1[0x7da];
    if ((uVar7 & 0x40) != 0) {
      iVar3 = iStack_2c;
      if (-1 < iStack_2c) {
        iVar3 = (param_1[0x7e9] + param_1[0x7e3]) * (param_1[0x7dc] + -1) + iStack_2c;
      }
      iVar12 = param_1[0x843];
      if (iVar12 == 0) {
        if ((uVar7 & 0x1000000) == 0) {
          if (DAT_0083b998 == (char *)0x0) {
            uVar7 = 0xffffffff;
            pcVar15 = s_Cancel_004c8590;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar1 != '\0');
            puVar4 = _malloc(~uVar7);
            param_1[0x843] = (int)puVar4;
            *puVar4 = 0;
            pcVar15 = &DAT_004e3db0;
          }
          else {
            uVar7 = 0xffffffff;
            pcVar15 = DAT_0083b998;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar1 != '\0');
            puVar4 = _malloc(~uVar7);
            param_1[0x843] = (int)puVar4;
            *puVar4 = 0;
            pcVar15 = DAT_0083b998;
          }
          uVar7 = 0xffffffff;
          do {
            pcVar14 = pcVar15;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar14 = pcVar15 + 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar14;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar12 = -1;
          pcVar15 = (char *)param_1[0x843];
          do {
            pcVar13 = pcVar15;
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            pcVar13 = pcVar15 + 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar1 != '\0');
          pcVar15 = pcVar14 + -uVar7;
          pcVar14 = pcVar13 + -1;
          for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar14 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
      }
      else if ((uVar7 & 0x1000000) != 0) {
        if (iVar12 != 0) {
          FUN_004a5007(iVar12);
        }
        param_1[0x843] = 0;
      }
      if (param_1[0x821] == 0) {
        iVar12 = param_1[0x7e3];
        iVar8 = param_1[0x7e4];
      }
      else {
        if ((int *)param_1[0x9e] == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*(int *)param_1[0x9e] + 0xd8))();
        }
        iVar8 = param_1[0x821];
        iVar3 = iVar3 + *(int *)(iVar8 + 0x18) * -2;
        iVar12 = *(int *)(iVar8 + 0x18);
        iVar8 = *(int *)(iVar8 + 0x1c);
      }
      FUN_004887c0(param_1[0x843],0xfffffffe,iVar3,unaff_EBP,iVar12,iVar8,param_1,unaff_EBX);
      if (((param_1[0x821] == 0) || (param_1[0x822] == 0)) || (param_1[0x823] == 0)) {
        param_1[0x4bd] = param_1[0x825];
        param_1[0x4bc] = param_1[0x824];
        param_1[0x4be] = param_1[0x826];
        param_1[0x4c5] = param_1[0x828];
        param_1[0x4c4] = param_1[0x827];
        param_1[0x4c6] = param_1[0x829];
        param_1[0x4c8] = param_1[0x82b];
        param_1[0x4c7] = param_1[0x82a];
        param_1[0x4c9] = param_1[0x82c];
        param_1[0x4cb] = param_1[0x82e];
        param_1[0x4ca] = param_1[0x82d];
        param_1[0x4cc] = param_1[0x82f];
        param_1[0x4ce] = param_1[0x831];
        param_1[0x4cd] = param_1[0x830];
        param_1[0x4cf] = param_1[0x832];
        param_1[0x4d1] = param_1[0x834];
        param_1[0x4d0] = param_1[0x833];
        param_1[0x4d2] = param_1[0x835];
        param_1[0x4d4] = param_1[0x837];
        param_1[0x4d3] = param_1[0x836];
        param_1[0x4d5] = param_1[0x838];
        param_1[0x4d7] = param_1[0x83a];
        param_1[0x4d6] = param_1[0x839];
        param_1[0x4d8] = param_1[0x83b];
        param_1[0x4da] = param_1[0x83d];
        param_1[0x4d9] = param_1[0x83c];
        param_1[0x4db] = param_1[0x83e];
        param_1[0x4dd] = param_1[0x840];
        param_1[0x4dc] = param_1[0x83f];
        param_1[0x4de] = param_1[0x841];
      }
      else {
        param_1[0x4bf] = param_1[0x821];
        param_1[0x4c0] = param_1[0x822];
        param_1[0x4c1] = param_1[0x823];
      }
      FUN_004762d0(param_1[0x80b],param_1[0x80c],param_1[0x80d],0);
      (**(code **)(param_1[0x32b] + 0x120))();
      FUN_00488930((char)param_1[0x80e],param_1[0x80f],param_1[0x812],param_1[0x815]);
      FUN_00488970(*(undefined1 *)((int)param_1 + 0x2039),param_1[0x810],param_1[0x813],
                   param_1[0x816]);
      FUN_004889b0(*(undefined1 *)((int)param_1 + 0x203a),param_1[0x811],param_1[0x814],
                   param_1[0x817]);
      param_1[0x4aa] = (uint)*(byte *)(param_1 + 0x818);
      param_1[0x4ab] = param_1[0x819];
      param_1[0x4ac] = param_1[0x81a];
      param_1[0x4ad] = param_1[0x81b];
      param_1[0x4ae] = param_1[0x81c];
      param_1[0x4af] = param_1[0x81d];
      if (DAT_0083b9a0 != 0) {
        FUN_00488a20(DAT_0083b9a0);
      }
      (**(code **)(param_1[0x32b] + 4))(0);
    }
  }
  if (((param_1[0x7da] & 0x400000U) == 0) && ((code *)param_1[0x7c0] != (code *)0x0)) {
    (*(code *)param_1[0x7c0])(param_1 + 0x734,1);
  }
  (**(code **)(*param_1 + 4))(3);
  uVar6 = DAT_0083b990;
  iVar3 = iStack_1c;
  if (((param_1[0x7da] & 0x4100U) == 0) && ((int *)param_1[0x16f] == param_1)) {
    DAT_0083b8f0 = DAT_0083b8f0 + 1;
    if ((int *)param_1[0x164] == (int *)0x0) {
      uVar7 = param_1[0x7da];
      iVar3 = *param_1;
    }
    else {
      iVar3 = *(int *)param_1[0x164];
      uVar7 = param_1[0x7da];
    }
    DAT_0083b990 = param_1;
    iVar3 = (**(code **)(iVar3 + 0x10c))(uVar7 >> 0x15 & 1,param_3,0);
    _DAT_0083b9e4 = param_1[0x6f];
    _DAT_0083b9e8 = param_1[0x70];
  }
  DAT_0083b990 = (int *)uVar6;
  if (((param_1[0x7da] & 0x4300U) == 0) && ((int *)param_1[0x16f] == param_1)) {
    DAT_0083b8f0 = DAT_0083b8f0 + -1;
    if (DAT_0083b8f0 == 0) {
      DAT_0083b8ec = 0;
    }
    (**(code **)(*param_1 + 0x16c))();
    (**(code **)(*param_1 + 8))();
    if (((param_1[0x7da] & 0x400000U) == 0) && ((code *)param_1[0x7c0] != (code *)0x0)) {
      (*(code *)param_1[0x7c0])(param_1 + 0x77a,0);
    }
  }
  if (param_1[0x595] == 4) {
    iVar12 = 0;
    do {
      uVar17 = 0xffffffff;
      uVar16 = 0xffffffff;
      uVar6 = FUN_004a2980(iVar12);
      FUN_00494cb0(iVar12,uVar6,uVar16,uVar17);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 8);
  }
  if (iVar3 == 0) {
    iVar3 = param_1[0x170];
  }
  else {
    iVar3 = DAT_004e44e0;
    if ((*(byte *)(param_1 + 0x7da) & 0x40) != 0) {
      iVar3 = -1;
    }
  }
LAB_0048fe4b:
  *unaff_FS_OFFSET = uStack_c;
  return iVar3;
}

