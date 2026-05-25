/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002c040 @ 0x1002C040 */


undefined4 __thiscall FUN_1002c040(void *this,uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 2) != 0) {
    *(undefined4 *)((int)this + 0x30) = 1;
  }
  if ((param_1 & 1) != 0) {
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 1;
  }
  uVar1 = param_1 & 4;
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 2;
  }
  if ((param_1 & 0x40) != 0) {
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 8;
  }
  if ((param_1 & 0x80) != 0) {
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 0x10;
  }
  if ((uVar1 == 0) && ((param_1 & 0x10) != 0)) {
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 4;
  }
  if ((uVar1 == 0) && ((param_1 & 0x100) != 0)) {
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 0x20;
  }
  if ((param_1 & 0x400) != 0) {
    *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 0x40;
  }
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 0x6c))(param_1);
  }
  return 0;
}

