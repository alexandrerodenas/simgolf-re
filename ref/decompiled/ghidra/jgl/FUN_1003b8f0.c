/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003b8f0 @ 0x1003B8F0 */
/* Body size: 77 addresses */


undefined4 * __thiscall FUN_1003b8f0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100535c4;
  if (*(LPVOID *)((int)this + 4) != (LPVOID)0x0) {
    FUN_10046490(*(LPVOID *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  if ((param_1 & 1) != 0) {
    FUN_10046490(this);
  }
  return this;
}

