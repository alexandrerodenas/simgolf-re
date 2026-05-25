/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006850 @ 0x10006850 */


undefined4 __thiscall FUN_10006850(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100585fb;
  local_c = ExceptionList;
  if (param_1 != (undefined4 *)((int)this + 0x6c)) {
    return 10;
  }
  iVar1 = param_1[8];
  iVar2 = param_1[6];
  if (iVar1 - iVar2 == 0) {
    ExceptionList = &local_c;
    mmioClose(*(HMMIO *)((int)this + 0xb0),0);
    DAT_100b4a08 = DAT_100b4a08 + -1;
    *(undefined4 *)((int)this + 0xb0) = 0;
    ExceptionList = local_c;
    return 0x26;
  }
  ExceptionList = &local_c;
  pvVar4 = operator_new(0x110);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)thunk_FUN_10037c40((int)pvVar4);
  }
  local_4 = 0xffffffff;
  thunk_FUN_10037e10(pvVar4,param_1,(undefined4 *)((int)this + 0xd8));
  iVar6 = *(int *)((int)this + 0x60);
  *(int *)((int)this + 100) = iVar6;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + 8);
  }
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = pvVar4;
  }
  if (*(int *)((int)this + 0x60) == 0) {
    *(undefined4 **)((int)this + 0x5c) = puVar5;
  }
  else {
    *(undefined4 **)(*(int *)((int)this + 0x60) + 4) = puVar5;
    *puVar5 = *(undefined4 *)((int)this + 0x60);
  }
  *(undefined4 **)((int)this + 0x60) = puVar5;
  *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)pvVar4 + 0xd4) = *(undefined4 *)((int)pvVar4 + 0x20);
  *(uint *)((int)pvVar4 + 0x90) = (uint)(iVar1 - iVar2) / (uint)*(ushort *)((int)pvVar4 + 0xac);
  *(undefined4 *)((int)pvVar4 + 0xd8) = *(undefined4 *)((int)pvVar4 + 0x18);
  if (iVar6 != 0) {
    *(uint *)(iVar6 + 0x98) = *(uint *)(iVar6 + 0x98) | 1;
    *(byte *)(iVar6 + 0x9c) = *(byte *)(iVar6 + 0x9c) | 1;
    *(void **)(iVar6 + 0xb4) = pvVar4;
    *(undefined4 *)(iVar6 + 0xcc) = 0;
  }
  uVar3 = *(uint *)((int)this + 0x58);
  if (((uVar3 & 4) != 0) && ((uVar3 & 1) == 0)) {
    *(uint *)((int)this + 0x58) = uVar3 & 0xfffffffb | 3;
  }
  ExceptionList = local_c;
  return 0;
}

