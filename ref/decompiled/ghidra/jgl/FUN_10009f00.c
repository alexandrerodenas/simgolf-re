/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10009f00 @ 0x10009F00 */


undefined4 __thiscall FUN_10009f00(void *this,ushort *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  LPVOID pvVar5;
  ushort *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  ushort *puStack_14;
  uint uStack_10;
  ushort *puStack_c;
  undefined4 *puStack_8;
  
  (**(code **)(*(int *)this + 8))();
  *(int *)((int)this + 0x34) = param_3;
  uVar10 = param_2 * param_3;
  *(uint *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x20) = 0x10;
  *(uint *)((int)this + 0x24) = uVar10 * 2;
  pvVar3 = _malloc(uVar10 * 2);
  *(void **)((int)this + 0x14) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return 4;
  }
  DAT_10057b94 = DAT_10057b94 + uVar10;
  if (param_1 != (ushort *)0x0) {
    if ((((DAT_10057b90 != 0) && (4 < param_2)) && ((int)param_2 < 0x100)) &&
       ((int)uVar10 < 0x10000)) {
      uStack_10 = (param_2 - 4) * param_3;
      pvVar3 = _malloc(param_3 * 4);
      *(void **)((int)this + 0x1c) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        (**(code **)(*(int *)this + 8))();
        return 4;
      }
      puVar8 = *(undefined4 **)((int)this + 0x14);
      iVar9 = 0;
      puStack_14 = param_1;
      puStack_8 = puVar8;
      if (0 < param_3) {
        do {
          iVar4 = 0;
          if (0 < (int)param_2) {
            puVar6 = puStack_14;
            do {
              if ((uint)*puVar6 != *(uint *)((int)this + 0x28)) break;
              iVar4 = iVar4 + 1;
              puVar6 = puVar6 + 1;
            } while (iVar4 < (int)param_2);
          }
          *(char *)(*(int *)((int)this + 0x1c) + iVar9 * 4) = (char)iVar4;
          pbVar1 = (byte *)(*(int *)((int)this + 0x1c) + iVar9 * 4);
          iVar4 = param_2 - 1;
          if ((int)(uint)*pbVar1 < iVar4) {
            puStack_c = puStack_14 + iVar4;
            do {
              puVar8 = puStack_8;
              if ((uint)*puStack_c != *(uint *)((int)this + 0x28)) break;
              iVar4 = iVar4 + -1;
              puStack_c = puStack_c + -1;
            } while ((int)(uint)*pbVar1 < iVar4);
          }
          pbVar1[1] = ((char)iVar4 - *pbVar1) + 1;
          bVar2 = *(byte *)(*(int *)((int)this + 0x1c) + 1 + iVar9 * 4);
          if (bVar2 != 0) {
            if (uStack_10 < bVar2) {
              if (*(LPVOID *)((int)this + 0x1c) != (LPVOID)0x0) {
                FUN_10046abc(*(LPVOID *)((int)this + 0x1c));
              }
              *(undefined4 *)((int)this + 0x1c) = 0;
              goto LAB_1000a164;
            }
            *(short *)(*(int *)((int)this + 0x1c) + iVar9 * 4 + 2) =
                 (short)((int)puVar8 - *(int *)((int)this + 0x14) >> 1);
            bVar2 = *(byte *)(*(int *)((int)this + 0x1c) + iVar9 * 4 + 1);
            puVar6 = puStack_14 + *(byte *)(*(int *)((int)this + 0x1c) + iVar9 * 4);
            puVar11 = puVar8;
            for (uVar7 = (uint)(bVar2 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar11 = *(undefined4 *)puVar6;
              puVar6 = puVar6 + 2;
              puVar11 = puVar11 + 1;
            }
            for (uVar7 = bVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(char *)puVar11 = (char)*puVar6;
              puVar6 = (ushort *)((int)puVar6 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            uVar7 = (uint)*(byte *)(*(int *)((int)this + 0x1c) + 1 + iVar9 * 4);
            uStack_10 = uStack_10 - uVar7;
            puVar8 = (undefined4 *)((int)puVar8 + uVar7 * 2);
            puStack_8 = puVar8;
          }
          iVar9 = iVar9 + 1;
          puStack_14 = puStack_14 + param_2;
        } while (iVar9 < param_3);
      }
      *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) | 1;
      *(uint *)((int)this + 0x24) = uVar10 - uStack_10;
      pvVar5 = FUN_10046c63(*(LPVOID *)((int)this + 0x14),uVar10 - uStack_10);
      *(LPVOID *)((int)this + 0x14) = pvVar5;
      DAT_10057b98 = DAT_10057b98 + ((param_2 - 4) * param_3 - *(int *)((int)this + 0x24));
      *(uint *)((int)this + 0x2c) = param_2;
      return 0;
    }
LAB_1000a164:
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffffe;
    puVar8 = *(undefined4 **)((int)this + 0x14);
    for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = *(undefined4 *)param_1;
      param_1 = param_1 + 2;
      puVar8 = puVar8 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(char *)puVar8 = (char)*param_1;
      param_1 = (ushort *)((int)param_1 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  *(uint *)((int)this + 0x2c) = param_2;
  return 0;
}

