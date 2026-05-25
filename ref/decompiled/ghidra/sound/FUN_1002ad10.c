/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ad10 @ 0x1002AD10 */


void __thiscall FUN_1002ad10(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 1:
    *(undefined4 *)((int)this + 0x54) = param_1;
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 4;
    return;
  case 2:
    *(undefined4 *)((int)this + 0x54) = param_1;
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 8;
    return;
  case 4:
    *(undefined4 *)((int)this + 0x54) = param_1;
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 0x10;
    return;
  case 5:
    *(undefined4 *)((int)this + 0x54) = param_1;
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 0x28;
    return;
  case 6:
    *(undefined4 *)((int)this + 0x54) = param_1;
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 0x100;
    return;
  case 7:
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 0x80;
  }
  *(undefined4 *)((int)this + 0x54) = param_1;
  return;
}

