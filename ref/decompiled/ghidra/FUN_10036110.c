/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036110 @ 0x10036110 */
/* Body size: 84 addresses */


int __thiscall FUN_10036110(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x10) == 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      *(undefined4 *)((int)this + 8) = 1;
    }
    else {
      *(int *)((int)this + 0x10) = param_1;
      *(int *)((int)this + 0x14) = param_1 + param_2;
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  else {
    this = (void *)0x0;
  }
  return (int)this;
}

