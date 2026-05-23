/* Ghidra decompiled: sound.dll */
/* Function: FUN_10031450 @ 0x10031450 */
/* Body size: 36 addresses */


undefined4 __thiscall FUN_10031450(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0x6c) = param_1;
  if (DAT_100b4a24 == 0) {
    return 0x13;
  }
  uVar1 = thunk_FUN_1000ed70(this);
  return uVar1;
}

