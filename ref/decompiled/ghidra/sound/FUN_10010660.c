/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010660 @ 0x10010660 */
/* Body size: 62 addresses */


undefined4 __thiscall FUN_10010660(void *this,uint *param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x5c) == 0) {
    return 1;
  }
  if ((*(byte *)(*(int *)((int)this + 0x5c) + 0x10) & 0x20) != 0) {
    uVar1 = thunk_FUN_10010be0(this,param_1,param_2,param_3);
    return uVar1;
  }
  uVar1 = thunk_FUN_100106b0((int)this);
  return uVar1;
}

