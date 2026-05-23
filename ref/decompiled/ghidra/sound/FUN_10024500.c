/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024500 @ 0x10024500 */
/* Body size: 135 addresses */


int __thiscall FUN_10024500(void *this,int param_1,uint param_2)

{
  int iVar1;
  void *local_8;
  int local_4;
  
  iVar1 = thunk_FUN_1001d780((void *)((int)this + 0x60),&local_4,*(uint *)((int)this + 0x20c));
  if (iVar1 != 0) {
    local_4 = 0;
  }
  iVar1 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&local_8,param_2);
  if (iVar1 == 0) {
    thunk_FUN_1001e9a0(local_8,param_1);
    *(uint *)((int)local_8 + 0x34) = *(uint *)((int)local_8 + 0x34) & 0xfffffffb;
    if ((local_4 == 0) || (*(uint *)(local_4 + 0x54) < *(uint *)((int)local_8 + 0x54))) {
      *(uint *)((int)this + 0x20c) = param_2;
    }
    thunk_FUN_100205f0(this,param_2);
    iVar1 = 0;
  }
  return iVar1;
}

