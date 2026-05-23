/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036170 @ 0x10036170 */
/* Body size: 142 addresses */


int __thiscall FUN_10036170(void *this,undefined1 *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  do {
    if (param_2 == 0) {
      return local_8;
    }
    if ((*(int *)((int)this + 8) == 0) &&
       (*(uint *)((int)this + 0x1c) < *(uint *)((int)this + 0x20))) {
      **(undefined1 **)((int)this + 0x1c) = *param_1;
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 0x1c))(*param_1);
      if (iVar1 == -1) {
        return local_8;
      }
    }
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

