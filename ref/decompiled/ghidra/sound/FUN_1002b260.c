/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b260 @ 0x1002B260 */
/* Body size: 31 addresses */


void __thiscall FUN_1002b260(void *this,uint param_1)

{
  *(uint *)((int)this + 4) = param_1 & 0x7f;
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 0x40))(param_1 & 0x7f);
  }
  return;
}

