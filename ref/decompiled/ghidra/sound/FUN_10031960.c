/* Ghidra decompiled: sound.dll */
/* Function: FUN_10031960 @ 0x10031960 */


undefined4 __thiscall FUN_10031960(void *this,int param_1)

{
  if (param_1 != *(int *)((int)this + 0x70)) {
    return 0x27;
  }
  DAT_100b4a08 = DAT_100b4a08 + -1;
  mmioClose(*(HMMIO *)(param_1 + 0x44),0);
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + 1;
  FUN_1004249a(*(undefined **)((int)this + 0x70));
  *(undefined4 *)((int)this + 0x70) = 0;
  return 0;
}

