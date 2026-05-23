/* Ghidra decompiled: sound.dll */
/* Function: FUN_10021a90 @ 0x10021A90 */
/* Body size: 272 addresses */


undefined4 __thiscall FUN_10021a90(void *this,byte *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)((int)this + param_2 * 0x4c + 0x25c);
  uVar5 = (uint)*param_1;
  iVar2 = thunk_FUN_1001bb80((int)param_3);
  uVar3 = uVar5;
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*param_3 + 4))(uVar5);
  }
  if (*(HMIDIOUT *)(DAT_100b4a1c + 0x3c) != (HMIDIOUT)0x0) {
    midiOutShortMsg(*(HMIDIOUT *)(DAT_100b4a1c + 0x3c),
                    ((uint)param_1[1] << 8 | uVar3) << 8 | param_2 | 0x80);
    param_3[uVar3 + 0x96] = 0;
    return 2;
  }
  iVar4 = *(int *)((int)this + iVar4 * 4 + 0x744);
  piVar1 = (int *)param_3[uVar5 + 0x16];
  if ((piVar1 != (int *)0x0) && ((*(byte *)(iVar4 + 4) & 8) != 0)) {
    param_3[uVar5 + 0x16] = 0;
    piVar1[0x50f] = 0;
    if ((*(byte *)(piVar1 + 0x32) & 1) == 0) {
      iVar4 = *(int *)(iVar4 + 0x30);
      if (iVar4 != 0) {
        thunk_FUN_10034db0(piVar1 + 0x1c,*(uint *)(iVar4 + 0x218));
        return 2;
      }
      (**(code **)(*piVar1 + 0x28))();
    }
    else {
      iVar4 = thunk_FUN_10038330(piVar1 + 0x1c,(uint)*param_1);
      if (iVar4 != 0) {
        thunk_FUN_100381f0(iVar4);
        return 2;
      }
    }
  }
  return 2;
}

