/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038ae0 @ 0x10038AE0 */


void * __thiscall FUN_10038ae0(void *this,byte param_1)

{
  if (*(undefined **)this != (undefined *)0x0) {
    FUN_1004249a(*(undefined **)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    FUN_1004249a(this);
  }
  return this;
}

