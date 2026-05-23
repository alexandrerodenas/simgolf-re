/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001d810 @ 0x1001D810 */
/* Body size: 965 addresses */


int __thiscall FUN_1001d810(void *this,char *param_1)

{
  FOURCC *pch;
  uint *pch_00;
  char cVar1;
  int iVar2;
  HMMIO hmmio;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  CHAR *pCVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  LPSTR pCVar12;
  code *pcVar13;
  undefined4 *local_24;
  undefined4 local_20;
  FOURCC local_1c;
  uint local_18;
  undefined1 local_14 [4];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058b1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = (undefined4 *)mmioStringToFOURCCA(&DAT_10063d90,0);
  mmioStringToFOURCCA(&DAT_10063e08,0);
  if (((*(byte *)((int)this + 0x4c) & 1) == 0) || (iVar2 = thunk_FUN_1001e3d0(this), iVar2 == 0)) {
    *(undefined4 *)this = 0;
    puVar3 = (undefined4 *)((int)this + 4);
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar5 = 0xffffffff;
    *(undefined4 *)((int)this + 0x160) = 0;
    *(undefined4 *)((int)this + 0x164) = 0;
    *(undefined4 *)((int)this + 0x168) = 0;
    *(undefined4 *)((int)this + 0x16c) = 0;
    pcVar10 = param_1;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pCVar8 = pcVar11 + -uVar5;
    pCVar12 = (LPSTR)((int)this + 0x50);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pCVar12 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar12 = pCVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pCVar12 = *pCVar8;
      pCVar8 = pCVar8 + 1;
      pCVar12 = pCVar12 + 1;
    }
    hmmio = mmioOpenA((LPSTR)((int)this + 0x50),(LPMMIOINFO)0x0,0);
    *(HMMIO *)this = hmmio;
    pcVar13 = mmioRead_exref;
    if (hmmio == (HMMIO)0x0) {
      puVar3 = (undefined4 *)((int)this + 4);
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      iVar2 = 8;
    }
    else {
      mmioRead(hmmio,(HPSTR)&local_1c,4);
      if ((undefined4 *)local_1c == local_20) {
        pch = (FOURCC *)((int)this + 0x150);
        DAT_100b4a08 = DAT_100b4a08 + 1;
        mmioRead(*(HMMIO *)this,(HPSTR)pch,4);
        param_1 = (char *)*pch;
        iVar2 = 0;
        puVar7 = (undefined1 *)((int)&param_1 + 3);
        do {
          *(undefined1 *)((int)&local_20 + iVar2) = *puVar7;
          iVar2 = iVar2 + 1;
          puVar7 = puVar7 + -1;
        } while (iVar2 < 4);
        *pch = (FOURCC)local_20;
        *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) | 1;
        pch_00 = (uint *)((int)this + 0x154);
        mmioRead(*(HMMIO *)this,(HPSTR)pch_00,2);
        param_1 = (char *)CONCAT22(extraout_var,*(undefined2 *)pch_00);
        iVar2 = 0;
        puVar7 = (undefined1 *)((int)&param_1 + 1);
        do {
          *(undefined1 *)((int)&local_20 + iVar2) = *puVar7;
          iVar2 = iVar2 + 1;
          puVar7 = puVar7 + -1;
        } while (iVar2 < 2);
        *pch_00 = (uint)local_20 & 0xffff;
        mmioRead(*(HMMIO *)this,(HPSTR)((int)this + 0x158),2);
        param_1 = (char *)CONCAT22(extraout_var_00,*(undefined2 *)((int)this + 0x158));
        iVar2 = 0;
        puVar7 = (undefined1 *)((int)&param_1 + 1);
        do {
          *(undefined1 *)((int)&local_20 + iVar2) = *puVar7;
          iVar2 = iVar2 + 1;
          puVar7 = puVar7 + -1;
        } while (iVar2 < 2);
        *(uint *)((int)this + 0x158) = (uint)local_20 & 0xffff;
        mmioRead(*(HMMIO *)this,(HPSTR)((int)this + 0x15c),2);
        iVar2 = 0;
        puVar7 = (undefined1 *)((int)&param_1 + 1);
        do {
          *(undefined1 *)((int)&local_20 + iVar2) = *puVar7;
          iVar2 = iVar2 + 1;
          puVar7 = puVar7 + -1;
        } while (iVar2 < 2);
        local_24 = (undefined4 *)0x0;
        *(undefined4 *)((int)this + 0x1ac) = 0;
        *(uint *)((int)this + 0x15c) = (uint)local_20 & 0xffff;
        param_1 = (char *)0x0;
        if (*(int *)((int)this + 0x158) != 0) {
          do {
            puVar3 = operator_new(0x464);
            local_4 = 0;
            if (puVar3 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
              local_20 = puVar3;
            }
            else {
              local_20 = puVar3;
              thunk_FUN_1001bca0(puVar3);
              *puVar3 = &PTR_LAB_1005b68c;
              puVar3[0xd] = 0;
              puVar3[0xe] = 0;
              puVar9 = puVar3 + 0x16;
              for (iVar2 = 0x80; pcVar13 = mmioRead_exref, iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
              }
              puVar3[0xb] = 0;
              *(byte *)(puVar3 + 0xe) = *(byte *)(puVar3 + 0xe) & 0xf7;
              puVar3[0xf] = 0;
              puVar3[0x13] = 0;
              puVar3[0x12] = 0x10;
              *(undefined1 *)(puVar3 + 0xc) = 0;
              puVar3[0x14] = 0;
              puVar3[0x15] = 0;
              puVar3[0x117] = 0;
              puVar3[0x118] = 0;
              puVar3[0x116] = 0;
              puVar9 = puVar3;
            }
            local_4 = 0xffffffff;
            (*pcVar13)(*(undefined4 *)this,local_14,8);
            iVar2 = 0;
            local_20 = (undefined4 *)local_10;
            puVar7 = (undefined1 *)((int)&local_20 + 3);
            do {
              local_14[iVar2 + -4] = *puVar7;
              iVar2 = iVar2 + 1;
              puVar7 = puVar7 + -1;
            } while (iVar2 < 4);
            local_10 = local_18;
            pvVar4 = operator_new(local_18);
            if (((undefined *)puVar9[0xf] != (undefined *)0x0) &&
               ((*(byte *)(puVar9 + 0xd) & 4) != 0)) {
              FUN_1004249a((undefined *)puVar9[0xf]);
              puVar9[0xf] = 0;
            }
            puVar9[0xf] = pvVar4;
            puVar9[0xb] = pvVar4;
            if (pvVar4 != (void *)0x0) {
              thunk_FUN_1001ef80((int)puVar9);
            }
            puVar9[0x10] = 0;
            puVar9[0xd] = puVar9[0xd] | 4;
            puVar9[0x11] = local_10;
            mmioRead(*(HMMIO *)this,(HPSTR)puVar9[0xf],local_10);
            puVar3 = operator_new(0xc);
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = puVar9;
            }
            if (*(int *)((int)this + 0x1a0) == 0) {
              *(undefined4 **)((int)this + 0x19c) = puVar3;
            }
            else {
              *(undefined4 **)(*(int *)((int)this + 0x1a0) + 4) = puVar3;
              *puVar3 = *(undefined4 *)((int)this + 0x1a0);
            }
            *(undefined4 **)((int)this + 0x1a0) = puVar3;
            *(int *)((int)this + 0x1a8) = *(int *)((int)this + 0x1a8) + 1;
            thunk_FUN_1001e8e0((int)puVar9);
            thunk_FUN_1001ef80((int)puVar9);
            if ((local_24 != (undefined4 *)0x0) && ((uint)local_24[0x15] < (uint)puVar9[0x15])) {
              *(char **)((int)this + 0x1ac) = param_1;
            }
            param_1 = param_1 + 1;
            pcVar13 = mmioRead_exref;
            local_24 = puVar9;
          } while (param_1 < *(char **)((int)this + 0x158));
        }
        mmioClose(*(HMMIO *)this,0);
        DAT_100b4a08 = DAT_100b4a08 + -1;
        *(undefined4 *)this = 0;
        iVar2 = 0;
      }
      else {
        thunk_FUN_1001d4a0(this);
        iVar2 = 0x12;
      }
    }
  }
  ExceptionList = local_c;
  return iVar2;
}

