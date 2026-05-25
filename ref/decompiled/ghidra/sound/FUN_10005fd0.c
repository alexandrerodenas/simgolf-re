/* Ghidra decompiled: sound.dll */
/* Function: FUN_10005fd0 @ 0x10005FD0 */


void __thiscall FUN_10005fd0(void *this,undefined4 param_1)

{
  if ((*(byte *)((int)this + 0x58) & 2) != 0) {
    *(undefined4 *)((int)this + 0x740) = param_1;
  }
  return;
}

