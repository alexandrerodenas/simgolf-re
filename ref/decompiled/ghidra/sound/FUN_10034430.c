/* Ghidra decompiled: sound.dll */
/* Function: FUN_10034430 @ 0x10034430 */
/* Body size: 646 addresses */


undefined4 __fastcall FUN_10034430(void *param_1)

{
  uint *puVar1;
  uint uVar2;
  void *this;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *local_4;
  
  this = DAT_100b49f0;
  if (DAT_100b49f0 == (void *)0x0) {
    return 3;
  }
  if ((*(uint *)((int)param_1 + 0x5c) & 4) != 0) {
    return 0xb;
  }
  if (((*(uint *)((int)param_1 + 0x5c) >> 6 & 1) != 0) &&
     (*(void **)((int)param_1 + 0x54) != (void *)0x0)) {
    local_4 = param_1;
    thunk_FUN_10010db0(*(void **)((int)param_1 + 0x54),1);
  }
  uVar2 = *(uint *)((int)param_1 + 0x58);
  if ((uVar2 & 1) != 0) {
    iVar3 = 0;
    uVar5 = 1;
    if ((uVar2 & 0x10000000) != 0) {
      local_4 = *(void **)((int)param_1 + 0x54);
      iVar3 = thunk_FUN_10010e30((int)local_4);
      if ((iVar3 != 0) || (*(int *)((int)param_1 + 0x22c) != 0)) {
        for (iVar3 = *(int *)((int)param_1 + 0x1338); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
          local_4 = *(void **)(iVar3 + 8);
          iVar4 = thunk_FUN_10010e30((int)local_4);
          if (iVar4 == 0) {
            if (iVar3 != 0) goto LAB_1003451d;
            break;
          }
        }
        iVar3 = thunk_FUN_10012260(this,param_1,*(int *)((int)param_1 + 0x54),(int *)&local_4);
        if ((iVar3 == 0x25) || (iVar3 == 0x1d)) {
          iVar3 = thunk_FUN_10012690(this,(int)param_1,(int *)&local_4);
          if (iVar3 != 0) {
            return 6;
          }
        }
        else if (iVar3 != 0) {
          return 6;
        }
LAB_1003451d:
        thunk_FUN_1000f190(local_4,*(undefined4 *)(*(int *)((int)param_1 + 0x54) + 0xc4));
      }
      thunk_FUN_1000f160(local_4,*(undefined4 *)((int)param_1 + 0x220));
      if ((*(byte *)((int)param_1 + 0x5c) & 0x20) != 0) {
        iVar3 = *(int *)((int)param_1 + 0x54);
        thunk_FUN_10011000(local_4,*(undefined4 *)(iVar3 + 200),*(undefined4 *)(iVar3 + 0xcc),
                           *(undefined4 *)(iVar3 + 0xd0));
      }
      if (*(int *)((int)param_1 + 0x22c) == 0) {
        thunk_FUN_10010db0(local_4,0);
        *(uint *)((int)param_1 + 0x58) = *(uint *)((int)param_1 + 0x58) & 0xffffffef;
        return 0;
      }
      *(int *)((int)local_4 + 0x44) = -*(int *)((int)param_1 + 0x22c);
      *(uint *)((int)param_1 + 0x58) = *(uint *)((int)param_1 + 0x58) & 0xffffffef;
      return 0;
    }
    do {
      if ((uVar2 >> 0xc & uVar5 & 0xffff) == 0) break;
      uVar5 = uVar5 << 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
    if (iVar3 == 0x10) {
      return 6;
    }
    iVar3 = iVar3 * 0x110;
    *(undefined4 *)((int)param_1 + iVar3 + 0x2c0) = 0;
    *(undefined4 *)((int)param_1 + iVar3 + 0x254) = *(undefined4 *)(iVar3 + 0x250 + (int)param_1);
    *(undefined4 *)((int)param_1 + iVar3 + 0x2c4) = 0;
    *(byte *)((int)param_1 + iVar3 + 0x2d4) = *(byte *)((int)param_1 + iVar3 + 0x2d4) & 0xf1;
    *(undefined4 *)((int)param_1 + iVar3 + 0x328) = *(undefined4 *)((int)param_1 + iVar3 + 0x330);
    *(undefined4 *)((int)param_1 + iVar3 + 0x2f8) = 0;
    *(undefined4 *)((int)param_1 + iVar3 + 0x32c) = *(undefined4 *)((int)param_1 + iVar3 + 0x334);
    *(undefined8 *)((int)param_1 + iVar3 + 0x2b8) = *(undefined8 *)((int)param_1 + 0x1f0);
    *(undefined8 *)((int)param_1 + iVar3 + 0x2a8) = *(undefined8 *)((int)param_1 + 0x200);
    *(undefined8 *)((int)param_1 + iVar3 + 0x340) = *(undefined8 *)((int)param_1 + 5000);
    *(undefined8 *)((int)param_1 + iVar3 + 0x290) = *(undefined8 *)((int)param_1 + 0x1e0);
    *(undefined4 *)((int)param_1 + iVar3 + 0x2fc) = *(undefined4 *)((int)param_1 + 0x22c);
    *(undefined4 *)((int)param_1 + iVar3 + 0x2f8) = 0;
    *(int *)((int)param_1 + iVar3 + 0x300) = (int)param_1 + 0x230;
    *(byte *)((int)param_1 + iVar3 + 0x2d4) = *(byte *)((int)param_1 + iVar3 + 0x2d4) & 0xfb;
    if (*(int *)((int)param_1 + 0x1b8) != 0) {
      puVar1 = (uint *)((int)param_1 + iVar3 + 0x2d0);
      *puVar1 = *puVar1 | 1;
    }
    *(uint *)((int)param_1 + 0x58) = *(uint *)((int)param_1 + 0x58) | (uVar5 & 0xffff) << 0xc;
  }
  *(uint *)((int)param_1 + 0x58) = *(uint *)((int)param_1 + 0x58) & 0xffffffef;
  return 0;
}

