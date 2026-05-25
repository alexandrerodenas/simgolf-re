/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e9a0 @ 0x1001E9A0 */


void __thiscall FUN_1001e9a0(void *this,int param_1)

{
  if ((*(undefined **)((int)this + 0x3c) != (undefined *)0x0) &&
     ((*(byte *)((int)this + 0x34) & 4) != 0)) {
    FUN_1004249a(*(undefined **)((int)this + 0x3c));
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  *(int *)((int)this + 0x3c) = param_1;
  *(int *)((int)this + 0x2c) = param_1;
  if (param_1 != 0) {
    thunk_FUN_1001ef80((int)this);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  return;
}

