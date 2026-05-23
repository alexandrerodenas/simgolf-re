/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039e70 @ 0x10039E70 */
/* Body size: 141 addresses */


undefined4 __thiscall FUN_10039e70(void *this,int param_1)

{
  int iVar1;
  
  if ((*(uint *)((int)this + 200) & 1) == 0) {
    return 0xb;
  }
  if ((*(uint *)((int)this + 200) & 2) == 0) {
    thunk_FUN_10033ba0((void *)((int)this + 0x70));
    if ((*(byte *)((int)this + 0x58) & 2) == 0) {
      return 0x14;
    }
    iVar1 = (**(code **)(*(int *)this + 0x10))(*(undefined4 *)((int)this + 0x50));
    if (iVar1 != 0) {
      return 8;
    }
  }
  if (DAT_100b49ec != (UINT *)0x0) {
    thunk_FUN_10008ce0(DAT_100b49ec);
  }
  thunk_FUN_100348f0((void *)((int)this + 0x70),param_1);
  if ((*(byte *)((int)this + 200) & 0x40) == 0) {
    *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 0x40;
    (**(code **)(*(int *)this + 0x7c))();
  }
  return 0;
}

