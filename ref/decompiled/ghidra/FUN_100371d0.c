/* Ghidra decompiled: sound.dll */
/* Function: FUN_100371d0 @ 0x100371D0 */
/* Body size: 1083 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_100371d0(void *this,void *param_1,double *param_2,uint param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  undefined8 uVar8;
  longlong lVar9;
  uint local_20 [4];
  uint uStack_10;
  undefined4 uStack_c;
  
  local_20[0] = *(uint *)((int)param_1 + 0x1c);
  local_20[2] = 0;
  local_20[3] = (uint)(0xb < param_4);
  if ((*(byte *)((int)param_1 + 0x9c) & 4) == 0) {
    uVar5 = *(int *)((int)param_1 + 0xc0) + *(int *)((int)this + 0x230);
    *(uint *)((int)param_1 + 0xc0) = uVar5;
    if (uVar5 < *(uint *)((int)param_1 + 0xc4)) {
      *param_5 = param_3;
      if (local_20[3] == 0) {
        return 0;
      }
      for (iVar4 = (param_3 & 0xfffffff) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)param_2 = 0;
        param_2 = (double *)((int)param_2 + 4);
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)param_2 = 0;
        param_2 = (double *)((int)param_2 + 1);
      }
      return 0;
    }
    if (local_20[3] == 0) {
      if (*(short *)((int)this + 0x182) == 2) {
        uVar8 = thunk_FUN_1001a910(param_2,local_20,param_3,this,1);
        *param_5 = (uint)uVar8;
      }
      else if (*(short *)((int)this + 0x18e) == 8) {
        uVar5 = thunk_FUN_10019ec0(param_2,local_20,param_3,(int)this,1);
        *param_5 = uVar5;
      }
      else {
        local_20[2] = thunk_FUN_10019770(param_2,local_20,param_3,(int)param_1,0);
      }
    }
    else if (*(short *)((int)this + 0x182) == 2) {
      uVar8 = thunk_FUN_1001a6c0(param_2,local_20,param_3,this,1);
      *param_5 = (uint)uVar8;
    }
    else if (*(short *)((int)this + 0x18e) == 8) {
      uVar5 = thunk_FUN_10019ec0(param_2,local_20,param_3,(int)this,1);
      *param_5 = uVar5;
    }
    else {
      local_20[2] = thunk_FUN_10019b20(param_2,local_20,param_3,(int)param_1,0);
    }
    *param_5 = local_20[2];
    *(uint *)((int)param_1 + 0x1c) = local_20[0];
  }
  bVar1 = *(byte *)((int)param_1 + 0x9c);
  if ((bVar1 & 8) != 0) {
    if ((bVar1 & 0x10) == 0) {
      dVar2 = *(double *)((int)param_1 + 0x58) - *(double *)((int)param_1 + 0xf0);
      *(double *)((int)param_1 + 0x58) = dVar2;
      if ((bVar1 & 0x20) == 0) {
        if (_DAT_1005b498 < dVar2) {
          if (dVar2 < *(double *)((int)param_1 + 0xf0)) {
            *(double *)((int)param_1 + 0xf0) = dVar2;
            *(byte *)((int)param_1 + 0x9c) = bVar1 | 0x10;
          }
        }
        else {
          *(undefined4 *)((int)param_1 + 0x88) = 0;
          *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)param_1 + 0x18);
          *(byte *)((int)param_1 + 0x9c) = bVar1 & 0xe1;
          *(undefined4 *)((int)param_1 + 0xf0) = *(undefined4 *)((int)param_1 + 0xf8);
          *(undefined4 *)((int)param_1 + 0x8c) = 0;
          *(undefined4 *)((int)param_1 + 0xc0) = 0;
          *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)((int)param_1 + 0xfc);
          *(byte *)((int)param_1 + 0x9c) = bVar1 & 0xe1 | 4;
          *(undefined8 *)((int)param_1 + 0x58) = *(undefined8 *)((int)this + 0x1e0);
          uVar5 = *(uint *)((int)this + 0x1c0);
          if (DAT_100b4a20 != (int *)0x0) {
            uVar3 = (**(code **)(*DAT_100b4a20 + 0x40))();
            uStack_c = 0;
            uStack_10 = uVar5;
            if ((float10)uVar5 <= (float10)uVar3) {
              fVar7 = (float10)*(double *)((int)param_1 + 0x58);
              *(undefined4 *)((int)param_1 + 0xec) = *(undefined4 *)((int)param_1 + 0x50);
            }
            else {
              lVar9 = __ftol();
              fVar7 = (float10)*(double *)((int)param_1 + 0x58) / extraout_ST0_00;
              *(int *)((int)param_1 + 0xec) = (int)lVar9;
            }
            *(double *)((int)param_1 + 0xf0) = (double)fVar7;
            *(double *)((int)param_1 + 0xf8) = (double)fVar7;
          }
          *(undefined4 *)((int)param_1 + 0xe4) = 0;
          *(byte *)((int)param_1 + 0x9c) = *(byte *)((int)param_1 + 0x9c) & 0xf7;
        }
      }
      else if (*(double *)((int)param_1 + 0x60) <= dVar2) {
        *(byte *)((int)param_1 + 0x9c) = bVar1 & 0xd7;
      }
      thunk_FUN_10037f30(param_1,*(int *)((int)this + 0x224));
    }
    else {
      *(undefined4 *)((int)param_1 + 0x88) = 0;
      *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)param_1 + 0x18);
      *(undefined4 *)((int)param_1 + 0x8c) = 0;
      *(undefined4 *)((int)param_1 + 0xc0) = 0;
      *(byte *)((int)param_1 + 0x9c) = bVar1 & 0xe1;
      *(undefined4 *)((int)param_1 + 0xf0) = *(undefined4 *)((int)param_1 + 0xf8);
      *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)((int)param_1 + 0xfc);
      *(byte *)((int)param_1 + 0x9c) = bVar1 & 0xe1 | 4;
      *(undefined8 *)((int)param_1 + 0x58) = *(undefined8 *)((int)this + 0x1e0);
      thunk_FUN_10037f30(param_1,*(int *)((int)this + 0x224));
      uVar5 = *(uint *)((int)this + 0x1c0);
      if (DAT_100b4a20 != (int *)0x0) {
        uVar3 = (**(code **)(*DAT_100b4a20 + 0x40))();
        local_20[1] = 0;
        if ((float10)uVar5 <= (float10)uVar3) {
          fVar7 = (float10)*(double *)((int)param_1 + 0x58);
          *(undefined4 *)((int)param_1 + 0xec) = *(undefined4 *)((int)param_1 + 0x50);
        }
        else {
          local_20[0] = uVar5;
          lVar9 = __ftol();
          fVar7 = (float10)*(double *)((int)param_1 + 0x58) / extraout_ST0;
          *(int *)((int)param_1 + 0xec) = (int)lVar9;
        }
        *(double *)((int)param_1 + 0xf0) = (double)fVar7;
        *(double *)((int)param_1 + 0xf8) = (double)fVar7;
      }
      *(undefined4 *)((int)param_1 + 0xe4) = 0;
      *(byte *)((int)param_1 + 0x94) = *(byte *)((int)param_1 + 0x94) & 0xfe;
    }
  }
  if (local_20[2] != param_3) {
    if ((local_20[3] != 0) && ((*(byte *)((int)this + 0x5c) & 4) == 0)) {
      pdVar6 = param_2 + local_20[2] * 2;
      for (iVar4 = (param_3 - local_20[2] & 0xfffffff) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pdVar6 = 0;
        pdVar6 = (double *)((int)pdVar6 + 4);
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)pdVar6 = 0;
        pdVar6 = (double *)((int)pdVar6 + 1);
      }
    }
    *(undefined4 *)((int)param_1 + 0x88) = 0;
    *(undefined4 *)((int)param_1 + 0x8c) = 0;
    *(undefined4 *)((int)param_1 + 0xc0) = 0;
    bVar1 = *(byte *)((int)param_1 + 0x9c);
    *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)param_1 + 0x18);
    *(byte *)((int)param_1 + 0x9c) = bVar1 & 0xf1;
    *(undefined4 *)((int)param_1 + 0xf0) = *(undefined4 *)((int)param_1 + 0xf8);
    *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)((int)param_1 + 0xfc);
    *(byte *)((int)param_1 + 0x9c) = bVar1 & 0xf1 | 4;
  }
  return 0;
}

