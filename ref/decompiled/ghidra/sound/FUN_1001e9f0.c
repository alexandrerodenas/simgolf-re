/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e9f0 @ 0x1001E9F0 */
/* Body size: 49 addresses */


undefined4 __thiscall FUN_1001e9f0(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x40) + param_1;
  if (*(uint *)((int)this + 0x44) < uVar1) {
    return 0x22;
  }
  if (uVar1 == *(uint *)((int)this + 0x44)) {
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
  }
  *(uint *)((int)this + 0x40) = uVar1;
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + param_1;
  return 0;
}

