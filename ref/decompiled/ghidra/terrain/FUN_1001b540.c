/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001b540 @ 0x1001B540 */
/* Body size: 1500 addresses */


void __cdecl FUN_1001b540(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint *local_20;
  
  uVar4 = param_1[4];
  uVar9 = param_2 - param_1[3] >> 0xf;
  piVar2 = (int *)(uVar4 + 0x144 + uVar9 * 0x204);
  local_20 = (uint *)(param_2 + -4);
  local_34 = *local_20 - 1;
  if ((local_34 & 1) == 0) {
    puVar7 = (uint *)((int)local_20 + local_34);
    uVar5 = *puVar7;
    uVar6 = *(uint *)(param_2 + -8);
    if ((uVar5 & 1) == 0) {
      local_28 = ((int)uVar5 >> 4) - 1;
      if (0x3f < local_28) {
        local_28 = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar8 = (byte)local_28;
        if (local_28 < 0x20) {
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               *(uint *)(uVar4 + 0x44 + uVar9 * 4) & ~(0x80000000U >> (bVar8 & 0x1f));
          *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
          if (*(char *)(uVar4 + local_28 + 4) == '\0') {
            *param_1 = *param_1 & ~(0x80000000U >> (bVar8 & 0x1f));
          }
        }
        else {
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               *(uint *)(uVar4 + 0xc4 + uVar9 * 4) & ~(0x80000000U >> (bVar8 - 0x20 & 0x1f));
          *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
          if (*(char *)(uVar4 + local_28 + 4) == '\0') {
            param_1[1] = param_1[1] & ~(0x80000000U >> (bVar8 - 0x20 & 0x1f));
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      local_34 = local_34 + uVar5;
    }
    local_2c = ((int)local_34 >> 4) - 1;
    if (0x3f < local_2c) {
      local_2c = 0x3f;
    }
    if ((uVar6 & 1) == 0) {
      local_20 = (uint *)((int)local_20 - uVar6);
      local_30 = ((int)uVar6 >> 4) - 1;
      if (0x3f < local_30) {
        local_30 = 0x3f;
      }
      local_34 = local_34 + uVar6;
      local_2c = ((int)local_34 >> 4) - 1;
      if (0x3f < local_2c) {
        local_2c = 0x3f;
      }
      if (local_30 != local_2c) {
        if (local_20[1] == local_20[2]) {
          bVar8 = (byte)local_30;
          if (local_30 < 0x20) {
            *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
                 *(uint *)(uVar4 + 0x44 + uVar9 * 4) & ~(0x80000000U >> (bVar8 & 0x1f));
            *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
            if (*(char *)(uVar4 + local_30 + 4) == '\0') {
              *param_1 = *param_1 & ~(0x80000000U >> (bVar8 & 0x1f));
            }
          }
          else {
            *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
                 *(uint *)(uVar4 + 0xc4 + uVar9 * 4) & ~(0x80000000U >> (bVar8 - 0x20 & 0x1f));
            *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
            if (*(char *)(uVar4 + local_30 + 4) == '\0') {
              param_1[1] = param_1[1] & ~(0x80000000U >> (bVar8 - 0x20 & 0x1f));
            }
          }
        }
        *(uint *)(local_20[2] + 4) = local_20[1];
        *(uint *)(local_20[1] + 8) = local_20[2];
      }
    }
    if (((uVar6 & 1) != 0) || (local_30 != local_2c)) {
      piVar1 = piVar2 + local_2c * 2;
      local_20[1] = piVar1[1];
      local_20[2] = (uint)piVar1;
      piVar1[1] = (int)local_20;
      *(uint **)(local_20[1] + 8) = local_20;
      if (local_20[1] == local_20[2]) {
        bVar8 = (byte)local_2c;
        if (local_2c < 0x20) {
          cVar3 = *(char *)(uVar4 + local_2c + 4);
          *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
          if (cVar3 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               *(uint *)(uVar4 + 0x44 + uVar9 * 4) | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          cVar3 = *(char *)(uVar4 + local_2c + 4);
          *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
          if (cVar3 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               *(uint *)(uVar4 + 0xc4 + uVar9 * 4) | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *local_20 = local_34;
    *(uint *)((int)local_20 + (local_34 - 4)) = local_34;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (DAT_101122f4 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_101122f4[3] + DAT_101122e8 * 0x8000),0x8000,0x4000);
        DAT_101122f4[2] = DAT_101122f4[2] | 0x80000000U >> ((byte)DAT_101122e8 & 0x1f);
        *(undefined4 *)(DAT_101122f4[4] + 0xc4 + DAT_101122e8 * 4) = 0;
        *(char *)(DAT_101122f4[4] + 0x43) = *(char *)(DAT_101122f4[4] + 0x43) + -1;
        if (*(char *)(DAT_101122f4[4] + 0x43) == '\0') {
          DAT_101122f4[1] = DAT_101122f4[1] & 0xfffffffe;
        }
        if (DAT_101122f4[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_101122f4[3],0,0x8000);
          HeapFree(DAT_101122c0,0,(LPVOID)DAT_101122f4[4]);
          FUN_10024410(DAT_101122f4,DAT_101122f4 + 5,
                       (DAT_101122fc + DAT_101122f8 * 0x14) - (int)(DAT_101122f4 + 5));
          DAT_101122f8 = DAT_101122f8 + -1;
          if (DAT_101122f4 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_101122ec = DAT_101122fc;
        }
      }
      DAT_101122f4 = param_1;
      DAT_101122e8 = uVar9;
    }
  }
  return;
}

