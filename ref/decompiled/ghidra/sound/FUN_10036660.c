/* Ghidra decompiled: sound.dll */
/* Function: FUN_10036660 @ 0x10036660 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_10036660(void *this,undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 *local_28;
  uint local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  uint local_18;
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  uint local_4;
  
  bVar3 = false;
  local_24 = 0;
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_c = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  if (*(void **)((int)this + 0x54) == (void *)0x0) {
    return 0x13;
  }
  iVar4 = *(int *)((int)this + 8);
  local_28 = *(undefined4 **)(iVar4 + 0x1c);
  puVar11 = *(undefined4 **)(iVar4 + 0x20);
  if (puVar11 < local_28) {
    puVar11 = *(undefined4 **)(iVar4 + 0x24);
  }
  local_1c = puVar11;
  iVar4 = thunk_FUN_10010660(*(void **)((int)this + 0x54),&local_24,&local_8,0);
  if ((iVar4 != 0) && (iVar4 != 0x2d)) {
    return iVar4;
  }
  uVar2 = *(ushort *)((int)*(void **)((int)this + 0x54) + 0xb4);
  if (uVar2 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = local_24 / uVar2;
  }
  thunk_FUN_100101a0(*(void **)((int)this + 0x54),local_8,local_24,&local_c,&local_10,&local_14,
                     &local_18);
  local_20 = local_c;
  uVar10 = local_10;
joined_r0x10036735:
  if (local_24 != 0) {
    uVar5 = local_24;
    if (puVar11 < (undefined4 *)(local_24 + (int)local_28)) {
      uVar7 = *(uint *)((int)this + 0x58);
      uVar5 = (int)puVar11 - (int)local_28;
      if ((((uVar7 & 4) == 0) && ((uVar7 & 0x20) != 0)) ||
         ((*(int *)((int)this + 0x13a0) != 0 && ((uVar7 & 0x20) != 0)))) {
        if (*(undefined4 **)(*(int *)((int)this + 8) + 0x20) < local_28) {
          *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 1;
        }
        else {
          *(uint *)((int)this + 0x58) = uVar7 | 0x10;
        }
      }
    }
    puVar11 = local_1c;
    if (uVar5 != 0) {
      while( true ) {
        if ((uVar10 == 0) && (local_18 != 0)) {
          uVar10 = local_18;
          local_20 = local_14;
        }
        if (uVar5 <= uVar10) break;
        uVar5 = uVar5 - uVar10;
        puVar12 = local_28;
        puVar13 = local_20;
        for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        local_28 = (undefined4 *)((int)local_28 + uVar10);
        for (uVar7 = uVar10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        local_24 = local_24 - uVar10;
        uVar10 = 0;
        if (uVar5 == 0) goto joined_r0x10036735;
      }
      if ((((uVar5 < uVar10) && ((*(uint *)((int)this + 0x58) & 0x10) != 0)) &&
          (*(int *)((int)this + 0x13a0) != 0)) && ((*(uint *)((int)this + 0x58) & 0x20) != 0)) {
        uVar10 = uVar10 - uVar5;
        puVar11 = local_20;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *local_28;
          local_28 = local_28 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)local_28;
          local_28 = (undefined4 *)((int)local_28 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        iVar4 = **(int **)((int)this + 0x13a0);
        uVar7 = uVar10;
        if ((*(byte *)(iVar4 + 0xcc) & 4) == 0) {
          iVar4 = *(int *)(iVar4 + 0x78);
          local_28 = *(undefined4 **)(iVar4 + 0x1c);
          local_1c = *(undefined4 **)(iVar4 + 0x20);
          if (local_1c < *(undefined4 **)(iVar4 + 0x1c)) {
            local_1c = *(undefined4 **)(iVar4 + 0x24);
          }
        }
        else {
          if (iVar4 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar4 + 0x70;
          }
          local_28 = *(undefined4 **)(*(int *)(iVar9 + 0x1390) + 0x1c);
          if (iVar4 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar4 + 0x70;
          }
          local_1c = *(undefined4 **)(*(int *)(iVar9 + 0x1390) + 0x20);
          if (local_1c < (undefined4 *)(uVar10 + (int)local_28)) {
            if (iVar4 == 0) {
              uVar7 = *(int *)(iRam00001390 + 0x20) - (int)local_28;
            }
            else {
              uVar7 = *(int *)(*(int *)(iVar4 + 0x1400) + 0x20) - (int)local_28;
            }
          }
        }
        uVar10 = uVar10 - uVar7;
        puVar11 = local_28;
        puVar12 = (undefined4 *)((int)local_20 + uVar5);
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        local_24 = (local_24 - uVar5) - uVar7;
        iVar4 = **(int **)((int)this + 0x13a0);
        local_20 = (undefined4 *)((int)((int)local_20 + uVar5) + uVar7);
        local_28 = (undefined4 *)((int)local_28 + uVar10);
        puVar11 = local_1c;
        if ((*(byte *)(iVar4 + 0xcc) & 4) == 0) {
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + 0x70;
          }
          bVar3 = true;
          piVar1 = (int *)(*(int *)(iVar4 + 8) + 0x1c);
          *piVar1 = *piVar1 + uVar7;
        }
        else if (local_28 < local_1c) {
          if (iVar4 == 0) {
            bVar3 = true;
            *(undefined4 **)(iRam00001390 + 0x1c) = local_28;
          }
          else {
            bVar3 = true;
            *(undefined4 **)(*(int *)(iVar4 + 0x1400) + 0x1c) = local_28;
          }
        }
        else {
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + 0x70;
          }
          thunk_FUN_10035ca0(iVar4);
          iVar4 = **(int **)((int)this + 0x13a0);
          if (iVar4 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar4 + 0x70;
          }
          local_28 = *(undefined4 **)(*(int *)(iVar9 + 0x1390) + 0x1c);
          if (iVar4 == 0) {
            bVar3 = true;
            local_1c = *(undefined4 **)(iRam00001390 + 0x20);
            puVar11 = local_1c;
          }
          else {
            bVar3 = true;
            local_1c = *(undefined4 **)(*(int *)(iVar4 + 0x1400) + 0x20);
            puVar11 = local_1c;
          }
        }
      }
      else {
        uVar10 = uVar10 - uVar5;
        puVar12 = local_28;
        puVar13 = local_20;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        local_20 = (undefined4 *)((int)local_20 + uVar5);
        for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        local_24 = local_24 - uVar5;
        local_28 = (undefined4 *)((int)local_28 + uVar5);
        if ((*(uint *)((int)this + 0x5c) & 1) == 0) {
          if ((local_28 == *(undefined4 **)(*(int *)((int)this + 8) + 0x20)) &&
             ((*(byte *)((int)this + 0x58) & 0x10) == 0)) {
            local_28 = *(undefined4 **)(*(int *)((int)this + 8) + 0x18);
          }
          else if (((*(byte *)((int)this + 0x58) & 0x10) != 0) && (uVar10 != 0)) {
            puVar12 = local_20;
            for (uVar5 = uVar10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            for (uVar5 = uVar10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar12 = 0;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            local_24 = local_24 - uVar10;
            uVar10 = 0;
          }
        }
        else {
          local_28 = *(undefined4 **)(*(int *)((int)this + 8) + 0x18);
          *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) & 0xfffffffe;
        }
      }
    }
    goto joined_r0x10036735;
  }
  thunk_FUN_10010370(*(void **)((int)this + 0x54),local_c,local_10,local_14,local_18);
  uVar10 = *(uint *)((int)this + 0x58);
  if (((uVar10 & 8) == 0) && ((*(byte *)((int)this + 0x5c) & 0x10) == 0)) goto LAB_10036c68;
  uVar5 = *(uint *)((int)this + 0x5c);
  if ((uVar5 & 2) != 0) {
    *(uint *)((int)this + 0x58) = uVar10 | 0x10;
    if (*(undefined4 **)((int)this + 0x13a4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)this + 0x13a4) = 0;
    }
    goto LAB_10036c68;
  }
  if ((uVar5 & 8) != 0) {
    if (*(double *)((int)this + 0x210) <= *(double *)((int)this + 0x1e0)) {
      *(uint *)((int)this + 0x58) = uVar10 & 0xfffffff7;
      *(uint *)((int)this + 0x5c) = uVar5 & 0xfffffff7;
    }
    goto LAB_10036c68;
  }
  if ((uVar5 & 0x10) == 0) {
    if (*(double *)((int)this + 0x1e0) == _DAT_1005b498) {
      *(uint *)((int)this + 0x58) = uVar10 | 0x10;
      if (*(undefined4 **)((int)this + 0x13a4) != (undefined4 *)0x0) {
        **(undefined4 **)((int)this + 0x13a4) = 0;
      }
    }
    if (*(double *)((int)this + 0x1e0) <= *(double *)((int)this + 0x1c8)) {
      *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)((int)this + 0x1e0);
      *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 2;
      *(undefined4 *)((int)this + 0x1cc) = *(undefined4 *)((int)this + 0x1e4);
    }
    *(double *)((int)this + 0x1e0) = *(double *)((int)this + 0x1e0) - *(double *)((int)this + 0x1c8)
    ;
  }
  else if (*(double *)((int)this + 0x1c8) <= _DAT_1005b498) {
    if (*(double *)((int)this + 0x1d0) <= *(double *)((int)this + 0x1e0)) goto LAB_10036bdb;
    if (*(double *)((int)this + 0x1d0) - *(double *)((int)this + 0x1e0) <=
        ABS(*(double *)((int)this + 0x1c8))) {
      *(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)((int)this + 0x1d0);
      *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)((int)this + 0x1d4);
    }
    else {
      *(double *)((int)this + 0x1e0) =
           *(double *)((int)this + 0x1e0) - *(double *)((int)this + 0x1c8);
    }
  }
  else {
    if (*(double *)((int)this + 0x1e0) <= *(double *)((int)this + 0x1d0)) {
LAB_10036bdb:
      *(uint *)((int)this + 0x5c) = uVar5 & 0xffffffef;
      goto LAB_10036c68;
    }
    if (*(double *)((int)this + 0x1c8) <= *(double *)((int)this + 0x1e0)) {
      *(double *)((int)this + 0x1e0) =
           *(double *)((int)this + 0x1e0) - *(double *)((int)this + 0x1c8);
    }
    else {
      *(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)((int)this + 0x1d0);
      *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)((int)this + 0x1d4);
    }
  }
  lVar14 = __ftol();
  thunk_FUN_1000f1c0(*(void **)((int)this + 0x54),(uint)lVar14);
LAB_10036c68:
  if (!bVar3) {
    *(undefined4 **)(*(int *)((int)this + 8) + 0x1c) = local_28;
    *param_3 = local_4;
    uVar10 = *(uint *)((int)this + 0x58);
    if ((((uVar10 & 2) != 0) && ((uVar10 & 0x21) == 0)) &&
       (((uVar10 & 0x400) == 0 &&
        (*(uint *)(*(int *)((int)this + 8) + 0x14) >> 2 <
         (*(int *)(*(int *)((int)this + 8) + 0x1c) - *(int *)((int)this + 0x1378) &
         *(uint *)((int)this + 0x1374)))))) {
      *(uint *)((int)this + 0x58) = uVar10 | 0x400;
      *(int *)((int)this + 0x1370) = *(int *)((int)this + 0x1370) + 1;
      thunk_FUN_1002aa90(&DAT_100b5038,0x7eb,(WPARAM)this,0);
    }
    return 0xb;
  }
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x1e0) = *(undefined4 *)((int)this + 0x1e0);
  *(undefined4 *)(iVar4 + 0x1e4) = *(undefined4 *)((int)this + 0x1e4);
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x1c8) = *(undefined4 *)((int)this + 0x1c8);
  *(undefined4 *)(iVar4 + 0x1cc) = *(undefined4 *)((int)this + 0x1cc);
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x1d0) = *(undefined4 *)((int)this + 0x1d0);
  *(undefined4 *)(iVar4 + 0x1d4) = *(undefined4 *)((int)this + 0x1d4);
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x1d8) = *(undefined4 *)((int)this + 0x1d8);
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x208) = *(undefined4 *)((int)this + 0x208);
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x1f8) = *(undefined4 *)((int)this + 0x1f8);
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x1e8) = *(undefined4 *)((int)this + 0x1e8);
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x218) = *(undefined4 *)((int)this + 0x218);
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x21c) = *(undefined4 *)((int)this + 0x21c);
  iVar4 = **(int **)((int)this + 0x13a0);
  if (iVar4 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar4 + 0x70;
  }
  if ((*(byte *)(iVar9 + 0x5c) & 4) == 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x70;
    }
    uVar10 = *(uint *)(iVar4 + 0x58);
    if (((((uVar10 & 2) != 0) && ((uVar10 & 0x21) == 0)) && ((uVar10 & 0x400) == 0)) &&
       (*(uint *)(*(int *)(iVar4 + 8) + 0x14) >> 2 <
        (*(int *)(*(int *)(iVar4 + 8) + 0x1c) - *(int *)(iVar4 + 0x1378) & *(uint *)(iVar4 + 0x1374)
        ))) {
      *(uint *)(iVar4 + 0x58) = uVar10 | 0x400;
      *(uint *)(*(int *)((int)this + 0x13a0) + 0x58) =
           *(uint *)(*(int *)((int)this + 0x13a0) + 0x58) | 0x400;
      *(int *)(*(int *)((int)this + 0x13a0) + 0x1370) =
           *(int *)(*(int *)((int)this + 0x13a0) + 0x1370) + 1;
      thunk_FUN_1002aa90(&DAT_100b5038,0x7eb,**(WPARAM **)((int)this + 0x13a0),0);
    }
  }
  thunk_FUN_1000e120(DAT_100b4a20,**(int **)((int)this + 0x13a0));
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)((int)this + 0x54);
  if (**(int **)((int)this + 0x13a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)((int)this + 0x13a0) + 0x70;
  }
  *(uint *)(iVar4 + 0x58) = *(uint *)(iVar4 + 0x58) | 0x10000000;
  *(undefined4 *)((int)this + 0x54) = 0;
  **(undefined4 **)((int)this + 0x13a4) = **(undefined4 **)((int)this + 0x13a0);
  **(undefined4 **)((int)this + 0x13a0) = 0;
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 0x80;
  iVar4 = 0x10;
  *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 0x10;
  pbVar6 = (byte *)((int)this + 0x2d4);
  do {
    iVar4 = iVar4 + -1;
    *pbVar6 = *pbVar6 & 0xfd | 4;
    pbVar6 = pbVar6 + 0x110;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x13a0) = 0;
  *(undefined4 *)((int)this + 0x13a4) = 0;
  return 0xb;
}

