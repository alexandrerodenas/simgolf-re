/* Ghidra decompiled: sound.dll */
/* Function: FUN_10036280 @ 0x10036280 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10036280(void *this,double *param_1,uint param_2,uint param_3,uint *param_4)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  double *pdVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar3 = param_2;
  if (2000 < param_2) {
    return 0x22;
  }
  bVar9 = 0xb < param_3;
  uVar7 = *(int *)((int)this + 0x228) + *(int *)((int)this + 0x230);
  *(uint *)((int)this + 0x228) = uVar7;
  if ((*(uint *)((int)this + 0x22c) == 0) || (*(uint *)((int)this + 0x22c) <= uVar7)) {
    param_2 = *(uint *)(*(int *)((int)this + 8) + 0x1c);
    if (bVar9) {
      if (*(short *)((int)this + 0x182) == 2) {
        uVar10 = thunk_FUN_1001a6c0(param_1,&param_2,uVar3,this,1);
        uVar7 = (uint)uVar10;
      }
      else if (*(short *)((int)this + 0x18e) == 8) {
        uVar7 = thunk_FUN_10019ec0(param_1,&param_2,uVar3,(int)this,1);
      }
      else {
        uVar7 = thunk_FUN_10019b20(param_1,&param_2,uVar3,(int)this,1);
      }
    }
    else if (*(short *)((int)this + 0x182) == 2) {
      uVar10 = thunk_FUN_1001a910(param_1,&param_2,uVar3,this,1);
      uVar7 = (uint)uVar10;
    }
    else if (*(short *)((int)this + 0x18e) == 8) {
      uVar7 = thunk_FUN_1001a2c0(param_1,&param_2,uVar3,(int)this,1);
    }
    else {
      uVar7 = thunk_FUN_10019770(param_1,&param_2,uVar3,(int)this,1);
    }
    puVar5 = param_4;
    *param_4 = uVar7;
    uVar7 = *(uint *)((int)this + 0x58);
    if (((uVar7 & 8) != 0) || ((*(byte *)((int)this + 0x5c) & 0x10) != 0)) {
      uVar2 = *(uint *)((int)this + 0x5c);
      if ((uVar2 & 2) == 0) {
        dVar4 = *(double *)((int)this + 0x1e0) - *(double *)((int)this + 0x1c8);
        *(double *)((int)this + 0x1e0) = dVar4;
        if ((uVar2 & 8) == 0) {
          if ((uVar2 & 0x10) == 0) {
            if (dVar4 == _DAT_1005b498) {
              *(uint *)((int)this + 0x58) = uVar7 | 0x10;
            }
            if (dVar4 <= *(double *)((int)this + 0x1c8)) {
              *(double *)((int)this + 0x1c8) = dVar4;
              *(uint *)((int)this + 0x5c) = uVar2 | 2;
            }
          }
          else {
            dVar1 = *(double *)((int)this + 0x1d0);
            if (*(double *)((int)this + 0x1c8) <= _DAT_1005b498) {
              if (dVar1 <= dVar4) {
                *(uint *)((int)this + 0x5c) = uVar2 & 0xffffffef;
              }
            }
            else if (dVar1 > dVar4 || dVar4 == dVar1) {
              *(uint *)((int)this + 0x5c) = uVar2 & 0xffffffef;
            }
          }
        }
        else if (*(double *)((int)this + 0x210) <= dVar4) {
          *(uint *)((int)this + 0x58) = uVar7 & 0xfffffff7;
          *(uint *)((int)this + 0x5c) = uVar2 & 0xfffffff7;
        }
        thunk_FUN_10035340(this,*(int *)((int)this + 0x224));
      }
      else {
        *(uint *)((int)this + 0x58) = uVar7 | 0x10;
      }
    }
    if (uVar3 < *puVar5) {
      return 10;
    }
    *(uint *)(*(int *)((int)this + 8) + 0x1c) = param_2;
    uVar7 = *puVar5;
    if (uVar7 != uVar3) {
      if (bVar9) {
        pdVar8 = param_1 + uVar7 * 2;
        for (iVar6 = (uVar3 - uVar7 & 0xfffffff) << 2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pdVar8 = 0;
          pdVar8 = (double *)((int)pdVar8 + 4);
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)pdVar8 = 0;
          pdVar8 = (double *)((int)pdVar8 + 1);
        }
      }
      *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 0x10;
      return 0;
    }
    *puVar5 = uVar3;
    uVar3 = *(uint *)((int)this + 0x58);
    if (((((uVar3 & 2) != 0) && ((uVar3 & 0x21) == 0)) && ((uVar3 & 0x400) == 0)) &&
       (*(uint *)(*(int *)((int)this + 8) + 0x14) >> 2 <
        (*(int *)(*(int *)((int)this + 8) + 0x1c) - *(int *)((int)this + 0x1378) &
        *(uint *)((int)this + 0x1374)))) {
      *(uint *)((int)this + 0x58) = uVar3 | 0x400;
      *(int *)((int)this + 0x1370) = *(int *)((int)this + 0x1370) + 1;
      if ((DAT_100b4a20 != 0) && ((*(uint *)(DAT_100b4a20 + 0x1a4) >> 5 & 1) != 0)) {
        PostMessageA(*(HWND *)((int)this + 0x17c),0x7eb,(WPARAM)this,0);
        return 0;
      }
      thunk_FUN_1002aa90(&DAT_100b5038,0x7eb,(WPARAM)this,0);
    }
  }
  else {
    *param_4 = param_2;
    if (bVar9) {
      for (iVar6 = (param_2 & 0xfffffff) << 2; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)param_1 = 0;
        param_1 = (double *)((int)param_1 + 4);
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)param_1 = 0;
        param_1 = (double *)((int)param_1 + 1);
      }
      return 0;
    }
  }
  return 0;
}

