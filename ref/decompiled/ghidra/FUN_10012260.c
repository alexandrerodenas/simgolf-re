/* Ghidra decompiled: sound.dll */
/* Function: FUN_10012260 @ 0x10012260 */
/* Body size: 470 addresses */


undefined4 __thiscall FUN_10012260(void *this,undefined4 param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005897b;
  local_c = ExceptionList;
  if (((*(byte *)((int)this + 0x6c) & 2) == 0) || (*(int *)this == 0)) {
    return 3;
  }
  if (*(int *)((int)this + 0x15c) == *(int *)((int)this + 0x150)) {
    return 0x25;
  }
  ExceptionList = &local_c;
  puVar2 = operator_new(0xd4);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = thunk_FUN_1000eef0(puVar2);
  }
  local_4 = -1;
  *param_3 = (int)puVar2;
  puVar2[0x17] = (uint)this;
  iVar3 = (**(code **)(**(int **)this + 0x14))
                    (*(int **)this,*(undefined4 *)(param_2 + 0x60),*param_3 + 0x60);
  if (iVar3 == 0) {
    iVar3 = *param_3;
    if (DAT_100b4a38 == 0) {
      DAT_100b4a34 = iVar3;
      DAT_100b4a38 = iVar3;
      *(undefined4 *)(iVar3 + 0xbc) = 0;
    }
    else {
      *(int *)(iVar3 + 0xbc) = DAT_100b4a38;
      *(int *)(DAT_100b4a38 + 0xc0) = iVar3;
      DAT_100b4a38 = iVar3;
    }
    *(undefined4 *)(iVar3 + 0xc0) = 0;
    iVar3 = *param_3;
    puVar4 = operator_new(0xc);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = iVar3;
    }
    if (*(int *)((int)this + 0x16c) == 0) {
      *(undefined4 **)((int)this + 0x168) = puVar4;
    }
    else {
      *(undefined4 **)(*(int *)((int)this + 0x16c) + 4) = puVar4;
      *puVar4 = *(undefined4 *)((int)this + 0x16c);
    }
    *(undefined4 **)((int)this + 0x16c) = puVar4;
    *(int *)((int)this + 0x174) = *(int *)((int)this + 0x174) + 1;
    *(undefined1 **)(*param_3 + 0x20) = puStack_8;
    thunk_FUN_10032410(puStack_8,*param_3);
    uVar5 = thunk_FUN_1000fec0(local_4);
    if ((char)uVar5 != '\0') {
      thunk_FUN_1000fef0((byte *)*param_3);
      thunk_FUN_1000ff60(*param_3);
    }
    *(int *)((int)this + 0x15c) = *(int *)((int)this + 0x15c) + 1;
    ExceptionList = unaff_ESI;
    return 0;
  }
  thunk_FUN_1000f480(iVar3);
  puVar1 = (undefined *)*param_3;
  if (puVar1 != (undefined *)0x0) {
    thunk_FUN_1000ef60((int)puVar1);
    FUN_1004249a(puVar1);
  }
  *param_3 = 0;
  ExceptionList = unaff_ESI;
  return 0x1d;
}

