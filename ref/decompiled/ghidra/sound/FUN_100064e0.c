/* Ghidra decompiled: sound.dll */
/* Function: FUN_100064e0 @ 0x100064E0 */


undefined4 __thiscall
FUN_100064e0(void *this,undefined4 *param_1,uint param_2,uint param_3,uint *param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 *puStack_8;
  code *local_4;
  
  local_4 = (code *)(&PTR_LAB_1005b4a4)[param_3];
  bVar7 = 0xb < param_3;
  if ((*(byte *)((int)this + 0x58) & 8) != 0) {
    puVar6 = *(undefined **)((int)this + 0x5c);
    if (puVar6 != (undefined *)0x0) {
      puVar1 = *(undefined4 **)(puVar6 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        *(undefined4 *)((int)this + 0x60) = 0;
        *(undefined4 *)((int)this + 0x5c) = 0;
      }
      else {
        *puVar1 = 0;
        *(undefined4 **)((int)this + 0x5c) = puVar1;
      }
      puVar2 = *(undefined **)(puVar6 + 8);
      FUN_1004249a(puVar6);
      *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -1;
      while (puVar2 != (undefined *)0x0) {
        if (*(HMMIO *)(puVar2 + 0x44) != (HMMIO)0x0) {
          mmioClose(*(HMMIO *)(puVar2 + 0x44),0);
          DAT_100b4a08 = DAT_100b4a08 + -1;
        }
        if (puVar2 != (undefined *)0x0) {
          thunk_FUN_10037df0();
          FUN_1004249a(puVar2);
        }
        puVar6 = *(undefined **)((int)this + 0x5c);
        if (puVar6 == (undefined *)0x0) break;
        puVar1 = *(undefined4 **)(puVar6 + 4);
        if (puVar1 == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x60) = 0;
          *(undefined4 *)((int)this + 0x5c) = 0;
        }
        else {
          *puVar1 = 0;
          *(undefined4 **)((int)this + 0x5c) = puVar1;
        }
        puVar2 = *(undefined **)(puVar6 + 8);
        FUN_1004249a(puVar6);
        *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -1;
      }
    }
    (**(code **)(*(int *)this + 0x80))();
  }
  iVar5 = *(int *)((int)this + 0x5c);
  *(int *)((int)this + 100) = iVar5;
  if ((iVar5 != 0) && (puVar6 = *(undefined **)(iVar5 + 8), puVar6 != (undefined *)0x0)) {
    puStack_8 = param_1;
    param_3 = *(uint *)(puVar6 + 0x1c);
    uVar4 = (*local_4)(&puStack_8,&param_3,param_2,puVar6,0);
    *param_4 = uVar4;
    for (iVar5 = *(int *)(puVar6 + 0xcc); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*(int *)((int)this + 100) != 0) {
        *(undefined4 *)((int)this + 100) = *(undefined4 *)(*(int *)((int)this + 100) + 4);
      }
      puVar2 = *(undefined **)((int)this + 0x5c);
      if (puVar2 != (undefined *)0x0) {
        puVar1 = *(undefined4 **)(puVar2 + 4);
        if (puVar1 == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x60) = 0;
          *(undefined4 *)((int)this + 0x5c) = 0;
        }
        else {
          *puVar1 = 0;
          *(undefined4 **)((int)this + 0x5c) = puVar1;
        }
        FUN_1004249a(puVar2);
        *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -1;
      }
      mmioClose(*(HMMIO *)(puVar6 + 0x44),0);
      DAT_100b4a08 = DAT_100b4a08 + -1;
      if (puVar6 != (undefined *)0x0) {
        thunk_FUN_10037df0();
        FUN_1004249a(puVar6);
      }
      iVar3 = *(int *)((int)this + 0x5c);
      *(int *)((int)this + 100) = iVar3;
      if (iVar3 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = *(undefined **)(iVar3 + 8);
      }
    }
    if (((puVar6 != (undefined *)0x0) &&
        (*(uint *)(puVar6 + 0x1c) = param_3, *(uint *)(puVar6 + 0x20) <= param_3)) &&
       ((puVar6[0x9c] & 1) == 0)) {
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + *(int *)((int)this + 200) + 1;
      *(undefined4 *)((int)this + 200) = 0;
      *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & 0xffffffef | 4;
      (**(code **)(*(int *)this + 0x20))();
      puVar2 = *(undefined **)((int)this + 0x5c);
      if (puVar2 != (undefined *)0x0) {
        puVar1 = *(undefined4 **)(puVar2 + 4);
        if (puVar1 == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x60) = 0;
          *(undefined4 *)((int)this + 0x5c) = 0;
        }
        else {
          *puVar1 = 0;
          *(undefined4 **)((int)this + 0x5c) = puVar1;
        }
        FUN_1004249a(puVar2);
        *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -1;
      }
      mmioClose(*(HMMIO *)(puVar6 + 0x44),0);
      DAT_100b4a08 = DAT_100b4a08 + -1;
      thunk_FUN_10037df0();
      FUN_1004249a(puVar6);
    }
    if ((uVar4 != param_2) && (bVar7)) {
      for (iVar5 = (param_2 - uVar4 & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puStack_8 = 0;
        puStack_8 = puStack_8 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puStack_8 = 0;
        puStack_8 = (undefined4 *)((int)puStack_8 + 1);
      }
    }
    return 0;
  }
  *param_4 = 0;
  if (bVar7) {
    for (iVar5 = (param_2 & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return 0x26;
}

