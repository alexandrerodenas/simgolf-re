/* Ghidra decompiled: sound.dll */
/* Function: FUN_10007df0 @ 0x10007DF0 */


undefined4 __thiscall
FUN_10007df0(void *this,void *param_1,double *param_2,short *param_3,short *param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  double *pdVar9;
  int local_14;
  uint local_c;
  uint local_8;
  
  uVar7 = 0;
  local_14 = 0;
  iVar3 = thunk_FUN_100101a0(param_1,param_4,param_3,&param_4,&local_c,&param_3,&local_8);
  if (iVar3 == 0) {
    if (*(ushort *)((int)param_1 + 0xb4) != 0) {
      uVar7 = local_c / *(ushort *)((int)param_1 + 0xb4);
    }
    iVar8 = uVar7 * 2;
    iVar3 = iVar8;
    pdVar9 = param_2;
    psVar6 = param_4;
    do {
      iVar1 = (int)ROUND(*pdVar9);
      if (iVar1 < 0x8000) {
        if (iVar1 < -0x8000) {
          sVar2 = -0x8000;
        }
        else {
          sVar2 = (short)iVar1;
        }
      }
      else {
        sVar2 = 0x7fff;
      }
      *psVar6 = sVar2;
      pdVar9 = pdVar9 + 1;
      psVar6 = psVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) {
      mmioWrite(*(HMMIO *)((int)this + 0x30),(char *)param_4,uVar7 * 4);
    }
    psVar6 = *(short **)((int)this + 0x38);
    if ((psVar6 != (short *)0x0) && (local_14 = 0, psVar5 = param_4, iVar3 = iVar8, 0 < iVar8)) {
      do {
        sVar2 = *psVar6;
        psVar6 = psVar6 + 1;
        *psVar5 = *psVar5 + sVar2;
        iVar3 = iVar3 + -1;
        psVar5 = psVar5 + 1;
        local_14 = iVar8;
      } while (iVar3 != 0);
    }
    if (param_3 != (short *)0x0) {
      if (*(ushort *)((int)param_1 + 0xb4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = local_8 / *(ushort *)((int)param_1 + 0xb4);
      }
      iVar8 = uVar4 * 2;
      pdVar9 = param_2 + uVar7 * 2;
      iVar3 = iVar8;
      psVar6 = param_3;
      do {
        iVar1 = (int)ROUND(*pdVar9);
        if (iVar1 < 0x8000) {
          if (iVar1 < -0x8000) {
            sVar2 = -0x8000;
          }
          else {
            sVar2 = (short)iVar1;
          }
        }
        else {
          sVar2 = 0x7fff;
        }
        *psVar6 = sVar2;
        pdVar9 = pdVar9 + 1;
        psVar6 = psVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) {
        mmioWrite(*(HMMIO *)((int)this + 0x30),(char *)param_3,uVar4 * 4);
      }
      if ((*(int *)((int)this + 0x38) != 0) &&
         (psVar6 = (short *)(*(int *)((int)this + 0x38) + local_14 * 2), psVar5 = param_3, 0 < iVar8
         )) {
        do {
          sVar2 = *psVar6;
          psVar6 = psVar6 + 1;
          *psVar5 = *psVar5 + sVar2;
          iVar8 = iVar8 + -1;
          psVar5 = psVar5 + 1;
        } while (iVar8 != 0);
      }
    }
    thunk_FUN_10010370(param_1,param_4,local_c,param_3,local_8);
    if (*(undefined **)((int)this + 0x38) != (undefined *)0x0) {
      FUN_1004249a(*(undefined **)((int)this + 0x38));
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    return 0;
  }
  return 0x1a;
}

