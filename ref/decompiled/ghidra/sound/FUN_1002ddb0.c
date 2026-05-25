/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ddb0 @ 0x1002DDB0 */


undefined4 __thiscall FUN_1002ddb0(void *this,undefined4 param_1)

{
  *(byte *)((int)this + 0x58) =
       (*(byte *)((int)this + 0x58) ^ (byte)param_1) & 1 ^ *(byte *)((int)this + 0x58);
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
    thunk_FUN_1002ddb0(*(void **)((int)this + 0x40),param_1);
  }
  return 0;
}

