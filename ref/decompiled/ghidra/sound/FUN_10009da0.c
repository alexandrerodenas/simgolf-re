/* Ghidra decompiled: sound.dll */
/* Function: FUN_10009da0 @ 0x10009DA0 */
/* Body size: 72 addresses */


undefined4 __thiscall FUN_10009da0(void *this,undefined4 param_1,byte param_2)

{
  MMRESULT MVar1;
  
  if ((param_2 & 2) != 0) {
    MVar1 = midiOutOpen((LPHMIDIOUT)((int)this + 0x3c),0xffffffff,0,0,0);
    if (MVar1 != 0) {
      return 7;
    }
  }
  if (DAT_100b49ec != (void *)0x0) {
    *(void **)((int)this + 0x2c) = DAT_100b49ec;
    thunk_FUN_100088e0(DAT_100b49ec,this);
  }
  return 0;
}

