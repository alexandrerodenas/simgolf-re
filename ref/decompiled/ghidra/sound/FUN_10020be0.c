/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020be0 @ 0x10020BE0 */


undefined4 __fastcall FUN_10020be0(int *param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  int *piStack_4;
  
  piStack_4 = param_1;
  if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
    thunk_FUN_1001e230((int)(param_1 + 0x18));
  }
  iVar1 = (**(code **)(*param_1 + 0x5c))();
  if ((iVar1 == 0) && ((*(byte *)(param_1 + 0x2b) & 0x24) == 0)) {
    param_1[0x1d0] = 0;
    thunk_FUN_1001e530((int)(param_1 + 0x18));
    if ((param_1[0x8f] != 0) && (iVar1 = 0, 0 < param_1[0x90])) {
      do {
        thunk_FUN_1001d780(param_1 + 0x18,(int *)&piStack_4,*(uint *)(param_1[0x8e] + iVar1 * 4));
        if (piStack_4 != (int *)0x0) {
          *(byte *)(piStack_4 + 0xe) = *(byte *)(piStack_4 + 0xe) | 4;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[0x90]);
    }
    (**(code **)(*param_1 + 0x48))(1);
    param_1[0x85] = param_1[0x85] | 4;
    uVar4 = 0;
    iVar1 = (**(code **)(*param_1 + 0xb4))();
    if (iVar1 != 0) {
      do {
        thunk_FUN_100205f0(param_1,uVar4);
        uVar4 = uVar4 + 1;
        uVar2 = (**(code **)(*param_1 + 0xb4))();
      } while (uVar4 < uVar2);
    }
    param_1[0x2b] = param_1[0x2b] | 0x400;
    param_1[0x1c8] = 0;
    param_1[0x1c7] = 0;
    param_1[0x1c9] = 0;
    DVar3 = timeGetTime();
    param_1[0x1cd] = DVar3;
    iVar1 = thunk_FUN_1000a240(DAT_100b4a1c,param_1,1,0,0);
    if (iVar1 == 0) {
      param_1[0x2b] = param_1[0x2b] & 0xfffffff7;
    }
    return 0;
  }
  return 0xe;
}

