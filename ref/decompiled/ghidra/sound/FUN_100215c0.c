/* Ghidra decompiled: sound.dll */
/* Function: FUN_100215c0 @ 0x100215C0 */


undefined4 __thiscall FUN_100215c0(void *this,byte *param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *unaff_EBX;
  int *piVar4;
  int *piVar5;
  uint local_1c;
  int local_18;
  uint local_10;
  uint auStack_8 [2];
  
  uVar3 = param_2;
  local_10 = *(uint *)((int)this + param_2 * 0x4c + 0x25c);
  local_18 = *(int *)((int)this + param_2 * 0x4c + 0x254);
  if ((*(byte *)(param_3 + 0xe) & 1) != 0) {
    local_18 = 0;
  }
  uVar2 = (uint)*param_1;
  param_2 = CONCAT31(param_2._1_3_,1);
  iVar1 = thunk_FUN_1001bb80((int)param_3);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_3 + 4))(uVar2);
  }
  if (*(HMIDIOUT *)(DAT_100b4a1c + 0x3c) == (HMIDIOUT)0x0) {
    uVar3 = *(uint *)((int)this + local_10 * 4 + 0x744);
    if (((uVar3 != 0) && (uVar2 = (uint)*param_1, param_3[uVar2 + 0x16] == 0)) &&
       (iVar1 = *(int *)(uVar3 + 0x30), iVar1 != 0)) {
      auStack_8[0] = uVar3;
      if ((*(byte *)(iVar1 + 0x214) & 1) != 0) {
        uVar2 = thunk_FUN_1001adc0(iVar1);
      }
      piVar5 = *(int **)(iVar1 + 4 + (uVar2 & 0x7f) * 4);
      if ((*(byte *)(iVar1 + 0x214) & 8) != 0) {
        param_2 = (uint)param_2._1_3_ << 8;
      }
      if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 0x60))(), iVar1 != 0)) {
        iVar1 = (**(code **)(*piVar5 + 0x5c))();
        if ((iVar1 != 0) &&
           (((*(byte *)(piVar5 + 0x32) & 1) == 0 && (local_10 = piVar5[0x50e], 1 < (int)local_10))))
        {
          uVar2 = 0;
          if (local_10 != 1) {
            piVar4 = piVar5 + 0x510;
            do {
              iVar1 = (**(code **)(*(int *)*piVar4 + 0x5c))();
              if (iVar1 == 0) {
                piVar5 = (int *)piVar5[uVar2 + 0x510];
                break;
              }
              uVar2 = uVar2 + 1;
              piVar4 = piVar4 + 1;
            } while (uVar2 < local_10 - 1);
          }
          uVar3 = auStack_8[0];
          if (uVar2 == local_10) {
            return 2;
          }
        }
        if ((*(byte *)(uVar3 + 4) & 8) != 0) {
          param_3[*param_1 + 0x16] = (int)piVar5;
        }
        piVar5[0x50f] = *param_1 + 1;
        iVar1 = 0;
        if ((*(byte *)(uVar3 + 4) & 1) != 0) {
          iVar1 = *(int *)(uVar3 + 0xc);
          uVar2 = thunk_FUN_10028560(&DAT_100b4fe0,*(int *)(uVar3 + 8) - iVar1);
          iVar1 = (uVar2 & 0xffff) + iVar1;
        }
        if ((~*(uint *)(uVar3 + 4) >> 4 & 1) != 0) {
          iVar1 = param_3[0x117] + ((uint)*param_1 - piVar5[0x84]) * 100 + iVar1;
        }
        (**(code **)(*piVar5 + 0x9c))(iVar1);
        if ((*(byte *)(piVar5 + 0x32) & 1) != 0) {
          unaff_EBX = (void *)thunk_FUN_100382c0(piVar5 + 0x1c,auStack_8);
          if (unaff_EBX == (void *)0x0) {
            return 2;
          }
          *(uint *)((int)unaff_EBX + 0xe4) = (uint)*param_1;
        }
        if ((piVar5[0x8a] != 0) && ((**(code **)(*piVar5 + 0x48))(1), unaff_EBX != (void *)0x0)) {
          *(uint *)((int)unaff_EBX + 0x98) = *(uint *)((int)unaff_EBX + 0x98) | 1;
        }
        if ((*(byte *)(piVar5 + 0x32) & 8) != 0) {
          piVar5[0x32] = piVar5[0x32] & 0xfffffff7;
        }
        if (((char)param_1 != '\0') && (unaff_EBX != (void *)0x0)) {
          *(int *)((int)unaff_EBX + 0xe8) = (int)(char)param_1[1] + *(int *)(param_2 + 0x460);
        }
        local_1c = 0;
        if ((*(byte *)(uVar3 + 4) & 2) != 0) {
          iVar1 = *(int *)(uVar3 + 0x14);
          uVar3 = thunk_FUN_10028560(&DAT_100b4fe0,*(int *)(uVar3 + 0x10) - iVar1);
          local_1c = (int)(*(int *)(local_18 + 0x730) * ((uVar3 & 0xffff) + iVar1)) / 0x7f;
        }
        if (unaff_EBX == (void *)0x0) {
          piVar5[0xa5] = *(int *)(local_10 + 0x10) + -0x3f;
          (**(code **)(*piVar5 + 0x40))(local_1c);
        }
        else {
          thunk_FUN_10037f30(unaff_EBX,*(int *)(local_10 + 0x10) + -0x3f);
          thunk_FUN_100383b0(unaff_EBX,local_1c);
        }
        if ((*(byte *)(piVar5 + 0x32) & 1) != 0) {
          thunk_FUN_100348f0(piVar5 + 0x1c,auStack_8[0]);
        }
        if ((*(byte *)(piVar5 + 0x32) & 0x40) == 0) {
          piVar5[0x32] = piVar5[0x32] | 0x40;
          thunk_FUN_1000e680((void *)(DAT_100b4a20 + 0x1c8),piVar5);
        }
      }
    }
  }
  else if ((*(byte *)(param_3 + 0xe) & 1) == 0) {
    midiOutShortMsg(*(HMIDIOUT *)(DAT_100b4a1c + 0x3c),
                    ((uint)param_1[1] << 8 | uVar2) << 8 | uVar3 | 0x90);
    param_3[uVar2 + 0x96] = ((uint)param_1[1] << 8 | uVar2) << 8 | uVar3 | 0x90;
    return 2;
  }
  return 2;
}

