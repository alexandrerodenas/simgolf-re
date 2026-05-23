/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024280 @ 0x10024280 */
/* Body size: 104 addresses */


undefined4 __thiscall FUN_10024280(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 10;
  }
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  uVar1 = ((int)(param_1[1] << 0x1f) >> 0x1f ^ *(uint *)((int)this + 4)) & 1 ^
          *(uint *)((int)this + 4);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)((int)this + 4) = ((int)(param_1[1] << 0x1e) >> 0x1e ^ uVar1) & 2 ^ uVar1;
  thunk_FUN_1001ced0(this,(char *)param_1[7]);
  return 0xb;
}

