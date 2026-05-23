/* Ghidra decompiled: sound.dll */
/* Function: FUN_10035990 @ 0x10035990 */
/* Body size: 521 addresses */


undefined4 __thiscall
FUN_10035990(void *this,double *param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  uint local_10;
  uint local_8;
  int local_4;
  
  local_10 = 1;
  local_8 = 0;
  if (0x18 < param_3) {
    return 10;
  }
  uVar1 = *(uint *)((int)this + 0x58);
  if (((uVar1 & 8) != 0) || ((*(byte *)((int)this + 0x5c) & 0x10) != 0)) {
    iVar2 = *(int *)((int)this + 0x1c4);
    if (iVar2 < 0) {
      uVar3 = *(int *)((int)this + 0x1d8) - iVar2;
      *(uint *)((int)this + 0x1d8) = uVar3;
      if (0x10000 < uVar3) {
        *(undefined4 *)((int)this + 0x1d8) = 0x10000;
      }
    }
    else if (iVar2 < *(int *)((int)this + 0x1d8)) {
      *(int *)((int)this + 0x1d8) = *(int *)((int)this + 0x1d8) - iVar2;
    }
    else {
      *(undefined4 *)((int)this + 0x1d8) = 0;
    }
  }
  if (((uVar1 & 1) == 0) && ((*(byte *)((int)this + 0x5c) & 0x44) == 0)) {
    thunk_FUN_10036280(this,param_1,param_2,param_3,param_4);
    return 0;
  }
  uVar3 = *(uint *)((int)this + 0x5c);
  if ((uVar3 & 0x40) != 0) {
    thunk_FUN_10036660(this,param_2,param_3,param_4);
    return 0;
  }
  if ((uVar1 & 0xffff000) == 0) {
    if (((((uVar3 & 4) != 0) && ((uVar3 >> 6 & 1) != 0)) && ((uVar1 & 0x10000000) != 0)) &&
       (0xb < param_3)) {
      for (iVar2 = (param_2 & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)param_1 = 0;
        param_1 = (double *)((int)param_1 + 4);
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)param_1 = 0;
        param_1 = (double *)((int)param_1 + 1);
      }
    }
  }
  else {
    bVar5 = 0xb < param_3;
    pbVar4 = (byte *)((int)this + 0x2d4);
    local_4 = 0x10;
    do {
      if ((*(uint *)((int)this + 0x58) >> 0xc & local_10 & 0xffff) != 0) {
        timeGetTime();
        thunk_FUN_100371d0(this,pbVar4 + -0x9c,param_1,param_2,param_3,param_4);
        if ((*param_4 != param_2) || ((*pbVar4 & 4) != 0)) {
          *(uint *)((int)this + 0x58) =
               *(uint *)((int)this + 0x58) & (~local_10 << 0xc | 0xf0000fff);
        }
        if (local_8 < *param_4) {
          local_8 = *param_4;
        }
        if (bVar5) {
          bVar5 = false;
          param_3 = param_3 - 0xc;
        }
      }
      local_10 = local_10 << 1;
      pbVar4 = pbVar4 + 0x110;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    *param_4 = local_8;
    if ((*(uint *)((int)this + 0x58) & 0xffff000) == 0) {
      *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 0x10;
      return 0;
    }
  }
  return 0;
}

