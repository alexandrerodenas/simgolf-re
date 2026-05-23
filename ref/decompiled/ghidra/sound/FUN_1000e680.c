/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e680 @ 0x1000E680 */
/* Body size: 86 addresses */


void __thiscall FUN_1000e680(void *this,undefined4 param_1)

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
  if (*(int *)((int)this + 4) != 0) {
    *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar1;
    *puVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 **)((int)this + 4) = puVar1;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    return;
  }
  *(undefined4 **)this = puVar1;
  *(undefined4 **)((int)this + 4) = puVar1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}

