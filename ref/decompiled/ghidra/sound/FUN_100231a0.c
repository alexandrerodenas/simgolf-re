/* Ghidra decompiled: sound.dll */
/* Function: FUN_100231a0 @ 0x100231A0 */


undefined4 __thiscall FUN_100231a0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x738) != param_1) {
    *(int *)((int)this + 0x738) = param_1;
    if (DAT_100b4a1c != (void *)0x0) {
      thunk_FUN_1000a240(DAT_100b4a1c,this,7,0,0);
    }
  }
  return 0;
}

