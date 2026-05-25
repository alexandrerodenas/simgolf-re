/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000c230 @ 0x1000C230 */


void __fastcall FUN_1000c230(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  
  thunk_FUN_1000cd80(param_1);
  if (DAT_100b49f0 != 0) {
    for (iVar1 = *(int *)(DAT_100b49f0 + 0x168); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      this = *(void **)(iVar1 + 8);
      if ((*(int *)((int)this + 0x44) != 0) &&
         (iVar2 = *(int *)((int)this + 0x44) + *(int *)(param_1 + 0x1b4),
         *(int *)((int)this + 0x44) = iVar2, -1 < iVar2)) {
        *(undefined4 *)((int)this + 0x44) = 0;
        thunk_FUN_10010db0(this,0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (DAT_100b49f4 != (void *)0x0) {
    if ((*(byte *)(DAT_100b49f0 + 0x6c) & 0x10) == 0) {
      thunk_FUN_10007010(DAT_100b49f4,DAT_100b49f8);
      return;
    }
    thunk_FUN_100075e0(DAT_100b49f4,DAT_100b49fc,DAT_100b4a00);
  }
  return;
}

