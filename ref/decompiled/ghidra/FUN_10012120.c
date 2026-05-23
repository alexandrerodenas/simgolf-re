/* Ghidra decompiled: sound.dll */
/* Function: FUN_10012120 @ 0x10012120 */
/* Body size: 250 addresses */


int __thiscall FUN_10012120(void *this,int *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005895b;
  local_c = ExceptionList;
  if ((*(byte *)((int)this + 0x6c) & 2) == 0) {
    return 3;
  }
  ExceptionList = &local_c;
  puVar3 = operator_new(0xd4);
  local_4 = 0;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = thunk_FUN_1000eef0(puVar3);
  }
  local_4 = 0xffffffff;
  *param_1 = (int)puVar3;
  iVar4 = thunk_FUN_1000fbb0(puVar3,*(int **)this,*(int *)((int)this + 0x164));
  if (iVar4 == 0) {
    iVar1 = *param_1;
    if (DAT_100b4a38 == 0) {
      DAT_100b4a34 = iVar1;
      DAT_100b4a38 = iVar1;
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      *(undefined4 *)(iVar1 + 0xc0) = 0;
      iVar4 = 0;
    }
    else {
      *(int *)(iVar1 + 0xbc) = DAT_100b4a38;
      iVar4 = 0;
      *(int *)(DAT_100b4a38 + 0xc0) = iVar1;
      DAT_100b4a38 = iVar1;
      *(undefined4 *)(iVar1 + 0xc0) = 0;
    }
  }
  else {
    puVar2 = (undefined *)*param_1;
    if (puVar2 != (undefined *)0x0) {
      thunk_FUN_1000ef60((int)puVar2);
      FUN_1004249a(puVar2);
    }
    *param_1 = 0;
  }
  ExceptionList = local_c;
  return iVar4;
}

