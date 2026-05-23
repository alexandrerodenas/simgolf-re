/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036410 @ 0x10036410 */
/* Body size: 81 addresses */


void __thiscall FUN_10036410(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 0x10) != 0)) {
    FUN_10018be0(*(void **)((int)this + 0x10),*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}

