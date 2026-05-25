/* Ghidra decompiled: sound.dll */
/* Function: FUN_100128b0 @ 0x100128B0 */


int __thiscall FUN_100128b0(void *this,int *param_1,uint *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005899b;
  if ((*(byte *)((int)this + 0x6c) & 2) == 0) {
    return 3;
  }
  ppvVar3 = &local_c;
  if ((param_2[1] & 4) != 0) {
    if (*(uint *)((int)this + 0x154) <= *(uint *)((int)this + 0x158)) {
      return 0x25;
    }
    iVar8 = *(uint *)((int)this + 0x158) + 1;
    ExceptionList = &local_c;
    *(int *)((int)this + 0x158) = iVar8;
    uVar4 = *(int *)((int)this + 0x14c) - iVar8;
    *(uint *)((int)this + 0x150) = uVar4;
    ppvVar3 = ExceptionList;
    if (uVar4 < *(uint *)((int)this + 0x15c)) {
      iVar8 = *(int *)((int)this + 0x168);
      do {
        if (iVar8 == 0) {
LAB_1001294e:
          iVar8 = *(int *)((int)this + 0x158) + -1;
          *(int *)((int)this + 0x158) = iVar8;
          *(int *)((int)this + 0x150) = *(int *)((int)this + 0x14c) - iVar8;
          ExceptionList = local_c;
          return 0x25;
        }
        iVar9 = *(int *)(iVar8 + 8);
        iVar5 = thunk_FUN_10010e30(iVar9);
        if (iVar5 == 0) {
          if (iVar8 != 0) {
            thunk_FUN_10032440(*(void **)(iVar9 + 0x20),iVar9);
            pvVar6 = (void *)thunk_FUN_100136c0((void *)((int)this + 0x168),iVar9);
            if (pvVar6 != (void *)0x0) {
              pvVar2 = DAT_100b4a34;
              if ((*(byte *)((int)this + 0x6c) & 2) == 0) goto LAB_100129e0;
              goto joined_r0x1001299d;
            }
          }
          goto LAB_1001294e;
        }
        iVar8 = *(int *)(iVar8 + 4);
      } while( true );
    }
  }
LAB_100129e6:
  ExceptionList = ppvVar3;
  puVar7 = operator_new(0xd4);
  local_4 = 0;
  if (puVar7 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = thunk_FUN_1000eef0(puVar7);
  }
  *param_1 = (int)puVar7;
  local_4 = 0xffffffff;
  puVar10 = param_2;
  puVar7 = puVar7 + 0x1c;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  *(void **)(*param_1 + 0x5c) = this;
  iVar8 = thunk_FUN_1000fbb0((void *)*param_1,*(int **)this,*(int *)((int)this + 0x164));
  if (iVar8 == 0) {
    pvVar6 = (void *)*param_1;
    if (DAT_100b4a38 == (void *)0x0) {
      DAT_100b4a34 = pvVar6;
      DAT_100b4a38 = pvVar6;
      *(undefined4 *)((int)pvVar6 + 0xbc) = 0;
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0;
      iVar8 = 0;
    }
    else {
      *(void **)((int)pvVar6 + 0xbc) = DAT_100b4a38;
      iVar8 = 0;
      *(void **)((int)DAT_100b4a38 + 0xc0) = pvVar6;
      DAT_100b4a38 = pvVar6;
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0;
    }
  }
  else {
    if ((param_2[1] & 4) != 0) {
      iVar9 = *(int *)((int)this + 0x158) + -1;
      *(int *)((int)this + 0x158) = iVar9;
      *(int *)((int)this + 0x150) = *(int *)((int)this + 0x14c) - iVar9;
    }
    puVar1 = (undefined *)*param_1;
    if (puVar1 != (undefined *)0x0) {
      thunk_FUN_1000ef60((int)puVar1);
      FUN_1004249a(puVar1);
    }
    *param_1 = 0;
  }
  ExceptionList = local_c;
  return iVar8;
joined_r0x1001299d:
  if (pvVar2 == (void *)0x0) goto LAB_100129bb;
  if (pvVar2 == pvVar6) {
    if (pvVar2 != (void *)0x0) {
      thunk_FUN_100134e0((int)pvVar2);
    }
    goto LAB_100129bb;
  }
  pvVar2 = *(void **)((int)pvVar2 + 0xc0);
  goto joined_r0x1001299d;
LAB_100129bb:
  if ((*(uint *)((int)pvVar6 + 0x98) | 4) != 0) {
    *(int *)((int)this + 0x158) = *(int *)((int)this + 0x158) + -1;
  }
  iVar8 = thunk_FUN_10010060((int)pvVar6);
  if (iVar8 == 0) {
    thunk_FUN_10012b80(pvVar6,1);
  }
LAB_100129e0:
  *(int *)((int)this + 0x15c) = *(int *)((int)this + 0x15c) + -1;
  ppvVar3 = ExceptionList;
  goto LAB_100129e6;
}

