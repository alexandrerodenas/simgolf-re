/* Ghidra decompiled: sound.dll */
/* Function: FUN_10042013 @ 0x10042013 */
/* Body size: 59 addresses */


void __thiscall FUN_10042013(void *this,int param_1)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(int *)((int)this + 0x28) = (int)*(char *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(int *)((int)this + 0x30) = (int)*(char *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)((int)this + 8) = uVar1;
  if (*(int *)((int)this + 4) == 0) {
    *(uint *)((int)this + 8) = uVar1 | 4;
  }
  return;
}

