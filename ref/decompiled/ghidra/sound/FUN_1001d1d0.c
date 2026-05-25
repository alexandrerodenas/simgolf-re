/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001d1d0 @ 0x1001D1D0 */


void __thiscall FUN_1001d1d0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = param_1;
  }
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    **(undefined4 **)this = puVar1;
    puVar1[1] = *(undefined4 *)this;
    *(undefined4 **)this = puVar1;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    return;
  }
  *(undefined4 **)this = puVar1;
  *(undefined4 **)((int)this + 4) = puVar1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}

