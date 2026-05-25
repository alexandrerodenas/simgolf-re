/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037b80 @ 0x10037B80 */


undefined4 __thiscall FUN_10037b80(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)((int)this + 0x5c) & 0x20) != 0) && (*(void **)((int)this + 0x54) != (void *)0x0))
  {
    uVar1 = thunk_FUN_100110c0(*(void **)((int)this + 0x54),param_1);
    return uVar1;
  }
  return 0xb;
}

