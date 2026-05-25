/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100422d0 @ 0x100422D0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100422d0(int *param_1)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint local_3c;
  uint local_38;
  ushort local_24;
  
  if ((float)param_1[0x57] != (float)_DAT_100531e0) {
    if (*(byte *)((int)param_1 + 0x127) < 9) {
      pvVar2 = FUN_10042cc0(param_1,0x100);
      iVar6 = 0;
      param_1[0x59] = (int)pvVar2;
      do {
        FUN_10046e50();
        lVar9 = __ftol();
        iVar6 = iVar6 + 1;
        *(char *)(param_1[0x59] + -1 + iVar6) = (char)lVar9;
      } while (iVar6 < 0x100);
      if ((param_1[0x1c] & 0x600080U) != 0) {
        pvVar2 = FUN_10042cc0(param_1,0x100);
        param_1[0x5b] = (int)pvVar2;
        iVar6 = 0;
        do {
          FUN_10046e50();
          lVar9 = __ftol();
          iVar7 = iVar6 + 1;
          *(char *)(iVar6 + param_1[0x5b]) = (char)lVar9;
          iVar6 = iVar7;
        } while (iVar7 < 0x100);
        pvVar2 = FUN_10042cc0(param_1,0x100);
        param_1[0x5a] = (int)pvVar2;
        iVar6 = 0;
        do {
          FUN_10046e50();
          lVar9 = __ftol();
          iVar6 = iVar6 + 1;
          *(char *)(param_1[0x5a] + -1 + iVar6) = (char)lVar9;
        } while (iVar6 < 0x100);
        return;
      }
    }
    else {
      if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
        local_38 = (uint)*(byte *)((int)param_1 + 0x17f);
      }
      else {
        local_38 = (uint)*(byte *)(param_1 + 0x5f);
        if ((uint)*(byte *)(param_1 + 0x5f) < (uint)*(byte *)((int)param_1 + 0x17d)) {
          local_38 = (uint)*(byte *)((int)param_1 + 0x17d);
        }
        if (local_38 < *(byte *)((int)param_1 + 0x17e)) {
          local_38 = (uint)*(byte *)((int)param_1 + 0x17e);
        }
      }
      if (local_38 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = 0x10 - local_38;
      }
      if (((param_1[0x1c] & 0x400U) == 0) || (4 < (int)local_38)) {
        if ((int)local_38 < 9) {
          if ((int)local_38 < 0) {
            local_38 = 0;
          }
        }
        else {
          local_38 = 8;
        }
      }
      else {
        local_38 = 5;
      }
      bVar1 = (byte)local_38;
      bVar4 = 8 - bVar1;
      iVar6 = 1 << (bVar4 & 0x1f);
      param_1[0x56] = local_38 & 0xff;
      pvVar2 = FUN_10042cc0(param_1,iVar6 * 4);
      param_1[0x5c] = (int)pvVar2;
      local_3c = 0;
      if ((param_1[0x1c] & 0x480U) == 0) {
        if (0 < iVar6) {
          do {
            pvVar2 = FUN_10042cc0(param_1,0x200);
            *(void **)(param_1[0x5c] + local_3c * 4) = pvVar2;
            iVar7 = 0;
            do {
              FUN_10046e50();
              lVar9 = __ftol();
              iVar7 = iVar7 + 2;
              *(short *)(*(int *)(param_1[0x5c] + local_3c * 4) + -2 + iVar7) = (short)lVar9;
            } while (iVar7 < 0x200);
            local_3c = local_3c + 1;
          } while ((int)local_3c < iVar6);
        }
      }
      else {
        if (0 < iVar6) {
          do {
            pvVar2 = FUN_10042cc0(param_1,0x200);
            *(void **)(param_1[0x5c] + local_3c * 4) = pvVar2;
            local_3c = local_3c + 1;
          } while ((int)local_3c < iVar6);
        }
        uVar8 = 0;
        local_3c = 0;
        do {
          FUN_10046e50();
          lVar9 = __ftol();
          if (uVar8 <= (uint)lVar9) {
            local_24 = (ushort)((local_3c & 0xff) << 8) | (ushort)local_3c;
            do {
              uVar3 = 0xff >> (bVar1 & 0x1f) & uVar8;
              uVar5 = uVar8 >> (bVar4 & 0x1f);
              uVar8 = uVar8 + 1;
              *(ushort *)(*(int *)(param_1[0x5c] + uVar3 * 4) + uVar5 * 2) = local_24;
            } while (uVar8 <= (uint)lVar9);
          }
          local_3c = local_3c + 1;
        } while ((int)local_3c < 0x100);
        if (uVar8 < (uint)(iVar6 << 8)) {
          do {
            uVar3 = 0xff >> (bVar1 & 0x1f) & uVar8;
            uVar5 = uVar8 >> (bVar4 & 0x1f);
            uVar8 = uVar8 + 1;
            *(undefined2 *)(*(int *)(param_1[0x5c] + uVar3 * 4) + uVar5 * 2) = 0xffff;
          } while (uVar8 < (uint)(iVar6 << 8));
        }
      }
      if ((param_1[0x1c] & 0x600080U) != 0) {
        pvVar2 = FUN_10042cc0(param_1,iVar6 * 4);
        param_1[0x5e] = (int)pvVar2;
        local_3c = 0;
        if (0 < iVar6) {
          do {
            pvVar2 = FUN_10042cc0(param_1,0x200);
            *(void **)(param_1[0x5e] + local_3c * 4) = pvVar2;
            iVar7 = 0;
            do {
              FUN_10046e50();
              lVar9 = __ftol();
              iVar7 = iVar7 + 2;
              *(short *)(*(int *)(param_1[0x5e] + local_3c * 4) + -2 + iVar7) = (short)lVar9;
            } while (iVar7 < 0x200);
            local_3c = local_3c + 1;
          } while ((int)local_3c < iVar6);
        }
        pvVar2 = FUN_10042cc0(param_1,iVar6 * 4);
        param_1[0x5d] = (int)pvVar2;
        local_3c = 0;
        if (0 < iVar6) {
          do {
            pvVar2 = FUN_10042cc0(param_1,0x200);
            *(void **)(param_1[0x5d] + local_3c * 4) = pvVar2;
            iVar7 = 0;
            do {
              FUN_10046e50();
              lVar9 = __ftol();
              iVar7 = iVar7 + 2;
              *(short *)(*(int *)(param_1[0x5d] + local_3c * 4) + -2 + iVar7) = (short)lVar9;
            } while (iVar7 < 0x200);
            local_3c = local_3c + 1;
          } while ((int)local_3c < iVar6);
        }
      }
    }
  }
  return;
}

