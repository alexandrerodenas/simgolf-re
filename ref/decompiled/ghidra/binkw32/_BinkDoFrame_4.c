/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkDoFrame@4 @ 0x30005740 */


undefined4 _BinkDoFrame_4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 uVar11;
  int local_18;
  undefined4 *local_c;
  uint *local_8;
  
                    /* 0x5740  20  _BinkDoFrame@4 */
  piVar2 = param_1;
  if ((param_1 != (int *)0x0) && (param_1[0xa0] != param_1[3])) {
    param_1[0x4e] = 1;
    uVar11 = _RADTimerRead_0();
    piVar2[0x82] = (int)uVar11;
    FUN_3002ba10((undefined4 *)piVar2[0x98] + 1,(undefined4 *)piVar2[0x98],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9a] + 1,(undefined4 *)piVar2[0x9a],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x99] + 1,(undefined4 *)piVar2[0x99],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9b] + 1,(undefined4 *)piVar2[0x9b],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9c] + 1,(undefined4 *)piVar2[0x9c],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9d] + 1,(undefined4 *)piVar2[0x9d],piVar2[0x97]);
    FUN_3002ba10((undefined4 *)piVar2[0x9e] + 1,(undefined4 *)piVar2[0x9e],piVar2[0x97]);
    *(int *)piVar2[0x98] = piVar2[0x82];
    *(int *)piVar2[0x9a] = piVar2[0x8f];
    *(int *)piVar2[0x99] = piVar2[0x90];
    *(int *)piVar2[0x9b] = piVar2[0x91];
    *(int *)piVar2[0x9c] = piVar2[0x50];
    *(int *)piVar2[0x9d] = piVar2[0x51];
    *(int *)piVar2[0x9e] = piVar2[0x52];
    if (piVar2[0x81] == 0) {
      local_c = (undefined4 *)piVar2[0x94];
      param_1 = (int *)piVar2[0x93];
      local_8 = (uint *)0x3e8;
      *(int *)(piVar2[0x98] + 4) = piVar2[0x82] - (int)((ZEXT48(local_c) * 1000) / ZEXT48(param_1));
      piVar2[0x81] = piVar2[0x82];
      piVar2[0x52] = 0;
      piVar2[0x51] = 0;
    }
    else if (piVar2[0x7b] != -1) {
      FUN_30004710(piVar2);
    }
    puVar9 = (uint *)piVar2[0x41];
    piVar2[0x87] = piVar2[0x82];
    if (piVar2[0x4b] != 0) {
      piVar2[7] = 1;
    }
    if (piVar2[7] != 0) {
      return 1;
    }
    local_18 = 0;
    if (0 < piVar2[0x3c]) {
      do {
        uVar5 = *puVar9;
        if ((local_18 == piVar2[0x7b]) && (uVar5 != 0)) {
          piVar6 = (int *)puVar9[1];
          local_8 = puVar9 + 2;
          piVar10 = piVar2 + 0xa8;
          LOCK();
          *(char *)piVar10 = (char)*piVar10 + '\x01';
          UNLOCK();
          iVar1 = *piVar10;
          while (iVar1 != 1) {
            Sleep(0);
            iVar1 = *piVar10;
          }
          while ((piVar6 != (int *)0x0 &&
                 (piVar10 = (int *)(piVar2[0xa1] - piVar2[0xa7]), piVar10 != (int *)0x0))) {
            FUN_3001bb30((int *)piVar2[0xa6],(int *)&local_c,(int *)&param_1,(int)local_8,
                         (int *)&local_8);
            if (piVar6 < param_1) {
              param_1 = piVar6;
            }
            piVar6 = (int *)((int)piVar6 - (int)param_1);
            if (piVar10 < param_1) {
              param_1 = piVar10;
            }
            piVar2[0xa7] = piVar2[0xa7] + (int)param_1;
            puVar8 = (undefined4 *)piVar2[0xa4];
            piVar10 = (int *)(piVar2[0xa3] - (int)puVar8);
            if (piVar10 < param_1) {
              if (piVar10 != (int *)0x0) {
                puVar7 = local_c;
                for (uVar4 = (uint)piVar10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
                for (uVar4 = (uint)piVar10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
                  puVar7 = (undefined4 *)((int)puVar7 + 1);
                  puVar8 = (undefined4 *)((int)puVar8 + 1);
                }
                param_1 = (int *)((int)param_1 - (int)piVar10);
                local_c = (undefined4 *)((int)local_c + (int)piVar10);
              }
              puVar8 = local_c;
              puVar7 = (undefined4 *)piVar2[0xa2];
              for (uVar4 = (uint)param_1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar7 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar7 = puVar7 + 1;
              }
              for (uVar4 = (uint)param_1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                puVar7 = (undefined4 *)((int)puVar7 + 1);
              }
              piVar3 = (int *)piVar2[0xa2];
              piVar10 = param_1;
            }
            else {
              puVar7 = local_c;
              for (uVar4 = (uint)param_1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              for (uVar4 = (uint)param_1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                puVar8 = (undefined4 *)((int)puVar8 + 1);
              }
              piVar10 = (int *)piVar2[0xa4];
              piVar3 = param_1;
            }
            piVar2[0xa4] = (int)piVar10 + (int)piVar3;
          }
          LOCK();
          *(char *)(piVar2 + 0xa8) = (char)piVar2[0xa8] + -1;
          UNLOCK();
        }
        puVar9 = (uint *)((int)(puVar9 + 1) + uVar5);
        local_18 = local_18 + 1;
      } while (local_18 < piVar2[0x3c]);
    }
    uVar11 = _RADTimerRead_0();
    param_1 = (int *)uVar11;
    if (piVar2[0x8d] != 0) {
      if (piVar2[0xda] == 0) {
        uVar4 = ((uint)piVar2[0x34] >> 4) * ((uint)piVar2[0x33] >> 4);
        puVar8 = (undefined4 *)piVar2[0x37];
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      if (((((piVar2[8] & 0x8000000U) == 0) && (piVar2[0x42] == 0)) && (piVar2[0x4c] == 0)) &&
         ((uint)((piVar2[0x56] + 1) * 100) / (piVar2[0x55] + 1U) < 0x4b)) {
        Sleep(0);
      }
      uVar5 = piVar2[0x2e];
      FUN_30008930((uint *)piVar2[(uVar5 ^ 1) + 0x2f],(uint *)piVar2[uVar5 + 0x2f],
                   (uint *)piVar2[(uVar5 ^ 1) + 0x31],(uint *)piVar2[uVar5 + 0x31],piVar2[0x37],
                   piVar2[0x79],piVar2[0x7a],piVar2[0x33],piVar2[0x34],puVar9,
                   *(uint *)(piVar2[0x43] + -4 + piVar2[3] * 4) & 1,(uint *)(piVar2 + 0xe0),
                   piVar2[8],piVar2[9]);
      piVar2[0x2e] = piVar2[0x2e] ^ 1;
    }
    piVar10 = param_1;
    if (piVar2[0x7b] != -1) {
      FUN_30004710(piVar2);
    }
    piVar2[0x2d] = -1;
    piVar2[0x80] = piVar2[0x80] + 1;
    FUN_30005710((int)piVar2);
    uVar11 = _RADTimerRead_0();
    piVar2[0x90] = (int)piVar10 + (piVar2[0x90] - piVar2[0x82]);
    piVar2[0x83] = (int)uVar11;
    piVar2[0x8f] = piVar2[0x8f] + ((int)uVar11 - (int)piVar10);
    piVar2[0xa0] = piVar2[3];
    piVar2[4] = piVar2[3];
    piVar2[0x4e] = 0;
  }
  return 0;
}

