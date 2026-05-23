/* Ghidra decompiled: sound.dll */
/* Function: FUN_100088e0 @ 0x100088E0 */
/* Body size: 42 addresses */


void __thiscall FUN_100088e0(void *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  thunk_FUN_10009040((void *)((int)this + 0x4c),param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  return;
}

