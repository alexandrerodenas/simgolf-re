/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e1c0 @ 0x1001E1C0 */


undefined4 __fastcall FUN_1001e1c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x19c);
  *(int *)(param_1 + 0x1a4) = iVar1;
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) {
    while( true ) {
      thunk_FUN_1001e8e0(iVar1);
      if (*(int *)(param_1 + 0x1a4) == 0) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1a4) + 4);
      *(int *)(param_1 + 0x1a4) = iVar1;
      if ((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 8), iVar1 == 0)) break;
    }
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffff63;
  return 0;
}

