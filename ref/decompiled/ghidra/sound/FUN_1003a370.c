/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a370 @ 0x1003A370 */


undefined4 __thiscall FUN_1003a370(void *this,uint param_1)

{
  thunk_FUN_1002c040(this,param_1);
  if ((param_1 & 1) != 0) {
    thunk_FUN_10037920((undefined4 *)((int)this + 0x70));
  }
  if ((param_1 & 0x10) != 0) {
    *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 0x20000000;
  }
  if ((param_1 & 0x20) != 0) {
    *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 0x80000000;
  }
  if ((param_1 & 0x40) != 0) {
    *(uint *)((int)this + 0xcc) = *(uint *)((int)this + 0xcc) | 0x20;
  }
  if ((param_1 & 0x100) != 0) {
    *(uint *)((int)this + 0xcc) = *(uint *)((int)this + 0xcc) | 0x40;
  }
  if ((param_1 & 0x200) != 0) {
    *(uint *)((int)this + 0xcc) = *(uint *)((int)this + 0xcc) | 0x80;
  }
  if ((param_1 & 2) != 0) {
    (**(code **)(*(int *)this + 0x48))(1);
  }
  if ((param_1 & 0x400) != 0) {
    *(uint *)((int)this + 0xcc) = *(uint *)((int)this + 0xcc) | 0x200;
  }
  return 0;
}

