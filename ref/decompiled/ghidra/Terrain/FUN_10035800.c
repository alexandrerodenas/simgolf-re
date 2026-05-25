/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035800 @ 0x10035800 */


int __thiscall FUN_10035800(void *this,char param_1)

{
  uint uVar1;
  undefined4 local_c;
  
  uVar1 = FUN_100344e0((int)this);
  if (*(uint *)((int)this + 0x24) < uVar1) {
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
    **(char **)((int)this + 0x28) = param_1;
    local_c = (int)param_1;
  }
  else {
    local_c = (**(code **)(*(int *)this + 0x24))((int)param_1);
  }
  return local_c;
}

