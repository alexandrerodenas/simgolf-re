/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002e460 @ 0x1002E460 */


void __thiscall FUN_1002e460(void *this,uint param_1)

{
  if (param_1 < *(uint *)((int)this + 8)) {
    *(uint *)((int)this + 8) = param_1;
  }
  *(uint *)((int)this + 0xc) = param_1;
  return;
}

