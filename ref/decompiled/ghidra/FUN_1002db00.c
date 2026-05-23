/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002db00 @ 0x1002DB00 */
/* Body size: 28 addresses */


uint __thiscall FUN_1002db00(void *this,undefined4 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xf8))(param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

