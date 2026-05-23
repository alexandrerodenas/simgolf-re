/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024360 @ 0x10024360 */
/* Body size: 135 addresses */


void __thiscall FUN_10024360(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_1;
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
      *(undefined4 *)((int)this + 8) = param_1[2];
      *(undefined4 *)((int)this + 0xc) = param_1[3];
    }
    if ((*(byte *)(param_1 + 1) & 2) != 0) {
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
      *(undefined4 *)((int)this + 0x10) = param_1[4];
      *(undefined4 *)((int)this + 0x14) = param_1[5];
    }
    if ((*(byte *)(param_1 + 1) & 8) == 0) {
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff7;
    }
    else {
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 8;
    }
    if (((uint)~param_1[1] >> 4 & 1) == 0) {
      uVar1 = *(uint *)((int)this + 4) | 0x10;
    }
    else {
      uVar1 = *(uint *)((int)this + 4) & 0xffffffef;
    }
    *(uint *)((int)this + 4) = uVar1;
    if ((char *)param_1[7] != (char *)0x0) {
      thunk_FUN_1001ced0(this,(char *)param_1[7]);
    }
  }
  return;
}

