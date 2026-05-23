/* Ghidra decompiled: sound.dll */
/* Function: FUN_10022280 @ 0x10022280 */
/* Body size: 119 addresses */


undefined4 __thiscall FUN_10022280(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 10;
  }
  iVar1 = *(int *)(param_1 + 0x28) * 0x4c;
  *(undefined4 *)((int)this + iVar1 + 0x268) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + iVar1 + 0x26c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + iVar1 + 0x270) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + iVar1 + 0x274) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + iVar1 + 0x278) = *(undefined4 *)(param_1 + 0x14);
  *(undefined2 *)((int)this + iVar1 + 0x27c) = *(undefined2 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + iVar1 + 0x280) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + iVar1 + 0x284) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + iVar1 + 0x288) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + iVar1 + 0x28c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + iVar1 + 0x290) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + iVar1 + 0x294) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + iVar1 + 0x298) = *(undefined4 *)(param_1 + 0x34);
  return 0;
}

