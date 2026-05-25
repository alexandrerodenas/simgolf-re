/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10007e20 @ 0x10007E20 */


void * __thiscall FUN_10007e20(void *this,undefined4 param_1)

{
  FUN_10001310(this);
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined ***)this = &PTR_FUN_1005341c;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xff;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x38));
  return this;
}

