/* Ghidra decompiled: sound.dll */
/* Function: FUN_10030fb0 @ 0x10030FB0 */


undefined4 __thiscall FUN_10030fb0(void *this,int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 10;
  }
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0xbc) = DAT_10063ea0;
    *(undefined4 *)((int)this + 0xc0) = DAT_10063ea4;
    *(undefined4 *)((int)this + 0xc4) = DAT_10063ea8;
    *(undefined4 *)((int)this + 200) = DAT_10063eac;
    *(undefined2 *)((int)this + 0xcc) = DAT_10063eb0;
  }
  else {
    *(undefined4 *)((int)this + 0xbc) = *param_2;
    *(undefined4 *)((int)this + 0xc0) = param_2[1];
    *(undefined4 *)((int)this + 0xc4) = param_2[2];
    *(undefined4 *)((int)this + 200) = param_2[3];
    *(undefined2 *)((int)this + 0xcc) = *(undefined2 *)(param_2 + 4);
  }
  *(int *)((int)this + 0xb4) = param_1;
  uVar1 = FUN_1003aea0();
  *(undefined4 *)((int)this + 0xd4) = uVar1;
  return 0;
}

