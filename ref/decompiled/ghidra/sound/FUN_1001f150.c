/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001f150 @ 0x1001F150 */


void __fastcall FUN_1001f150(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x19c);
  *(int *)(param_1 + 0x1a4) = iVar1;
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) {
    while( true ) {
      *(byte *)(iVar1 + 0x38) = *(byte *)(iVar1 + 0x38) & 0xf7;
      if (*(int *)(param_1 + 0x1a4) == 0) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1a4) + 4);
      *(int *)(param_1 + 0x1a4) = iVar1;
      if (iVar1 == 0) {
        return;
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return;
      }
    }
  }
  return;
}

