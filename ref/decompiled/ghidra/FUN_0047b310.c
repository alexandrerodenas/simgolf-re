/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047b310 @ 0x0047B310 */
/* Body size: 261 addresses */


void __fastcall FUN_0047b310(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  if ((*(byte *)(param_1 + 0xa0) & 2) == 0) {
    if (DAT_0083ad50 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*DAT_0083ad50 + 0xa8))();
    }
    local_8 = ((*(int *)(param_1 + 0x1ac) - *(int *)(param_1 + 0x1b4)) + iVar2) / 2;
    iVar2 = 0;
    if (DAT_0083ad50 != (int *)0x0) {
      iVar2 = (**(code **)(*DAT_0083ad50 + 0xac))();
    }
    iVar1 = *(int *)(param_1 + 0x1b0);
    iVar3 = *(int *)(param_1 + 0x1b8);
  }
  else {
    if (DAT_0083ad50 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*DAT_0083ad50 + 0xa8))();
    }
    local_8 = ((*(int *)(param_1 + 0x1bc) - *(int *)(param_1 + 0x1c4)) + iVar2) / 2;
    if (DAT_0083ad50 == (int *)0x0) {
      iVar1 = *(int *)(param_1 + 0x1c0);
      iVar3 = *(int *)(param_1 + 0x1c8);
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*DAT_0083ad50 + 0xac))();
      iVar3 = *(int *)(param_1 + 0x1c8);
      iVar1 = *(int *)(param_1 + 0x1c0);
    }
  }
  local_4 = ((iVar1 - iVar3) + iVar2) / 2;
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_0047b200(&local_8,&local_4);
  }
  FUN_0047b420(local_8,local_4);
  return;
}

