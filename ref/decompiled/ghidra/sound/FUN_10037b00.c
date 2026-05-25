/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037b00 @ 0x10037B00 */


byte __thiscall FUN_10037b00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  
  if (((*(byte *)((int)this + 0x5c) & 0x20) != 0) && (*(void **)((int)this + 0x54) != (void *)0x0))
  {
    bVar1 = thunk_FUN_10011000(*(void **)((int)this + 0x54),param_1,param_2,param_3);
    return bVar1;
  }
  return 0xb;
}

