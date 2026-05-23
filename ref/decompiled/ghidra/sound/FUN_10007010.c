/* Ghidra decompiled: sound.dll */
/* Function: FUN_10007010 @ 0x10007010 */
/* Body size: 1170 addresses */


int __thiscall FUN_10007010(void *this,void *param_1)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *this_00;
  char *pcVar6;
  uint uStack_24;
  char *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  char *local_10;
  short *local_c;
  short *local_8;
  int local_4;
  
  if (param_1 == (void *)0x0) {
    return 10;
  }
  DVar2 = timeGetTime();
  if (*(int *)((int)this + 0x18) == 0) {
    *(DWORD *)((int)this + 0x18) = DVar2;
  }
  iVar3 = thunk_FUN_10010660(param_1,(uint *)&local_8,(uint *)&local_c,
                             DVar2 - *(int *)((int)this + 0x18));
  if (iVar3 == 0) {
    if ((*(ushort *)((int)param_1 + 0xb4) == 0) ||
       (local_1c = (uint)local_8 / (uint)*(ushort *)((int)param_1 + 0xb4), local_1c == 0)) {
      return 0;
    }
    iVar3 = DVar2 - *(int *)((int)this + 0x18);
    *(DWORD *)((int)this + 0x18) = DVar2;
    *(undefined4 *)((int)this + 0x34) = 0;
    bVar1 = true;
    if (DAT_100b4a20 != 0) {
      iVar4 = *(int *)(DAT_100b4a20 + 0x1c8);
      *(int *)(DAT_100b4a20 + 0x1d0) = iVar4;
      local_4 = iVar3;
      if ((iVar4 != 0) && (this_00 = *(int **)(iVar4 + 8), this_00 != (int *)0x0)) {
        do {
          iVar4 = (**(code **)(*this_00 + 0x78))();
          if (iVar4 == 1) {
            iVar4 = (**(code **)(*this_00 + 0x60))();
            if (iVar4 != 0) {
              if ((*(byte *)(this_00 + 0x33) & 4) == 0) {
                iVar4 = (**(code **)(*this_00 + 0x5c))();
                if ((iVar4 != 0) && (iVar4 = (**(code **)(*this_00 + 0xcc))(), iVar4 == 0)) {
                  this_00[0xa8] = iVar3;
                  if (*(short *)((int)this_00 + 0x1fe) == 8) {
                    uVar5 = (-(uint)(*(short *)((int)this + 0x2a) != 0x10) & 0xfffffffc) + 8;
                  }
                  else {
                    uVar5 = 0;
                  }
                  if (*(short *)((int)this_00 + 0x1f2) == 1) {
                    uVar5 = uVar5 + 2;
                  }
                  if (*(short *)((int)this + 0x1e) == 1) {
                    uVar5 = uVar5 + 1;
                  }
                  if (bVar1) {
                    uVar5 = uVar5 + 0xc;
                    bVar1 = false;
                  }
                  thunk_FUN_10035990(this_00 + 0x1c,(double *)&DAT_10069990,local_1c,uVar5,
                                     &uStack_24);
                }
                if ((*(byte *)(this_00 + 0x33) & 4) == 0) {
                  iVar4 = (**(code **)(*this_00 + 0x5c))();
                  if ((iVar4 != 0) && (iVar4 = (**(code **)(*this_00 + 0xcc))(), iVar4 != 0)) {
                    thunk_FUN_10035f80((int)(this_00 + 0x1c));
                  }
                  if ((*(byte *)(this_00 + 0x33) & 4) == 0) {
                    iVar4 = (**(code **)(*this_00 + 0x5c))();
                    if (((iVar4 != 0) && (iVar4 = (**(code **)(*this_00 + 0xcc))(), iVar4 != 0)) &&
                       ((*(byte *)(this_00 + 0x32) & 1) == 0)) {
                      thunk_FUN_10036660(this_00 + 0x1c,iVar3,0,&uStack_24);
                      this_00[0xa8] = iVar3;
                    }
                    if ((*(byte *)(this_00 + 0x33) & 4) == 0) goto LAB_10007378;
                  }
                }
              }
              iVar4 = (**(code **)(*this_00 + 0xcc))();
              if (iVar4 != 0) {
                thunk_FUN_10035f60();
                this_00[0xa8] = iVar3;
              }
              if ((((*(byte *)(this_00 + 0x33) & 4) != 0) && (this_00[0x31] != 0)) &&
                 (iVar4 = thunk_FUN_10010e30(this_00[0x31]), iVar4 == 0)) {
                iVar4 = 0;
                this_00[0x32] = this_00[0x32] | 0x10;
                do {
                  thunk_FUN_10037760(this_00 + 0x1c,iVar4);
                  iVar4 = iVar4 + 1;
                  iVar3 = local_4;
                } while (iVar4 < 0x10);
              }
            }
          }
          else if (iVar4 == 4) {
            iVar4 = (**(code **)(*this_00 + 0x5c))();
            if (iVar4 != 0) {
              if ((this_00[0x16] & 0x10U) == 0) {
                this_00[0x34] = (int)local_c;
                this_00[0x35] = -*(int *)((int)param_1 + 0x1c);
                this_00[0x16] = this_00[0x16] | 0x10;
              }
              else {
                this_00[0x35] = this_00[0x35] + *(int *)((int)param_1 + 0x18);
              }
              thunk_FUN_10006bd0((int)this_00);
              if (*(short *)((int)this_00 + 0xe6) == 8) {
                uVar5 = (-(uint)(*(short *)((int)this + 0x2a) != 0x10) & 0xfffffffc) + 8;
              }
              else {
                uVar5 = 0;
              }
              if (*(short *)((int)this_00 + 0xda) == 1) {
                uVar5 = uVar5 + 2;
              }
              if (*(short *)((int)this + 0x1e) == 1) {
                uVar5 = uVar5 + 1;
              }
              if (bVar1) {
                uVar5 = uVar5 + 0xc;
                bVar1 = false;
              }
              thunk_FUN_100064e0(this_00,*(undefined4 **)((int)this + 4),local_1c,uVar5,&uStack_24);
            }
          }
          else if ((iVar4 == 6) && (iVar4 = (**(code **)(*this_00 + 0x5c))(), iVar4 != 0)) {
            if (*(short *)((int)this_00 + 0xca) == 8) {
              uVar5 = (-(uint)(*(short *)((int)this + 0x2a) != 0x10) & 0xfffffffc) + 8;
            }
            else {
              uVar5 = 0;
            }
            if (*(short *)((int)this_00 + 0xbe) == 1) {
              uVar5 = uVar5 + 2;
            }
            if (*(short *)((int)this + 0x1e) == 1) {
              uVar5 = uVar5 + 1;
            }
            if (bVar1) {
              uVar5 = uVar5 + 0xc;
              bVar1 = false;
            }
            thunk_FUN_10030ba0(this_00,(double *)&DAT_10069990,local_1c,uVar5,&uStack_24);
          }
LAB_10007378:
          if (*(int *)(DAT_100b4a20 + 0x1d0) == 0) goto LAB_100073a0;
          iVar4 = *(int *)(*(int *)(DAT_100b4a20 + 0x1d0) + 4);
          *(int *)(DAT_100b4a20 + 0x1d0) = iVar4;
          if ((iVar4 == 0) || (this_00 = *(int **)(iVar4 + 8), this_00 == (int *)0x0))
          goto LAB_100073a0;
        } while( true );
      }
      goto LAB_100073a8;
    }
    iVar3 = 3;
  }
  return iVar3;
LAB_100073a0:
  if (!bVar1) {
    thunk_FUN_10007df0(this,param_1,(double *)&DAT_10069990,local_8,local_c);
    thunk_FUN_10008470();
    return 0;
  }
LAB_100073a8:
  thunk_FUN_100101a0(param_1,local_c,local_8,&local_10,&local_14,&local_20,&local_18);
  pcVar6 = local_10;
  for (uVar5 = local_14 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = local_14 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = '\0';
    pcVar6 = pcVar6 + 1;
  }
  if (local_20 != (char *)0x0) {
    pcVar6 = local_20;
    for (uVar5 = local_18 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = local_18 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = '\0';
      pcVar6 = pcVar6 + 1;
    }
  }
  if ((*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) &&
     (mmioWrite(*(HMMIO *)((int)this + 0x30),local_10,local_14), local_20 != (char *)0x0)) {
    mmioWrite(*(HMMIO *)((int)this + 0x30),local_20,local_18);
  }
  thunk_FUN_10010370(param_1,local_10,local_14,local_20,local_18);
  thunk_FUN_10008470();
  return 0;
}

