/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100347e0 @ 0x100347E0 */
/* Body size: 37 addresses */


void __thiscall FUN_100347e0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x20) != 0) {
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + param_1;
  }
  return;
}

