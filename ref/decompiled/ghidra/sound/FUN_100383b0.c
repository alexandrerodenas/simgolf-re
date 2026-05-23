/* Ghidra decompiled: sound.dll */
/* Function: FUN_100383b0 @ 0x100383B0 */
/* Body size: 58 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100383b0(void *this,uint param_1)

{
  *(double *)((int)this + 0x58) = (double)param_1 * _DAT_1005b488;
  if (param_1 != 0) {
    param_1 = param_1 + 1;
  }
  *(uint *)((int)this + 0x50) = param_1 << 9;
  thunk_FUN_10037f30(this,*(int *)((int)this + 0x48));
  return;
}

