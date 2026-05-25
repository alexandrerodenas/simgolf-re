/* Ghidra decompiled: sound.dll */
/* Function: FUN_10021ee0 @ 0x10021EE0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __thiscall FUN_10021ee0(void *this,uint param_1)

{
  ulonglong uVar1;
  
  *(uint *)((int)this + 0x718) = param_1;
  *(double *)((int)this + 0x728) =
       (double)_DAT_1005b69c /
       ((double)*(uint *)((int)this + 0x1bc) * (double)param_1 * (double)_DAT_1005b6a0);
  uVar1 = __ftol();
  *(double *)((int)this + 0x720) = (double)(uVar1 & 0xffffffff);
  return uVar1 & 0xffffffff00000000;
}

