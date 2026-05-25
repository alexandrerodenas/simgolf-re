/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001540 @ 0x10001540 */


void * __thiscall FUN_10001540(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined ***)this = &PTR_FUN_10053200;
  if ((param_1 & 1) != 0) {
    FUN_10046490(this);
  }
  return this;
}

