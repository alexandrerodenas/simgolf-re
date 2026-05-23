/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000c3d0 @ 0x1000C3D0 */
/* Body size: 52 addresses */


undefined4 __thiscall FUN_1000c3d0(void *this,undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x41dc) + 1U & 0xfff;
  if (uVar1 == *(uint *)((int)this + 0x41d8)) {
    return 0x22;
  }
  *(undefined4 *)((int)this + uVar1 * 4 + 0x1d8) = param_1;
  *(uint *)((int)this + 0x41dc) = uVar1;
  return 0;
}

