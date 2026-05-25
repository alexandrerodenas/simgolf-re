/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011c60 @ 0x10011C60 */


int __thiscall FUN_10011c60(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  HRESULT HVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_retaddr;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  if (param_1 == 0) {
    return 10;
  }
  if (*(int *)this != 0) {
    return 0xc;
  }
  if ((*(byte *)((int)this + 0x6c) & 1) == 0) {
    return 3;
  }
  if (param_2 == 0) {
    param_2 = 2;
  }
  if (*(int *)((int)this + 8) == 0) {
    return 0x13;
  }
  HVar6 = CoInitialize((LPVOID)0x0);
  if ((HVar6 != 0) && (HVar6 != 1)) {
    *(undefined4 *)this = 0;
    return 0x20;
  }
  *(int *)((int)this + 0x18c) = *(int *)((int)this + 0x18c) + -1;
  HVar6 = CoCreateInstance((IID *)&DAT_1005d67c,(LPUNKNOWN)0x0,1,(IID *)&DAT_1005d5dc,this);
  if ((((HVar6 == 0) && (piVar2 = *(int **)this, piVar2 != (int *)0x0)) &&
      (iVar7 = (**(code **)(*piVar2 + 0x28))(piVar2,*(undefined4 *)(*(int *)((int)this + 8) + 8)),
      iVar7 != 0)) ||
     (iVar7 = (**(code **)(**(int **)this + 0x18))(*(int **)this,param_1,param_2), iVar7 != 0)) {
    thunk_FUN_1000f480(iVar7);
    thunk_FUN_10011970(this);
    return 3;
  }
  DAT_100b4a3c = param_1;
  *(undefined4 *)((int)this + 0xc) = 0x60;
  iVar7 = (**(code **)(**(int **)this + 0x10))(*(int **)this,(undefined4 *)((int)this + 0xc));
  if (iVar7 != 0) {
    thunk_FUN_1000f480(iVar7);
  }
  if ((*(byte *)((int)this + 0x10) & 0x20) == 0) {
    uVar8 = *(undefined4 *)((int)this + 0x30);
    *(undefined4 *)((int)this + 0x158) = 0;
    *(undefined4 *)((int)this + 0x14c) = uVar8;
    *(undefined4 *)((int)this + 0x154) = uVar8;
    *(undefined4 *)((int)this + 0x150) = uVar8;
    *(undefined4 *)((int)this + 0x15c) = 0;
    if ((1 < *(uint *)((int)this + 0x40)) || (bVar5 = *(byte *)((int)this + 0x6c), (bVar5 & 8) == 0)
       ) goto LAB_10011db6;
  }
  else {
    bVar5 = *(byte *)((int)this + 0x6c);
  }
  *(byte *)((int)this + 0x6c) = bVar5 & 0xe7;
LAB_10011db6:
  uVar8 = 1;
  uStack_e = 0x10;
  uStack_c = 0;
  uStack_1c = 1;
  uStack_1a = 2;
  uStack_18 = 0xac44;
  uStack_14 = 0x2b110;
  uStack_10 = 4;
  pvVar1 = (void *)((int)this + 0x70);
  if ((*(byte *)((int)this + 0x6c) & 8) == 0) {
    thunk_FUN_1000f990(pvVar1,(undefined4 *)&uStack_1c);
  }
  else {
    thunk_FUN_1000f990(pvVar1,(undefined4 *)&stack0xffffffd0);
    uVar8 = 0x11;
  }
  iVar7 = thunk_FUN_10010f30(pvVar1,1);
  if (iVar7 != 0) {
    thunk_FUN_10011970(this);
    return iVar7;
  }
  *(undefined4 *)((int)this + 0xe4) = uVar8;
  iVar7 = thunk_FUN_1000fbb0(pvVar1,*(int **)this,*(int *)((int)this + 0x164));
  if (iVar7 != 0) {
    thunk_FUN_10011970(this);
    return iVar7;
  }
  *(void **)((int)this + 0xcc) = this;
  *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) | 2;
  puVar3 = *(undefined **)((int)this + 0x178);
  if (puVar3 != (undefined *)0x0) {
    puVar4 = *(undefined4 **)(puVar3 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x17c) = 0;
      *(undefined4 *)((int)this + 0x178) = 0;
    }
    else {
      *puVar4 = 0;
      *(undefined4 **)((int)this + 0x178) = puVar4;
    }
    pvVar1 = *(void **)(puVar3 + 8);
    FUN_1004249a(puVar3);
    *(int *)((int)this + 0x184) = *(int *)((int)this + 0x184) + -1;
    while (pvVar1 != (void *)0x0) {
      if (*(int *)((int)this + 0x14c) != 0) {
        thunk_FUN_100326a0(pvVar1,(uint *)((int)pvVar1 + 100));
      }
      puVar3 = *(undefined **)((int)this + 0x178);
      if (puVar3 == (undefined *)0x0) break;
      puVar4 = *(undefined4 **)(puVar3 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 *)((int)this + 0x17c) = 0;
        *(undefined4 *)((int)this + 0x178) = 0;
      }
      else {
        *puVar4 = 0;
        *(undefined4 **)((int)this + 0x178) = puVar4;
      }
      pvVar1 = *(void **)(puVar3 + 8);
      FUN_1004249a(puVar3);
      *(int *)((int)this + 0x184) = *(int *)((int)this + 0x184) + -1;
    }
  }
  *(undefined4 *)((int)this + 400) = unaff_retaddr;
  return 0;
}

