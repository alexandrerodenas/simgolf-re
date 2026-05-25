/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkOpen@8 @ 0x30003A50 */


int * _BinkOpen_8(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  int *piVar10;
  undefined8 uVar11;
  int local_3e0 [5];
  int local_3cc;
  uint local_3c8;
  uint local_3c0;
  uint local_3bc;
  undefined4 local_3b8;
  int local_324;
  uint local_314;
  int local_310;
  uint local_30c;
  uint local_308;
  undefined1 local_304 [4];
  uint local_300;
  uint local_2fc;
  undefined4 local_2f8;
  int local_2f4;
  int local_2f0;
  undefined1 local_2d4 [4];
  code *local_2d0 [5];
  code *local_2bc;
  int local_1fc;
  int local_1f8;
  undefined1 local_1f0 [4];
  undefined1 local_1ec [4];
  undefined1 local_1e8 [80];
  undefined4 local_198;
  int local_194;
  uint local_190;
  uint local_188;
  int local_184;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [264];
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  piVar2 = local_3e0;
                    /* 0x3a50  34  _BinkOpen@8 */
  for (iVar7 = 0xe9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  uVar11 = _RADTimerRead_0();
  local_198 = (undefined4)uVar11;
  local_10 = param_2 & 0x4000000;
  DAT_30041a80 = '\0';
  if (local_10 == 0) {
    pcVar9 = FUN_3000b750;
    if (((param_2 & 0x2000000) != 0) && (DAT_30041b94 != (code *)0x0)) {
      pcVar9 = DAT_30041b94;
    }
    DAT_30041b94 = (code *)0x0;
    iVar7 = (*pcVar9)(local_2d0,param_1,param_2);
    if (iVar7 == 0) {
      if (DAT_30041a80 == '\0') {
        _BinkSetError_4("Error opening file.");
      }
      return (int *)0x0;
    }
    (*local_2d0[0])(local_2d0,0,local_3c,0x2c);
  }
  else {
    piVar2 = param_1;
    piVar8 = local_3c;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar8 = piVar8 + 1;
    }
  }
  if ((((local_3c[0] != 0x664b4942) && (local_3c[0] != 0x674b4942)) && (local_3c[0] != 0x684b4942))
     && (local_3c[0] != 0x694b4942)) {
    _BinkSetError_4("Not a Bink file.");
    goto LAB_30004208;
  }
  if (local_3c[2] == 0) {
    _BinkSetError_4("The file doesn\'t contain any compressed frames yet.");
    goto LAB_30004208;
  }
  uVar1 = (local_28 + 1U >> 1) + 7;
  local_30c = uVar1 & 0xfffffff8;
  local_308 = (local_24 + 1U >> 1) + 7 & 0xfffffff8;
  local_314 = local_30c * 2;
  local_310 = local_308 * 2;
  local_300 = (uVar1 & 0x7ffffff8) >> 3;
  local_3c0 = param_2 & 0x8fffffff;
  local_3e0[0] = local_28;
  local_3e0[1] = local_24;
  local_1fc = local_28;
  local_1f8 = local_24;
  local_3bc = local_18;
  if ((local_18 & 0x100000) == 0) {
    local_3c0 = param_2 & 0x8fefffff;
  }
  local_3c0 = local_18 & 0x20000 | local_3c0;
  uVar1 = param_2 & 0x70000000;
  if (uVar1 != 0x70000000) {
    if (uVar1 == 0) {
      uVar1 = local_18 & 0x70000000;
    }
    local_3c0 = local_3c0 | uVar1;
    if (uVar1 < 0x30000001) {
      if (uVar1 == 0x30000000) {
        local_3e0[0] = local_28 * 2;
      }
      else if ((uVar1 == 0x10000000) || (uVar1 == 0x20000000)) goto LAB_30003c3d;
    }
    else if ((uVar1 == 0x40000000) || (uVar1 == 0x50000000)) {
      local_3e0[0] = local_28 * 2;
LAB_30003c3d:
      local_3e0[1] = local_24 * 2;
    }
  }
  if ((local_3c[0] == 0x664b4942) || (local_3c[0] == 0x674b4942)) {
    local_3c0 = local_3c0 | 0x18000;
  }
  else if (local_3c[0] == 0x684b4942) {
    local_3c0 = local_3c0 | 0x8000;
  }
  local_3e0[2] = local_3c[2];
  local_2f4 = local_2c;
  if (((param_2 & 0x1000) == 0) || (DAT_3003a030 == -1)) {
    local_3cc = local_20;
    local_3c8 = local_1c;
  }
  else {
    local_3cc = DAT_3003a030;
    local_3c8 = DAT_30041a7c;
    DAT_3003a030 = -1;
  }
  local_3b8 = local_3c[1];
  local_2f0 = local_14;
  local_2f8 = local_3c[3];
  local_194 = local_20;
  local_188 = ((local_1c >> 1) + local_20) / local_1c;
  local_2fc = local_300 * local_310 >> 4;
  local_190 = local_1c;
  if (local_188 == 0) {
    local_188 = 1;
  }
  local_184 = local_188 * 4 + -4;
  FUN_300038a0(local_304,local_2fc + 0x10);
  FUN_300038a0(local_180,local_188 * 4);
  FUN_300038a0(local_17c,local_188 * 4);
  FUN_300038a0(local_178,local_188 * 4);
  FUN_300038a0(local_174,local_188 * 4);
  FUN_300038a0(local_170,local_188 * 4);
  FUN_300038a0(local_16c,local_188 * 4);
  FUN_300038a0(local_168,local_188 * 4);
  FUN_30008830(&local_60,local_314);
  FUN_300038a0(&local_60,local_60);
  FUN_300038a0(&local_5c,local_5c);
  FUN_300038a0(&local_58,local_58);
  FUN_300038a0(&local_54,local_54);
  FUN_300038a0(&local_50,local_50);
  FUN_300038a0(&local_4c,local_4c);
  FUN_300038a0(&local_48,local_48);
  FUN_300038a0(&local_44,local_44);
  FUN_300038a0(&local_40,local_40);
  if (local_10 == 0) {
    FUN_300038a0(local_2d4,local_2f4 * 4 + 4);
    FUN_300038a0(local_1f0,local_2f0 * 4);
    FUN_300038a0(local_1ec,local_2f0 * 4);
    FUN_300038a0(local_1e8,local_2f0 * 4);
  }
  piVar2 = (int *)FUN_30004620((int)local_3e0,0x3a4);
  if (piVar2 != (int *)0x0) {
    piVar8 = local_3e0;
    piVar10 = piVar2;
    for (iVar7 = 0xe9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar10 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    }
    piVar2[0x4a] = (int)piVar2;
    *(undefined4 *)piVar2[0x99] = 0;
    *(undefined4 *)piVar2[0x9a] = 0;
    *(undefined4 *)piVar2[0x9b] = 0;
    *(undefined4 *)piVar2[0x9c] = 0;
    *(undefined4 *)piVar2[0x9d] = 0;
    *(undefined4 *)piVar2[0x9e] = 0;
    if (local_10 == 0) {
      piVar8 = piVar2 + 0x44;
      (*(code *)*piVar8)(piVar8,0xffffffff,piVar2[0x7c],piVar2[0x3c] << 2);
      (*(code *)*piVar8)(piVar8,0xffffffff,piVar2[0x7d],piVar2[0x3c] << 2);
      (*(code *)*piVar8)(piVar8,0xffffffff,piVar2[0x7e],piVar2[0x3c] << 2);
      (*(code *)*piVar8)(piVar8,0xffffffff,piVar2[0x43],piVar2[0x3b] * 4 + 4);
    }
    else {
      piVar2[0x7c] = (int)(param_1 + 0xb);
      piVar2[0x7d] = (int)(param_1 + piVar2[0x3c] + 0xb);
      piVar2[0x7e] = (int)(param_1 + piVar2[0x3c] * 2 + 0xb);
      piVar2[0x43] = (int)(param_1 + piVar2[0x3c] * 3 + 0xb);
    }
    uVar1 = FUN_30004a50(piVar2[2],(byte *)piVar2[0x43],piVar2[0x96],piVar2 + 0x3e,&local_8);
    piVar2[0x3d] = uVar1;
    if ((piVar2[8] & 0x100000U) == 0) {
LAB_30004078:
      if (local_8 == 0) {
        FUN_300038a0(piVar2 + 0x30,piVar2[0x34] * piVar2[0x33] + piVar2[0x36] * piVar2[0x35] * 2);
      }
    }
    else {
      FUN_300038a0(piVar2 + 0x31,piVar2[0x33] * piVar2[0x34]);
      if (local_8 == 0) {
        FUN_300038a0(piVar2 + 0x32,piVar2[0x33] * piVar2[0x34]);
        goto LAB_30004078;
      }
    }
    iVar7 = FUN_30004620((int)piVar2,piVar2[0x34] * piVar2[0x33] + piVar2[0x36] * piVar2[0x35] * 2);
    piVar2[0x2f] = iVar7;
    if (iVar7 != 0) {
      if (local_8 != 0) {
        piVar2[0x30] = iVar7;
        piVar2[0x32] = piVar2[0x31];
      }
      if (((param_2 & 0x1000000) == 0) || (DAT_3003a034 == -1)) {
        piVar2[0x78] = piVar2[0x3d];
      }
      else {
        piVar2[0x78] = DAT_3003a034;
        DAT_3003a034 = -1;
      }
      if (((param_2 & 0x400000) == 0) || (DAT_3003a038 == 0xffffffff)) {
        local_c = 0;
      }
      else {
        local_c = DAT_3003a038;
        DAT_3003a038 = 0xffffffff;
      }
      uVar1 = local_c;
      if (local_10 != 0) {
        piVar2[0x42] = (*(uint *)piVar2[0x43] & 0xfffffffe) + (int)param_1;
LAB_300042be:
        *(undefined1 *)(piVar2[0x39] + piVar2[0x37]) = 0;
        piVar2[3] = -1;
        if (piVar2[5] == 0) {
          piVar2[0x86] = 2000;
        }
        else {
          local_c = piVar2[6];
          local_10 = 2000;
          piVar2[0x86] = (int)(((ulonglong)local_c * 2000) / (ulonglong)(uint)piVar2[5]);
        }
        piVar2[0x8d] = 1;
        FUN_30004650(piVar2,1);
        uVar11 = _RADTimerRead_0();
        piVar2[0x92] = (int)uVar11 - piVar2[0x92];
        if ((piVar2[0x42] == 0) && ((param_2 & 0x200000) == 0)) {
          iVar7 = (*(code *)piVar2[0x48])(piVar2 + 0x44);
          while (iVar7 != 0) {
            iVar7 = (*(code *)piVar2[0x48])(piVar2 + 0x44);
          }
        }
        iVar7 = piVar2[0x3c];
        if (iVar7 == 0) {
          piVar2[0x7b] = -1;
        }
        else if ((piVar2[8] & 0x4000U) == 0) {
          piVar2[0x7b] = 0;
        }
        else if (DAT_3003a03c == -1) {
          piVar2[0x7b] = -1;
        }
        else {
          iVar3 = 0;
          if (0 < iVar7) {
            piVar8 = (int *)piVar2[0x7e];
            do {
              if (*piVar8 == DAT_3003a03c) break;
              iVar3 = iVar3 + 1;
              piVar8 = piVar8 + 1;
            } while (iVar3 < iVar7);
          }
          if (iVar7 <= iVar3) {
            iVar3 = -1;
          }
          piVar2[0x7b] = iVar3;
        }
        DAT_3003a03c = 0xffffffff;
        if (piVar2[0x7b] != -1) {
          uVar1 = *(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4);
          if (((uVar1 & 0x80000000) != 0) && (DAT_30041b8c != (code *)0x0)) {
            local_c = uVar1 & 0xffff;
            uVar1 = local_c;
            if ((local_3cc != 0) && (local_3c8 != 0)) {
              uVar1 = (uint)(((ulonglong)local_c * (ulonglong)(local_190 * local_3cc)) /
                            (ulonglong)(local_194 * local_3c8));
            }
            uVar4 = *(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4);
            iVar7 = (*DAT_30041b8c)(piVar2 + 0xaa,uVar1,(uVar4 >> 0x1e & 1) * 8 + 8,
                                    (uVar4 >> 0x1d & 1) + 1,piVar2[8],piVar2);
            if (iVar7 != 0) {
              DAT_30041b90 = DAT_30041b90 + 1;
              piVar2[0xa9] = (uint)((*(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4) >> 0x1b & 8) == 0);
              piVar2[0x8c] = 1;
              uVar4 = *(int *)(piVar2[0x7c] + piVar2[0x7b] * 4) + 0xffU & 0xffffff00;
              piVar2[0xa1] = uVar4;
              iVar7 = radmalloc(uVar4);
              piVar2[0xa2] = iVar7;
              piVar2[0xa4] = iVar7;
              piVar2[0xa5] = iVar7;
              piVar2[0xa3] = piVar2[0xa1] + iVar7;
              local_c = ((*(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4) >> 0x1d & 1) + 1) * uVar1 * 2;
              uVar1 = (uint)(((ulonglong)local_c * (ulonglong)(0x2ee - piVar2[0xb5])) / 1000) &
                      0xfffffffc;
              piVar2[0xde] = uVar1;
              if ((uint)piVar2[0xa1] < uVar1) {
                piVar2[0xde] = piVar2[0xa1];
              }
              uVar1 = *(uint *)(piVar2[0x7d] + piVar2[0x7b] * 4);
              puVar5 = FUN_3001ba10(uVar1 & 0xffff,(uVar1 >> 0x1d & 1) + 1,1);
              piVar2[0xa6] = (int)puVar5;
              piVar2[0xa7] = 0;
              piVar2[0xdd] = piVar2[2] - (uint)(piVar2[0x93] * 3) / (uint)(piVar2[0x94] << 2);
            }
          }
          if (piVar2[0x8c] == 0) {
            piVar2[0x7b] = -1;
          }
        }
        if (piVar2[0xb6] == 0) {
          piVar2[0xb6] = 0x10000;
        }
        if ((((piVar2[8] & 0x8000000U) == 0) && (piVar2[0x42] == 0)) || (piVar2[0x7b] != -1)) {
          piVar2[0x95] = 1;
          puVar6 = FUN_3001c100(FUN_30004af0,piVar2,0);
          piVar2[0x40] = (int)puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            piVar2[0x95] = 0;
            _BinkClose_4(piVar2);
            return (int *)0x0;
          }
        }
        return piVar2;
      }
      piVar8 = piVar2 + 0x44;
      uVar4 = (*(code *)piVar2[0x46])(piVar8,piVar2[0x78]);
      piVar2[0x78] = uVar4;
      if ((uint)(piVar2[10] * 9) / 10 <= uVar4) {
        param_2 = param_2 | 0x2000;
        piVar2[8] = piVar2[8] | 0x2000;
      }
      if ((param_2 & 0x2000) == 0) {
        FUN_300038a0(piVar2 + 0x41,piVar2[0x3a]);
        iVar7 = FUN_30004620((int)piVar2,piVar2[0x78]);
        piVar2[0x77] = iVar7;
        if (iVar7 == 0) {
          piVar2[0x78] = 0;
        }
        (*(code *)piVar2[0x47])(piVar8,piVar2[0x77],piVar2[0x78],piVar2[10] + 8,uVar1);
        goto LAB_300042be;
      }
      iVar3 = (piVar2[10] - (*(uint *)piVar2[0x43] & 0xfffffffe)) + 8;
      iVar7 = FUN_30004620((int)piVar2,iVar3);
      piVar2[0x42] = iVar7;
      if (iVar7 != 0) {
        (*(code *)piVar2[0x47])(piVar8,0,0,piVar2[10] + 8,local_c);
        (*(code *)piVar2[0x45])(piVar8,0,*(uint *)piVar2[0x43] & 0xfffffffe,piVar2[0x42],iVar3);
        (*(code *)piVar2[0x49])(piVar8);
        piVar2[0x50] = 0;
        goto LAB_300042be;
      }
      radfree(local_324);
    }
    radfree((int)piVar2);
  }
  _BinkSetError_4("Out of memory.");
LAB_30004208:
  if ((param_2 & 0x4000000) == 0) {
    (*local_2bc)(local_2d0);
  }
  return (int *)0x0;
}

