/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487180 @ 0x00487180 */


undefined4 __fastcall FUN_00487180(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  _BinkDoFrame_4(*(undefined4 *)(param_1 + 4));
  iVar1 = _BinkBufferLock_4(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    _BinkCopyToBuffer_28
              (*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar1 + 0x14),
               *(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 4),0,0,
               *(undefined4 *)(iVar1 + 0x10));
    _BinkBufferUnlock_4(*(undefined4 *)(param_1 + 8));
  }
  uVar2 = _BinkGetRects_8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 8) + 0x10)
                         );
  _BinkBufferBlit_12(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 4) + 0x34,uVar2);
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0xc) == *(int *)(iVar1 + 8)) {
    return 0;
  }
  _BinkNextFrame_4(iVar1);
  return 1;
}

