/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100348a0 @ 0x100348A0 */


void * __thiscall FUN_100348a0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  uint local_c;
  undefined1 local_8;
  
  local_c = 0;
  iVar1 = FUN_10035440(this,1);
  if (iVar1 != 0) {
    if (param_2 != 0) {
      for (; local_c < param_2 - 1U; local_c = local_c + 1) {
        iVar1 = FUN_10036740(*(int **)((int)this + *(int *)(*(int *)this + 4) + 4));
        if (iVar1 == -1) {
          *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
               *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 1;
          if (local_c == 0) {
            *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
                 *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2;
          }
          break;
        }
        if (iVar1 == param_3) {
          if (*(int *)((int)this + 4) != 0) {
            *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
            FUN_100366c0(*(int **)((int)this + *(int *)(*(int *)this + 4) + 4));
          }
          break;
        }
        if (param_1 != 0) {
          local_8 = (undefined1)iVar1;
          *(undefined1 *)(param_1 + local_c) = local_8;
        }
        FUN_100366c0(*(int **)((int)this + *(int *)(*(int *)this + 4) + 4));
      }
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + local_c;
    }
    FUN_10034a00(this);
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined1 *)(param_1 + local_c) = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}

