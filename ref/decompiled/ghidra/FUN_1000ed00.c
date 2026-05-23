/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000ed00 @ 0x1000ED00 */
/* Body size: 18 addresses */


void __thiscall FUN_1000ed00(void *this,int param_1)

{
  *(int *)((int)this + 0x3c) = param_1;
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + param_1;
  return;
}

