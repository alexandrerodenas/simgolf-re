/* Ghidra decompiled: sound.dll */
/* Function: FUN_100326a0 @ 0x100326A0 */
/* Body size: 2429 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_100326a0(void *this,uint *param_1)

{
  LPMMIOINFO pmmioinfo;
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  HMMIO pHVar4;
  MMRESULT MVar5;
  HPSTR pcVar6;
  uint *puVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  size_t _Size;
  CHAR *pCVar13;
  undefined4 *puVar14;
  LPSTR pCVar15;
  undefined4 *puVar16;
  uint *local_68;
  _MMCKINFO local_64;
  _MMCKINFO local_50;
  _MMCKINFO local_3c;
  _MMCKINFO local_28;
  _MMCKINFO local_14;
  
  puVar7 = param_1;
  puVar2 = FUN_10042690(param_1,&DAT_10063eec);
  if ((puVar2 == (uint *)0x0) &&
     (local_64.ckid = (FOURCC)FUN_10042690(puVar7,&DAT_10063ee8),
     (uint *)local_64.ckid == (uint *)0x0)) {
    local_3c.ckid = 0;
    local_50.ckid = 0;
    local_3c.cksize = 0;
    local_50.cksize = 0;
    local_3c.fccType = 0;
    local_50.fccType = 0;
    local_3c.dwDataOffset = 0;
    local_50.dwDataOffset = 0;
    local_3c.dwFlags = 0;
    local_50.dwFlags = 0;
    local_64.cksize = local_64.ckid;
    local_64.fccType = local_64.ckid;
    local_64.dwDataOffset = local_64.ckid;
    local_64.dwFlags = local_64.ckid;
    local_28.ckid = local_64.ckid;
    local_28.cksize = local_64.ckid;
    local_28.fccType = local_64.ckid;
    local_28.dwDataOffset = local_64.ckid;
    local_28.dwFlags = local_64.ckid;
    if (((*(byte *)((int)this + 0x58) & 2) == 0) ||
       (puVar3 = (undefined4 *)thunk_FUN_100340b0(this), puVar3 == (undefined4 *)0x0)) {
      param_1 = (uint *)((int)this + 0xc);
      *(undefined4 *)this = 0;
      puVar2 = param_1;
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puVar3 = (undefined4 *)((int)this + 0x194);
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      uVar10 = 0xffffffff;
      *(undefined4 *)((int)this + 0x164) = 0;
      *(undefined4 *)((int)this + 0x168) = 0;
      *(undefined4 *)((int)this + 0x16c) = 0;
      *(undefined4 *)((int)this + 0x170) = 0;
      *(undefined4 *)((int)this + 0x174) = 0;
      *(undefined4 *)((int)this + 0x20) = 0x20000;
      *(undefined4 *)((int)this + 0x10) = 0x204d454d;
      do {
        puVar2 = puVar7;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        puVar2 = (uint *)((int)puVar7 + 1);
        uVar11 = *puVar7;
        puVar7 = puVar2;
      } while ((char)uVar11 != '\0');
      uVar10 = ~uVar10;
      pCVar13 = (CHAR *)((int)puVar2 - uVar10);
      pCVar15 = (LPSTR)((int)this + 100);
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pCVar15 = *(undefined4 *)pCVar13;
        pCVar13 = pCVar13 + 4;
        pCVar15 = pCVar15 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pCVar15 = *pCVar13;
        pCVar13 = pCVar13 + 1;
        pCVar15 = pCVar15 + 1;
      }
      pHVar4 = mmioOpenA((LPSTR)((int)this + 100),(LPMMIOINFO)0x0,0);
      *(HMMIO *)this = pHVar4;
      if (pHVar4 == (HMMIO)0x0) {
        for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
          *param_1 = 0;
          param_1 = param_1 + 1;
        }
        return (undefined4 *)&DAT_00000008;
      }
      DAT_100b4a08 = DAT_100b4a08 + 1;
      *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 2;
      thunk_FUN_100385d0(&DAT_100b49c8,(int)this + 0xc);
      local_64.ckid = mmioStringToFOURCCA(&DAT_10063ee0,0);
      local_64.fccType = mmioStringToFOURCCA(&DAT_10063ed8,0);
      MVar5 = mmioDescend(*(HMMIO *)this,&local_64,(MMCKINFO *)0x0,0x20);
      if (MVar5 != 0) {
        thunk_FUN_10032020(this);
        return (undefined4 *)0x12;
      }
      local_3c.ckid = mmioStringToFOURCCA(&DAT_10063ed0,0);
      MVar5 = mmioDescend(*(HMMIO *)this,&local_3c,&local_64,0x10);
      if (MVar5 != 0) {
        thunk_FUN_10032020(this);
        return (undefined4 *)0x12;
      }
      mmioRead(*(HMMIO *)this,(HPSTR)((int)this + 0x180),0x10);
      *(undefined2 *)((int)this + 400) = 0;
      mmioAscend(*(HMMIO *)this,&local_3c,0);
      local_14.ckid = mmioStringToFOURCCA(&DAT_10063ec8,0);
      MVar5 = mmioDescend(*(HMMIO *)this,&local_14,&local_64,0x10);
      if (MVar5 == 0) {
        mmioRead(*(HMMIO *)this,(HPSTR)((int)this + 0x194),0x24);
        if (*(int *)((int)this + 0x1b0) != 0) {
          pcVar6 = operator_new(*(int *)((int)this + 0x1b0) * 0x18);
          *(HPSTR *)((int)this + 0x1b8) = pcVar6;
          mmioRead(*(HMMIO *)this,pcVar6,*(int *)((int)this + 0x1b0) * 0x18);
          iVar9 = *(int *)((int)this + 0x1b8);
          *(uint *)((int)this + 0x1368) =
               ((*(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 8)) + 1) *
               (uint)*(ushort *)((int)this + 0x18c);
          *(uint *)((int)this + 0x136c) = (uint)*(ushort *)((int)this + 0x18c) * *(int *)(iVar9 + 8)
          ;
        }
        mmioAscend(*(HMMIO *)this,&local_14,0);
      }
      else {
        *(undefined4 *)((int)this + 0x1a0) = 0x3c;
      }
      local_64.ckid = mmioStringToFOURCCA(&DAT_10063ee0,0);
      mmioSeek(*(HMMIO *)this,0,0);
      local_64.fccType = mmioStringToFOURCCA(&DAT_10063ed8,0);
      MVar5 = mmioDescend(*(HMMIO *)this,&local_64,(MMCKINFO *)0x0,0x20);
      if (MVar5 != 0) {
        thunk_FUN_10032020(this);
        return (undefined4 *)0x12;
      }
      local_28.ckid = mmioStringToFOURCCA(&DAT_10063ec0,0);
      puVar7 = (uint *)mmioDescend(*(HMMIO *)this,&local_28,&local_64,0x10);
      if (puVar7 == (uint *)0x0) {
        param_1 = puVar7;
        mmioRead(*(HMMIO *)this,(HPSTR)&param_1,4);
        local_68 = (uint *)0x0;
        if (param_1 != (uint *)0x0) {
          do {
            pcVar6 = operator_new(0x18);
            mmioRead(*(HMMIO *)this,pcVar6,0x18);
            thunk_FUN_10038550((void *)((int)this + 0x1348),pcVar6);
            local_68 = (uint *)((int)local_68 + 1);
          } while (local_68 < param_1);
        }
        mmioAscend(*(HMMIO *)this,&local_28,0);
      }
      mmioAscend(*(HMMIO *)this,&local_64,0);
      local_64.ckid = mmioStringToFOURCCA(&DAT_10063ee0,0);
      mmioSeek(*(HMMIO *)this,0,0);
      local_64.fccType = mmioStringToFOURCCA(&DAT_10063ed8,0);
      MVar5 = mmioDescend(*(HMMIO *)this,&local_64,(MMCKINFO *)0x0,0x20);
      if (MVar5 != 0) {
        thunk_FUN_10032020(this);
        return (undefined4 *)0x12;
      }
      local_50.ckid = mmioStringToFOURCCA(&DAT_10063eb8,0);
      MVar5 = mmioDescend(*(HMMIO *)this,&local_50,&local_64,0x10);
      if (MVar5 != 0) {
        thunk_FUN_10032020(this);
        return (undefined4 *)0x12;
      }
      *(DWORD *)((int)this + 0x174) = local_50.dwDataOffset;
      *(DWORD *)((int)this + 0x178) = local_50.cksize;
      uVar10 = local_50.cksize / *(ushort *)((int)this + 0x18c);
      *(uint *)((int)this + 0x168) = uVar10;
      *(uint *)((int)this + 0x139c) = (uVar10 * 1000) / *(uint *)((int)this + 0x184);
      if (*(int *)((int)this + 0x1b8) == 0) {
        *(DWORD *)((int)this + 0x1368) = local_50.cksize;
        *(undefined4 *)((int)this + 0x136c) = 0;
      }
      if ((*(uint *)((int)this + 0x58) & 0x20000000) != 0) {
        puVar7 = param_1;
        if (DAT_100b4a20 != (int *)0x0) {
          puVar7 = (uint *)thunk_FUN_10032130(this,DAT_100b49f0);
        }
        if ((puVar7 == (uint *)0x0) || (puVar7 == (uint *)0x23)) {
          mmioClose(*(HMMIO *)this,0);
          piVar1 = DAT_100b49c8;
          do {
            if (piVar1 == (int *)0x0) {
LAB_10032bdd:
              DAT_100b4a08 = DAT_100b4a08 + -1;
              *(undefined4 *)this = 0;
              if (puVar7 == (uint *)0x0) {
                *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 1;
              }
              return puVar7;
            }
            if (piVar1[2] == (int)this + 0xc) {
              if (piVar1 != (int *)0x0) {
                if (*piVar1 == 0) {
                  DAT_100b49c8 = (int *)piVar1[1];
                }
                else {
                  *(int *)(*piVar1 + 4) = piVar1[1];
                }
                _DAT_100b49d0 = (int *)piVar1[1];
                if (_DAT_100b49d0 == (int *)0x0) {
                  _DAT_100b49cc = *piVar1;
                  _DAT_100b49d0 = (int *)0x0;
                }
                else {
                  *_DAT_100b49d0 = *piVar1;
                }
                FUN_1004249a((undefined *)piVar1);
                DAT_100b49d4 = DAT_100b49d4 + -1;
              }
              goto LAB_10032bdd;
            }
            piVar1 = (int *)piVar1[1];
          } while( true );
        }
      }
      if ((*(byte *)((int)this + 0x5c) & 0x20) != 0) {
        puVar7 = param_1;
        if (DAT_100b4a20 != (int *)0x0) {
          puVar7 = (uint *)thunk_FUN_10032290(this,DAT_100b49f0);
        }
        if ((puVar7 == (uint *)0x0) || (puVar7 == (uint *)0x23)) {
          mmioClose(*(HMMIO *)this,0);
          piVar1 = DAT_100b49c8;
          do {
            if (piVar1 == (int *)0x0) {
LAB_10032cb1:
              DAT_100b4a08 = DAT_100b4a08 + -1;
              *(undefined4 *)this = 0;
              return puVar7;
            }
            if (piVar1[2] == (int)this + 0xc) {
              if (piVar1 != (int *)0x0) {
                if (*piVar1 == 0) {
                  DAT_100b49c8 = (int *)piVar1[1];
                }
                else {
                  *(int *)(*piVar1 + 4) = piVar1[1];
                }
                _DAT_100b49d0 = (int *)piVar1[1];
                if (_DAT_100b49d0 == (int *)0x0) {
                  _DAT_100b49cc = *piVar1;
                  _DAT_100b49d0 = (int *)0x0;
                }
                else {
                  *_DAT_100b49d0 = *piVar1;
                }
                FUN_1004249a((undefined *)piVar1);
                DAT_100b49d4 = DAT_100b49d4 + -1;
              }
              goto LAB_10032cb1;
            }
            piVar1 = (int *)piVar1[1];
          } while( true );
        }
      }
      _Size = 0x20000;
      if (((*(uint *)((int)this + 0x58) & 1) != 0) || (*(uint *)((int)this + 0x178) < 0x20000)) {
        _Size = *(size_t *)((int)this + 0x178);
        *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 1;
      }
      if ((*(byte *)((int)this + 0x58) & 1) == 0) {
        *(undefined4 *)((int)this + 0x1374) = 0x1ffff;
      }
      mmioSetBuffer(*(HMMIO *)this,(LPSTR)0x0,_Size,0);
      pmmioinfo = (LPMMIOINFO)((int)this + 0xc);
      mmioGetInfo(*(HMMIO *)this,pmmioinfo,0);
      mmioAdvance(*(HMMIO *)this,pmmioinfo,0);
      uVar10 = (*(int *)((int)this + 0x168) - *(int *)((int)this + 0x164)) *
               (uint)*(ushort *)((int)this + 0x18c);
      if (uVar10 < *(uint *)((int)this + 0x20) || uVar10 - *(uint *)((int)this + 0x20) == 0) {
        mmioAdvance(*(HMMIO *)this,pmmioinfo,0);
        *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 1;
        *(LPMMIOINFO *)((int)this + 8) = pmmioinfo;
        puVar3 = (undefined4 *)((int)this + 0x2c4);
        *(uint *)((int)this + 0x2c) =
             (*(int *)((int)this + 0x168) - *(int *)((int)this + 0x164)) *
             (uint)*(ushort *)((int)this + 0x18c) + *(int *)((int)this + 0x24);
        iVar9 = 0x10;
        do {
          if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
            puVar14 = *(undefined4 **)((int)this + 8);
            puVar16 = puVar3 + -0x23;
            for (iVar12 = 0x12; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar16 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            }
          }
          puVar3[-1] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[5] = *(undefined4 *)((int)this + 0x180);
          puVar3[6] = *(undefined4 *)((int)this + 0x184);
          puVar3[7] = *(undefined4 *)((int)this + 0x188);
          puVar3[8] = *(undefined4 *)((int)this + 0x18c);
          *(undefined2 *)(puVar3 + 9) = *(undefined2 *)((int)this + 400);
          puVar3[1] = *(undefined4 *)((int)this + 0x168);
          *puVar3 = *(undefined4 *)((int)this + 0x164);
          puVar3[-1] = 0;
          *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfd | 4;
          if (*(int *)((int)this + 0x1b8) == 0) {
            puVar3[0x13] = *(undefined4 *)(*(int *)((int)this + 8) + 0x18);
            puVar3[0x12] = *(undefined4 *)(*(int *)((int)this + 8) + 0x20);
            iVar12 = (*(int *)(*(int *)((int)this + 8) + 0x20) -
                     *(int *)(*(int *)((int)this + 8) + 0x18)) + 1;
          }
          else {
            puVar3[0x13] = *(int *)(*(int *)((int)this + 0x1b8) + 8) *
                           (uint)*(ushort *)((int)this + 0x18c) +
                           *(int *)(*(int *)((int)this + 8) + 0x18);
            puVar3[0x12] = (*(int *)(*(int *)((int)this + 0x1b8) + 0xc) + 1) *
                           (uint)*(ushort *)((int)this + 0x18c) +
                           *(int *)(*(int *)((int)this + 8) + 0x18);
            iVar12 = ((*(int *)(*(int *)((int)this + 0x1b8) + 0xc) -
                      *(int *)(*(int *)((int)this + 0x1b8) + 8)) + 1) *
                     (uint)*(ushort *)((int)this + 0x18c);
          }
          puVar3[0x14] = iVar12;
          puVar3 = puVar3 + 0x44;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        *(undefined4 *)((int)this + 0x228) = 0;
        return (undefined4 *)0x0;
      }
      puVar3 = operator_new(0x48);
      *(undefined4 **)((int)this + 8) = puVar3;
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(size_t *)(*(int *)((int)this + 8) + 0x14) = _Size;
      *(undefined4 *)(*(int *)((int)this + 8) + 4) = 0x204d454d;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x30) = 0;
      pvVar8 = _malloc(_Size);
      *(void **)(*(int *)((int)this + 8) + 0x18) = pvVar8;
      pHVar4 = mmioOpenA((LPSTR)0x0,*(LPMMIOINFO *)((int)this + 8),0x1002);
      *(HMMIO *)((int)this + 4) = pHVar4;
      if (pHVar4 == (HMMIO)0x0) {
        thunk_FUN_100340b0(this);
        return (undefined4 *)&DAT_00000008;
      }
      DAT_100b4a08 = DAT_100b4a08 + 1;
      mmioGetInfo(*(HMMIO *)((int)this + 4),*(LPMMIOINFO *)((int)this + 8),0);
      thunk_FUN_100385d0(&DAT_100b49c8,*(undefined4 *)((int)this + 8));
      *(undefined4 *)((int)this + 0x1378) = *(undefined4 *)(*(int *)((int)this + 8) + 0x18);
      if (*(int *)((int)this + 0x1b8) != 0) {
        *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 4;
        iVar9 = 0x10;
        do {
          iVar9 = iVar9 + -1;
          *(uint *)((int)this + 0x2d0) = *(uint *)((int)this + 0x2d0) | 1;
        } while (iVar9 != 0);
      }
      thunk_FUN_10033300(this);
      mmioGetInfo(*(HMMIO *)this,(LPMMIOINFO)((int)this + 0xc),0);
      mmioAdvance(*(HMMIO *)this,(LPMMIOINFO)((int)this + 0xc),0);
      uVar10 = *(uint *)((int)this + 0x5c);
      if (((uVar10 & 0x40) != 0) && ((uVar10 & 0x80) == 0)) {
        if (DAT_100b49f0 != (HPSTR)0x0) {
          iVar9 = thunk_FUN_10012fe0(DAT_100b49f0,(int *)((int)this + 0x54),
                                     (undefined4 *)((int)this + 0x180),0x100e0,0x10000);
          if (iVar9 == 0) {
            iVar12 = 8;
            iVar9 = (**(code **)(*DAT_100b4a20 + 0x40))();
            thunk_FUN_10010eb0(*(void **)((int)this + 0x54),iVar9,iVar12);
            *(undefined4 *)((int)this + 0x228) = 0;
            *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 0x10000000;
            return (undefined4 *)0x0;
          }
          uVar10 = *(uint *)((int)this + 0x5c);
        }
        *(uint *)((int)this + 0x5c) = uVar10 & 0xffffffbf;
      }
      *(undefined4 *)((int)this + 0x228) = 0;
      return (undefined4 *)0x0;
    }
  }
  else {
    puVar3 = (undefined4 *)0xb;
  }
  return puVar3;
}

