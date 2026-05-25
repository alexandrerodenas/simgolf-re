/* Ghidra decompiled: sound.dll */
/* Function: FUN_100393d0 @ 0x100393D0 */


undefined4 __thiscall FUN_100393d0(void *this,LPWAVEHDR param_1)

{
  if (param_1 == (LPWAVEHDR)0x0) {
    return 10;
  }
  waveInUnprepareHeader(*(HWAVEIN *)((int)this + 0x44),param_1,0x20);
  param_1->dwFlags = 0;
  if (*(void **)((int)this + 0x6c) != (void *)0x0) {
    thunk_FUN_100316c0(*(void **)((int)this + 0x6c),&param_1->lpData);
  }
  waveInPrepareHeader(*(HWAVEIN *)((int)this + 0x44),param_1,0x20);
  waveInAddBuffer(*(HWAVEIN *)((int)this + 0x44),param_1,0x20);
  return 0;
}

