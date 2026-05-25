/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020290 @ 0x10020290 */


int __thiscall FUN_10020290(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *local_4;
  
  local_4 = this;
  if ((*(byte *)((int)this + 0x214) & 0x40) != 0) {
    thunk_FUN_10028810(0x100b49b8);
  }
  iVar1 = thunk_FUN_1001d810((void *)((int)this + 0x60),param_1);
  thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&local_4,1);
  if (iVar1 == 0) {
    uVar3 = 0;
    iVar1 = (**(code **)(*(int *)this + 0xb4))();
    if (iVar1 != 0) {
      do {
        thunk_FUN_100205f0(this,uVar3);
        uVar3 = uVar3 + 1;
        uVar2 = (**(code **)(*(int *)this + 0xb4))();
      } while (uVar3 < uVar2);
    }
    *(uint *)((int)this + 0xac) = *(uint *)((int)this + 0xac) | 0x400;
    *(undefined4 *)((int)this + 0x720) = 0;
    *(undefined4 *)((int)this + 0x71c) = 0;
    *(undefined4 *)((int)this + 0x724) = 0;
    return 0;
  }
  return iVar1;
}

