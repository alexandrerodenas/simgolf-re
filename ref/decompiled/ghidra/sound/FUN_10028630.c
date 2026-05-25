/* Ghidra decompiled: sound.dll */
/* Function: FUN_10028630 @ 0x10028630 */


void * __thiscall FUN_10028630(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_1005b8ac;
  if ((*(HWND *)((int)this + 8) != (HWND)0x0) && ((*(byte *)((int)this + 4) & 4) != 0)) {
    SetWindowLongA(*(HWND *)((int)this + 8),-4,*(LONG *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(byte *)((int)this + 4) = *(byte *)((int)this + 4) & 0xfb;
  }
  if ((param_1 & 1) != 0) {
    FUN_1004249a(this);
  }
  return this;
}

