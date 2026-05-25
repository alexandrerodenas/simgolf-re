/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008070 @ 0x10008070 */


undefined4 __thiscall
FUN_10008070(void *this,void *param_1,void *param_2,double *param_3,uint param_4,char *param_5,
            char *param_6)

{
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  double *pdVar8;
  char *local_1c;
  uint local_18;
  char *local_14;
  uint local_10;
  char *local_c;
  uint local_8;
  
  uVar4 = param_4;
  iVar2 = thunk_FUN_100101a0(param_1,param_5,param_4,&local_c,&local_8,&param_5,&param_4);
  if (iVar2 != 0) {
    return 0x1a;
  }
  iVar2 = thunk_FUN_100101a0(param_2,param_6,uVar4,&local_1c,&local_18,&local_14,&local_10);
  if (iVar2 == 0) {
    pdVar8 = param_3;
    pcVar5 = local_c;
    if (*(ushort *)((int)param_1 + 0xb4) == 0) {
      pcVar3 = (char *)0x0;
      pcVar7 = pcVar3;
    }
    else {
      pcVar3 = (char *)(local_8 / *(ushort *)((int)param_1 + 0xb4));
      pcVar7 = pcVar3;
    }
    do {
      iVar2 = (int)ROUND(*pdVar8);
      if (iVar2 < 0x8000) {
        if (iVar2 < -0x8000) {
          uVar1 = 0x8000;
        }
        else {
          uVar1 = (undefined2)iVar2;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)pcVar5 = uVar1;
      pcVar3 = pcVar3 + -1;
      pdVar8 = pdVar8 + 2;
      pcVar5 = pcVar5 + 2;
    } while (pcVar3 != (char *)0x0);
    if (*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) {
      param_6 = pcVar7;
      mmioWrite(*(HMMIO *)((int)this + 0x30),local_c,(int)pcVar7 * 2);
    }
    if (*(ushort *)((int)param_2 + 0xb4) == 0) {
      param_6 = (char *)0x0;
    }
    else {
      param_6 = (char *)(local_18 / *(ushort *)((int)param_2 + 0xb4));
    }
    pdVar8 = param_3 + 1;
    pcVar5 = param_6;
    pcVar3 = local_1c;
    do {
      iVar2 = (int)ROUND(*pdVar8);
      if (iVar2 < 0x8000) {
        if (iVar2 < -0x8000) {
          uVar1 = 0x8000;
        }
        else {
          uVar1 = (undefined2)iVar2;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)pcVar3 = uVar1;
      pdVar8 = pdVar8 + 2;
      pcVar3 = pcVar3 + 2;
      pcVar5 = pcVar5 + -1;
    } while (pcVar5 != (char *)0x0);
    if (*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) {
      mmioWrite(*(HMMIO *)((int)this + 0x30),local_1c,(int)param_6 * 2);
    }
    if (param_5 != (char *)0x0) {
      if (*(ushort *)((int)param_1 + 0xb4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = param_4 / *(ushort *)((int)param_1 + 0xb4);
      }
      pdVar8 = param_3 + (int)pcVar7 * 2;
      uVar6 = uVar4;
      pcVar5 = param_5;
      do {
        iVar2 = (int)ROUND(*pdVar8);
        if (iVar2 < 0x8000) {
          if (iVar2 < -0x8000) {
            uVar1 = 0x8000;
          }
          else {
            uVar1 = (undefined2)iVar2;
          }
        }
        else {
          uVar1 = 0x7fff;
        }
        *(undefined2 *)pcVar5 = uVar1;
        pdVar8 = pdVar8 + 2;
        pcVar5 = pcVar5 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if (*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) {
        mmioWrite(*(HMMIO *)((int)this + 0x30),param_5,uVar4 * 2);
      }
    }
    pcVar5 = param_6;
    if (local_14 != (char *)0x0) {
      if (*(ushort *)((int)param_2 + 0xb4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = local_10 / *(ushort *)((int)param_2 + 0xb4);
      }
      param_6 = local_14;
      pdVar8 = param_3 + (int)pcVar5 * 2 + 1;
      uVar6 = uVar4;
      pcVar5 = local_14;
      do {
        iVar2 = (int)ROUND(*pdVar8);
        if (iVar2 < 0x8000) {
          if (iVar2 < -0x8000) {
            uVar1 = 0x8000;
          }
          else {
            uVar1 = (undefined2)iVar2;
          }
        }
        else {
          uVar1 = 0x7fff;
        }
        *(undefined2 *)pcVar5 = uVar1;
        pdVar8 = pdVar8 + 2;
        pcVar5 = pcVar5 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if (*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) {
        mmioWrite(*(HMMIO *)((int)this + 0x30),local_14,uVar4 * 2);
      }
    }
    thunk_FUN_10010370(param_1,local_c,local_8,param_5,param_4);
    thunk_FUN_10010370(param_2,local_1c,local_18,local_14,local_10);
    if (*(undefined **)((int)this + 0x38) != (undefined *)0x0) {
      FUN_1004249a(*(undefined **)((int)this + 0x38));
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    return 0;
  }
  thunk_FUN_10010370(param_1,local_c,local_8,param_5,param_4);
  return 0x1a;
}

