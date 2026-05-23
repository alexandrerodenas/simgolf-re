/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002e430 @ 0x1002E430 */
/* Body size: 20 addresses */


void __thiscall FUN_1002e430(void *this,uint param_1)

{
  if (*(uint *)((int)this + 0xc) < param_1) {
    *(uint *)((int)this + 0xc) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return;
}

