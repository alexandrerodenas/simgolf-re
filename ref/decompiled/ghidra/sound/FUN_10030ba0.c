/* Ghidra decompiled: sound.dll */
/* Function: FUN_10030ba0 @ 0x10030BA0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10030ba0(void *this,double *param_1,uint param_2,uint param_3,uint *param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  double *pdVar10;
  bool bVar11;
  
  if (DAT_100b49f4 == 0) {
    return 0x13;
  }
  bVar11 = 0xb < param_3;
  if ((*(byte *)((int)this + 0x58) & 8) != 0) {
    puVar9 = *(undefined **)((int)this + 0x5c);
    if (puVar9 != (undefined *)0x0) {
      puVar1 = *(undefined4 **)(puVar9 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        *(undefined4 *)((int)this + 0x60) = 0;
        *(undefined4 *)((int)this + 0x5c) = 0;
      }
      else {
        *puVar1 = 0;
        *(undefined4 **)((int)this + 0x5c) = puVar1;
      }
      puVar2 = *(undefined **)(puVar9 + 8);
      FUN_1004249a(puVar9);
      *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -1;
      while (puVar2 != (undefined *)0x0) {
        if (*(HMMIO *)(puVar2 + 0x44) != (HMMIO)0x0) {
          mmioClose(*(HMMIO *)(puVar2 + 0x44),0);
          for (piVar3 = DAT_100b49c8; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
            if ((undefined *)piVar3[2] == puVar2) {
              if (piVar3 != (int *)0x0) {
                if (*piVar3 == 0) {
                  DAT_100b49c8 = (int *)piVar3[1];
                }
                else {
                  *(int *)(*piVar3 + 4) = piVar3[1];
                }
                _DAT_100b49d0 = (int *)piVar3[1];
                if (_DAT_100b49d0 == (int *)0x0) {
                  _DAT_100b49cc = *piVar3;
                  _DAT_100b49d0 = (int *)0x0;
                }
                else {
                  *_DAT_100b49d0 = *piVar3;
                }
                FUN_1004249a((undefined *)piVar3);
                DAT_100b49d4 = DAT_100b49d4 + -1;
              }
              break;
            }
          }
        }
        DAT_100b4a08 = DAT_100b4a08 + -1;
        if (puVar2 != (undefined *)0x0) {
          thunk_FUN_10037df0();
          FUN_1004249a(puVar2);
        }
        puVar9 = *(undefined **)((int)this + 0x5c);
        if (puVar9 == (undefined *)0x0) break;
        puVar1 = *(undefined4 **)(puVar9 + 4);
        if (puVar1 == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x60) = 0;
          *(undefined4 *)((int)this + 0x5c) = 0;
        }
        else {
          *puVar1 = 0;
          *(undefined4 **)((int)this + 0x5c) = puVar1;
        }
        puVar2 = *(undefined **)(puVar9 + 8);
        FUN_1004249a(puVar9);
        *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -1;
      }
    }
    (**(code **)(*(int *)this + 0x80))();
  }
  iVar8 = *(int *)((int)this + 0x5c);
  *(int *)((int)this + 100) = iVar8;
  if ((iVar8 == 0) || (puVar9 = *(undefined **)(iVar8 + 8), puVar9 == (undefined *)0x0)) {
    *param_4 = 0;
    if (bVar11) {
      for (iVar8 = (param_2 & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)param_1 = 0;
        param_1 = (double *)((int)param_1 + 4);
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)param_1 = 0;
        param_1 = (double *)((int)param_1 + 1);
      }
    }
    if ((*(uint *)((int)this + 0x58) & 0x20) != 0) {
      *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & 0xfffffffe;
    }
    return 0x26;
  }
  param_3 = *(uint *)(puVar9 + 0x1c);
  if (bVar11) {
    uVar7 = thunk_FUN_100184a0(param_1,(int *)&param_3,param_2,(int)puVar9,0);
  }
  else {
    uVar7 = thunk_FUN_100188d0(param_1,(int *)&param_3,param_2,(int)puVar9,0);
  }
  *param_4 = uVar7;
  puVar4 = *(uint **)(puVar9 + 0xcc);
  puVar6 = puVar4;
  if (puVar4 != (uint *)0x0) {
    do {
      param_4 = puVar6;
      puVar2 = *(undefined **)((int)this + 0x5c);
      if (puVar2 != (undefined *)0x0) {
        puVar1 = *(undefined4 **)(puVar2 + 4);
        if (puVar1 == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x60) = 0;
          *(undefined4 *)((int)this + 0x5c) = 0;
        }
        else {
          *puVar1 = 0;
          *(undefined4 **)((int)this + 0x5c) = puVar1;
        }
        puVar5 = *(undefined **)(puVar2 + 8);
        FUN_1004249a(puVar2);
        *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -1;
        if (puVar5 != (undefined *)0x0) {
          mmioClose(*(HMMIO *)(puVar5 + 0x44),0);
          DAT_100b4a08 = DAT_100b4a08 + -1;
          thunk_FUN_10037df0();
          FUN_1004249a(puVar5);
        }
      }
      puVar6 = (uint *)((int)param_4 + -1);
    } while ((uint *)((int)param_4 + -1) != (uint *)0x0);
    param_4 = (uint *)0x0;
  }
  if (puVar4 == (uint *)0x0) {
LAB_10030e0e:
    if (puVar9 != (undefined *)0x0) {
      *(uint *)(puVar9 + 0x1c) = param_3;
      if ((*(uint *)(puVar9 + 0x20) <= param_3) && ((puVar9[0x9c] & 1) == 0)) {
        *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & 0xffffffef | 4;
        (**(code **)(*(int *)this + 0x20))();
        puVar2 = *(undefined **)((int)this + 0x5c);
        if (puVar2 != (undefined *)0x0) {
          puVar1 = *(undefined4 **)(puVar2 + 4);
          if (puVar1 == (undefined4 *)0x0) {
            *(undefined4 *)((int)this + 0x60) = 0;
            *(undefined4 *)((int)this + 0x5c) = 0;
          }
          else {
            *puVar1 = 0;
            *(undefined4 **)((int)this + 0x5c) = puVar1;
          }
          FUN_1004249a(puVar2);
          *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -1;
        }
        mmioClose(*(HMMIO *)(puVar9 + 0x44),0);
        DAT_100b4a08 = DAT_100b4a08 + -1;
        thunk_FUN_10037df0();
        FUN_1004249a(puVar9);
      }
      goto LAB_10030e9d;
    }
  }
  else {
    iVar8 = *(int *)((int)this + 0x5c);
    *(int *)((int)this + 100) = iVar8;
    if (iVar8 != 0) {
      puVar9 = *(undefined **)(iVar8 + 8);
      goto LAB_10030e0e;
    }
  }
  if ((*(uint *)((int)this + 0x58) & 0x20) != 0) {
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & 0xfffffffe;
  }
LAB_10030e9d:
  if ((uVar7 != param_2) && (bVar11)) {
    pdVar10 = param_1 + uVar7;
    for (iVar8 = (param_2 - uVar7 & 0xfffffff) << 2; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pdVar10 = 0;
      pdVar10 = (double *)((int)pdVar10 + 4);
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)pdVar10 = 0;
      pdVar10 = (double *)((int)pdVar10 + 1);
    }
  }
  return 0;
}

