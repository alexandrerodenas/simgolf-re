/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034240 @ 0x10034240 */
/* Body size: 89 addresses */


uint __thiscall FUN_10034240(void *this,uint param_1)

{
  undefined4 local_c;
  
  if (*(uint *)((int)this + 0x1c) < *(uint *)((int)this + 0x20)) {
    **(undefined1 **)((int)this + 0x1c) = (undefined1)param_1;
    local_c = param_1 & 0xff;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  }
  else {
    local_c = (**(code **)(*(int *)this + 0x1c))(param_1);
  }
  return local_c;
}

