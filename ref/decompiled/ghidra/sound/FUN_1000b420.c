/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000b420 @ 0x1000B420 */


undefined4 __thiscall FUN_1000b420(void *this,HWND param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058846;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((DAT_100b49bc & 4) == 0) && (ExceptionList = &local_c, (param_2 & 0x80) != 0)) {
    ExceptionList = &local_c;
    thunk_FUN_100286f0(&DAT_100b49b8,param_1);
    *(uint *)((int)this + 0x1a4) = *(uint *)((int)this + 0x1a4) | 0x20;
  }
  *(uint *)((int)this + 0x1c4) = param_2;
  if (DAT_100b49f0 == (int *)0x0) {
    puVar2 = operator_new(0x1b8);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      DAT_100b49f0 = (int *)0x0;
    }
    else {
      DAT_100b49f0 = thunk_FUN_10011180(puVar2);
    }
    local_4 = 0xffffffff;
    iVar3 = thunk_FUN_100114e0(DAT_100b49f0,(byte)param_2,0xf);
    if ((iVar3 != 0) || (iVar3 = thunk_FUN_10011c60(DAT_100b49f0,(int)param_1,2), iVar3 != 0)) {
      piVar1 = DAT_100b49f0;
      if (DAT_100b49f0 != (int *)0x0) {
        thunk_FUN_10011290(DAT_100b49f0);
        FUN_1004249a((undefined *)piVar1);
      }
      DAT_100b49f0 = (int *)0x0;
      ExceptionList = local_c;
      return 3;
    }
  }
  if (DAT_100b49f4 == (undefined4 *)0x0) {
    puVar2 = operator_new(0x3c);
    local_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      DAT_100b49f4 = (undefined4 *)0x0;
    }
    else {
      DAT_100b49f4 = thunk_FUN_10006e00(puVar2);
    }
    DAT_100b49f4[5] = DAT_100b49c0;
    local_4 = 0xffffffff;
    if ((*(byte *)((int)this + 0x1a4) & 4) != 0) {
      DAT_100b49f4[2] = DAT_100b49f4[2] | 2;
    }
  }
  if ((DAT_100b49f8 == (void *)0x0) && ((*(byte *)(DAT_100b49f0 + 0x1b) & 0x10) == 0)) {
    iVar3 = thunk_FUN_10012d10(DAT_100b49f0,(int *)&DAT_100b49f8,0x10088,0x10000);
    if (iVar3 != 0) {
      thunk_FUN_10011970(DAT_100b49f0);
      DAT_100b49f8 = (void *)0x0;
      ExceptionList = local_c;
      return 0x1e;
    }
    iVar5 = 0x1e;
    (**(code **)(*(int *)this + 0x3c))();
    iVar3 = (**(code **)(*(int *)this + 0x40))(0xe);
    thunk_FUN_10010eb0(DAT_100b49f8,iVar3,iVar5);
    thunk_FUN_1000f810((int)DAT_100b49f8);
    thunk_FUN_10010db0(DAT_100b49f8,1);
    if (*(ushort *)((int)DAT_100b49f8 + 0xb4) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)((int)DAT_100b49f8 + 0x38) / (uint)*(ushort *)((int)DAT_100b49f8 + 0xb4);
    }
    thunk_FUN_10006f00(DAT_100b49f4,uVar4 * 2);
  }
  if ((*(byte *)(DAT_100b49f0 + 0x1b) & 8) != 0) {
    thunk_FUN_100135a0(DAT_100b49f0,0,0,0xbdcccccd);
  }
  if ((*(byte *)(DAT_100b49f0 + 0x1b) & 0x10) != 0) {
    iVar3 = thunk_FUN_10012fe0(DAT_100b49f0,(int *)&DAT_100b49fc,(undefined4 *)&DAT_10063dc8,0x10094
                               ,0x10000);
    if (iVar3 != 0) {
      thunk_FUN_10011970(DAT_100b49f0);
      DAT_100b49fc = (undefined *)0x0;
      ExceptionList = local_c;
      return 0x1e;
    }
    iVar3 = thunk_FUN_10012fe0(DAT_100b49f0,(int *)&DAT_100b4a00,(undefined4 *)&DAT_10063dc8,0x10094
                               ,0x10000);
    if (iVar3 != 0) {
      thunk_FUN_100132e0(DAT_100b49f0,DAT_100b49fc);
      thunk_FUN_10011970(DAT_100b49f0);
      DAT_100b4a00 = (void *)0x0;
      DAT_100b49fc = (undefined *)0x0;
      ExceptionList = local_c;
      return 0x1e;
    }
    iVar6 = 0xf;
    (**(code **)(*(int *)this + 0x3c))();
    iVar5 = 0xe;
    iVar3 = (**(code **)(*(int *)this + 0x40))();
    thunk_FUN_10010eb0(DAT_100b4a00,iVar3,iVar5);
    iVar3 = (**(code **)(*(int *)this + 0x40))(0xe);
    thunk_FUN_10010eb0(DAT_100b49fc,iVar3,iVar6);
    piVar1 = *(int **)(DAT_100b49fc + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))(piVar1,0xbf000000,0,0xbf000000,0);
    }
    piVar1 = *(int **)((int)DAT_100b4a00 + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))(piVar1,0x3f000000,0,0xbf000000,0);
    }
    thunk_FUN_1000f810((int)DAT_100b49fc);
    thunk_FUN_1000f810((int)DAT_100b4a00);
    thunk_FUN_10010db0(DAT_100b49fc,1);
    thunk_FUN_10010db0(DAT_100b4a00,1);
    if (*(ushort *)(DAT_100b49fc + 0xb4) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(DAT_100b49fc + 0x38) / (uint)*(ushort *)(DAT_100b49fc + 0xb4);
    }
    thunk_FUN_10006f00(DAT_100b49f4,uVar4);
    *(uint *)((int)this + 0x1a4) = *(uint *)((int)this + 0x1a4) | 8;
  }
  if ((*(byte *)((int)this + 0x1a4) & 0x20) == 0) {
    thunk_FUN_1002a920(&DAT_100b5038);
  }
  if (DAT_100b49ec != (UINT *)0x0) {
    *(UINT **)((int)this + 0x1a8) = DAT_100b49ec;
    thunk_FUN_100088e0(DAT_100b49ec,this);
    thunk_FUN_10008ce0(DAT_100b49ec);
  }
  ExceptionList = local_c;
  return 0;
}

