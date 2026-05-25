/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100355b0 @ 0x100355B0 */


void * __thiscall FUN_100355b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  undefined1 local_8;
  
  iVar1 = FUN_10035440(this,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)this + *(int *)(*(int *)this + 4) + 0x30);
    *(undefined4 *)((int)this + *(int *)(*(int *)this + 4) + 0x30) = 0;
    if (param_1 == 0) {
      *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
           *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2;
    }
    else {
      for (local_c = 0; local_c < iVar1 - 1U; local_c = local_c + 1) {
        iVar2 = FUN_10036740(*(int **)((int)this + *(int *)(*(int *)this + 4) + 4));
        if (iVar2 == -1) {
          *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
               *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 1;
          if (local_c == 0) {
            *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
                 *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 6;
          }
          break;
        }
        uVar3 = FUN_10037690(iVar2);
        if (uVar3 != 0) break;
        local_8 = (undefined1)iVar2;
        *(undefined1 *)(param_1 + local_c) = local_8;
        FUN_100366c0(*(int **)((int)this + *(int *)(*(int *)this + 4) + 4));
      }
      if (local_c == 0) {
        *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
             *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2;
      }
      else {
        *(undefined1 *)(param_1 + local_c) = 0;
      }
    }
    FUN_10034a00(this);
  }
  return this;
}

