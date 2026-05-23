/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036200 @ 0x10036200 */
/* Body size: 313 addresses */


int __thiscall FUN_10036200(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint local_14;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 8) == 0) {
    while ((param_2 != 0 && (iVar2 = (**(code **)(*(int *)this + 0x20))(), iVar2 != -1))) {
      iVar2 = FUN_100347c0((int)this);
      iVar3 = FUN_100344e0((int)this);
      if (iVar2 - iVar3 < (int)param_2) {
        iVar2 = FUN_100347c0((int)this);
        iVar3 = FUN_100344e0((int)this);
        local_14 = iVar2 - iVar3;
      }
      else {
        local_14 = param_2;
      }
      if (0 < (int)local_14) {
        uVar5 = local_14;
        puVar4 = (undefined4 *)FUN_100344e0((int)this);
        FUN_1001f510(param_1,puVar4,uVar5);
        param_1 = (undefined4 *)((int)param_1 + local_14);
        *(uint *)((int)this + 0x28) = *(int *)((int)this + 0x28) + local_14;
        local_8 = local_8 + local_14;
        param_2 = param_2 - local_14;
      }
    }
  }
  else {
    if (*(int *)((int)this + 0xc) == -1) {
      uVar1 = (**(code **)(*(int *)this + 0x20))();
      *(undefined4 *)((int)this + 0xc) = uVar1;
    }
    while ((param_2 != 0 && (*(int *)((int)this + 0xc) != -1))) {
      *(undefined1 *)param_1 = *(undefined1 *)((int)this + 0xc);
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_8 = local_8 + 1;
      uVar1 = (**(code **)(*(int *)this + 0x20))();
      *(undefined4 *)((int)this + 0xc) = uVar1;
      param_2 = param_2 - 1;
    }
  }
  return local_8;
}

