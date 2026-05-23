/* Ghidra decompiled: sound.dll */
/* Function: FUN_100382c0 @ 0x100382C0 */
/* Body size: 70 addresses */


int __thiscall FUN_100382c0(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x58) >> 0xc;
  uVar2 = uVar1 & 0xffff;
  *param_1 = 0;
  while ((uVar1 & 1) != 0) {
    *param_1 = *param_1 + 1;
    uVar2 = uVar2 >> 1;
    uVar1 = uVar2;
  }
  if (0xf < *param_1) {
    return 0;
  }
  return *param_1 * 0x110 + 0x238 + (int)this;
}

