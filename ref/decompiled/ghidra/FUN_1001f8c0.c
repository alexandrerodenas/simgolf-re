/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001f8c0 @ 0x1001F8C0 */
/* Body size: 1338 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __thiscall FUN_1001f8c0(void *this,uint param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_EDX;
  uint extraout_EDX;
  uint uVar8;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  float10 fVar9;
  float10 extraout_ST0;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  int *piStack_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  uVar10 = CONCAT44(in_EDX,param_1);
  fVar9 = (float10)_DAT_1005b498;
  local_18 = 0;
  local_1c = 0;
  local_14 = 0;
  bVar2 = false;
  if ((*(byte *)((int)this + 0x58) & 2) != 0) {
    uVar8 = *(uint *)((int)this + 0x5c);
    uVar3 = (**(code **)(*(int *)this + 0x134))();
    uStack_c = 0;
    bVar2 = (double)uVar8 * (double)uVar3 < *(double *)((int)this + 0x720);
    uStack_10 = uVar8;
    uVar10 = __ftol();
    fVar9 = extraout_ST0;
  }
  if (*(double *)((int)this + 0x728) == _DAT_1005b498) {
    return CONCAT44((int)(uVar10 >> 0x20),0x13);
  }
  if ((*(uint *)((int)this + 0x214) & 4) != 0) {
    *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xfffffffb;
  }
  if ((*(byte *)((int)this + 0x58) & 2) == 0) {
    uStack_c = 0;
    fVar9 = (float10)(uVar10 & 0xffffffff) + (float10)*(double *)((int)this + 0x720);
    uStack_10 = (uint)uVar10;
  }
  *(double *)((int)this + 0x720) = (double)fVar9;
  lVar11 = __ftol();
  *(int *)((int)this + 0x71c) = (int)lVar11;
  uVar8 = (uint)((ulonglong)lVar11 >> 0x20);
LAB_1001f9ac:
  uVar3 = local_18;
  if (!bVar2) {
    local_18 = local_18 + 1;
    iVar4 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&piStack_20,uVar3);
    uVar8 = extraout_EDX;
    if (iVar4 == 0x24) goto LAB_1001fab0;
    bVar1 = *(byte *)(piStack_20 + 0xe);
    if ((((bVar1 & 2) == 0) || (uVar8 = extraout_EDX, (bVar1 & 4) != 0)) &&
       (uVar8 = extraout_EDX, (bVar1 & 8) != 0)) {
      bVar1 = *(byte *)(piStack_20 + 0xd);
      uVar3 = 0;
      uVar8 = extraout_EDX;
      piVar7 = piStack_20;
      do {
        uVar5 = uVar3;
        if ((((bVar1 & 2) != 0) || (uVar3 = uVar5 + 1, uVar8 = uVar5, 9 < (int)uVar5)) ||
           ((*(byte *)((int)this + 0xac) & 8) != 0)) break;
        local_14 = 1;
        if ((byte *)piVar7[0xb] != (byte *)0x0) {
          uVar5 = thunk_FUN_1001e710((byte *)piVar7[0xb],&local_1c);
          uVar8 = piStack_20[0x14] + piStack_20[0x13] + uVar5;
          uStack_10 = uVar8;
          if (*(double *)((int)this + 0x720) <= (double)(int)uVar8 * *(double *)((int)this + 0x728))
          break;
          thunk_FUN_1001e9f0(piStack_20,local_1c);
          local_1c = 0;
          iVar4 = thunk_FUN_10020870(this,piStack_20,&local_1c);
          uVar8 = extraout_EDX_00;
          if (iVar4 == 0x29) break;
          thunk_FUN_1001e9f0(piStack_20,local_1c);
          piStack_20[0x13] = piStack_20[0x13] + uVar5;
          piVar7 = piStack_20;
          uVar5 = extraout_EDX_01;
        }
        bVar1 = *(byte *)(piVar7 + 0xd);
        uVar8 = uVar5;
      } while( true );
    }
    goto LAB_1001f9ac;
  }
LAB_1001fab0:
  if (((local_14 == 0) && ((*(byte *)((int)this + 0xac) & 0xc) == 0)) &&
     (uVar3 = *(uint *)((int)this + 0x214), (uVar3 & 0x400) == 0)) {
    if ((uVar3 & 0x200) == 0) {
      if ((uVar3 & 0x800) != 0) {
        (**(code **)(*(int *)this + 0x20))();
        piVar7 = DAT_100b5000;
        do {
          if (piVar7 == (int *)0x0) {
LAB_1001fc10:
            uVar8 = 0;
            *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xfffffffd;
            iVar4 = (**(code **)(*(int *)this + 0xb4))();
            if (iVar4 != 0) {
              do {
                thunk_FUN_100205f0(this,uVar8);
                uVar8 = uVar8 + 1;
                uVar3 = (**(code **)(*(int *)this + 0xb4))();
              } while (uVar8 < uVar3);
            }
            *(uint *)((int)this + 0xac) = *(uint *)((int)this + 0xac) | 0x400;
            *(undefined4 *)((int)this + 0x720) = 0;
            *(undefined4 *)((int)this + 0x71c) = 0;
            *(undefined4 *)((int)this + 0x724) = 0;
            (**(code **)(*(int *)this + 0xb8))();
            return (ulonglong)extraout_EDX_03 << 0x20;
          }
          if ((void *)piVar7[2] == this) {
            if (piVar7 != (int *)0x0) {
              if (*piVar7 == 0) {
                DAT_100b5000 = (int *)piVar7[1];
              }
              else {
                *(int *)(*piVar7 + 4) = piVar7[1];
              }
              DAT_100b5008 = (int *)piVar7[1];
              if (DAT_100b5008 == (int *)0x0) {
                _DAT_100b5004 = *piVar7;
                DAT_100b5008 = (int *)0x0;
              }
              else {
                *DAT_100b5008 = *piVar7;
              }
              FUN_1004249a((undefined *)piVar7);
              DAT_100b500c = DAT_100b500c + -1;
            }
            goto LAB_1001fc10;
          }
          piVar7 = (int *)piVar7[1];
        } while( true );
      }
    }
    else {
      (**(code **)(*(int *)this + 0xb8))();
      uVar3 = 0;
      uVar12 = (**(code **)(*(int *)this + 0xb4))();
      uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
      if ((int)uVar12 != 0) {
        do {
          thunk_FUN_100205f0(this,uVar3);
          uVar3 = uVar3 + 1;
          uVar12 = (**(code **)(*(int *)this + 0xb4))();
          uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
        } while (uVar3 < (uint)uVar12);
      }
      iVar4 = 0;
      *(uint *)((int)this + 0xac) = *(uint *)((int)this + 0xac) | 0x400;
      *(undefined4 *)((int)this + 0x720) = 0;
      *(undefined4 *)((int)this + 0x71c) = 0;
      *(undefined4 *)((int)this + 0x724) = 0;
      if ((((*(byte *)((int)this + 0x214) & 0x20) != 0) && (*(int *)((int)this + 0x23c) != 0)) &&
         (0 < *(int *)((int)this + 0x240))) {
        do {
          iVar6 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&uStack_10,
                                     *(uint *)(*(int *)((int)this + 0x238) + iVar4 * 4));
          if ((iVar6 == 0) && (uStack_10 != 0)) {
            *(byte *)(uStack_10 + 0x38) = *(byte *)(uStack_10 + 0x38) | 4;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)this + 0x240));
        return (ulonglong)extraout_EDX_02 << 0x20;
      }
    }
  }
  else if ((*(uint *)((int)this + 0xac) & 8) != 0) {
    if ((*(uint *)((int)this + 0xac) & 0x200) != 0) {
      (**(code **)(*(int *)this + 0x20))();
      (**(code **)(*(int *)this + 0xb8))();
      piVar7 = DAT_100b5000;
      do {
        if (piVar7 == (int *)0x0) {
LAB_1001fd0b:
          *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xfffffffd;
          (**(code **)(*(int *)this + 0x14))();
          return (ulonglong)extraout_EDX_04 << 0x20;
        }
        if ((void *)piVar7[2] == this) {
          if (piVar7 != (int *)0x0) {
            if (*piVar7 == 0) {
              DAT_100b5000 = (int *)piVar7[1];
            }
            else {
              *(int *)(*piVar7 + 4) = piVar7[1];
            }
            DAT_100b5008 = (int *)piVar7[1];
            if (DAT_100b5008 == (int *)0x0) {
              _DAT_100b5004 = *piVar7;
              DAT_100b5008 = (int *)0x0;
            }
            else {
              *DAT_100b5008 = *piVar7;
            }
            FUN_1004249a((undefined *)piVar7);
            DAT_100b500c = DAT_100b500c + -1;
          }
          goto LAB_1001fd0b;
        }
        piVar7 = (int *)piVar7[1];
      } while( true );
    }
    (**(code **)(*(int *)this + 0xb8))();
    for (piVar7 = DAT_100b5000; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
      if ((void *)piVar7[2] == this) {
        if (piVar7 != (int *)0x0) {
          if (*piVar7 == 0) {
            DAT_100b5000 = (int *)piVar7[1];
          }
          else {
            *(int *)(*piVar7 + 4) = piVar7[1];
          }
          DAT_100b5008 = (int *)piVar7[1];
          if (DAT_100b5008 == (int *)0x0) {
            _DAT_100b5004 = *piVar7;
            DAT_100b5008 = (int *)0x0;
          }
          else {
            *DAT_100b5008 = *piVar7;
          }
          FUN_1004249a((undefined *)piVar7);
          DAT_100b500c = DAT_100b500c + -1;
        }
        break;
      }
    }
    uVar3 = 0;
    *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xfffffff5;
    uVar12 = (**(code **)(*(int *)this + 0xb4))();
    uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 != 0) {
      do {
        thunk_FUN_100205f0(this,uVar3);
        uVar3 = uVar3 + 1;
        uVar12 = (**(code **)(*(int *)this + 0xb4))();
        uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
      } while (uVar3 < (uint)uVar12);
    }
    *(uint *)((int)this + 0xac) = *(uint *)((int)this + 0xac) | 0x400;
    *(undefined4 *)((int)this + 0x720) = 0;
    *(undefined4 *)((int)this + 0x71c) = 0;
    *(undefined4 *)((int)this + 0x724) = 0;
  }
  return (ulonglong)uVar8 << 0x20;
}

