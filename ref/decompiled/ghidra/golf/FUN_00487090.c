/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487090 @ 0x00487090 */
/* Body size: 228 addresses */


undefined4 __thiscall FUN_00487090(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int in_stack_00000010;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 7;
  }
  if (in_stack_00000010 != 0) {
    _BinkSetSoundSystem_8(_BinkOpenDirectSound_4_exref,in_stack_00000010);
  }
  _BinkSetIOSize_4(0x9c4000);
  puVar2 = (undefined4 *)_BinkOpen_8(unaff_retaddr,0x1000000);
  *(undefined4 **)(param_1 + 4) = puVar2;
  if ((puVar2 != (undefined4 *)0x0) && (puVar2[7] == 0)) {
    iVar3 = _BinkBufferOpen_16(*(undefined4 *)(param_1 + 0xc),*puVar2,puVar2[1]);
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = unaff_retaddr;
      _BinkBufferSetOffset_12(iVar3,0,unaff_retaddr);
      DAT_0083ab9c = '\x01';
      ShowCursor(0);
      do {
        while (iVar3 = _BinkWait_4(*(undefined4 *)(param_1 + 4)), iVar3 != 0) {
          FUN_00483c90();
          FUN_00483cf0();
        }
      } while ((DAT_0083ab9c != '\0') && (cVar1 = FUN_00487180(), cVar1 != '\0'));
      ShowCursor(1);
      return 0;
    }
  }
  return 1;
}

