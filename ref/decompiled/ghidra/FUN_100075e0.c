/* Ghidra decompiled: sound.dll */
/* Function: FUN_100075e0 @ 0x100075E0 */
/* Body size: 1210 addresses */


int __thiscall FUN_100075e0(void *this,void *param_1,void *param_2)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int *this_00;
  char *pcVar5;
  undefined4 *puVar6;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  char *local_28;
  uint local_24;
  char *local_20;
  uint uStack_1c;
  undefined4 *puStack_18;
  uint uStack_14;
  undefined4 *puStack_10;
  char *local_c;
  char *local_8;
  int local_4;
  
  if ((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) {
    iVar3 = 10;
  }
  else {
    DVar2 = timeGetTime();
    if (*(int *)((int)this + 0x18) == 0) {
      *(DWORD *)((int)this + 0x18) = DVar2;
    }
    iVar3 = thunk_FUN_10010660(param_1,&local_34,(uint *)&local_8,DVar2 - *(int *)((int)this + 0x18)
                              );
    if (iVar3 != 0) {
      if (iVar3 != 0x2d) {
        return iVar3;
      }
      *(byte *)((int)param_2 + 4) = *(byte *)((int)param_2 + 4) | 1;
    }
    iVar3 = thunk_FUN_10010860((int)param_2);
    if (iVar3 == 0) {
      if (*(ushort *)((int)param_1 + 0xb4) == 0) {
        local_38 = 0;
      }
      else {
        local_38 = local_34 / *(ushort *)((int)param_1 + 0xb4);
      }
      local_4 = DVar2 - *(int *)((int)this + 0x18);
      *(DWORD *)((int)this + 0x18) = DVar2;
      *(undefined4 *)((int)this + 0x34) = 0;
      bVar1 = true;
      if (DAT_100b4a20 == 0) {
        return 3;
      }
      iVar3 = *(int *)(DAT_100b4a20 + 0x1c8);
      *(int *)(DAT_100b4a20 + 0x1d0) = iVar3;
      if ((iVar3 != 0) && (this_00 = *(int **)(iVar3 + 8), this_00 != (int *)0x0)) {
        while( true ) {
          iVar3 = (**(code **)(*this_00 + 0x78))();
          if (iVar3 == 1) {
            iVar3 = (**(code **)(*this_00 + 0x60))();
            if (iVar3 != 0) {
              iVar3 = (**(code **)(*this_00 + 0xcc))();
              if ((iVar3 == 0) && (iVar3 = (**(code **)(*this_00 + 0x5c))(), iVar3 != 0)) {
                this_00[0xa8] = local_4;
                if (*(short *)((int)this_00 + 0x1fe) == 8) {
                  uVar4 = (-(uint)(*(short *)((int)this + 0x2a) != 0x10) & 0xfffffffc) + 8;
                }
                else {
                  uVar4 = 0;
                }
                if (*(short *)((int)this_00 + 0x1f2) == 1) {
                  uVar4 = uVar4 + 2;
                }
                if (*(short *)((int)this + 0x1e) == 1) {
                  uVar4 = uVar4 + 1;
                }
                if (bVar1) {
                  uVar4 = uVar4 + 0xc;
                  bVar1 = false;
                }
                thunk_FUN_10035990(this_00 + 0x1c,(double *)&DAT_10069990,local_38,uVar4,&uStack_30)
                ;
              }
              if (((uint)this_00[0x33] >> 6 & 1) != 0) {
                thunk_FUN_10035f60();
              }
              iVar3 = (**(code **)(*this_00 + 0xcc))();
              if (((iVar3 != 0) && (this_00[0x31] != 0)) &&
                 (iVar3 = thunk_FUN_10010e30(this_00[0x31]), iVar3 == 0)) {
                iVar3 = 0;
                this_00[0x32] = this_00[0x32] | 0x10;
                do {
                  thunk_FUN_10037760(this_00 + 0x1c,iVar3);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < 0x10);
              }
            }
          }
          else if (iVar3 == 4) {
            iVar3 = (**(code **)(*this_00 + 0x5c))();
            if (iVar3 != 0) {
              if ((this_00[0x16] & 0x10U) == 0) {
                this_00[0x34] = 0;
                this_00[0x35] = -*(int *)((int)param_1 + 0x1c);
                this_00[0x16] = this_00[0x16] | 0x10;
              }
              else {
                this_00[0x35] = this_00[0x35] + *(int *)((int)param_1 + 0x18);
              }
              thunk_FUN_10006bd0((int)this_00);
              if (*(short *)((int)this_00 + 0xe6) == 8) {
                uVar4 = (-(uint)(*(short *)((int)this + 0x2a) != 0x10) & 0xfffffffc) + 8;
              }
              else {
                uVar4 = 0;
              }
              if (*(short *)((int)this_00 + 0xda) == 1) {
                uVar4 = uVar4 + 2;
              }
              if (*(short *)((int)this + 0x1e) == 1) {
                uVar4 = uVar4 + 1;
              }
              if (bVar1) {
                uVar4 = uVar4 + 0xc;
                bVar1 = false;
              }
              thunk_FUN_100064e0(this_00,*(undefined4 **)((int)this + 4),local_38,uVar4,&uStack_30);
            }
          }
          else if ((iVar3 == 6) && (iVar3 = (**(code **)(*this_00 + 0x5c))(), iVar3 != 0)) {
            if (*(short *)((int)this_00 + 0xca) == 8) {
              uVar4 = (-(uint)(*(short *)((int)this + 0x2a) != 0x10) & 0xfffffffc) + 8;
            }
            else {
              uVar4 = 0;
            }
            if (*(short *)((int)this_00 + 0xbe) == 1) {
              uVar4 = uVar4 + 2;
            }
            if (*(short *)((int)this + 0x1e) == 1) {
              uVar4 = uVar4 + 1;
            }
            if (bVar1) {
              uVar4 = uVar4 + 0xc;
              bVar1 = false;
            }
            thunk_FUN_10030ba0(this_00,(double *)&DAT_10069990,local_38,uVar4,&uStack_30);
          }
          if (*(int *)(DAT_100b4a20 + 0x1d0) == 0) break;
          iVar3 = *(int *)(*(int *)(DAT_100b4a20 + 0x1d0) + 4);
          *(int *)(DAT_100b4a20 + 0x1d0) = iVar3;
          if ((iVar3 == 0) || (this_00 = *(int **)(iVar3 + 8), this_00 == (int *)0x0)) break;
        }
        if (!bVar1) {
          thunk_FUN_10008070(this,param_1,param_2,(double *)&DAT_10069990,local_34,local_8,local_c);
          thunk_FUN_10008470();
          return 0;
        }
      }
      thunk_FUN_100101a0(param_1,local_8,local_34,&local_20,&local_24,&local_28,&local_2c);
      thunk_FUN_100101a0(param_2,local_c,local_34,&puStack_10,&uStack_14,&puStack_18,&uStack_1c);
      pcVar5 = local_20;
      for (uVar4 = local_24 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + 4;
      }
      for (uVar4 = local_24 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar5 = '\0';
        pcVar5 = pcVar5 + 1;
      }
      puVar6 = puStack_10;
      for (uVar4 = uStack_14 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uStack_14 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      if (local_28 != (char *)0x0) {
        pcVar5 = local_28;
        for (uVar4 = local_2c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + 4;
        }
        for (uVar4 = local_2c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar5 = '\0';
          pcVar5 = pcVar5 + 1;
        }
      }
      if (puStack_18 != (undefined4 *)0x0) {
        puVar6 = puStack_18;
        for (uVar4 = uStack_1c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = uStack_1c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
      if ((*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) &&
         (mmioWrite(*(HMMIO *)((int)this + 0x30),local_20,local_24), local_28 != (char *)0x0)) {
        mmioWrite(*(HMMIO *)((int)this + 0x30),local_28,local_2c);
      }
      thunk_FUN_10010370(param_1,local_20,local_24,local_28,local_2c);
      thunk_FUN_10010370(param_2,puStack_10,uStack_14,puStack_18,uStack_1c);
      thunk_FUN_10008470();
      return 0;
    }
  }
  return iVar3;
}

