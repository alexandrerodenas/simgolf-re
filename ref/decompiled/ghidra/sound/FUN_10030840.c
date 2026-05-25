/* Ghidra decompiled: sound.dll */
/* Function: FUN_10030840 @ 0x10030840 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10030840(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  HMMIO hmmio;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  HMMIO pHVar10;
  HPSTR pcVar11;
  _MMIOINFO *p_Var12;
  char *pcVar13;
  float *pfVar14;
  bool bVar15;
  longlong lVar16;
  _MMIOINFO local_3fc;
  uint local_3b4 [54];
  float local_2dc [180];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005915e;
  local_c = ExceptionList;
  if (param_1 == 0) {
    uVar3 = 10;
  }
  else if (*(int *)((int)this + 0xd4) == 0) {
    uVar3 = 0x13;
  }
  else {
    p_Var12 = &local_3fc;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      p_Var12->dwFlags = 0;
      p_Var12 = (_MMIOINFO *)&p_Var12->fccIOProc;
    }
    local_3fc.fccIOProc = 0x204d454d;
    local_3fc.cchBuffer = 0x168;
    local_3fc.adwInfo[0] = 100;
    ExceptionList = &local_c;
    hmmio = mmioOpenA((LPSTR)0x0,&local_3fc,0x1000);
    if (hmmio == (HMMIO)0x0) {
      uVar3 = 8;
    }
    else {
      DAT_100b4a08 = DAT_100b4a08 + 1;
      mmioGetInfo(hmmio,&local_3fc,0);
      pcVar13 = *(char **)(param_1 + 0x18);
      uVar4 = 0;
      puVar9 = local_3b4;
      pHVar10 = hmmio;
      do {
        uVar8 = uVar4 & 0x80000007;
        bVar15 = uVar8 == 0;
        if ((int)uVar8 < 0) {
          bVar15 = (uVar8 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar15) {
          pHVar10 = (HMMIO)(int)*pcVar13;
          pcVar13 = pcVar13 + 1;
        }
        *puVar9 = (uint)((0x80 >> ((byte)uVar4 & 7) & (uint)pHVar10) != 0);
        uVar4 = uVar4 + 1;
        puVar9 = puVar9 + 1;
      } while ((int)uVar4 < 0x36);
      FUN_1003a980((int)local_3b4,(int)local_2dc,*(int **)((int)this + 0xd4));
      pfVar14 = local_2dc;
      iVar7 = 0xb4;
      pcVar11 = local_3fc.pchBuffer;
      do {
        if ((float)_DAT_1005c518 <= *pfVar14 * _DAT_1005c524) {
          if (*pfVar14 * _DAT_1005c524 <= (float)_DAT_1005c508) {
            lVar16 = __ftol();
            *(short *)pcVar11 = (short)lVar16;
          }
          else {
            pcVar11[0] = -1;
            pcVar11[1] = '\x7f';
          }
        }
        else {
          pcVar11[0] = '\0';
          pcVar11[1] = -0x80;
        }
        pfVar14 = pfVar14 + 1;
        pcVar11 = pcVar11 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      local_3fc.pchNext = local_3fc.pchBuffer;
      local_3fc.pchEndRead = local_3fc.pchBuffer + 0x168;
      mmioSetInfo(hmmio,&local_3fc,0);
      pvVar5 = operator_new(0x110);
      local_4 = 0;
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (void *)thunk_FUN_10037c40((int)pvVar5);
      }
      local_4 = 0xffffffff;
      thunk_FUN_10037e10(pvVar5,&local_3fc.dwFlags,(undefined4 *)((int)this + 0xbc));
      iVar7 = *(int *)((int)this + 0x60);
      *(int *)((int)this + 100) = iVar7;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 8);
      }
      puVar6 = operator_new(0xc);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = pvVar5;
      }
      if (*(int *)((int)this + 0x60) == 0) {
        *(undefined4 **)((int)this + 0x5c) = puVar6;
      }
      else {
        *(undefined4 **)(*(int *)((int)this + 0x60) + 4) = puVar6;
        *puVar6 = *(undefined4 *)((int)this + 0x60);
      }
      *(undefined4 **)((int)this + 0x60) = puVar6;
      *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 1;
      iVar1 = *(int *)(param_1 + 0x20);
      iVar2 = *(int *)(param_1 + 0x18);
      *(undefined4 *)((int)pvVar5 + 0xd4) = *(undefined4 *)((int)pvVar5 + 0x20);
      *(uint *)((int)pvVar5 + 0x90) = (uint)(iVar1 - iVar2) / (uint)*(ushort *)((int)pvVar5 + 0xac);
      *(undefined4 *)((int)pvVar5 + 0xd8) = *(undefined4 *)((int)pvVar5 + 0x18);
      if (iVar7 != 0) {
        *(uint *)(iVar7 + 0x98) = *(uint *)(iVar7 + 0x98) | 1;
        *(byte *)(iVar7 + 0x9c) = *(byte *)(iVar7 + 0x9c) | 1;
        *(void **)(iVar7 + 0xb4) = pvVar5;
        *(undefined4 *)(iVar7 + 0xcc) = 0;
      }
      *(int *)((int)this + 0xe0) = *(int *)((int)this + 0xe0) + 1;
      uVar3 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

