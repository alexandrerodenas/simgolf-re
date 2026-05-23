/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037b40 @ 0x10037B40 */
/* Body size: 34 addresses */


undefined4 __thiscall FUN_10037b40(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)((int)this + 0x5c) & 0x20) != 0) && (*(void **)((int)this + 0x54) != (void *)0x0))
  {
    uVar1 = thunk_FUN_10011070(*(void **)((int)this + 0x54),param_1);
    return uVar1;
  }
  return 0xb;
}

