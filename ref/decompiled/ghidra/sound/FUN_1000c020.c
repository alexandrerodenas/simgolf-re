/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000c020 @ 0x1000C020 */


int __thiscall FUN_1000c020(void *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (DAT_100b49f0 == (int *)0x0) {
    return 3;
  }
  if ((uint)DAT_100b49f0[0x52] <= param_1) {
    return 10;
  }
  if (*(int *)((int)this + 0x1a8) != 0) {
    thunk_FUN_10008920(DAT_100b49ec,this);
    thunk_FUN_10008d70((int)DAT_100b49ec);
  }
  if (DAT_100b49f8 != (undefined *)0x0) {
    thunk_FUN_100132e0(DAT_100b49f0,DAT_100b49f8);
    DAT_100b49f8 = (undefined *)0x0;
  }
  thunk_FUN_100133d0((int)DAT_100b49f0);
  thunk_FUN_10011970(DAT_100b49f0);
  iVar1 = thunk_FUN_100116a0(DAT_100b49f0,param_1);
  if (iVar1 != 0) {
    return 6;
  }
  iVar1 = thunk_FUN_10011c60(DAT_100b49f0,DAT_100b4a3c,0);
  if (iVar1 == 0) {
    uVar2 = 0x10000;
    if ((*(byte *)(DAT_100b49f0 + 4) & 0x20) != 0) {
      uVar2 = 0x20000;
    }
    iVar1 = thunk_FUN_10012d10(DAT_100b49f0,(int *)&DAT_100b49f8,0x10088,uVar2);
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0x3c))(0xf);
      iVar4 = 0xe;
      iVar1 = (**(code **)(*(int *)this + 0x40))();
      thunk_FUN_10010eb0(DAT_100b49f8,iVar1,iVar4);
      thunk_FUN_1000f810((int)DAT_100b49f8);
      thunk_FUN_10010db0(DAT_100b49f8,1);
      if (*(ushort *)(DAT_100b49f8 + 0xb4) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(DAT_100b49f8 + 0x38) / (uint)*(ushort *)(DAT_100b49f8 + 0xb4);
      }
      thunk_FUN_10006f00(DAT_100b49f4,uVar3 * 2);
      *(UINT **)((int)this + 0x1a8) = DAT_100b49ec;
      thunk_FUN_100088e0(DAT_100b49ec,this);
      thunk_FUN_10008ce0(DAT_100b49ec);
      return 0;
    }
    thunk_FUN_10011970(DAT_100b49f0);
    DAT_100b49f8 = (undefined *)0x0;
    iVar1 = 0x1e;
  }
  return iVar1;
}

