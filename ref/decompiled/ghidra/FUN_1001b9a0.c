/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001b9a0 @ 0x1001B9A0 */
/* Body size: 43 addresses */


undefined4 __thiscall FUN_1001b9a0(void *this,undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)**(undefined4 **)this)(param_1);
  if (cVar1 == '\0') {
    return 0x21;
  }
  thunk_FUN_1001d150((void *)((int)this + 0xc),param_1);
  return 0;
}

