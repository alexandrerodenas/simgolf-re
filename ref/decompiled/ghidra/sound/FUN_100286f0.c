/* Ghidra decompiled: sound.dll */
/* Function: FUN_100286f0 @ 0x100286F0 */
/* Body size: 64 addresses */


undefined4 __thiscall FUN_100286f0(void *this,HWND param_1)

{
  LONG LVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    LVar1 = SetWindowLongA(param_1,-4,0x100025ef);
    *(LONG *)((int)this + 0xc) = LVar1;
    if (LVar1 == 0) {
      return 0x18;
    }
    *(HWND *)((int)this + 8) = param_1;
    *(byte *)((int)this + 4) = *(byte *)((int)this + 4) | 4;
  }
  return 0;
}

