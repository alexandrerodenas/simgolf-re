/* Ghidra decompiled: sound.dll */
/* Function: FUN_10028fb0 @ 0x10028FB0 */


void * __thiscall FUN_10028fb0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_1005b8b0;
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  }
  if ((param_1 & 1) != 0) {
    FUN_1004249a(this);
  }
  return this;
}

