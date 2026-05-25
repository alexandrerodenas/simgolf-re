/* Ghidra decompiled: sound.dll */
/* Function: FUN_10035f80 @ 0x10035F80 */


undefined4 __fastcall FUN_10035f80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (iVar1 = thunk_FUN_10010e30(*(int *)(param_1 + 0x54)), iVar1 == 0)) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x10;
    return 0;
  }
  if ((*(byte *)(param_1 + 0x58) & 8) == 0) {
    return 0;
  }
  uVar2 = thunk_FUN_10035fc0(param_1);
  return uVar2;
}

