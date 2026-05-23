/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1000aa20 @ 0x1000AA20 */
/* Body size: 626 addresses */


undefined4 __thiscall FUN_1000aa20(void *this,undefined4 *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  LPVOID pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  size_t _Size;
  undefined4 *puVar10;
  undefined4 *puStack_10;
  uint uStack_c;
  
  (**(code **)(*(int *)this + 8))();
  *(uint *)((int)this + 0x30) = param_2;
  _Size = param_2 * param_3;
  *(int *)((int)this + 0x34) = param_3;
  *(undefined4 *)((int)this + 0x20) = 8;
  *(size_t *)((int)this + 0x24) = _Size;
  pvVar3 = _malloc(_Size);
  *(void **)((int)this + 0x14) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return 4;
  }
  DAT_10057b94 = DAT_10057b94 + _Size;
  if (param_1 != (undefined4 *)0x0) {
    if ((((DAT_10057b90 != 0) && (4 < param_2)) && ((int)param_2 < 0x100)) && ((int)_Size < 0x10000)
       ) {
      uStack_c = (param_2 - 4) * param_3;
      pvVar3 = _malloc(param_3 * 4);
      *(void **)((int)this + 0x1c) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        (**(code **)(*(int *)this + 8))();
        return 4;
      }
      puStack_10 = *(undefined4 **)((int)this + 0x14);
      iVar8 = 0;
      puVar7 = param_1;
      if (0 < param_3) {
        do {
          iVar4 = 0;
          if (0 < (int)param_2) {
            do {
              if ((uint)*(byte *)(iVar4 + (int)puVar7) != *(uint *)((int)this + 0x28)) break;
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)param_2);
          }
          *(char *)(*(int *)((int)this + 0x1c) + iVar8 * 4) = (char)iVar4;
          pbVar1 = (byte *)(*(int *)((int)this + 0x1c) + iVar8 * 4);
          uVar6 = param_2;
          do {
            uVar6 = uVar6 - 1;
            if ((int)uVar6 <= (int)(uint)*pbVar1) break;
          } while ((uint)*(byte *)(uVar6 + (int)puVar7) == *(uint *)((int)this + 0x28));
          pbVar1[1] = ((char)uVar6 - *pbVar1) + 1;
          bVar2 = *(byte *)(*(int *)((int)this + 0x1c) + 1 + iVar8 * 4);
          if (bVar2 != 0) {
            if (uStack_c < bVar2) {
              if (*(LPVOID *)((int)this + 0x1c) != (LPVOID)0x0) {
                FUN_10046abc(*(LPVOID *)((int)this + 0x1c));
              }
              *(undefined4 *)((int)this + 0x1c) = 0;
              goto LAB_1000ac63;
            }
            *(short *)(*(int *)((int)this + 0x1c) + iVar8 * 4 + 2) =
                 (short)puStack_10 - *(short *)((int)this + 0x14);
            bVar2 = *(byte *)(*(int *)((int)this + 0x1c) + iVar8 * 4 + 1);
            puVar9 = (undefined4 *)
                     ((uint)*(byte *)(*(int *)((int)this + 0x1c) + iVar8 * 4) + (int)puVar7);
            puVar10 = puStack_10;
            for (uVar6 = (uint)(bVar2 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar6 = bVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            uVar6 = (uint)*(byte *)(*(int *)((int)this + 0x1c) + 1 + iVar8 * 4);
            uStack_c = uStack_c - uVar6;
            puStack_10 = (undefined4 *)((int)puStack_10 + uVar6);
          }
          puVar7 = (undefined4 *)((int)puVar7 + param_2);
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_3);
      }
      *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) | 1;
      *(size_t *)((int)this + 0x24) = _Size - uStack_c;
      pvVar5 = FUN_10046c63(*(LPVOID *)((int)this + 0x14),_Size - uStack_c);
      *(LPVOID *)((int)this + 0x14) = pvVar5;
      DAT_10057b98 = DAT_10057b98 + ((param_2 - 4) * param_3 - *(int *)((int)this + 0x24));
      *(uint *)((int)this + 0x2c) = param_2;
      return 0;
    }
LAB_1000ac63:
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffffe;
    puVar7 = *(undefined4 **)((int)this + 0x14);
    for (uVar6 = _Size >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *param_1;
      param_1 = param_1 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = _Size & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  *(uint *)((int)this + 0x2c) = param_2;
  return 0;
}

